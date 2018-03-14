#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "Rule_Engine_TriggersManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


Rule_Engine_TriggersManager::Rule_Engine_TriggersManager()
{

}

Rule_Engine_TriggersManager::~Rule_Engine_TriggersManager()
{

}

static gboolean __Rule_Engine_TriggersManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __Rule_Engine_TriggersManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__Rule_Engine_TriggersManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool createBRETriggerProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(BreTriggerResource, Error, void* )
	= reinterpret_cast<void(*)(BreTriggerResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	BreTriggerResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("BreTriggerResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "BreTriggerResource", "BreTriggerResource");
			json_node_free(pJson);

			if ("BreTriggerResource" == "std::string") {
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

static bool createBRETriggerHelper(char * accessToken,
	BreTriggerResource breTriggerResource, 
	void(* handler)(BreTriggerResource, Error, void* )
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

	if (isprimitive("BreTriggerResource")) {
		node = converttoJson(&breTriggerResource, "BreTriggerResource", "");
	}
	
	char *jsonStr =  breTriggerResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/bre/triggers");
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
		NetClient::easycurl(Rule_Engine_TriggersManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = createBRETriggerProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Rule_Engine_TriggersManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), createBRETriggerProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Rule_Engine_TriggersManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Rule_Engine_TriggersManager::createBRETriggerAsync(char * accessToken,
	BreTriggerResource breTriggerResource, 
	void(* handler)(BreTriggerResource, Error, void* )
	, void* userData)
{
	return createBRETriggerHelper(accessToken,
	breTriggerResource, 
	handler, userData, true);
}

bool Rule_Engine_TriggersManager::createBRETriggerSync(char * accessToken,
	BreTriggerResource breTriggerResource, 
	void(* handler)(BreTriggerResource, Error, void* )
	, void* userData)
{
	return createBRETriggerHelper(accessToken,
	breTriggerResource, 
	handler, userData, false);
}

static bool deleteBRETriggerProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool deleteBRETriggerHelper(char * accessToken,
	std::string eventName, 
	
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

	string url("/bre/triggers/{event_name}");
	int pos;

	string s_eventName("{");
	s_eventName.append("event_name");
	s_eventName.append("}");
	pos = url.find(s_eventName);
	url.erase(pos, s_eventName.length());
	url.insert(pos, stringify(&eventName, "std::string"));

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
		NetClient::easycurl(Rule_Engine_TriggersManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = deleteBRETriggerProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Rule_Engine_TriggersManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), deleteBRETriggerProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Rule_Engine_TriggersManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Rule_Engine_TriggersManager::deleteBRETriggerAsync(char * accessToken,
	std::string eventName, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteBRETriggerHelper(accessToken,
	eventName, 
	handler, userData, true);
}

bool Rule_Engine_TriggersManager::deleteBRETriggerSync(char * accessToken,
	std::string eventName, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteBRETriggerHelper(accessToken,
	eventName, 
	handler, userData, false);
}

static bool getBRETriggerProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(BreTriggerResource, Error, void* )
	= reinterpret_cast<void(*)(BreTriggerResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	BreTriggerResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("BreTriggerResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "BreTriggerResource", "BreTriggerResource");
			json_node_free(pJson);

			if ("BreTriggerResource" == "std::string") {
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

static bool getBRETriggerHelper(char * accessToken,
	std::string eventName, 
	void(* handler)(BreTriggerResource, Error, void* )
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

	string url("/bre/triggers/{event_name}");
	int pos;

	string s_eventName("{");
	s_eventName.append("event_name");
	s_eventName.append("}");
	pos = url.find(s_eventName);
	url.erase(pos, s_eventName.length());
	url.insert(pos, stringify(&eventName, "std::string"));

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
		NetClient::easycurl(Rule_Engine_TriggersManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getBRETriggerProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Rule_Engine_TriggersManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getBRETriggerProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Rule_Engine_TriggersManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Rule_Engine_TriggersManager::getBRETriggerAsync(char * accessToken,
	std::string eventName, 
	void(* handler)(BreTriggerResource, Error, void* )
	, void* userData)
{
	return getBRETriggerHelper(accessToken,
	eventName, 
	handler, userData, true);
}

bool Rule_Engine_TriggersManager::getBRETriggerSync(char * accessToken,
	std::string eventName, 
	void(* handler)(BreTriggerResource, Error, void* )
	, void* userData)
{
	return getBRETriggerHelper(accessToken,
	eventName, 
	handler, userData, false);
}

static bool getBRETriggersProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«BreTriggerResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«BreTriggerResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«BreTriggerResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«BreTriggerResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«BreTriggerResource»", "PageResource«BreTriggerResource»");
			json_node_free(pJson);

			if ("PageResource«BreTriggerResource»" == "std::string") {
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

static bool getBRETriggersHelper(char * accessToken,
	bool filterSystem, std::string filterCategory, std::string filterTags, std::string filterName, std::string filterSearch, int size, int page, 
	void(* handler)(PageResource«BreTriggerResource», Error, void* )
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
	

	itemAtq = stringify(&filterSystem, "bool");
	queryParams.insert(pair<string, string>("filter_system", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_system");
	}


	itemAtq = stringify(&filterCategory, "std::string");
	queryParams.insert(pair<string, string>("filter_category", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_category");
	}


	itemAtq = stringify(&filterTags, "std::string");
	queryParams.insert(pair<string, string>("filter_tags", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_tags");
	}


	itemAtq = stringify(&filterName, "std::string");
	queryParams.insert(pair<string, string>("filter_name", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_name");
	}


	itemAtq = stringify(&filterSearch, "std::string");
	queryParams.insert(pair<string, string>("filter_search", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_search");
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

	string url("/bre/triggers");
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
		NetClient::easycurl(Rule_Engine_TriggersManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getBRETriggersProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Rule_Engine_TriggersManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getBRETriggersProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Rule_Engine_TriggersManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Rule_Engine_TriggersManager::getBRETriggersAsync(char * accessToken,
	bool filterSystem, std::string filterCategory, std::string filterTags, std::string filterName, std::string filterSearch, int size, int page, 
	void(* handler)(PageResource«BreTriggerResource», Error, void* )
	, void* userData)
{
	return getBRETriggersHelper(accessToken,
	filterSystem, filterCategory, filterTags, filterName, filterSearch, size, page, 
	handler, userData, true);
}

bool Rule_Engine_TriggersManager::getBRETriggersSync(char * accessToken,
	bool filterSystem, std::string filterCategory, std::string filterTags, std::string filterName, std::string filterSearch, int size, int page, 
	void(* handler)(PageResource«BreTriggerResource», Error, void* )
	, void* userData)
{
	return getBRETriggersHelper(accessToken,
	filterSystem, filterCategory, filterTags, filterName, filterSearch, size, page, 
	handler, userData, false);
}

static bool updateBRETriggerProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(BreTriggerResource, Error, void* )
	= reinterpret_cast<void(*)(BreTriggerResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	BreTriggerResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("BreTriggerResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "BreTriggerResource", "BreTriggerResource");
			json_node_free(pJson);

			if ("BreTriggerResource" == "std::string") {
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

static bool updateBRETriggerHelper(char * accessToken,
	std::string eventName, BreTriggerResource breTriggerResource, 
	void(* handler)(BreTriggerResource, Error, void* )
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

	if (isprimitive("BreTriggerResource")) {
		node = converttoJson(&breTriggerResource, "BreTriggerResource", "");
	}
	
	char *jsonStr =  breTriggerResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/bre/triggers/{event_name}");
	int pos;

	string s_eventName("{");
	s_eventName.append("event_name");
	s_eventName.append("}");
	pos = url.find(s_eventName);
	url.erase(pos, s_eventName.length());
	url.insert(pos, stringify(&eventName, "std::string"));

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
		NetClient::easycurl(Rule_Engine_TriggersManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = updateBRETriggerProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Rule_Engine_TriggersManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), updateBRETriggerProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Rule_Engine_TriggersManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Rule_Engine_TriggersManager::updateBRETriggerAsync(char * accessToken,
	std::string eventName, BreTriggerResource breTriggerResource, 
	void(* handler)(BreTriggerResource, Error, void* )
	, void* userData)
{
	return updateBRETriggerHelper(accessToken,
	eventName, breTriggerResource, 
	handler, userData, true);
}

bool Rule_Engine_TriggersManager::updateBRETriggerSync(char * accessToken,
	std::string eventName, BreTriggerResource breTriggerResource, 
	void(* handler)(BreTriggerResource, Error, void* )
	, void* userData)
{
	return updateBRETriggerHelper(accessToken,
	eventName, breTriggerResource, 
	handler, userData, false);
}

