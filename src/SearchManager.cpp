#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "SearchManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


SearchManager::SearchManager()
{

}

SearchManager::~SearchManager()
{

}

static gboolean __SearchManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __SearchManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__SearchManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool searchIndexProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«Map«string,object»», Error, void* )
	= reinterpret_cast<void(*)(PageResource«Map«string,object»», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«Map«string,object»» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«Map«string,object»»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«Map«string,object»»", "PageResource«Map«string,object»»");
			json_node_free(pJson);

			if ("PageResource«Map«string,object»»" == "std::string") {
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

static bool searchIndexHelper(char * accessToken,
	std::string type, std::string query, int size, int page, 
	void(* handler)(PageResource«Map«string,object»», Error, void* )
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

	if (isprimitive("std::string")) {
		node = converttoJson(&query, "std::string", "");
	}
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/search/index/{type}");
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
	string myhttpmethod("POST");

	if(strcmp("PUT", "POST") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(SearchManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = searchIndexProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (SearchManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), searchIndexProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __SearchManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool SearchManager::searchIndexAsync(char * accessToken,
	std::string type, std::string query, int size, int page, 
	void(* handler)(PageResource«Map«string,object»», Error, void* )
	, void* userData)
{
	return searchIndexHelper(accessToken,
	type, query, size, page, 
	handler, userData, true);
}

bool SearchManager::searchIndexSync(char * accessToken,
	std::string type, std::string query, int size, int page, 
	void(* handler)(PageResource«Map«string,object»», Error, void* )
	, void* userData)
{
	return searchIndexHelper(accessToken,
	type, query, size, page, 
	handler, userData, false);
}

static bool searchIndexWithTemplateProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«Map«string,object»», Error, void* )
	= reinterpret_cast<void(*)(PageResource«Map«string,object»», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«Map«string,object»» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«Map«string,object»»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«Map«string,object»»", "PageResource«Map«string,object»»");
			json_node_free(pJson);

			if ("PageResource«Map«string,object»»" == "std::string") {
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

static bool searchIndexWithTemplateHelper(char * accessToken,
	std::string type, std::string _template, std::string query, int size, int page, 
	void(* handler)(PageResource«Map«string,object»», Error, void* )
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

	if (isprimitive("std::string")) {
		node = converttoJson(&query, "std::string", "");
	}
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/search/index/{type}/{template}");
	int pos;

	string s_type("{");
	s_type.append("type");
	s_type.append("}");
	pos = url.find(s_type);
	url.erase(pos, s_type.length());
	url.insert(pos, stringify(&type, "std::string"));
	string s__template("{");
	s__template.append("template");
	s__template.append("}");
	pos = url.find(s__template);
	url.erase(pos, s__template.length());
	url.insert(pos, stringify(&_template, "std::string"));

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
		NetClient::easycurl(SearchManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = searchIndexWithTemplateProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (SearchManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), searchIndexWithTemplateProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __SearchManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool SearchManager::searchIndexWithTemplateAsync(char * accessToken,
	std::string type, std::string _template, std::string query, int size, int page, 
	void(* handler)(PageResource«Map«string,object»», Error, void* )
	, void* userData)
{
	return searchIndexWithTemplateHelper(accessToken,
	type, _template, query, size, page, 
	handler, userData, true);
}

bool SearchManager::searchIndexWithTemplateSync(char * accessToken,
	std::string type, std::string _template, std::string query, int size, int page, 
	void(* handler)(PageResource«Map«string,object»», Error, void* )
	, void* userData)
{
	return searchIndexWithTemplateHelper(accessToken,
	type, _template, query, size, page, 
	handler, userData, false);
}

