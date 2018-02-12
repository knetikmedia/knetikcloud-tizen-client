#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "LogsManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


LogsManager::LogsManager()
{

}

LogsManager::~LogsManager()
{

}

static gboolean __LogsManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __LogsManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__LogsManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool addUserLogProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool addUserLogHelper(char * accessToken,
	UserActionLog logEntry, 
	
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

	if (isprimitive("UserActionLog")) {
		node = converttoJson(&logEntry, "UserActionLog", "");
	}
	
	char *jsonStr =  logEntry.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/audit/logs");
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
		NetClient::easycurl(LogsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = addUserLogProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (LogsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), addUserLogProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __LogsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool LogsManager::addUserLogAsync(char * accessToken,
	UserActionLog logEntry, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return addUserLogHelper(accessToken,
	logEntry, 
	handler, userData, true);
}

bool LogsManager::addUserLogSync(char * accessToken,
	UserActionLog logEntry, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return addUserLogHelper(accessToken,
	logEntry, 
	handler, userData, false);
}

static bool getBREEventLogProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(BreEventLog, Error, void* )
	= reinterpret_cast<void(*)(BreEventLog, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	BreEventLog out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("BreEventLog")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "BreEventLog", "BreEventLog");
			json_node_free(pJson);

			if ("BreEventLog" == "std::string") {
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

static bool getBREEventLogHelper(char * accessToken,
	std::string id, 
	void(* handler)(BreEventLog, Error, void* )
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

	string url("/bre/logs/event-log/{id}");
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
		NetClient::easycurl(LogsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getBREEventLogProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (LogsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getBREEventLogProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __LogsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool LogsManager::getBREEventLogAsync(char * accessToken,
	std::string id, 
	void(* handler)(BreEventLog, Error, void* )
	, void* userData)
{
	return getBREEventLogHelper(accessToken,
	id, 
	handler, userData, true);
}

bool LogsManager::getBREEventLogSync(char * accessToken,
	std::string id, 
	void(* handler)(BreEventLog, Error, void* )
	, void* userData)
{
	return getBREEventLogHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool getBREEventLogsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«BreEventLog», Error, void* )
	= reinterpret_cast<void(*)(PageResource«BreEventLog», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«BreEventLog» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«BreEventLog»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«BreEventLog»", "PageResource«BreEventLog»");
			json_node_free(pJson);

			if ("PageResource«BreEventLog»" == "std::string") {
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

static bool getBREEventLogsHelper(char * accessToken,
	std::string filterStartDate, std::string filterEventName, std::string filterEventId, int size, int page, std::string order, std::string filterRuleId, 
	void(* handler)(PageResource«BreEventLog», Error, void* )
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
	

	itemAtq = stringify(&filterStartDate, "std::string");
	queryParams.insert(pair<string, string>("filter_start_date", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_start_date");
	}


	itemAtq = stringify(&filterEventName, "std::string");
	queryParams.insert(pair<string, string>("filter_event_name", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_event_name");
	}


	itemAtq = stringify(&filterEventId, "std::string");
	queryParams.insert(pair<string, string>("filter_event_id", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_event_id");
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


	itemAtq = stringify(&filterRuleId, "std::string");
	queryParams.insert(pair<string, string>("filter_rule_id", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_rule_id");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/bre/logs/event-log");
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
		NetClient::easycurl(LogsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getBREEventLogsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (LogsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getBREEventLogsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __LogsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool LogsManager::getBREEventLogsAsync(char * accessToken,
	std::string filterStartDate, std::string filterEventName, std::string filterEventId, int size, int page, std::string order, std::string filterRuleId, 
	void(* handler)(PageResource«BreEventLog», Error, void* )
	, void* userData)
{
	return getBREEventLogsHelper(accessToken,
	filterStartDate, filterEventName, filterEventId, size, page, order, filterRuleId, 
	handler, userData, true);
}

bool LogsManager::getBREEventLogsSync(char * accessToken,
	std::string filterStartDate, std::string filterEventName, std::string filterEventId, int size, int page, std::string order, std::string filterRuleId, 
	void(* handler)(PageResource«BreEventLog», Error, void* )
	, void* userData)
{
	return getBREEventLogsHelper(accessToken,
	filterStartDate, filterEventName, filterEventId, size, page, order, filterRuleId, 
	handler, userData, false);
}

static bool getBREForwardLogProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(ForwardLog, Error, void* )
	= reinterpret_cast<void(*)(ForwardLog, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	ForwardLog out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("ForwardLog")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "ForwardLog", "ForwardLog");
			json_node_free(pJson);

			if ("ForwardLog" == "std::string") {
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

static bool getBREForwardLogHelper(char * accessToken,
	std::string id, 
	void(* handler)(ForwardLog, Error, void* )
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

	string url("/bre/logs/forward-log/{id}");
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
		NetClient::easycurl(LogsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getBREForwardLogProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (LogsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getBREForwardLogProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __LogsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool LogsManager::getBREForwardLogAsync(char * accessToken,
	std::string id, 
	void(* handler)(ForwardLog, Error, void* )
	, void* userData)
{
	return getBREForwardLogHelper(accessToken,
	id, 
	handler, userData, true);
}

bool LogsManager::getBREForwardLogSync(char * accessToken,
	std::string id, 
	void(* handler)(ForwardLog, Error, void* )
	, void* userData)
{
	return getBREForwardLogHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool getBREForwardLogsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«ForwardLog», Error, void* )
	= reinterpret_cast<void(*)(PageResource«ForwardLog», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«ForwardLog» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«ForwardLog»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«ForwardLog»", "PageResource«ForwardLog»");
			json_node_free(pJson);

			if ("PageResource«ForwardLog»" == "std::string") {
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

static bool getBREForwardLogsHelper(char * accessToken,
	std::string filterStartDate, std::string filterEndDate, int filterStatusCode, int filterUrl, int size, int page, std::string order, 
	void(* handler)(PageResource«ForwardLog», Error, void* )
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
	

	itemAtq = stringify(&filterStartDate, "std::string");
	queryParams.insert(pair<string, string>("filter_start_date", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_start_date");
	}


	itemAtq = stringify(&filterEndDate, "std::string");
	queryParams.insert(pair<string, string>("filter_end_date", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_end_date");
	}


	itemAtq = stringify(&filterStatusCode, "int");
	queryParams.insert(pair<string, string>("filter_status_code", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_status_code");
	}


	itemAtq = stringify(&filterUrl, "int");
	queryParams.insert(pair<string, string>("filter_url", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_url");
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

	string url("/bre/logs/forward-log");
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
		NetClient::easycurl(LogsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getBREForwardLogsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (LogsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getBREForwardLogsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __LogsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool LogsManager::getBREForwardLogsAsync(char * accessToken,
	std::string filterStartDate, std::string filterEndDate, int filterStatusCode, int filterUrl, int size, int page, std::string order, 
	void(* handler)(PageResource«ForwardLog», Error, void* )
	, void* userData)
{
	return getBREForwardLogsHelper(accessToken,
	filterStartDate, filterEndDate, filterStatusCode, filterUrl, size, page, order, 
	handler, userData, true);
}

bool LogsManager::getBREForwardLogsSync(char * accessToken,
	std::string filterStartDate, std::string filterEndDate, int filterStatusCode, int filterUrl, int size, int page, std::string order, 
	void(* handler)(PageResource«ForwardLog», Error, void* )
	, void* userData)
{
	return getBREForwardLogsHelper(accessToken,
	filterStartDate, filterEndDate, filterStatusCode, filterUrl, size, page, order, 
	handler, userData, false);
}

static bool getUserLogProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(UserActionLog, Error, void* )
	= reinterpret_cast<void(*)(UserActionLog, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	UserActionLog out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("UserActionLog")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "UserActionLog", "UserActionLog");
			json_node_free(pJson);

			if ("UserActionLog" == "std::string") {
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

static bool getUserLogHelper(char * accessToken,
	std::string id, 
	void(* handler)(UserActionLog, Error, void* )
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

	string url("/audit/logs/{id}");
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
		NetClient::easycurl(LogsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getUserLogProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (LogsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getUserLogProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __LogsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool LogsManager::getUserLogAsync(char * accessToken,
	std::string id, 
	void(* handler)(UserActionLog, Error, void* )
	, void* userData)
{
	return getUserLogHelper(accessToken,
	id, 
	handler, userData, true);
}

bool LogsManager::getUserLogSync(char * accessToken,
	std::string id, 
	void(* handler)(UserActionLog, Error, void* )
	, void* userData)
{
	return getUserLogHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool getUserLogsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«UserActionLog», Error, void* )
	= reinterpret_cast<void(*)(PageResource«UserActionLog», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«UserActionLog» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«UserActionLog»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«UserActionLog»", "PageResource«UserActionLog»");
			json_node_free(pJson);

			if ("PageResource«UserActionLog»" == "std::string") {
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

static bool getUserLogsHelper(char * accessToken,
	int filterUser, std::string filterActionName, int size, int page, std::string order, 
	void(* handler)(PageResource«UserActionLog», Error, void* )
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
	

	itemAtq = stringify(&filterUser, "int");
	queryParams.insert(pair<string, string>("filter_user", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_user");
	}


	itemAtq = stringify(&filterActionName, "std::string");
	queryParams.insert(pair<string, string>("filter_action_name", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_action_name");
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

	string url("/audit/logs");
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
		NetClient::easycurl(LogsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getUserLogsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (LogsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getUserLogsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __LogsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool LogsManager::getUserLogsAsync(char * accessToken,
	int filterUser, std::string filterActionName, int size, int page, std::string order, 
	void(* handler)(PageResource«UserActionLog», Error, void* )
	, void* userData)
{
	return getUserLogsHelper(accessToken,
	filterUser, filterActionName, size, page, order, 
	handler, userData, true);
}

bool LogsManager::getUserLogsSync(char * accessToken,
	int filterUser, std::string filterActionName, int size, int page, std::string order, 
	void(* handler)(PageResource«UserActionLog», Error, void* )
	, void* userData)
{
	return getUserLogsHelper(accessToken,
	filterUser, filterActionName, size, page, order, 
	handler, userData, false);
}

