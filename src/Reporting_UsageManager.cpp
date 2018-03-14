#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "Reporting_UsageManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


Reporting_UsageManager::Reporting_UsageManager()
{

}

Reporting_UsageManager::~Reporting_UsageManager()
{

}

static gboolean __Reporting_UsageManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __Reporting_UsageManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__Reporting_UsageManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool getUsageByDayProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«UsageInfo», Error, void* )
	= reinterpret_cast<void(*)(PageResource«UsageInfo», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«UsageInfo» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«UsageInfo»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«UsageInfo»", "PageResource«UsageInfo»");
			json_node_free(pJson);

			if ("PageResource«UsageInfo»" == "std::string") {
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

static bool getUsageByDayHelper(char * accessToken,
	long long startDate, long long endDate, bool combineEndpoints, std::string method, std::string url, int size, int page, 
	void(* handler)(PageResource«UsageInfo», Error, void* )
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
	

	itemAtq = stringify(&startDate, "long long");
	queryParams.insert(pair<string, string>("start_date", itemAtq));


	itemAtq = stringify(&endDate, "long long");
	queryParams.insert(pair<string, string>("end_date", itemAtq));


	itemAtq = stringify(&combineEndpoints, "bool");
	queryParams.insert(pair<string, string>("combine_endpoints", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("combine_endpoints");
	}


	itemAtq = stringify(&method, "std::string");
	queryParams.insert(pair<string, string>("method", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("method");
	}


	itemAtq = stringify(&url, "std::string");
	queryParams.insert(pair<string, string>("url", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("url");
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

	string url("/reporting/usage/day");
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
		NetClient::easycurl(Reporting_UsageManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getUsageByDayProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Reporting_UsageManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getUsageByDayProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Reporting_UsageManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Reporting_UsageManager::getUsageByDayAsync(char * accessToken,
	long long startDate, long long endDate, bool combineEndpoints, std::string method, std::string url, int size, int page, 
	void(* handler)(PageResource«UsageInfo», Error, void* )
	, void* userData)
{
	return getUsageByDayHelper(accessToken,
	startDate, endDate, combineEndpoints, method, url, size, page, 
	handler, userData, true);
}

bool Reporting_UsageManager::getUsageByDaySync(char * accessToken,
	long long startDate, long long endDate, bool combineEndpoints, std::string method, std::string url, int size, int page, 
	void(* handler)(PageResource«UsageInfo», Error, void* )
	, void* userData)
{
	return getUsageByDayHelper(accessToken,
	startDate, endDate, combineEndpoints, method, url, size, page, 
	handler, userData, false);
}

static bool getUsageByHourProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«UsageInfo», Error, void* )
	= reinterpret_cast<void(*)(PageResource«UsageInfo», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«UsageInfo» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«UsageInfo»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«UsageInfo»", "PageResource«UsageInfo»");
			json_node_free(pJson);

			if ("PageResource«UsageInfo»" == "std::string") {
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

static bool getUsageByHourHelper(char * accessToken,
	long long startDate, long long endDate, bool combineEndpoints, std::string method, std::string url, int size, int page, 
	void(* handler)(PageResource«UsageInfo», Error, void* )
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
	

	itemAtq = stringify(&startDate, "long long");
	queryParams.insert(pair<string, string>("start_date", itemAtq));


	itemAtq = stringify(&endDate, "long long");
	queryParams.insert(pair<string, string>("end_date", itemAtq));


	itemAtq = stringify(&combineEndpoints, "bool");
	queryParams.insert(pair<string, string>("combine_endpoints", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("combine_endpoints");
	}


	itemAtq = stringify(&method, "std::string");
	queryParams.insert(pair<string, string>("method", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("method");
	}


	itemAtq = stringify(&url, "std::string");
	queryParams.insert(pair<string, string>("url", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("url");
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

	string url("/reporting/usage/hour");
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
		NetClient::easycurl(Reporting_UsageManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getUsageByHourProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Reporting_UsageManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getUsageByHourProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Reporting_UsageManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Reporting_UsageManager::getUsageByHourAsync(char * accessToken,
	long long startDate, long long endDate, bool combineEndpoints, std::string method, std::string url, int size, int page, 
	void(* handler)(PageResource«UsageInfo», Error, void* )
	, void* userData)
{
	return getUsageByHourHelper(accessToken,
	startDate, endDate, combineEndpoints, method, url, size, page, 
	handler, userData, true);
}

bool Reporting_UsageManager::getUsageByHourSync(char * accessToken,
	long long startDate, long long endDate, bool combineEndpoints, std::string method, std::string url, int size, int page, 
	void(* handler)(PageResource«UsageInfo», Error, void* )
	, void* userData)
{
	return getUsageByHourHelper(accessToken,
	startDate, endDate, combineEndpoints, method, url, size, page, 
	handler, userData, false);
}

static bool getUsageByMinuteProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«UsageInfo», Error, void* )
	= reinterpret_cast<void(*)(PageResource«UsageInfo», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«UsageInfo» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«UsageInfo»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«UsageInfo»", "PageResource«UsageInfo»");
			json_node_free(pJson);

			if ("PageResource«UsageInfo»" == "std::string") {
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

static bool getUsageByMinuteHelper(char * accessToken,
	long long startDate, long long endDate, bool combineEndpoints, std::string method, std::string url, int size, int page, 
	void(* handler)(PageResource«UsageInfo», Error, void* )
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
	

	itemAtq = stringify(&startDate, "long long");
	queryParams.insert(pair<string, string>("start_date", itemAtq));


	itemAtq = stringify(&endDate, "long long");
	queryParams.insert(pair<string, string>("end_date", itemAtq));


	itemAtq = stringify(&combineEndpoints, "bool");
	queryParams.insert(pair<string, string>("combine_endpoints", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("combine_endpoints");
	}


	itemAtq = stringify(&method, "std::string");
	queryParams.insert(pair<string, string>("method", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("method");
	}


	itemAtq = stringify(&url, "std::string");
	queryParams.insert(pair<string, string>("url", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("url");
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

	string url("/reporting/usage/minute");
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
		NetClient::easycurl(Reporting_UsageManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getUsageByMinuteProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Reporting_UsageManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getUsageByMinuteProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Reporting_UsageManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Reporting_UsageManager::getUsageByMinuteAsync(char * accessToken,
	long long startDate, long long endDate, bool combineEndpoints, std::string method, std::string url, int size, int page, 
	void(* handler)(PageResource«UsageInfo», Error, void* )
	, void* userData)
{
	return getUsageByMinuteHelper(accessToken,
	startDate, endDate, combineEndpoints, method, url, size, page, 
	handler, userData, true);
}

bool Reporting_UsageManager::getUsageByMinuteSync(char * accessToken,
	long long startDate, long long endDate, bool combineEndpoints, std::string method, std::string url, int size, int page, 
	void(* handler)(PageResource«UsageInfo», Error, void* )
	, void* userData)
{
	return getUsageByMinuteHelper(accessToken,
	startDate, endDate, combineEndpoints, method, url, size, page, 
	handler, userData, false);
}

static bool getUsageByMonthProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«UsageInfo», Error, void* )
	= reinterpret_cast<void(*)(PageResource«UsageInfo», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«UsageInfo» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«UsageInfo»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«UsageInfo»", "PageResource«UsageInfo»");
			json_node_free(pJson);

			if ("PageResource«UsageInfo»" == "std::string") {
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

static bool getUsageByMonthHelper(char * accessToken,
	long long startDate, long long endDate, bool combineEndpoints, std::string method, std::string url, int size, int page, 
	void(* handler)(PageResource«UsageInfo», Error, void* )
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
	

	itemAtq = stringify(&startDate, "long long");
	queryParams.insert(pair<string, string>("start_date", itemAtq));


	itemAtq = stringify(&endDate, "long long");
	queryParams.insert(pair<string, string>("end_date", itemAtq));


	itemAtq = stringify(&combineEndpoints, "bool");
	queryParams.insert(pair<string, string>("combine_endpoints", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("combine_endpoints");
	}


	itemAtq = stringify(&method, "std::string");
	queryParams.insert(pair<string, string>("method", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("method");
	}


	itemAtq = stringify(&url, "std::string");
	queryParams.insert(pair<string, string>("url", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("url");
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

	string url("/reporting/usage/month");
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
		NetClient::easycurl(Reporting_UsageManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getUsageByMonthProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Reporting_UsageManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getUsageByMonthProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Reporting_UsageManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Reporting_UsageManager::getUsageByMonthAsync(char * accessToken,
	long long startDate, long long endDate, bool combineEndpoints, std::string method, std::string url, int size, int page, 
	void(* handler)(PageResource«UsageInfo», Error, void* )
	, void* userData)
{
	return getUsageByMonthHelper(accessToken,
	startDate, endDate, combineEndpoints, method, url, size, page, 
	handler, userData, true);
}

bool Reporting_UsageManager::getUsageByMonthSync(char * accessToken,
	long long startDate, long long endDate, bool combineEndpoints, std::string method, std::string url, int size, int page, 
	void(* handler)(PageResource«UsageInfo», Error, void* )
	, void* userData)
{
	return getUsageByMonthHelper(accessToken,
	startDate, endDate, combineEndpoints, method, url, size, page, 
	handler, userData, false);
}

static bool getUsageByYearProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«UsageInfo», Error, void* )
	= reinterpret_cast<void(*)(PageResource«UsageInfo», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«UsageInfo» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«UsageInfo»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«UsageInfo»", "PageResource«UsageInfo»");
			json_node_free(pJson);

			if ("PageResource«UsageInfo»" == "std::string") {
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

static bool getUsageByYearHelper(char * accessToken,
	long long startDate, long long endDate, bool combineEndpoints, std::string method, std::string url, int size, int page, 
	void(* handler)(PageResource«UsageInfo», Error, void* )
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
	

	itemAtq = stringify(&startDate, "long long");
	queryParams.insert(pair<string, string>("start_date", itemAtq));


	itemAtq = stringify(&endDate, "long long");
	queryParams.insert(pair<string, string>("end_date", itemAtq));


	itemAtq = stringify(&combineEndpoints, "bool");
	queryParams.insert(pair<string, string>("combine_endpoints", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("combine_endpoints");
	}


	itemAtq = stringify(&method, "std::string");
	queryParams.insert(pair<string, string>("method", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("method");
	}


	itemAtq = stringify(&url, "std::string");
	queryParams.insert(pair<string, string>("url", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("url");
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

	string url("/reporting/usage/year");
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
		NetClient::easycurl(Reporting_UsageManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getUsageByYearProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Reporting_UsageManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getUsageByYearProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Reporting_UsageManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Reporting_UsageManager::getUsageByYearAsync(char * accessToken,
	long long startDate, long long endDate, bool combineEndpoints, std::string method, std::string url, int size, int page, 
	void(* handler)(PageResource«UsageInfo», Error, void* )
	, void* userData)
{
	return getUsageByYearHelper(accessToken,
	startDate, endDate, combineEndpoints, method, url, size, page, 
	handler, userData, true);
}

bool Reporting_UsageManager::getUsageByYearSync(char * accessToken,
	long long startDate, long long endDate, bool combineEndpoints, std::string method, std::string url, int size, int page, 
	void(* handler)(PageResource«UsageInfo», Error, void* )
	, void* userData)
{
	return getUsageByYearHelper(accessToken,
	startDate, endDate, combineEndpoints, method, url, size, page, 
	handler, userData, false);
}

static bool getUsageEndpointsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::list<std::string>, Error, void* )
	= reinterpret_cast<void(*)(std::list<std::string>, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	std::list<std::string> out;
	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));



		pJson = json_from_string(data, NULL);
		JsonArray * jsonarray = json_node_get_array (pJson);
		guint length = json_array_get_length (jsonarray);
		for(guint i = 0; i < length; i++){
			JsonNode* myJson = json_array_get_element (jsonarray, i);
			char * singlenodestr = json_to_string(myJson, false);
			std::string singlemodel;
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

static bool getUsageEndpointsHelper(char * accessToken,
	long long startDate, long long endDate, 
	void(* handler)(std::list<std::string>, Error, void* )
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
	

	itemAtq = stringify(&startDate, "long long");
	queryParams.insert(pair<string, string>("start_date", itemAtq));


	itemAtq = stringify(&endDate, "long long");
	queryParams.insert(pair<string, string>("end_date", itemAtq));

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/reporting/usage/endpoints");
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
		NetClient::easycurl(Reporting_UsageManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getUsageEndpointsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Reporting_UsageManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getUsageEndpointsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Reporting_UsageManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Reporting_UsageManager::getUsageEndpointsAsync(char * accessToken,
	long long startDate, long long endDate, 
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData)
{
	return getUsageEndpointsHelper(accessToken,
	startDate, endDate, 
	handler, userData, true);
}

bool Reporting_UsageManager::getUsageEndpointsSync(char * accessToken,
	long long startDate, long long endDate, 
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData)
{
	return getUsageEndpointsHelper(accessToken,
	startDate, endDate, 
	handler, userData, false);
}

