#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "Media_ModerationManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


Media_ModerationManager::Media_ModerationManager()
{

}

Media_ModerationManager::~Media_ModerationManager()
{

}

static gboolean __Media_ModerationManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __Media_ModerationManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__Media_ModerationManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool addFlagProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(FlagResource, Error, void* )
	= reinterpret_cast<void(*)(FlagResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	FlagResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("FlagResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "FlagResource", "FlagResource");
			json_node_free(pJson);

			if ("FlagResource" == "std::string") {
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

static bool addFlagHelper(char * accessToken,
	FlagResource flagResource, 
	void(* handler)(FlagResource, Error, void* )
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

	if (isprimitive("FlagResource")) {
		node = converttoJson(&flagResource, "FlagResource", "");
	}
	
	char *jsonStr =  flagResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/moderation/flags");
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
		NetClient::easycurl(Media_ModerationManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = addFlagProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_ModerationManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), addFlagProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_ModerationManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_ModerationManager::addFlagAsync(char * accessToken,
	FlagResource flagResource, 
	void(* handler)(FlagResource, Error, void* )
	, void* userData)
{
	return addFlagHelper(accessToken,
	flagResource, 
	handler, userData, true);
}

bool Media_ModerationManager::addFlagSync(char * accessToken,
	FlagResource flagResource, 
	void(* handler)(FlagResource, Error, void* )
	, void* userData)
{
	return addFlagHelper(accessToken,
	flagResource, 
	handler, userData, false);
}

static bool deleteFlagProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool deleteFlagHelper(char * accessToken,
	std::string contextName, std::string contextId, int userId, 
	
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
	

	itemAtq = stringify(&contextName, "std::string");
	queryParams.insert(pair<string, string>("context_name", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("context_name");
	}


	itemAtq = stringify(&contextId, "std::string");
	queryParams.insert(pair<string, string>("context_id", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("context_id");
	}


	itemAtq = stringify(&userId, "int");
	queryParams.insert(pair<string, string>("user_id", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("user_id");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/moderation/flags");
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
		NetClient::easycurl(Media_ModerationManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = deleteFlagProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_ModerationManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), deleteFlagProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_ModerationManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_ModerationManager::deleteFlagAsync(char * accessToken,
	std::string contextName, std::string contextId, int userId, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteFlagHelper(accessToken,
	contextName, contextId, userId, 
	handler, userData, true);
}

bool Media_ModerationManager::deleteFlagSync(char * accessToken,
	std::string contextName, std::string contextId, int userId, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteFlagHelper(accessToken,
	contextName, contextId, userId, 
	handler, userData, false);
}

static bool getFlagsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«FlagResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«FlagResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«FlagResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«FlagResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«FlagResource»", "PageResource«FlagResource»");
			json_node_free(pJson);

			if ("PageResource«FlagResource»" == "std::string") {
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

static bool getFlagsHelper(char * accessToken,
	std::string filterContext, std::string filterContextId, int filterUserId, int size, int page, 
	void(* handler)(PageResource«FlagResource», Error, void* )
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
	

	itemAtq = stringify(&filterContext, "std::string");
	queryParams.insert(pair<string, string>("filter_context", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_context");
	}


	itemAtq = stringify(&filterContextId, "std::string");
	queryParams.insert(pair<string, string>("filter_context_id", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_context_id");
	}


	itemAtq = stringify(&filterUserId, "int");
	queryParams.insert(pair<string, string>("filter_user_id", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_user_id");
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

	string url("/moderation/flags");
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
		NetClient::easycurl(Media_ModerationManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getFlagsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_ModerationManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getFlagsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_ModerationManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_ModerationManager::getFlagsAsync(char * accessToken,
	std::string filterContext, std::string filterContextId, int filterUserId, int size, int page, 
	void(* handler)(PageResource«FlagResource», Error, void* )
	, void* userData)
{
	return getFlagsHelper(accessToken,
	filterContext, filterContextId, filterUserId, size, page, 
	handler, userData, true);
}

bool Media_ModerationManager::getFlagsSync(char * accessToken,
	std::string filterContext, std::string filterContextId, int filterUserId, int size, int page, 
	void(* handler)(PageResource«FlagResource», Error, void* )
	, void* userData)
{
	return getFlagsHelper(accessToken,
	filterContext, filterContextId, filterUserId, size, page, 
	handler, userData, false);
}

static bool getModerationReportProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(FlagReportResource, Error, void* )
	= reinterpret_cast<void(*)(FlagReportResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	FlagReportResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("FlagReportResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "FlagReportResource", "FlagReportResource");
			json_node_free(pJson);

			if ("FlagReportResource" == "std::string") {
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

static bool getModerationReportHelper(char * accessToken,
	long long id, 
	void(* handler)(FlagReportResource, Error, void* )
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

	string url("/moderation/reports/{id}");
	int pos;

	string s_id("{");
	s_id.append("id");
	s_id.append("}");
	pos = url.find(s_id);
	url.erase(pos, s_id.length());
	url.insert(pos, stringify(&id, "long long"));

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
		NetClient::easycurl(Media_ModerationManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getModerationReportProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_ModerationManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getModerationReportProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_ModerationManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_ModerationManager::getModerationReportAsync(char * accessToken,
	long long id, 
	void(* handler)(FlagReportResource, Error, void* )
	, void* userData)
{
	return getModerationReportHelper(accessToken,
	id, 
	handler, userData, true);
}

bool Media_ModerationManager::getModerationReportSync(char * accessToken,
	long long id, 
	void(* handler)(FlagReportResource, Error, void* )
	, void* userData)
{
	return getModerationReportHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool getModerationReportsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«FlagReportResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«FlagReportResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«FlagReportResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«FlagReportResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«FlagReportResource»", "PageResource«FlagReportResource»");
			json_node_free(pJson);

			if ("PageResource«FlagReportResource»" == "std::string") {
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

static bool getModerationReportsHelper(char * accessToken,
	bool excludeResolved, std::string filterContext, std::string filterContextId, int size, int page, std::string order, 
	void(* handler)(PageResource«FlagReportResource», Error, void* )
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
	

	itemAtq = stringify(&excludeResolved, "bool");
	queryParams.insert(pair<string, string>("exclude_resolved", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("exclude_resolved");
	}


	itemAtq = stringify(&filterContext, "std::string");
	queryParams.insert(pair<string, string>("filter_context", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_context");
	}


	itemAtq = stringify(&filterContextId, "std::string");
	queryParams.insert(pair<string, string>("filter_context_id", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_context_id");
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

	string url("/moderation/reports");
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
		NetClient::easycurl(Media_ModerationManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getModerationReportsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_ModerationManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getModerationReportsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_ModerationManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_ModerationManager::getModerationReportsAsync(char * accessToken,
	bool excludeResolved, std::string filterContext, std::string filterContextId, int size, int page, std::string order, 
	void(* handler)(PageResource«FlagReportResource», Error, void* )
	, void* userData)
{
	return getModerationReportsHelper(accessToken,
	excludeResolved, filterContext, filterContextId, size, page, order, 
	handler, userData, true);
}

bool Media_ModerationManager::getModerationReportsSync(char * accessToken,
	bool excludeResolved, std::string filterContext, std::string filterContextId, int size, int page, std::string order, 
	void(* handler)(PageResource«FlagReportResource», Error, void* )
	, void* userData)
{
	return getModerationReportsHelper(accessToken,
	excludeResolved, filterContext, filterContextId, size, page, order, 
	handler, userData, false);
}

static bool updateModerationReportProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool updateModerationReportHelper(char * accessToken,
	long long id, FlagReportResource flagReportResource, 
	
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

	if (isprimitive("FlagReportResource")) {
		node = converttoJson(&flagReportResource, "FlagReportResource", "");
	}
	
	char *jsonStr =  flagReportResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/moderation/reports/{id}");
	int pos;

	string s_id("{");
	s_id.append("id");
	s_id.append("}");
	pos = url.find(s_id);
	url.erase(pos, s_id.length());
	url.insert(pos, stringify(&id, "long long"));

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
		NetClient::easycurl(Media_ModerationManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = updateModerationReportProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_ModerationManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), updateModerationReportProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_ModerationManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_ModerationManager::updateModerationReportAsync(char * accessToken,
	long long id, FlagReportResource flagReportResource, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return updateModerationReportHelper(accessToken,
	id, flagReportResource, 
	handler, userData, true);
}

bool Media_ModerationManager::updateModerationReportSync(char * accessToken,
	long long id, FlagReportResource flagReportResource, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return updateModerationReportHelper(accessToken,
	id, flagReportResource, 
	handler, userData, false);
}

