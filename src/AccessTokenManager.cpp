#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "AccessTokenManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


AccessTokenManager::AccessTokenManager()
{

}

AccessTokenManager::~AccessTokenManager()
{

}

static gboolean __AccessTokenManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __AccessTokenManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__AccessTokenManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool getOAuthTokenProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(OAuth2Resource, Error, void* )
	= reinterpret_cast<void(*)(OAuth2Resource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	OAuth2Resource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("OAuth2Resource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "OAuth2Resource", "OAuth2Resource");
			json_node_free(pJson);

			if ("OAuth2Resource" == "std::string") {
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

static bool getOAuthTokenHelper(char * accessToken,
	std::string grantType, std::string clientId, std::string clientSecret, std::string username, std::string password, 
	void(* handler)(OAuth2Resource, Error, void* )
	, void* userData, bool isAsync)
{

	//TODO: maybe delete headerList after its used to free up space?
	struct curl_slist *headerList = NULL;

	
	string accessHeader = "Authorization: Bearer ";
	accessHeader.append(accessToken);
	headerList = curl_slist_append(headerList, accessHeader.c_str());
	headerList = curl_slist_append(headerList, "Content-Type: application/x-www-form-urlencoded");

	map <string, string> queryParams;
	string itemAtq;
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/oauth/token");
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
		NetClient::easycurl(AccessTokenManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getOAuthTokenProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (AccessTokenManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getOAuthTokenProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __AccessTokenManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool AccessTokenManager::getOAuthTokenAsync(char * accessToken,
	std::string grantType, std::string clientId, std::string clientSecret, std::string username, std::string password, 
	void(* handler)(OAuth2Resource, Error, void* )
	, void* userData)
{
	return getOAuthTokenHelper(accessToken,
	grantType, clientId, clientSecret, username, password, 
	handler, userData, true);
}

bool AccessTokenManager::getOAuthTokenSync(char * accessToken,
	std::string grantType, std::string clientId, std::string clientSecret, std::string username, std::string password, 
	void(* handler)(OAuth2Resource, Error, void* )
	, void* userData)
{
	return getOAuthTokenHelper(accessToken,
	grantType, clientId, clientSecret, username, password, 
	handler, userData, false);
}

