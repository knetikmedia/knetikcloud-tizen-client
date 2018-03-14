#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "Auth_PermissionsManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


Auth_PermissionsManager::Auth_PermissionsManager()
{

}

Auth_PermissionsManager::~Auth_PermissionsManager()
{

}

static gboolean __Auth_PermissionsManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __Auth_PermissionsManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__Auth_PermissionsManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool createPermissionProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PermissionResource, Error, void* )
	= reinterpret_cast<void(*)(PermissionResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PermissionResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PermissionResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PermissionResource", "PermissionResource");
			json_node_free(pJson);

			if ("PermissionResource" == "std::string") {
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

static bool createPermissionHelper(char * accessToken,
	PermissionResource permissionResource, 
	void(* handler)(PermissionResource, Error, void* )
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

	if (isprimitive("PermissionResource")) {
		node = converttoJson(&permissionResource, "PermissionResource", "");
	}
	
	char *jsonStr =  permissionResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/auth/permissions");
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
		NetClient::easycurl(Auth_PermissionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = createPermissionProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Auth_PermissionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), createPermissionProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Auth_PermissionsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Auth_PermissionsManager::createPermissionAsync(char * accessToken,
	PermissionResource permissionResource, 
	void(* handler)(PermissionResource, Error, void* )
	, void* userData)
{
	return createPermissionHelper(accessToken,
	permissionResource, 
	handler, userData, true);
}

bool Auth_PermissionsManager::createPermissionSync(char * accessToken,
	PermissionResource permissionResource, 
	void(* handler)(PermissionResource, Error, void* )
	, void* userData)
{
	return createPermissionHelper(accessToken,
	permissionResource, 
	handler, userData, false);
}

static bool deletePermissionProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool deletePermissionHelper(char * accessToken,
	std::string permission, bool force, 
	
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
	

	itemAtq = stringify(&force, "bool");
	queryParams.insert(pair<string, string>("force", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("force");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/auth/permissions/{permission}");
	int pos;

	string s_permission("{");
	s_permission.append("permission");
	s_permission.append("}");
	pos = url.find(s_permission);
	url.erase(pos, s_permission.length());
	url.insert(pos, stringify(&permission, "std::string"));

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
		NetClient::easycurl(Auth_PermissionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = deletePermissionProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Auth_PermissionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), deletePermissionProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Auth_PermissionsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Auth_PermissionsManager::deletePermissionAsync(char * accessToken,
	std::string permission, bool force, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deletePermissionHelper(accessToken,
	permission, force, 
	handler, userData, true);
}

bool Auth_PermissionsManager::deletePermissionSync(char * accessToken,
	std::string permission, bool force, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deletePermissionHelper(accessToken,
	permission, force, 
	handler, userData, false);
}

static bool getPermissionProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PermissionResource, Error, void* )
	= reinterpret_cast<void(*)(PermissionResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PermissionResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PermissionResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PermissionResource", "PermissionResource");
			json_node_free(pJson);

			if ("PermissionResource" == "std::string") {
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

static bool getPermissionHelper(char * accessToken,
	std::string permission, 
	void(* handler)(PermissionResource, Error, void* )
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

	string url("/auth/permissions/{permission}");
	int pos;

	string s_permission("{");
	s_permission.append("permission");
	s_permission.append("}");
	pos = url.find(s_permission);
	url.erase(pos, s_permission.length());
	url.insert(pos, stringify(&permission, "std::string"));

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
		NetClient::easycurl(Auth_PermissionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getPermissionProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Auth_PermissionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getPermissionProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Auth_PermissionsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Auth_PermissionsManager::getPermissionAsync(char * accessToken,
	std::string permission, 
	void(* handler)(PermissionResource, Error, void* )
	, void* userData)
{
	return getPermissionHelper(accessToken,
	permission, 
	handler, userData, true);
}

bool Auth_PermissionsManager::getPermissionSync(char * accessToken,
	std::string permission, 
	void(* handler)(PermissionResource, Error, void* )
	, void* userData)
{
	return getPermissionHelper(accessToken,
	permission, 
	handler, userData, false);
}

static bool getPermissionsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«PermissionResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«PermissionResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«PermissionResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«PermissionResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«PermissionResource»", "PageResource«PermissionResource»");
			json_node_free(pJson);

			if ("PageResource«PermissionResource»" == "std::string") {
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

static bool getPermissionsHelper(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«PermissionResource», Error, void* )
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

	string url("/auth/permissions");
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
		NetClient::easycurl(Auth_PermissionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getPermissionsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Auth_PermissionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getPermissionsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Auth_PermissionsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Auth_PermissionsManager::getPermissionsAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«PermissionResource», Error, void* )
	, void* userData)
{
	return getPermissionsHelper(accessToken,
	size, page, order, 
	handler, userData, true);
}

bool Auth_PermissionsManager::getPermissionsSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«PermissionResource», Error, void* )
	, void* userData)
{
	return getPermissionsHelper(accessToken,
	size, page, order, 
	handler, userData, false);
}

static bool updatePermissionProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PermissionResource, Error, void* )
	= reinterpret_cast<void(*)(PermissionResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PermissionResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PermissionResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PermissionResource", "PermissionResource");
			json_node_free(pJson);

			if ("PermissionResource" == "std::string") {
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

static bool updatePermissionHelper(char * accessToken,
	std::string permission, PermissionResource permissionResource, 
	void(* handler)(PermissionResource, Error, void* )
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

	if (isprimitive("PermissionResource")) {
		node = converttoJson(&permissionResource, "PermissionResource", "");
	}
	
	char *jsonStr =  permissionResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/auth/permissions/{permission}");
	int pos;

	string s_permission("{");
	s_permission.append("permission");
	s_permission.append("}");
	pos = url.find(s_permission);
	url.erase(pos, s_permission.length());
	url.insert(pos, stringify(&permission, "std::string"));

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
		NetClient::easycurl(Auth_PermissionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = updatePermissionProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Auth_PermissionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), updatePermissionProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Auth_PermissionsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Auth_PermissionsManager::updatePermissionAsync(char * accessToken,
	std::string permission, PermissionResource permissionResource, 
	void(* handler)(PermissionResource, Error, void* )
	, void* userData)
{
	return updatePermissionHelper(accessToken,
	permission, permissionResource, 
	handler, userData, true);
}

bool Auth_PermissionsManager::updatePermissionSync(char * accessToken,
	std::string permission, PermissionResource permissionResource, 
	void(* handler)(PermissionResource, Error, void* )
	, void* userData)
{
	return updatePermissionHelper(accessToken,
	permission, permissionResource, 
	handler, userData, false);
}

