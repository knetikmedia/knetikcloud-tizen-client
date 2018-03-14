#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "NotificationsManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


NotificationsManager::NotificationsManager()
{

}

NotificationsManager::~NotificationsManager()
{

}

static gboolean __NotificationsManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __NotificationsManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__NotificationsManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool createNotificationTypeProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(NotificationTypeResource, Error, void* )
	= reinterpret_cast<void(*)(NotificationTypeResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	NotificationTypeResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("NotificationTypeResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "NotificationTypeResource", "NotificationTypeResource");
			json_node_free(pJson);

			if ("NotificationTypeResource" == "std::string") {
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

static bool createNotificationTypeHelper(char * accessToken,
	NotificationTypeResource notificationType, 
	void(* handler)(NotificationTypeResource, Error, void* )
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

	if (isprimitive("NotificationTypeResource")) {
		node = converttoJson(&notificationType, "NotificationTypeResource", "");
	}
	
	char *jsonStr =  notificationType.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/notifications/types");
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
		NetClient::easycurl(NotificationsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = createNotificationTypeProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (NotificationsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), createNotificationTypeProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __NotificationsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool NotificationsManager::createNotificationTypeAsync(char * accessToken,
	NotificationTypeResource notificationType, 
	void(* handler)(NotificationTypeResource, Error, void* )
	, void* userData)
{
	return createNotificationTypeHelper(accessToken,
	notificationType, 
	handler, userData, true);
}

bool NotificationsManager::createNotificationTypeSync(char * accessToken,
	NotificationTypeResource notificationType, 
	void(* handler)(NotificationTypeResource, Error, void* )
	, void* userData)
{
	return createNotificationTypeHelper(accessToken,
	notificationType, 
	handler, userData, false);
}

static bool deleteNotificationTypeProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool deleteNotificationTypeHelper(char * accessToken,
	std::string id, 
	
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

	string url("/notifications/types/{id}");
	int pos;

	string s_id("{");
	s_id.append("id");
	s_id.append("}");
	pos = url.find(s_id);
	url.erase(pos, s_id.length());
	url.insert(pos, stringify(&id, "std::string"));

	//TODO: free memory of errormsg, memorystruct
	MemoryStruct_s* p_chunk = new MemoryStruct_s();
	long code;
	char* errormsg = NULL;
	string myhttpmethod("DELETE");

	if(strcmp("PUT", "DELETE") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(NotificationsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = deleteNotificationTypeProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (NotificationsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), deleteNotificationTypeProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __NotificationsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool NotificationsManager::deleteNotificationTypeAsync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteNotificationTypeHelper(accessToken,
	id, 
	handler, userData, true);
}

bool NotificationsManager::deleteNotificationTypeSync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteNotificationTypeHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool getNotificationTypeProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(NotificationTypeResource, Error, void* )
	= reinterpret_cast<void(*)(NotificationTypeResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	NotificationTypeResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("NotificationTypeResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "NotificationTypeResource", "NotificationTypeResource");
			json_node_free(pJson);

			if ("NotificationTypeResource" == "std::string") {
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

static bool getNotificationTypeHelper(char * accessToken,
	std::string id, 
	void(* handler)(NotificationTypeResource, Error, void* )
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

	string url("/notifications/types/{id}");
	int pos;

	string s_id("{");
	s_id.append("id");
	s_id.append("}");
	pos = url.find(s_id);
	url.erase(pos, s_id.length());
	url.insert(pos, stringify(&id, "std::string"));

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
		NetClient::easycurl(NotificationsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getNotificationTypeProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (NotificationsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getNotificationTypeProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __NotificationsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool NotificationsManager::getNotificationTypeAsync(char * accessToken,
	std::string id, 
	void(* handler)(NotificationTypeResource, Error, void* )
	, void* userData)
{
	return getNotificationTypeHelper(accessToken,
	id, 
	handler, userData, true);
}

bool NotificationsManager::getNotificationTypeSync(char * accessToken,
	std::string id, 
	void(* handler)(NotificationTypeResource, Error, void* )
	, void* userData)
{
	return getNotificationTypeHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool getNotificationTypesProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«NotificationTypeResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«NotificationTypeResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«NotificationTypeResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«NotificationTypeResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«NotificationTypeResource»", "PageResource«NotificationTypeResource»");
			json_node_free(pJson);

			if ("PageResource«NotificationTypeResource»" == "std::string") {
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

static bool getNotificationTypesHelper(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«NotificationTypeResource», Error, void* )
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


	itemAtq = stringify(&order, "std::string");
	queryParams.insert(pair<string, string>("order", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("order");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/notifications/types");
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
		NetClient::easycurl(NotificationsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getNotificationTypesProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (NotificationsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getNotificationTypesProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __NotificationsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool NotificationsManager::getNotificationTypesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«NotificationTypeResource», Error, void* )
	, void* userData)
{
	return getNotificationTypesHelper(accessToken,
	size, page, order, 
	handler, userData, true);
}

bool NotificationsManager::getNotificationTypesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«NotificationTypeResource», Error, void* )
	, void* userData)
{
	return getNotificationTypesHelper(accessToken,
	size, page, order, 
	handler, userData, false);
}

static bool getUserNotificationInfoProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(NotificationUserTypeResource, Error, void* )
	= reinterpret_cast<void(*)(NotificationUserTypeResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	NotificationUserTypeResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("NotificationUserTypeResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "NotificationUserTypeResource", "NotificationUserTypeResource");
			json_node_free(pJson);

			if ("NotificationUserTypeResource" == "std::string") {
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

static bool getUserNotificationInfoHelper(char * accessToken,
	std::string typeId, std::string userId, 
	void(* handler)(NotificationUserTypeResource, Error, void* )
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

	string url("/users/{user_id}/notifications/types/{type_id}");
	int pos;

	string s_typeId("{");
	s_typeId.append("type_id");
	s_typeId.append("}");
	pos = url.find(s_typeId);
	url.erase(pos, s_typeId.length());
	url.insert(pos, stringify(&typeId, "std::string"));
	string s_userId("{");
	s_userId.append("user_id");
	s_userId.append("}");
	pos = url.find(s_userId);
	url.erase(pos, s_userId.length());
	url.insert(pos, stringify(&userId, "std::string"));

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
		NetClient::easycurl(NotificationsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getUserNotificationInfoProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (NotificationsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getUserNotificationInfoProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __NotificationsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool NotificationsManager::getUserNotificationInfoAsync(char * accessToken,
	std::string typeId, std::string userId, 
	void(* handler)(NotificationUserTypeResource, Error, void* )
	, void* userData)
{
	return getUserNotificationInfoHelper(accessToken,
	typeId, userId, 
	handler, userData, true);
}

bool NotificationsManager::getUserNotificationInfoSync(char * accessToken,
	std::string typeId, std::string userId, 
	void(* handler)(NotificationUserTypeResource, Error, void* )
	, void* userData)
{
	return getUserNotificationInfoHelper(accessToken,
	typeId, userId, 
	handler, userData, false);
}

static bool getUserNotificationInfoListProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«NotificationUserTypeResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«NotificationUserTypeResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«NotificationUserTypeResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«NotificationUserTypeResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«NotificationUserTypeResource»", "PageResource«NotificationUserTypeResource»");
			json_node_free(pJson);

			if ("PageResource«NotificationUserTypeResource»" == "std::string") {
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

static bool getUserNotificationInfoListHelper(char * accessToken,
	std::string userId, int size, int page, std::string order, 
	void(* handler)(PageResource«NotificationUserTypeResource», Error, void* )
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


	itemAtq = stringify(&order, "std::string");
	queryParams.insert(pair<string, string>("order", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("order");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/users/{user_id}/notifications/types");
	int pos;

	string s_userId("{");
	s_userId.append("user_id");
	s_userId.append("}");
	pos = url.find(s_userId);
	url.erase(pos, s_userId.length());
	url.insert(pos, stringify(&userId, "std::string"));

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
		NetClient::easycurl(NotificationsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getUserNotificationInfoListProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (NotificationsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getUserNotificationInfoListProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __NotificationsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool NotificationsManager::getUserNotificationInfoListAsync(char * accessToken,
	std::string userId, int size, int page, std::string order, 
	void(* handler)(PageResource«NotificationUserTypeResource», Error, void* )
	, void* userData)
{
	return getUserNotificationInfoListHelper(accessToken,
	userId, size, page, order, 
	handler, userData, true);
}

bool NotificationsManager::getUserNotificationInfoListSync(char * accessToken,
	std::string userId, int size, int page, std::string order, 
	void(* handler)(PageResource«NotificationUserTypeResource», Error, void* )
	, void* userData)
{
	return getUserNotificationInfoListHelper(accessToken,
	userId, size, page, order, 
	handler, userData, false);
}

static bool getUserNotificationsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«UserNotificationResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«UserNotificationResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«UserNotificationResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«UserNotificationResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«UserNotificationResource»", "PageResource«UserNotificationResource»");
			json_node_free(pJson);

			if ("PageResource«UserNotificationResource»" == "std::string") {
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

static bool getUserNotificationsHelper(char * accessToken,
	std::string id, std::string filterStatus, int size, int page, std::string order, 
	void(* handler)(PageResource«UserNotificationResource», Error, void* )
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
	

	itemAtq = stringify(&filterStatus, "std::string");
	queryParams.insert(pair<string, string>("filter_status", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_status");
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

	string url("/users/{id}/notifications");
	int pos;

	string s_id("{");
	s_id.append("id");
	s_id.append("}");
	pos = url.find(s_id);
	url.erase(pos, s_id.length());
	url.insert(pos, stringify(&id, "std::string"));

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
		NetClient::easycurl(NotificationsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getUserNotificationsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (NotificationsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getUserNotificationsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __NotificationsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool NotificationsManager::getUserNotificationsAsync(char * accessToken,
	std::string id, std::string filterStatus, int size, int page, std::string order, 
	void(* handler)(PageResource«UserNotificationResource», Error, void* )
	, void* userData)
{
	return getUserNotificationsHelper(accessToken,
	id, filterStatus, size, page, order, 
	handler, userData, true);
}

bool NotificationsManager::getUserNotificationsSync(char * accessToken,
	std::string id, std::string filterStatus, int size, int page, std::string order, 
	void(* handler)(PageResource«UserNotificationResource», Error, void* )
	, void* userData)
{
	return getUserNotificationsHelper(accessToken,
	id, filterStatus, size, page, order, 
	handler, userData, false);
}

static bool sendNotificationProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(NotificationResource, Error, void* )
	= reinterpret_cast<void(*)(NotificationResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	NotificationResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("NotificationResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "NotificationResource", "NotificationResource");
			json_node_free(pJson);

			if ("NotificationResource" == "std::string") {
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

static bool sendNotificationHelper(char * accessToken,
	NotificationResource notification, 
	void(* handler)(NotificationResource, Error, void* )
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

	if (isprimitive("NotificationResource")) {
		node = converttoJson(&notification, "NotificationResource", "");
	}
	
	char *jsonStr =  notification.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/notifications");
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
		NetClient::easycurl(NotificationsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = sendNotificationProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (NotificationsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), sendNotificationProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __NotificationsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool NotificationsManager::sendNotificationAsync(char * accessToken,
	NotificationResource notification, 
	void(* handler)(NotificationResource, Error, void* )
	, void* userData)
{
	return sendNotificationHelper(accessToken,
	notification, 
	handler, userData, true);
}

bool NotificationsManager::sendNotificationSync(char * accessToken,
	NotificationResource notification, 
	void(* handler)(NotificationResource, Error, void* )
	, void* userData)
{
	return sendNotificationHelper(accessToken,
	notification, 
	handler, userData, false);
}

static bool setUserNotificationStatusProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool setUserNotificationStatusHelper(char * accessToken,
	std::string userId, std::string notificationId, UserNotificationStatusWrapper notification, 
	
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

	if (isprimitive("UserNotificationStatusWrapper")) {
		node = converttoJson(&notification, "UserNotificationStatusWrapper", "");
	}
	
	char *jsonStr =  notification.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/users/{user_id}/notifications/{notification_id}/status");
	int pos;

	string s_userId("{");
	s_userId.append("user_id");
	s_userId.append("}");
	pos = url.find(s_userId);
	url.erase(pos, s_userId.length());
	url.insert(pos, stringify(&userId, "std::string"));
	string s_notificationId("{");
	s_notificationId.append("notification_id");
	s_notificationId.append("}");
	pos = url.find(s_notificationId);
	url.erase(pos, s_notificationId.length());
	url.insert(pos, stringify(&notificationId, "std::string"));

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
		NetClient::easycurl(NotificationsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = setUserNotificationStatusProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (NotificationsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), setUserNotificationStatusProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __NotificationsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool NotificationsManager::setUserNotificationStatusAsync(char * accessToken,
	std::string userId, std::string notificationId, UserNotificationStatusWrapper notification, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return setUserNotificationStatusHelper(accessToken,
	userId, notificationId, notification, 
	handler, userData, true);
}

bool NotificationsManager::setUserNotificationStatusSync(char * accessToken,
	std::string userId, std::string notificationId, UserNotificationStatusWrapper notification, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return setUserNotificationStatusHelper(accessToken,
	userId, notificationId, notification, 
	handler, userData, false);
}

static bool silenceDirectNotificationsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool silenceDirectNotificationsHelper(char * accessToken,
	std::string typeId, std::string userId, ValueWrapper«boolean» silenced, 
	
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

	if (isprimitive("ValueWrapper«boolean»")) {
		node = converttoJson(&silenced, "ValueWrapper«boolean»", "");
	}
	
	char *jsonStr =  silenced.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/users/{user_id}/notifications/types/{type_id}/silenced");
	int pos;

	string s_typeId("{");
	s_typeId.append("type_id");
	s_typeId.append("}");
	pos = url.find(s_typeId);
	url.erase(pos, s_typeId.length());
	url.insert(pos, stringify(&typeId, "std::string"));
	string s_userId("{");
	s_userId.append("user_id");
	s_userId.append("}");
	pos = url.find(s_userId);
	url.erase(pos, s_userId.length());
	url.insert(pos, stringify(&userId, "std::string"));

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
		NetClient::easycurl(NotificationsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = silenceDirectNotificationsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (NotificationsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), silenceDirectNotificationsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __NotificationsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool NotificationsManager::silenceDirectNotificationsAsync(char * accessToken,
	std::string typeId, std::string userId, ValueWrapper«boolean» silenced, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return silenceDirectNotificationsHelper(accessToken,
	typeId, userId, silenced, 
	handler, userData, true);
}

bool NotificationsManager::silenceDirectNotificationsSync(char * accessToken,
	std::string typeId, std::string userId, ValueWrapper«boolean» silenced, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return silenceDirectNotificationsHelper(accessToken,
	typeId, userId, silenced, 
	handler, userData, false);
}

static bool updateNotificationTypeProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(NotificationTypeResource, Error, void* )
	= reinterpret_cast<void(*)(NotificationTypeResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	NotificationTypeResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("NotificationTypeResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "NotificationTypeResource", "NotificationTypeResource");
			json_node_free(pJson);

			if ("NotificationTypeResource" == "std::string") {
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

static bool updateNotificationTypeHelper(char * accessToken,
	std::string id, NotificationTypeResource notificationType, 
	void(* handler)(NotificationTypeResource, Error, void* )
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

	if (isprimitive("NotificationTypeResource")) {
		node = converttoJson(&notificationType, "NotificationTypeResource", "");
	}
	
	char *jsonStr =  notificationType.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/notifications/types/{id}");
	int pos;

	string s_id("{");
	s_id.append("id");
	s_id.append("}");
	pos = url.find(s_id);
	url.erase(pos, s_id.length());
	url.insert(pos, stringify(&id, "std::string"));

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
		NetClient::easycurl(NotificationsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = updateNotificationTypeProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (NotificationsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), updateNotificationTypeProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __NotificationsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool NotificationsManager::updateNotificationTypeAsync(char * accessToken,
	std::string id, NotificationTypeResource notificationType, 
	void(* handler)(NotificationTypeResource, Error, void* )
	, void* userData)
{
	return updateNotificationTypeHelper(accessToken,
	id, notificationType, 
	handler, userData, true);
}

bool NotificationsManager::updateNotificationTypeSync(char * accessToken,
	std::string id, NotificationTypeResource notificationType, 
	void(* handler)(NotificationTypeResource, Error, void* )
	, void* userData)
{
	return updateNotificationTypeHelper(accessToken,
	id, notificationType, 
	handler, userData, false);
}

