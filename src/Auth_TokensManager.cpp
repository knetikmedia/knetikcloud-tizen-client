#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "Auth_TokensManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


Auth_TokensManager::Auth_TokensManager()
{

}

Auth_TokensManager::~Auth_TokensManager()
{

}

static gboolean __Auth_TokensManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __Auth_TokensManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__Auth_TokensManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool deleteTokensProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool deleteTokensHelper(char * accessToken,
	std::string username, std::string clientId, 
	
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
	

	itemAtq = stringify(&username, "std::string");
	queryParams.insert(pair<string, string>("username", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("username");
	}


	itemAtq = stringify(&clientId, "std::string");
	queryParams.insert(pair<string, string>("client_id", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("client_id");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/auth/tokens");
	int pos;


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
		NetClient::easycurl(Auth_TokensManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = deleteTokensProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Auth_TokensManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), deleteTokensProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Auth_TokensManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Auth_TokensManager::deleteTokensAsync(char * accessToken,
	std::string username, std::string clientId, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteTokensHelper(accessToken,
	username, clientId, 
	handler, userData, true);
}

bool Auth_TokensManager::deleteTokensSync(char * accessToken,
	std::string username, std::string clientId, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteTokensHelper(accessToken,
	username, clientId, 
	handler, userData, false);
}

static bool getTokenProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(OauthAccessTokenResource, Error, void* )
	= reinterpret_cast<void(*)(OauthAccessTokenResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	OauthAccessTokenResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("OauthAccessTokenResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "OauthAccessTokenResource", "OauthAccessTokenResource");
			json_node_free(pJson);

			if ("OauthAccessTokenResource" == "std::string") {
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

static bool getTokenHelper(char * accessToken,
	std::string username, std::string clientId, 
	void(* handler)(OauthAccessTokenResource, Error, void* )
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

	string url("/auth/tokens/{username}/{client_id}");
	int pos;

	string s_username("{");
	s_username.append("username");
	s_username.append("}");
	pos = url.find(s_username);
	url.erase(pos, s_username.length());
	url.insert(pos, stringify(&username, "std::string"));
	string s_clientId("{");
	s_clientId.append("client_id");
	s_clientId.append("}");
	pos = url.find(s_clientId);
	url.erase(pos, s_clientId.length());
	url.insert(pos, stringify(&clientId, "std::string"));

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
		NetClient::easycurl(Auth_TokensManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getTokenProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Auth_TokensManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getTokenProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Auth_TokensManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Auth_TokensManager::getTokenAsync(char * accessToken,
	std::string username, std::string clientId, 
	void(* handler)(OauthAccessTokenResource, Error, void* )
	, void* userData)
{
	return getTokenHelper(accessToken,
	username, clientId, 
	handler, userData, true);
}

bool Auth_TokensManager::getTokenSync(char * accessToken,
	std::string username, std::string clientId, 
	void(* handler)(OauthAccessTokenResource, Error, void* )
	, void* userData)
{
	return getTokenHelper(accessToken,
	username, clientId, 
	handler, userData, false);
}

static bool getTokensProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«OauthAccessTokenResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«OauthAccessTokenResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«OauthAccessTokenResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«OauthAccessTokenResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«OauthAccessTokenResource»", "PageResource«OauthAccessTokenResource»");
			json_node_free(pJson);

			if ("PageResource«OauthAccessTokenResource»" == "std::string") {
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

static bool getTokensHelper(char * accessToken,
	std::string filterClientId, std::string filterUsername, int size, int page, std::string order, 
	void(* handler)(PageResource«OauthAccessTokenResource», Error, void* )
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
	

	itemAtq = stringify(&filterClientId, "std::string");
	queryParams.insert(pair<string, string>("filter_client_id", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_client_id");
	}


	itemAtq = stringify(&filterUsername, "std::string");
	queryParams.insert(pair<string, string>("filter_username", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_username");
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

	string url("/auth/tokens");
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
		NetClient::easycurl(Auth_TokensManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getTokensProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Auth_TokensManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getTokensProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Auth_TokensManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Auth_TokensManager::getTokensAsync(char * accessToken,
	std::string filterClientId, std::string filterUsername, int size, int page, std::string order, 
	void(* handler)(PageResource«OauthAccessTokenResource», Error, void* )
	, void* userData)
{
	return getTokensHelper(accessToken,
	filterClientId, filterUsername, size, page, order, 
	handler, userData, true);
}

bool Auth_TokensManager::getTokensSync(char * accessToken,
	std::string filterClientId, std::string filterUsername, int size, int page, std::string order, 
	void(* handler)(PageResource«OauthAccessTokenResource», Error, void* )
	, void* userData)
{
	return getTokensHelper(accessToken,
	filterClientId, filterUsername, size, page, order, 
	handler, userData, false);
}

