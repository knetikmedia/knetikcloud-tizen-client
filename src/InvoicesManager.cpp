#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "InvoicesManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


InvoicesManager::InvoicesManager()
{

}

InvoicesManager::~InvoicesManager()
{

}

static gboolean __InvoicesManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __InvoicesManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__InvoicesManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool createInvoiceProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::list<InvoiceResource>, Error, void* )
	= reinterpret_cast<void(*)(std::list<InvoiceResource>, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	std::list<InvoiceResource> out;
	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));



		pJson = json_from_string(data, NULL);
		JsonArray * jsonarray = json_node_get_array (pJson);
		guint length = json_array_get_length (jsonarray);
		for(guint i = 0; i < length; i++){
			JsonNode* myJson = json_array_get_element (jsonarray, i);
			char * singlenodestr = json_to_string(myJson, false);
			InvoiceResource singlemodel;
			singlemodel.fromJson(singlenodestr);
			out.push_front(singlemodel);
			g_free(static_cast<gpointer>(singlenodestr));
			json_node_free(myJson);
		}
		json_array_unref (jsonarray);
		json_node_free(pJson);


	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unkown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool createInvoiceHelper(char * accessToken,
	InvoiceCreateRequest req, 
	void(* handler)(std::list<InvoiceResource>, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	if (isprimitive("InvoiceCreateRequest")) {
		node = converttoJson(&req, "InvoiceCreateRequest", "");
	}
	
	char *jsonStr =  req.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/invoices");
	int pos;


	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("POST");

	if(strcmp("PUT", "POST") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(InvoicesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = createInvoiceProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (InvoicesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), createInvoiceProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __InvoicesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool InvoicesManager::createInvoiceAsync(char * accessToken,
	InvoiceCreateRequest req, 
	void(* handler)(std::list<InvoiceResource>, Error, void* )
	, void* userData)
{
	return createInvoiceHelper(accessToken,
	req, 
	handler, userData, true);
}

bool InvoicesManager::createInvoiceSync(char * accessToken,
	InvoiceCreateRequest req, 
	void(* handler)(std::list<InvoiceResource>, Error, void* )
	, void* userData)
{
	return createInvoiceHelper(accessToken,
	req, 
	handler, userData, false);
}

static bool getFulFillmentStatusesProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::list<std::string>, Error, void* )
	= reinterpret_cast<void(*)(std::list<std::string>, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	std::list<std::string> out;
	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));



		pJson = json_from_string(data, NULL);
		JsonArray * jsonarray = json_node_get_array (pJson);
		guint length = json_array_get_length (jsonarray);
		for(guint i = 0; i < length; i++){
			JsonNode* myJson = json_array_get_element (jsonarray, i);
			char * singlenodestr = json_to_string(myJson, false);
			std::string singlemodel;
			singlemodel.fromJson(singlenodestr);
			out.push_front(singlemodel);
			g_free(static_cast<gpointer>(singlenodestr));
			json_node_free(myJson);
		}
		json_array_unref (jsonarray);
		json_node_free(pJson);


	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unkown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool getFulFillmentStatusesHelper(char * accessToken,
	
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/invoices/fulfillment-statuses");
	int pos;


	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("GET");

	if(strcmp("PUT", "GET") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(InvoicesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getFulFillmentStatusesProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (InvoicesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getFulFillmentStatusesProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __InvoicesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool InvoicesManager::getFulFillmentStatusesAsync(char * accessToken,
	
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData)
{
	return getFulFillmentStatusesHelper(accessToken,
	
	handler, userData, true);
}

bool InvoicesManager::getFulFillmentStatusesSync(char * accessToken,
	
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData)
{
	return getFulFillmentStatusesHelper(accessToken,
	
	handler, userData, false);
}

static bool getInvoiceProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(InvoiceResource, Error, void* )
	= reinterpret_cast<void(*)(InvoiceResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	InvoiceResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("InvoiceResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "InvoiceResource", "InvoiceResource");
			json_node_free(pJson);

			if ("InvoiceResource" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unkown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool getInvoiceHelper(char * accessToken,
	int id, 
	void(* handler)(InvoiceResource, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/invoices/{id}");
	int pos;

	string s_id("{");
	s_id.append("id");
	s_id.append("}");
	pos = url.find(s_id);
	url.erase(pos, s_id.length());
	url.insert(pos, stringify(&id, "int"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("GET");

	if(strcmp("PUT", "GET") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(InvoicesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getInvoiceProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (InvoicesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getInvoiceProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __InvoicesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool InvoicesManager::getInvoiceAsync(char * accessToken,
	int id, 
	void(* handler)(InvoiceResource, Error, void* )
	, void* userData)
{
	return getInvoiceHelper(accessToken,
	id, 
	handler, userData, true);
}

bool InvoicesManager::getInvoiceSync(char * accessToken,
	int id, 
	void(* handler)(InvoiceResource, Error, void* )
	, void* userData)
{
	return getInvoiceHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool getInvoiceLogsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«InvoiceLogEntry», Error, void* )
	= reinterpret_cast<void(*)(PageResource«InvoiceLogEntry», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«InvoiceLogEntry» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«InvoiceLogEntry»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«InvoiceLogEntry»", "PageResource«InvoiceLogEntry»");
			json_node_free(pJson);

			if ("PageResource«InvoiceLogEntry»" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unkown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool getInvoiceLogsHelper(char * accessToken,
	int id, int size, int page, 
	void(* handler)(PageResource«InvoiceLogEntry», Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	

	itemAtq = stringify(&size, "int");
	queryParams.insert(pair<string, string>("size", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("size");
	}


	itemAtq = stringify(&page, "int");
	queryParams.insert(pair<string, string>("page", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("page");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/invoices/{id}/logs");
	int pos;

	string s_id("{");
	s_id.append("id");
	s_id.append("}");
	pos = url.find(s_id);
	url.erase(pos, s_id.length());
	url.insert(pos, stringify(&id, "int"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("GET");

	if(strcmp("PUT", "GET") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(InvoicesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getInvoiceLogsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (InvoicesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getInvoiceLogsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __InvoicesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool InvoicesManager::getInvoiceLogsAsync(char * accessToken,
	int id, int size, int page, 
	void(* handler)(PageResource«InvoiceLogEntry», Error, void* )
	, void* userData)
{
	return getInvoiceLogsHelper(accessToken,
	id, size, page, 
	handler, userData, true);
}

bool InvoicesManager::getInvoiceLogsSync(char * accessToken,
	int id, int size, int page, 
	void(* handler)(PageResource«InvoiceLogEntry», Error, void* )
	, void* userData)
{
	return getInvoiceLogsHelper(accessToken,
	id, size, page, 
	handler, userData, false);
}

static bool getInvoicesProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«InvoiceResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«InvoiceResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«InvoiceResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«InvoiceResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«InvoiceResource»", "PageResource«InvoiceResource»");
			json_node_free(pJson);

			if ("PageResource«InvoiceResource»" == "std::string") {
				string* val = (std::string*)(&out);
				if (val->empty() && p_chunk.size>4) {
					*val = string(p_chunk.memory, p_chunk.size);
				}
			}
		} else {
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
			out.fromJson(data);
			char *jsonStr =  out.toJson();
			printf("\n%s\n", jsonStr);
			g_free(static_cast<gpointer>(jsonStr));
			
		}
		handler(out, error, userData);
		return true;
		//TODO: handle case where json parsing has an error

	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unkown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool getInvoicesHelper(char * accessToken,
	int filterUser, std::string filterEmail, std::string filterFulfillmentStatus, std::string filterPaymentStatus, std::string filterItemName, std::string filterExternalRef, std::string filterCreatedDate, std::string filterVendorIds, std::string filterCurrency, std::string filterShippingStateName, std::string filterShippingCountryName, std::string filterShipping, std::string filterVendorName, std::string filterSku, int size, int page, std::string order, 
	void(* handler)(PageResource«InvoiceResource», Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	

	itemAtq = stringify(&filterUser, "int");
	queryParams.insert(pair<string, string>("filter_user", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_user");
	}


	itemAtq = stringify(&filterEmail, "std::string");
	queryParams.insert(pair<string, string>("filter_email", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_email");
	}


	itemAtq = stringify(&filterFulfillmentStatus, "std::string");
	queryParams.insert(pair<string, string>("filter_fulfillment_status", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_fulfillment_status");
	}


	itemAtq = stringify(&filterPaymentStatus, "std::string");
	queryParams.insert(pair<string, string>("filter_payment_status", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_payment_status");
	}


	itemAtq = stringify(&filterItemName, "std::string");
	queryParams.insert(pair<string, string>("filter_item_name", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_item_name");
	}


	itemAtq = stringify(&filterExternalRef, "std::string");
	queryParams.insert(pair<string, string>("filter_external_ref", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_external_ref");
	}


	itemAtq = stringify(&filterCreatedDate, "std::string");
	queryParams.insert(pair<string, string>("filter_created_date", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_created_date");
	}


	itemAtq = stringify(&filterVendorIds, "std::string");
	queryParams.insert(pair<string, string>("filter_vendor_ids", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_vendor_ids");
	}


	itemAtq = stringify(&filterCurrency, "std::string");
	queryParams.insert(pair<string, string>("filter_currency", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_currency");
	}


	itemAtq = stringify(&filterShippingStateName, "std::string");
	queryParams.insert(pair<string, string>("filter_shipping_state_name", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_shipping_state_name");
	}


	itemAtq = stringify(&filterShippingCountryName, "std::string");
	queryParams.insert(pair<string, string>("filter_shipping_country_name", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_shipping_country_name");
	}


	itemAtq = stringify(&filterShipping, "std::string");
	queryParams.insert(pair<string, string>("filter_shipping", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_shipping");
	}


	itemAtq = stringify(&filterVendorName, "std::string");
	queryParams.insert(pair<string, string>("filter_vendor_name", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_vendor_name");
	}


	itemAtq = stringify(&filterSku, "std::string");
	queryParams.insert(pair<string, string>("filter_sku", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_sku");
	}


	itemAtq = stringify(&size, "int");
	queryParams.insert(pair<string, string>("size", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("size");
	}


	itemAtq = stringify(&page, "int");
	queryParams.insert(pair<string, string>("page", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("page");
	}


	itemAtq = stringify(&order, "std::string");
	queryParams.insert(pair<string, string>("order", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("order");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/invoices");
	int pos;


	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("GET");

	if(strcmp("PUT", "GET") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(InvoicesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getInvoicesProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (InvoicesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getInvoicesProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __InvoicesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool InvoicesManager::getInvoicesAsync(char * accessToken,
	int filterUser, std::string filterEmail, std::string filterFulfillmentStatus, std::string filterPaymentStatus, std::string filterItemName, std::string filterExternalRef, std::string filterCreatedDate, std::string filterVendorIds, std::string filterCurrency, std::string filterShippingStateName, std::string filterShippingCountryName, std::string filterShipping, std::string filterVendorName, std::string filterSku, int size, int page, std::string order, 
	void(* handler)(PageResource«InvoiceResource», Error, void* )
	, void* userData)
{
	return getInvoicesHelper(accessToken,
	filterUser, filterEmail, filterFulfillmentStatus, filterPaymentStatus, filterItemName, filterExternalRef, filterCreatedDate, filterVendorIds, filterCurrency, filterShippingStateName, filterShippingCountryName, filterShipping, filterVendorName, filterSku, size, page, order, 
	handler, userData, true);
}

bool InvoicesManager::getInvoicesSync(char * accessToken,
	int filterUser, std::string filterEmail, std::string filterFulfillmentStatus, std::string filterPaymentStatus, std::string filterItemName, std::string filterExternalRef, std::string filterCreatedDate, std::string filterVendorIds, std::string filterCurrency, std::string filterShippingStateName, std::string filterShippingCountryName, std::string filterShipping, std::string filterVendorName, std::string filterSku, int size, int page, std::string order, 
	void(* handler)(PageResource«InvoiceResource», Error, void* )
	, void* userData)
{
	return getInvoicesHelper(accessToken,
	filterUser, filterEmail, filterFulfillmentStatus, filterPaymentStatus, filterItemName, filterExternalRef, filterCreatedDate, filterVendorIds, filterCurrency, filterShippingStateName, filterShippingCountryName, filterShipping, filterVendorName, filterSku, size, page, order, 
	handler, userData, false);
}

static bool getPaymentStatusesProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::list<std::string>, Error, void* )
	= reinterpret_cast<void(*)(std::list<std::string>, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	std::list<std::string> out;
	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));



		pJson = json_from_string(data, NULL);
		JsonArray * jsonarray = json_node_get_array (pJson);
		guint length = json_array_get_length (jsonarray);
		for(guint i = 0; i < length; i++){
			JsonNode* myJson = json_array_get_element (jsonarray, i);
			char * singlenodestr = json_to_string(myJson, false);
			std::string singlemodel;
			singlemodel.fromJson(singlenodestr);
			out.push_front(singlemodel);
			g_free(static_cast<gpointer>(singlenodestr));
			json_node_free(myJson);
		}
		json_array_unref (jsonarray);
		json_node_free(pJson);


	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unkown Error"));
		}
		 handler(out, error, userData);
		return false;
			}
}

static bool getPaymentStatusesHelper(char * accessToken,
	
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/invoices/payment-statuses");
	int pos;


	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("GET");

	if(strcmp("PUT", "GET") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(InvoicesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getPaymentStatusesProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (InvoicesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getPaymentStatusesProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __InvoicesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool InvoicesManager::getPaymentStatusesAsync(char * accessToken,
	
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData)
{
	return getPaymentStatusesHelper(accessToken,
	
	handler, userData, true);
}

bool InvoicesManager::getPaymentStatusesSync(char * accessToken,
	
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData)
{
	return getPaymentStatusesHelper(accessToken,
	
	handler, userData, false);
}

static bool payInvoiceProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	
	void(* handler)(Error, void* ) = reinterpret_cast<void(*)(Error, void* )> (voidHandler);
	JsonNode* pJson;
	char * data = p_chunk.memory;

	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));


		handler(error, userData);
		return true;



	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unkown Error"));
		}
		handler(error, userData);
		return false;
	}
}

static bool payInvoiceHelper(char * accessToken,
	int id, PayBySavedMethodRequest request, 
	
	void(* handler)(Error, void* ) , void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	if (isprimitive("PayBySavedMethodRequest")) {
		node = converttoJson(&request, "PayBySavedMethodRequest", "");
	}
	
	char *jsonStr =  request.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/invoices/{id}/payments");
	int pos;

	string s_id("{");
	s_id.append("id");
	s_id.append("}");
	pos = url.find(s_id);
	url.erase(pos, s_id.length());
	url.insert(pos, stringify(&id, "int"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("POST");

	if(strcmp("PUT", "POST") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(InvoicesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = payInvoiceProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (InvoicesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), payInvoiceProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __InvoicesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool InvoicesManager::payInvoiceAsync(char * accessToken,
	int id, PayBySavedMethodRequest request, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return payInvoiceHelper(accessToken,
	id, request, 
	handler, userData, true);
}

bool InvoicesManager::payInvoiceSync(char * accessToken,
	int id, PayBySavedMethodRequest request, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return payInvoiceHelper(accessToken,
	id, request, 
	handler, userData, false);
}

static bool setBundledInvoiceItemFulfillmentStatusProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	
	void(* handler)(Error, void* ) = reinterpret_cast<void(*)(Error, void* )> (voidHandler);
	JsonNode* pJson;
	char * data = p_chunk.memory;

	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));


		handler(error, userData);
		return true;



	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unkown Error"));
		}
		handler(error, userData);
		return false;
	}
}

static bool setBundledInvoiceItemFulfillmentStatusHelper(char * accessToken,
	int id, std::string bundleSku, std::string sku, StringWrapper status, 
	
	void(* handler)(Error, void* ) , void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	if (isprimitive("StringWrapper")) {
		node = converttoJson(&status, "StringWrapper", "");
	}
	
	char *jsonStr =  status.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/invoices/{id}/items/{bundleSku}/bundled-skus/{sku}/fulfillment-status");
	int pos;

	string s_id("{");
	s_id.append("id");
	s_id.append("}");
	pos = url.find(s_id);
	url.erase(pos, s_id.length());
	url.insert(pos, stringify(&id, "int"));
	string s_bundleSku("{");
	s_bundleSku.append("bundleSku");
	s_bundleSku.append("}");
	pos = url.find(s_bundleSku);
	url.erase(pos, s_bundleSku.length());
	url.insert(pos, stringify(&bundleSku, "std::string"));
	string s_sku("{");
	s_sku.append("sku");
	s_sku.append("}");
	pos = url.find(s_sku);
	url.erase(pos, s_sku.length());
	url.insert(pos, stringify(&sku, "std::string"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("PUT");

	if(strcmp("PUT", "PUT") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(InvoicesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = setBundledInvoiceItemFulfillmentStatusProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (InvoicesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), setBundledInvoiceItemFulfillmentStatusProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __InvoicesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool InvoicesManager::setBundledInvoiceItemFulfillmentStatusAsync(char * accessToken,
	int id, std::string bundleSku, std::string sku, StringWrapper status, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return setBundledInvoiceItemFulfillmentStatusHelper(accessToken,
	id, bundleSku, sku, status, 
	handler, userData, true);
}

bool InvoicesManager::setBundledInvoiceItemFulfillmentStatusSync(char * accessToken,
	int id, std::string bundleSku, std::string sku, StringWrapper status, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return setBundledInvoiceItemFulfillmentStatusHelper(accessToken,
	id, bundleSku, sku, status, 
	handler, userData, false);
}

static bool setExternalRefProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	
	void(* handler)(Error, void* ) = reinterpret_cast<void(*)(Error, void* )> (voidHandler);
	JsonNode* pJson;
	char * data = p_chunk.memory;

	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));


		handler(error, userData);
		return true;



	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unkown Error"));
		}
		handler(error, userData);
		return false;
	}
}

static bool setExternalRefHelper(char * accessToken,
	int id, StringWrapper externalRef, 
	
	void(* handler)(Error, void* ) , void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	if (isprimitive("StringWrapper")) {
		node = converttoJson(&externalRef, "StringWrapper", "");
	}
	
	char *jsonStr =  externalRef.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/invoices/{id}/external-ref");
	int pos;

	string s_id("{");
	s_id.append("id");
	s_id.append("}");
	pos = url.find(s_id);
	url.erase(pos, s_id.length());
	url.insert(pos, stringify(&id, "int"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("PUT");

	if(strcmp("PUT", "PUT") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(InvoicesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = setExternalRefProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (InvoicesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), setExternalRefProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __InvoicesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool InvoicesManager::setExternalRefAsync(char * accessToken,
	int id, StringWrapper externalRef, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return setExternalRefHelper(accessToken,
	id, externalRef, 
	handler, userData, true);
}

bool InvoicesManager::setExternalRefSync(char * accessToken,
	int id, StringWrapper externalRef, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return setExternalRefHelper(accessToken,
	id, externalRef, 
	handler, userData, false);
}

static bool setInvoiceItemFulfillmentStatusProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	
	void(* handler)(Error, void* ) = reinterpret_cast<void(*)(Error, void* )> (voidHandler);
	JsonNode* pJson;
	char * data = p_chunk.memory;

	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));


		handler(error, userData);
		return true;



	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unkown Error"));
		}
		handler(error, userData);
		return false;
	}
}

static bool setInvoiceItemFulfillmentStatusHelper(char * accessToken,
	int id, std::string sku, StringWrapper status, 
	
	void(* handler)(Error, void* ) , void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	if (isprimitive("StringWrapper")) {
		node = converttoJson(&status, "StringWrapper", "");
	}
	
	char *jsonStr =  status.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/invoices/{id}/items/{sku}/fulfillment-status");
	int pos;

	string s_id("{");
	s_id.append("id");
	s_id.append("}");
	pos = url.find(s_id);
	url.erase(pos, s_id.length());
	url.insert(pos, stringify(&id, "int"));
	string s_sku("{");
	s_sku.append("sku");
	s_sku.append("}");
	pos = url.find(s_sku);
	url.erase(pos, s_sku.length());
	url.insert(pos, stringify(&sku, "std::string"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("PUT");

	if(strcmp("PUT", "PUT") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(InvoicesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = setInvoiceItemFulfillmentStatusProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (InvoicesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), setInvoiceItemFulfillmentStatusProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __InvoicesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool InvoicesManager::setInvoiceItemFulfillmentStatusAsync(char * accessToken,
	int id, std::string sku, StringWrapper status, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return setInvoiceItemFulfillmentStatusHelper(accessToken,
	id, sku, status, 
	handler, userData, true);
}

bool InvoicesManager::setInvoiceItemFulfillmentStatusSync(char * accessToken,
	int id, std::string sku, StringWrapper status, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return setInvoiceItemFulfillmentStatusHelper(accessToken,
	id, sku, status, 
	handler, userData, false);
}

static bool setOrderNotesProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	
	void(* handler)(Error, void* ) = reinterpret_cast<void(*)(Error, void* )> (voidHandler);
	JsonNode* pJson;
	char * data = p_chunk.memory;

	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));


		handler(error, userData);
		return true;



	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unkown Error"));
		}
		handler(error, userData);
		return false;
	}
}

static bool setOrderNotesHelper(char * accessToken,
	int id, StringWrapper orderNotes, 
	
	void(* handler)(Error, void* ) , void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	if (isprimitive("StringWrapper")) {
		node = converttoJson(&orderNotes, "StringWrapper", "");
	}
	
	char *jsonStr =  orderNotes.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/invoices/{id}/order-notes");
	int pos;

	string s_id("{");
	s_id.append("id");
	s_id.append("}");
	pos = url.find(s_id);
	url.erase(pos, s_id.length());
	url.insert(pos, stringify(&id, "int"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("PUT");

	if(strcmp("PUT", "PUT") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(InvoicesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = setOrderNotesProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (InvoicesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), setOrderNotesProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __InvoicesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool InvoicesManager::setOrderNotesAsync(char * accessToken,
	int id, StringWrapper orderNotes, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return setOrderNotesHelper(accessToken,
	id, orderNotes, 
	handler, userData, true);
}

bool InvoicesManager::setOrderNotesSync(char * accessToken,
	int id, StringWrapper orderNotes, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return setOrderNotesHelper(accessToken,
	id, orderNotes, 
	handler, userData, false);
}

static bool setPaymentStatusProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	
	void(* handler)(Error, void* ) = reinterpret_cast<void(*)(Error, void* )> (voidHandler);
	JsonNode* pJson;
	char * data = p_chunk.memory;

	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));


		handler(error, userData);
		return true;



	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unkown Error"));
		}
		handler(error, userData);
		return false;
	}
}

static bool setPaymentStatusHelper(char * accessToken,
	int id, InvoicePaymentStatusRequest request, 
	
	void(* handler)(Error, void* ) , void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	if (isprimitive("InvoicePaymentStatusRequest")) {
		node = converttoJson(&request, "InvoicePaymentStatusRequest", "");
	}
	
	char *jsonStr =  request.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/invoices/{id}/payment-status");
	int pos;

	string s_id("{");
	s_id.append("id");
	s_id.append("}");
	pos = url.find(s_id);
	url.erase(pos, s_id.length());
	url.insert(pos, stringify(&id, "int"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("PUT");

	if(strcmp("PUT", "PUT") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(InvoicesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = setPaymentStatusProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (InvoicesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), setPaymentStatusProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __InvoicesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool InvoicesManager::setPaymentStatusAsync(char * accessToken,
	int id, InvoicePaymentStatusRequest request, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return setPaymentStatusHelper(accessToken,
	id, request, 
	handler, userData, true);
}

bool InvoicesManager::setPaymentStatusSync(char * accessToken,
	int id, InvoicePaymentStatusRequest request, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return setPaymentStatusHelper(accessToken,
	id, request, 
	handler, userData, false);
}

static bool updateBillingInfoProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	
	void(* handler)(Error, void* ) = reinterpret_cast<void(*)(Error, void* )> (voidHandler);
	JsonNode* pJson;
	char * data = p_chunk.memory;

	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));


		handler(error, userData);
		return true;



	} else {
		Error error;
		if (errormsg != NULL) {
			error = Error(code, string(errormsg));
		} else if (p_chunk.memory != NULL) {
			error = Error(code, string(p_chunk.memory));
		} else {
			error = Error(code, string("Unkown Error"));
		}
		handler(error, userData);
		return false;
	}
}

static bool updateBillingInfoHelper(char * accessToken,
	int id, AddressResource billingInfoRequest, 
	
	void(* handler)(Error, void* ) , void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/json");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	if (isprimitive("AddressResource")) {
		node = converttoJson(&billingInfoRequest, "AddressResource", "");
	}
	
	char *jsonStr =  billingInfoRequest.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/invoices/{id}/billing-address");
	int pos;

	string s_id("{");
	s_id.append("id");
	s_id.append("}");
	pos = url.find(s_id);
	url.erase(pos, s_id.length());
	url.insert(pos, stringify(&id, "int"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("PUT");

	if(strcmp("PUT", "PUT") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(InvoicesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = updateBillingInfoProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

		curl_slist_free_all(headerList);
		if (p_chunk) {
			if(p_chunk->memory) {
				free(p_chunk->memory);
			}
			delete (p_chunk);
		}
		if (errormsg) {
			free(errormsg);
		}
		return retval;
	} else{
		GThread *thread = NULL;
		RequestInfo *requestInfo = NULL;

		requestInfo = new(nothrow) RequestInfo (InvoicesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), updateBillingInfoProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __InvoicesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool InvoicesManager::updateBillingInfoAsync(char * accessToken,
	int id, AddressResource billingInfoRequest, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return updateBillingInfoHelper(accessToken,
	id, billingInfoRequest, 
	handler, userData, true);
}

bool InvoicesManager::updateBillingInfoSync(char * accessToken,
	int id, AddressResource billingInfoRequest, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return updateBillingInfoHelper(accessToken,
	id, billingInfoRequest, 
	handler, userData, false);
}

