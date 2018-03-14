#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "Users_SubscriptionsManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


Users_SubscriptionsManager::Users_SubscriptionsManager()
{

}

Users_SubscriptionsManager::~Users_SubscriptionsManager()
{

}

static gboolean __Users_SubscriptionsManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __Users_SubscriptionsManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__Users_SubscriptionsManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool getUserSubscriptionDetailsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(InventorySubscriptionResource, Error, void* )
	= reinterpret_cast<void(*)(InventorySubscriptionResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	InventorySubscriptionResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("InventorySubscriptionResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "InventorySubscriptionResource", "InventorySubscriptionResource");
			json_node_free(pJson);

			if ("InventorySubscriptionResource" == "std::string") {
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

static bool getUserSubscriptionDetailsHelper(char * accessToken,
	int userId, int inventoryId, 
	void(* handler)(InventorySubscriptionResource, Error, void* )
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

	string url("/users/{user_id}/subscriptions/{inventory_id}");
	int pos;

	string s_userId("{");
	s_userId.append("user_id");
	s_userId.append("}");
	pos = url.find(s_userId);
	url.erase(pos, s_userId.length());
	url.insert(pos, stringify(&userId, "int"));
	string s_inventoryId("{");
	s_inventoryId.append("inventory_id");
	s_inventoryId.append("}");
	pos = url.find(s_inventoryId);
	url.erase(pos, s_inventoryId.length());
	url.insert(pos, stringify(&inventoryId, "int"));

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
		NetClient::easycurl(Users_SubscriptionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getUserSubscriptionDetailsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Users_SubscriptionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getUserSubscriptionDetailsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Users_SubscriptionsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Users_SubscriptionsManager::getUserSubscriptionDetailsAsync(char * accessToken,
	int userId, int inventoryId, 
	void(* handler)(InventorySubscriptionResource, Error, void* )
	, void* userData)
{
	return getUserSubscriptionDetailsHelper(accessToken,
	userId, inventoryId, 
	handler, userData, true);
}

bool Users_SubscriptionsManager::getUserSubscriptionDetailsSync(char * accessToken,
	int userId, int inventoryId, 
	void(* handler)(InventorySubscriptionResource, Error, void* )
	, void* userData)
{
	return getUserSubscriptionDetailsHelper(accessToken,
	userId, inventoryId, 
	handler, userData, false);
}

static bool getUsersSubscriptionDetailsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::list<InventorySubscriptionResource>, Error, void* )
	= reinterpret_cast<void(*)(std::list<InventorySubscriptionResource>, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	std::list<InventorySubscriptionResource> out;
	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));



		pJson = json_from_string(data, NULL);
		JsonArray * jsonarray = json_node_get_array (pJson);
		guint length = json_array_get_length (jsonarray);
		for(guint i = 0; i < length; i++){
			JsonNode* myJson = json_array_get_element (jsonarray, i);
			char * singlenodestr = json_to_string(myJson, false);
			InventorySubscriptionResource singlemodel;
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

static bool getUsersSubscriptionDetailsHelper(char * accessToken,
	int userId, 
	void(* handler)(std::list<InventorySubscriptionResource>, Error, void* )
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

	string url("/users/{user_id}/subscriptions");
	int pos;

	string s_userId("{");
	s_userId.append("user_id");
	s_userId.append("}");
	pos = url.find(s_userId);
	url.erase(pos, s_userId.length());
	url.insert(pos, stringify(&userId, "int"));

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
		NetClient::easycurl(Users_SubscriptionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getUsersSubscriptionDetailsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Users_SubscriptionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getUsersSubscriptionDetailsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Users_SubscriptionsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Users_SubscriptionsManager::getUsersSubscriptionDetailsAsync(char * accessToken,
	int userId, 
	void(* handler)(std::list<InventorySubscriptionResource>, Error, void* )
	, void* userData)
{
	return getUsersSubscriptionDetailsHelper(accessToken,
	userId, 
	handler, userData, true);
}

bool Users_SubscriptionsManager::getUsersSubscriptionDetailsSync(char * accessToken,
	int userId, 
	void(* handler)(std::list<InventorySubscriptionResource>, Error, void* )
	, void* userData)
{
	return getUsersSubscriptionDetailsHelper(accessToken,
	userId, 
	handler, userData, false);
}

static bool reactivateUserSubscriptionProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool reactivateUserSubscriptionHelper(char * accessToken,
	int userId, int inventoryId, ReactivateSubscriptionRequest reactivateSubscriptionRequest, 
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

	if (isprimitive("ReactivateSubscriptionRequest")) {
		node = converttoJson(&reactivateSubscriptionRequest, "ReactivateSubscriptionRequest", "");
	}
	
	char *jsonStr =  reactivateSubscriptionRequest.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/users/{user_id}/subscriptions/{inventory_id}/reactivate");
	int pos;

	string s_userId("{");
	s_userId.append("user_id");
	s_userId.append("}");
	pos = url.find(s_userId);
	url.erase(pos, s_userId.length());
	url.insert(pos, stringify(&userId, "int"));
	string s_inventoryId("{");
	s_inventoryId.append("inventory_id");
	s_inventoryId.append("}");
	pos = url.find(s_inventoryId);
	url.erase(pos, s_inventoryId.length());
	url.insert(pos, stringify(&inventoryId, "int"));

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
		NetClient::easycurl(Users_SubscriptionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = reactivateUserSubscriptionProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Users_SubscriptionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), reactivateUserSubscriptionProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Users_SubscriptionsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Users_SubscriptionsManager::reactivateUserSubscriptionAsync(char * accessToken,
	int userId, int inventoryId, ReactivateSubscriptionRequest reactivateSubscriptionRequest, 
	void(* handler)(InvoiceResource, Error, void* )
	, void* userData)
{
	return reactivateUserSubscriptionHelper(accessToken,
	userId, inventoryId, reactivateSubscriptionRequest, 
	handler, userData, true);
}

bool Users_SubscriptionsManager::reactivateUserSubscriptionSync(char * accessToken,
	int userId, int inventoryId, ReactivateSubscriptionRequest reactivateSubscriptionRequest, 
	void(* handler)(InvoiceResource, Error, void* )
	, void* userData)
{
	return reactivateUserSubscriptionHelper(accessToken,
	userId, inventoryId, reactivateSubscriptionRequest, 
	handler, userData, false);
}

static bool setSubscriptionBillDateProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool setSubscriptionBillDateHelper(char * accessToken,
	int userId, int inventoryId, long long billDate, 
	
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

	if (isprimitive("long long")) {
		node = converttoJson(&billDate, "long long", "");
	}
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/users/{user_id}/subscriptions/{inventory_id}/bill-date");
	int pos;

	string s_userId("{");
	s_userId.append("user_id");
	s_userId.append("}");
	pos = url.find(s_userId);
	url.erase(pos, s_userId.length());
	url.insert(pos, stringify(&userId, "int"));
	string s_inventoryId("{");
	s_inventoryId.append("inventory_id");
	s_inventoryId.append("}");
	pos = url.find(s_inventoryId);
	url.erase(pos, s_inventoryId.length());
	url.insert(pos, stringify(&inventoryId, "int"));

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
		NetClient::easycurl(Users_SubscriptionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = setSubscriptionBillDateProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Users_SubscriptionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), setSubscriptionBillDateProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Users_SubscriptionsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Users_SubscriptionsManager::setSubscriptionBillDateAsync(char * accessToken,
	int userId, int inventoryId, long long billDate, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return setSubscriptionBillDateHelper(accessToken,
	userId, inventoryId, billDate, 
	handler, userData, true);
}

bool Users_SubscriptionsManager::setSubscriptionBillDateSync(char * accessToken,
	int userId, int inventoryId, long long billDate, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return setSubscriptionBillDateHelper(accessToken,
	userId, inventoryId, billDate, 
	handler, userData, false);
}

static bool setSubscriptionPaymentMethodProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool setSubscriptionPaymentMethodHelper(char * accessToken,
	int userId, int inventoryId, IntWrapper paymentMethodId, 
	
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

	if (isprimitive("IntWrapper")) {
		node = converttoJson(&paymentMethodId, "IntWrapper", "");
	}
	
	char *jsonStr =  paymentMethodId.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/users/{user_id}/subscriptions/{inventory_id}/payment-method");
	int pos;

	string s_userId("{");
	s_userId.append("user_id");
	s_userId.append("}");
	pos = url.find(s_userId);
	url.erase(pos, s_userId.length());
	url.insert(pos, stringify(&userId, "int"));
	string s_inventoryId("{");
	s_inventoryId.append("inventory_id");
	s_inventoryId.append("}");
	pos = url.find(s_inventoryId);
	url.erase(pos, s_inventoryId.length());
	url.insert(pos, stringify(&inventoryId, "int"));

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
		NetClient::easycurl(Users_SubscriptionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = setSubscriptionPaymentMethodProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Users_SubscriptionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), setSubscriptionPaymentMethodProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Users_SubscriptionsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Users_SubscriptionsManager::setSubscriptionPaymentMethodAsync(char * accessToken,
	int userId, int inventoryId, IntWrapper paymentMethodId, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return setSubscriptionPaymentMethodHelper(accessToken,
	userId, inventoryId, paymentMethodId, 
	handler, userData, true);
}

bool Users_SubscriptionsManager::setSubscriptionPaymentMethodSync(char * accessToken,
	int userId, int inventoryId, IntWrapper paymentMethodId, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return setSubscriptionPaymentMethodHelper(accessToken,
	userId, inventoryId, paymentMethodId, 
	handler, userData, false);
}

static bool setSubscriptionStatusProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool setSubscriptionStatusHelper(char * accessToken,
	int userId, int inventoryId, SubscriptionStatusWrapper status, 
	
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

	if (isprimitive("SubscriptionStatusWrapper")) {
		node = converttoJson(&status, "SubscriptionStatusWrapper", "");
	}
	
	char *jsonStr =  status.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/users/{user_id}/subscriptions/{inventory_id}/status");
	int pos;

	string s_userId("{");
	s_userId.append("user_id");
	s_userId.append("}");
	pos = url.find(s_userId);
	url.erase(pos, s_userId.length());
	url.insert(pos, stringify(&userId, "int"));
	string s_inventoryId("{");
	s_inventoryId.append("inventory_id");
	s_inventoryId.append("}");
	pos = url.find(s_inventoryId);
	url.erase(pos, s_inventoryId.length());
	url.insert(pos, stringify(&inventoryId, "int"));

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
		NetClient::easycurl(Users_SubscriptionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = setSubscriptionStatusProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Users_SubscriptionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), setSubscriptionStatusProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Users_SubscriptionsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Users_SubscriptionsManager::setSubscriptionStatusAsync(char * accessToken,
	int userId, int inventoryId, SubscriptionStatusWrapper status, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return setSubscriptionStatusHelper(accessToken,
	userId, inventoryId, status, 
	handler, userData, true);
}

bool Users_SubscriptionsManager::setSubscriptionStatusSync(char * accessToken,
	int userId, int inventoryId, SubscriptionStatusWrapper status, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return setSubscriptionStatusHelper(accessToken,
	userId, inventoryId, status, 
	handler, userData, false);
}

static bool setUserSubscriptionPlanProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool setUserSubscriptionPlanHelper(char * accessToken,
	int userId, int inventoryId, StringWrapper planId, 
	
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
		node = converttoJson(&planId, "StringWrapper", "");
	}
	
	char *jsonStr =  planId.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/users/{user_id}/subscriptions/{inventory_id}/plan");
	int pos;

	string s_userId("{");
	s_userId.append("user_id");
	s_userId.append("}");
	pos = url.find(s_userId);
	url.erase(pos, s_userId.length());
	url.insert(pos, stringify(&userId, "int"));
	string s_inventoryId("{");
	s_inventoryId.append("inventory_id");
	s_inventoryId.append("}");
	pos = url.find(s_inventoryId);
	url.erase(pos, s_inventoryId.length());
	url.insert(pos, stringify(&inventoryId, "int"));

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
		NetClient::easycurl(Users_SubscriptionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = setUserSubscriptionPlanProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Users_SubscriptionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), setUserSubscriptionPlanProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Users_SubscriptionsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Users_SubscriptionsManager::setUserSubscriptionPlanAsync(char * accessToken,
	int userId, int inventoryId, StringWrapper planId, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return setUserSubscriptionPlanHelper(accessToken,
	userId, inventoryId, planId, 
	handler, userData, true);
}

bool Users_SubscriptionsManager::setUserSubscriptionPlanSync(char * accessToken,
	int userId, int inventoryId, StringWrapper planId, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return setUserSubscriptionPlanHelper(accessToken,
	userId, inventoryId, planId, 
	handler, userData, false);
}

static bool setUserSubscriptionPriceProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool setUserSubscriptionPriceHelper(char * accessToken,
	int userId, int inventoryId, SubscriptionPriceOverrideRequest the override details, 
	
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

	if (isprimitive("SubscriptionPriceOverrideRequest")) {
		node = converttoJson(&the override details, "SubscriptionPriceOverrideRequest", "");
	}
	
	char *jsonStr =  the override details.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/users/{user_id}/subscriptions/{inventory_id}/price-override");
	int pos;

	string s_userId("{");
	s_userId.append("user_id");
	s_userId.append("}");
	pos = url.find(s_userId);
	url.erase(pos, s_userId.length());
	url.insert(pos, stringify(&userId, "int"));
	string s_inventoryId("{");
	s_inventoryId.append("inventory_id");
	s_inventoryId.append("}");
	pos = url.find(s_inventoryId);
	url.erase(pos, s_inventoryId.length());
	url.insert(pos, stringify(&inventoryId, "int"));

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
		NetClient::easycurl(Users_SubscriptionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = setUserSubscriptionPriceProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Users_SubscriptionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), setUserSubscriptionPriceProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Users_SubscriptionsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Users_SubscriptionsManager::setUserSubscriptionPriceAsync(char * accessToken,
	int userId, int inventoryId, SubscriptionPriceOverrideRequest the override details, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return setUserSubscriptionPriceHelper(accessToken,
	userId, inventoryId, the override details, 
	handler, userData, true);
}

bool Users_SubscriptionsManager::setUserSubscriptionPriceSync(char * accessToken,
	int userId, int inventoryId, SubscriptionPriceOverrideRequest the override details, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return setUserSubscriptionPriceHelper(accessToken,
	userId, inventoryId, the override details, 
	handler, userData, false);
}

