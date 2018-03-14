#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "Templates_PropertiesManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


Templates_PropertiesManager::Templates_PropertiesManager()
{

}

Templates_PropertiesManager::~Templates_PropertiesManager()
{

}

static gboolean __Templates_PropertiesManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __Templates_PropertiesManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__Templates_PropertiesManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool getTemplatePropertyTypeProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PropertyFieldListResource, Error, void* )
	= reinterpret_cast<void(*)(PropertyFieldListResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PropertyFieldListResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PropertyFieldListResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PropertyFieldListResource", "PropertyFieldListResource");
			json_node_free(pJson);

			if ("PropertyFieldListResource" == "std::string") {
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

static bool getTemplatePropertyTypeHelper(char * accessToken,
	std::string type, 
	void(* handler)(PropertyFieldListResource, Error, void* )
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

	string url("/templates/properties/{type}");
	int pos;

	string s_type("{");
	s_type.append("type");
	s_type.append("}");
	pos = url.find(s_type);
	url.erase(pos, s_type.length());
	url.insert(pos, stringify(&type, "std::string"));

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
		NetClient::easycurl(Templates_PropertiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getTemplatePropertyTypeProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Templates_PropertiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getTemplatePropertyTypeProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Templates_PropertiesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Templates_PropertiesManager::getTemplatePropertyTypeAsync(char * accessToken,
	std::string type, 
	void(* handler)(PropertyFieldListResource, Error, void* )
	, void* userData)
{
	return getTemplatePropertyTypeHelper(accessToken,
	type, 
	handler, userData, true);
}

bool Templates_PropertiesManager::getTemplatePropertyTypeSync(char * accessToken,
	std::string type, 
	void(* handler)(PropertyFieldListResource, Error, void* )
	, void* userData)
{
	return getTemplatePropertyTypeHelper(accessToken,
	type, 
	handler, userData, false);
}

static bool getTemplatePropertyTypesProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::list<PropertyFieldListResource>, Error, void* )
	= reinterpret_cast<void(*)(std::list<PropertyFieldListResource>, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	std::list<PropertyFieldListResource> out;
	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));



		pJson = json_from_string(data, NULL);
		JsonArray * jsonarray = json_node_get_array (pJson);
		guint length = json_array_get_length (jsonarray);
		for(guint i = 0; i < length; i++){
			JsonNode* myJson = json_array_get_element (jsonarray, i);
			char * singlenodestr = json_to_string(myJson, false);
			PropertyFieldListResource singlemodel;
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

static bool getTemplatePropertyTypesHelper(char * accessToken,
	
	void(* handler)(std::list<PropertyFieldListResource>, Error, void* )
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

	string url("/templates/properties");
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
		NetClient::easycurl(Templates_PropertiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getTemplatePropertyTypesProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Templates_PropertiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getTemplatePropertyTypesProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Templates_PropertiesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Templates_PropertiesManager::getTemplatePropertyTypesAsync(char * accessToken,
	
	void(* handler)(std::list<PropertyFieldListResource>, Error, void* )
	, void* userData)
{
	return getTemplatePropertyTypesHelper(accessToken,
	
	handler, userData, true);
}

bool Templates_PropertiesManager::getTemplatePropertyTypesSync(char * accessToken,
	
	void(* handler)(std::list<PropertyFieldListResource>, Error, void* )
	, void* userData)
{
	return getTemplatePropertyTypesHelper(accessToken,
	
	handler, userData, false);
}

