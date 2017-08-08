#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "ReportingRevenueManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


ReportingRevenueManager::ReportingRevenueManager()
{

}

ReportingRevenueManager::~ReportingRevenueManager()
{

}

static gboolean __ReportingRevenueManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __ReportingRevenueManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__ReportingRevenueManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool getItemRevenueProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(RevenueReportResource, Error, void* )
	= reinterpret_cast<void(*)(RevenueReportResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	RevenueReportResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("RevenueReportResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "RevenueReportResource", "RevenueReportResource");
			json_node_free(pJson);

			if ("RevenueReportResource" == "std::string") {
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

static bool getItemRevenueHelper(char * accessToken,
	std::string currencyCode, long long startDate, long long endDate, 
	void(* handler)(RevenueReportResource, Error, void* )
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
	

	itemAtq = stringify(&startDate, "long long");
	queryParams.insert(pair<string, string>("start_date", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("start_date");
	}


	itemAtq = stringify(&endDate, "long long");
	queryParams.insert(pair<string, string>("end_date", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("end_date");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/reporting/revenue/item-sales/{currency_code}");
	int pos;

	string s_currencyCode("{");
	s_currencyCode.append("currency_code");
	s_currencyCode.append("}");
	pos = url.find(s_currencyCode);
	url.erase(pos, s_currencyCode.length());
	url.insert(pos, stringify(&currencyCode, "std::string"));

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
		NetClient::easycurl(ReportingRevenueManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getItemRevenueProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (ReportingRevenueManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getItemRevenueProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __ReportingRevenueManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool ReportingRevenueManager::getItemRevenueAsync(char * accessToken,
	std::string currencyCode, long long startDate, long long endDate, 
	void(* handler)(RevenueReportResource, Error, void* )
	, void* userData)
{
	return getItemRevenueHelper(accessToken,
	currencyCode, startDate, endDate, 
	handler, userData, true);
}

bool ReportingRevenueManager::getItemRevenueSync(char * accessToken,
	std::string currencyCode, long long startDate, long long endDate, 
	void(* handler)(RevenueReportResource, Error, void* )
	, void* userData)
{
	return getItemRevenueHelper(accessToken,
	currencyCode, startDate, endDate, 
	handler, userData, false);
}

static bool getRefundRevenueProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(RevenueReportResource, Error, void* )
	= reinterpret_cast<void(*)(RevenueReportResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	RevenueReportResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("RevenueReportResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "RevenueReportResource", "RevenueReportResource");
			json_node_free(pJson);

			if ("RevenueReportResource" == "std::string") {
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

static bool getRefundRevenueHelper(char * accessToken,
	std::string currencyCode, long long startDate, long long endDate, 
	void(* handler)(RevenueReportResource, Error, void* )
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
	

	itemAtq = stringify(&startDate, "long long");
	queryParams.insert(pair<string, string>("start_date", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("start_date");
	}


	itemAtq = stringify(&endDate, "long long");
	queryParams.insert(pair<string, string>("end_date", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("end_date");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/reporting/revenue/refunds/{currency_code}");
	int pos;

	string s_currencyCode("{");
	s_currencyCode.append("currency_code");
	s_currencyCode.append("}");
	pos = url.find(s_currencyCode);
	url.erase(pos, s_currencyCode.length());
	url.insert(pos, stringify(&currencyCode, "std::string"));

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
		NetClient::easycurl(ReportingRevenueManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getRefundRevenueProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (ReportingRevenueManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getRefundRevenueProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __ReportingRevenueManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool ReportingRevenueManager::getRefundRevenueAsync(char * accessToken,
	std::string currencyCode, long long startDate, long long endDate, 
	void(* handler)(RevenueReportResource, Error, void* )
	, void* userData)
{
	return getRefundRevenueHelper(accessToken,
	currencyCode, startDate, endDate, 
	handler, userData, true);
}

bool ReportingRevenueManager::getRefundRevenueSync(char * accessToken,
	std::string currencyCode, long long startDate, long long endDate, 
	void(* handler)(RevenueReportResource, Error, void* )
	, void* userData)
{
	return getRefundRevenueHelper(accessToken,
	currencyCode, startDate, endDate, 
	handler, userData, false);
}

static bool getRevenueByCountryProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«RevenueCountryReportResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«RevenueCountryReportResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«RevenueCountryReportResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«RevenueCountryReportResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«RevenueCountryReportResource»", "PageResource«RevenueCountryReportResource»");
			json_node_free(pJson);

			if ("PageResource«RevenueCountryReportResource»" == "std::string") {
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

static bool getRevenueByCountryHelper(char * accessToken,
	std::string currencyCode, long long startDate, long long endDate, int size, int page, 
	void(* handler)(PageResource«RevenueCountryReportResource», Error, void* )
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
	

	itemAtq = stringify(&startDate, "long long");
	queryParams.insert(pair<string, string>("start_date", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("start_date");
	}


	itemAtq = stringify(&endDate, "long long");
	queryParams.insert(pair<string, string>("end_date", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("end_date");
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

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/reporting/revenue/countries/{currency_code}");
	int pos;

	string s_currencyCode("{");
	s_currencyCode.append("currency_code");
	s_currencyCode.append("}");
	pos = url.find(s_currencyCode);
	url.erase(pos, s_currencyCode.length());
	url.insert(pos, stringify(&currencyCode, "std::string"));

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
		NetClient::easycurl(ReportingRevenueManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getRevenueByCountryProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (ReportingRevenueManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getRevenueByCountryProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __ReportingRevenueManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool ReportingRevenueManager::getRevenueByCountryAsync(char * accessToken,
	std::string currencyCode, long long startDate, long long endDate, int size, int page, 
	void(* handler)(PageResource«RevenueCountryReportResource», Error, void* )
	, void* userData)
{
	return getRevenueByCountryHelper(accessToken,
	currencyCode, startDate, endDate, size, page, 
	handler, userData, true);
}

bool ReportingRevenueManager::getRevenueByCountrySync(char * accessToken,
	std::string currencyCode, long long startDate, long long endDate, int size, int page, 
	void(* handler)(PageResource«RevenueCountryReportResource», Error, void* )
	, void* userData)
{
	return getRevenueByCountryHelper(accessToken,
	currencyCode, startDate, endDate, size, page, 
	handler, userData, false);
}

static bool getRevenueByItemProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«RevenueProductReportResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«RevenueProductReportResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«RevenueProductReportResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«RevenueProductReportResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«RevenueProductReportResource»", "PageResource«RevenueProductReportResource»");
			json_node_free(pJson);

			if ("PageResource«RevenueProductReportResource»" == "std::string") {
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

static bool getRevenueByItemHelper(char * accessToken,
	std::string currencyCode, long long startDate, long long endDate, int size, int page, 
	void(* handler)(PageResource«RevenueProductReportResource», Error, void* )
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
	

	itemAtq = stringify(&startDate, "long long");
	queryParams.insert(pair<string, string>("start_date", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("start_date");
	}


	itemAtq = stringify(&endDate, "long long");
	queryParams.insert(pair<string, string>("end_date", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("end_date");
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

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/reporting/revenue/products/{currency_code}");
	int pos;

	string s_currencyCode("{");
	s_currencyCode.append("currency_code");
	s_currencyCode.append("}");
	pos = url.find(s_currencyCode);
	url.erase(pos, s_currencyCode.length());
	url.insert(pos, stringify(&currencyCode, "std::string"));

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
		NetClient::easycurl(ReportingRevenueManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getRevenueByItemProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (ReportingRevenueManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getRevenueByItemProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __ReportingRevenueManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool ReportingRevenueManager::getRevenueByItemAsync(char * accessToken,
	std::string currencyCode, long long startDate, long long endDate, int size, int page, 
	void(* handler)(PageResource«RevenueProductReportResource», Error, void* )
	, void* userData)
{
	return getRevenueByItemHelper(accessToken,
	currencyCode, startDate, endDate, size, page, 
	handler, userData, true);
}

bool ReportingRevenueManager::getRevenueByItemSync(char * accessToken,
	std::string currencyCode, long long startDate, long long endDate, int size, int page, 
	void(* handler)(PageResource«RevenueProductReportResource», Error, void* )
	, void* userData)
{
	return getRevenueByItemHelper(accessToken,
	currencyCode, startDate, endDate, size, page, 
	handler, userData, false);
}

static bool getSubscriptionRevenueProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(RevenueReportResource, Error, void* )
	= reinterpret_cast<void(*)(RevenueReportResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	RevenueReportResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("RevenueReportResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "RevenueReportResource", "RevenueReportResource");
			json_node_free(pJson);

			if ("RevenueReportResource" == "std::string") {
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

static bool getSubscriptionRevenueHelper(char * accessToken,
	std::string currencyCode, long long startDate, long long endDate, 
	void(* handler)(RevenueReportResource, Error, void* )
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
	

	itemAtq = stringify(&startDate, "long long");
	queryParams.insert(pair<string, string>("start_date", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("start_date");
	}


	itemAtq = stringify(&endDate, "long long");
	queryParams.insert(pair<string, string>("end_date", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("end_date");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/reporting/revenue/subscription-sales/{currency_code}");
	int pos;

	string s_currencyCode("{");
	s_currencyCode.append("currency_code");
	s_currencyCode.append("}");
	pos = url.find(s_currencyCode);
	url.erase(pos, s_currencyCode.length());
	url.insert(pos, stringify(&currencyCode, "std::string"));

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
		NetClient::easycurl(ReportingRevenueManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getSubscriptionRevenueProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (ReportingRevenueManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getSubscriptionRevenueProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __ReportingRevenueManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool ReportingRevenueManager::getSubscriptionRevenueAsync(char * accessToken,
	std::string currencyCode, long long startDate, long long endDate, 
	void(* handler)(RevenueReportResource, Error, void* )
	, void* userData)
{
	return getSubscriptionRevenueHelper(accessToken,
	currencyCode, startDate, endDate, 
	handler, userData, true);
}

bool ReportingRevenueManager::getSubscriptionRevenueSync(char * accessToken,
	std::string currencyCode, long long startDate, long long endDate, 
	void(* handler)(RevenueReportResource, Error, void* )
	, void* userData)
{
	return getSubscriptionRevenueHelper(accessToken,
	currencyCode, startDate, endDate, 
	handler, userData, false);
}

