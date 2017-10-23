#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "CurrenciesManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


CurrenciesManager::CurrenciesManager()
{

}

CurrenciesManager::~CurrenciesManager()
{

}

static gboolean __CurrenciesManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __CurrenciesManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__CurrenciesManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool createCurrencyProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(CurrencyResource, Error, void* )
	= reinterpret_cast<void(*)(CurrencyResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	CurrencyResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("CurrencyResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "CurrencyResource", "CurrencyResource");
			json_node_free(pJson);

			if ("CurrencyResource" == "std::string") {
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

static bool createCurrencyHelper(char * accessToken,
	CurrencyResource currency, 
	void(* handler)(CurrencyResource, Error, void* )
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

	if (isprimitive("CurrencyResource")) {
		node = converttoJson(&currency, "CurrencyResource", "");
	}
	
	char *jsonStr =  currency.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/currencies");
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
		NetClient::easycurl(CurrenciesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = createCurrencyProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (CurrenciesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), createCurrencyProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __CurrenciesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool CurrenciesManager::createCurrencyAsync(char * accessToken,
	CurrencyResource currency, 
	void(* handler)(CurrencyResource, Error, void* )
	, void* userData)
{
	return createCurrencyHelper(accessToken,
	currency, 
	handler, userData, true);
}

bool CurrenciesManager::createCurrencySync(char * accessToken,
	CurrencyResource currency, 
	void(* handler)(CurrencyResource, Error, void* )
	, void* userData)
{
	return createCurrencyHelper(accessToken,
	currency, 
	handler, userData, false);
}

static bool deleteCurrencyProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool deleteCurrencyHelper(char * accessToken,
	std::string code, 
	
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

	string url("/currencies/{code}");
	int pos;

	string s_code("{");
	s_code.append("code");
	s_code.append("}");
	pos = url.find(s_code);
	url.erase(pos, s_code.length());
	url.insert(pos, stringify(&code, "std::string"));

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
		NetClient::easycurl(CurrenciesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = deleteCurrencyProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (CurrenciesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), deleteCurrencyProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __CurrenciesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool CurrenciesManager::deleteCurrencyAsync(char * accessToken,
	std::string code, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteCurrencyHelper(accessToken,
	code, 
	handler, userData, true);
}

bool CurrenciesManager::deleteCurrencySync(char * accessToken,
	std::string code, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteCurrencyHelper(accessToken,
	code, 
	handler, userData, false);
}

static bool getCurrenciesProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«CurrencyResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«CurrencyResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«CurrencyResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«CurrencyResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«CurrencyResource»", "PageResource«CurrencyResource»");
			json_node_free(pJson);

			if ("PageResource«CurrencyResource»" == "std::string") {
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

static bool getCurrenciesHelper(char * accessToken,
	bool filterEnabledCurrencies, std::string filterType, int size, int page, std::string order, 
	void(* handler)(PageResource«CurrencyResource», Error, void* )
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
	

	itemAtq = stringify(&filterEnabledCurrencies, "bool");
	queryParams.insert(pair<string, string>("filter_enabled_currencies", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_enabled_currencies");
	}


	itemAtq = stringify(&filterType, "std::string");
	queryParams.insert(pair<string, string>("filter_type", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_type");
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

	string url("/currencies");
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
		NetClient::easycurl(CurrenciesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getCurrenciesProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (CurrenciesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getCurrenciesProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __CurrenciesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool CurrenciesManager::getCurrenciesAsync(char * accessToken,
	bool filterEnabledCurrencies, std::string filterType, int size, int page, std::string order, 
	void(* handler)(PageResource«CurrencyResource», Error, void* )
	, void* userData)
{
	return getCurrenciesHelper(accessToken,
	filterEnabledCurrencies, filterType, size, page, order, 
	handler, userData, true);
}

bool CurrenciesManager::getCurrenciesSync(char * accessToken,
	bool filterEnabledCurrencies, std::string filterType, int size, int page, std::string order, 
	void(* handler)(PageResource«CurrencyResource», Error, void* )
	, void* userData)
{
	return getCurrenciesHelper(accessToken,
	filterEnabledCurrencies, filterType, size, page, order, 
	handler, userData, false);
}

static bool getCurrencyProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(CurrencyResource, Error, void* )
	= reinterpret_cast<void(*)(CurrencyResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	CurrencyResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("CurrencyResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "CurrencyResource", "CurrencyResource");
			json_node_free(pJson);

			if ("CurrencyResource" == "std::string") {
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

static bool getCurrencyHelper(char * accessToken,
	std::string code, 
	void(* handler)(CurrencyResource, Error, void* )
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

	string url("/currencies/{code}");
	int pos;

	string s_code("{");
	s_code.append("code");
	s_code.append("}");
	pos = url.find(s_code);
	url.erase(pos, s_code.length());
	url.insert(pos, stringify(&code, "std::string"));

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
		NetClient::easycurl(CurrenciesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getCurrencyProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (CurrenciesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getCurrencyProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __CurrenciesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool CurrenciesManager::getCurrencyAsync(char * accessToken,
	std::string code, 
	void(* handler)(CurrencyResource, Error, void* )
	, void* userData)
{
	return getCurrencyHelper(accessToken,
	code, 
	handler, userData, true);
}

bool CurrenciesManager::getCurrencySync(char * accessToken,
	std::string code, 
	void(* handler)(CurrencyResource, Error, void* )
	, void* userData)
{
	return getCurrencyHelper(accessToken,
	code, 
	handler, userData, false);
}

static bool updateCurrencyProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool updateCurrencyHelper(char * accessToken,
	std::string code, CurrencyResource currency, 
	
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

	if (isprimitive("CurrencyResource")) {
		node = converttoJson(&currency, "CurrencyResource", "");
	}
	
	char *jsonStr =  currency.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/currencies/{code}");
	int pos;

	string s_code("{");
	s_code.append("code");
	s_code.append("}");
	pos = url.find(s_code);
	url.erase(pos, s_code.length());
	url.insert(pos, stringify(&code, "std::string"));

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
		NetClient::easycurl(CurrenciesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = updateCurrencyProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (CurrenciesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), updateCurrencyProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __CurrenciesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool CurrenciesManager::updateCurrencyAsync(char * accessToken,
	std::string code, CurrencyResource currency, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return updateCurrencyHelper(accessToken,
	code, currency, 
	handler, userData, true);
}

bool CurrenciesManager::updateCurrencySync(char * accessToken,
	std::string code, CurrencyResource currency, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return updateCurrencyHelper(accessToken,
	code, currency, 
	handler, userData, false);
}

