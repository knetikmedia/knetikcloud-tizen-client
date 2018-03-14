#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "Rule_Engine_RulesManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


Rule_Engine_RulesManager::Rule_Engine_RulesManager()
{

}

Rule_Engine_RulesManager::~Rule_Engine_RulesManager()
{

}

static gboolean __Rule_Engine_RulesManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __Rule_Engine_RulesManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__Rule_Engine_RulesManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool createBRERuleProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(BreRule, Error, void* )
	= reinterpret_cast<void(*)(BreRule, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	BreRule out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("BreRule")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "BreRule", "BreRule");
			json_node_free(pJson);

			if ("BreRule" == "std::string") {
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

static bool createBRERuleHelper(char * accessToken,
	BreRule breRule, 
	void(* handler)(BreRule, Error, void* )
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

	if (isprimitive("BreRule")) {
		node = converttoJson(&breRule, "BreRule", "");
	}
	
	char *jsonStr =  breRule.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/bre/rules");
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
		NetClient::easycurl(Rule_Engine_RulesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = createBRERuleProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Rule_Engine_RulesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), createBRERuleProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Rule_Engine_RulesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Rule_Engine_RulesManager::createBRERuleAsync(char * accessToken,
	BreRule breRule, 
	void(* handler)(BreRule, Error, void* )
	, void* userData)
{
	return createBRERuleHelper(accessToken,
	breRule, 
	handler, userData, true);
}

bool Rule_Engine_RulesManager::createBRERuleSync(char * accessToken,
	BreRule breRule, 
	void(* handler)(BreRule, Error, void* )
	, void* userData)
{
	return createBRERuleHelper(accessToken,
	breRule, 
	handler, userData, false);
}

static bool deleteBRERuleProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool deleteBRERuleHelper(char * accessToken,
	std::string id, 
	
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

	string url("/bre/rules/{id}");
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
	string myhttpmethod("DELETE");

	if(strcmp("PUT", "DELETE") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(Rule_Engine_RulesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = deleteBRERuleProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Rule_Engine_RulesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), deleteBRERuleProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Rule_Engine_RulesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Rule_Engine_RulesManager::deleteBRERuleAsync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteBRERuleHelper(accessToken,
	id, 
	handler, userData, true);
}

bool Rule_Engine_RulesManager::deleteBRERuleSync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteBRERuleHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool getBREExpressionAsStringProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::string, Error, void* )
	= reinterpret_cast<void(*)(std::string, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	std::string out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("std::string")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "std::string", "std::string");
			json_node_free(pJson);

			if ("std::string" == "std::string") {
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

static bool getBREExpressionAsStringHelper(char * accessToken,
	Expression«object» expression, 
	void(* handler)(std::string, Error, void* )
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

	if (isprimitive("Expression«object»")) {
		node = converttoJson(&expression, "Expression«object»", "");
	}
	
	char *jsonStr =  expression.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/bre/rules/expression-as-string");
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
		NetClient::easycurl(Rule_Engine_RulesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getBREExpressionAsStringProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Rule_Engine_RulesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getBREExpressionAsStringProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Rule_Engine_RulesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Rule_Engine_RulesManager::getBREExpressionAsStringAsync(char * accessToken,
	Expression«object» expression, 
	void(* handler)(std::string, Error, void* )
	, void* userData)
{
	return getBREExpressionAsStringHelper(accessToken,
	expression, 
	handler, userData, true);
}

bool Rule_Engine_RulesManager::getBREExpressionAsStringSync(char * accessToken,
	Expression«object» expression, 
	void(* handler)(std::string, Error, void* )
	, void* userData)
{
	return getBREExpressionAsStringHelper(accessToken,
	expression, 
	handler, userData, false);
}

static bool getBRERuleProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(BreRule, Error, void* )
	= reinterpret_cast<void(*)(BreRule, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	BreRule out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("BreRule")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "BreRule", "BreRule");
			json_node_free(pJson);

			if ("BreRule" == "std::string") {
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

static bool getBRERuleHelper(char * accessToken,
	std::string id, 
	void(* handler)(BreRule, Error, void* )
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

	string url("/bre/rules/{id}");
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
		NetClient::easycurl(Rule_Engine_RulesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getBRERuleProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Rule_Engine_RulesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getBRERuleProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Rule_Engine_RulesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Rule_Engine_RulesManager::getBRERuleAsync(char * accessToken,
	std::string id, 
	void(* handler)(BreRule, Error, void* )
	, void* userData)
{
	return getBRERuleHelper(accessToken,
	id, 
	handler, userData, true);
}

bool Rule_Engine_RulesManager::getBRERuleSync(char * accessToken,
	std::string id, 
	void(* handler)(BreRule, Error, void* )
	, void* userData)
{
	return getBRERuleHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool getBRERulesProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«BreRule», Error, void* )
	= reinterpret_cast<void(*)(PageResource«BreRule», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«BreRule» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«BreRule»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«BreRule»", "PageResource«BreRule»");
			json_node_free(pJson);

			if ("PageResource«BreRule»" == "std::string") {
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

static bool getBRERulesHelper(char * accessToken,
	std::string filterName, bool filterEnabled, bool filterSystem, std::string filterTrigger, std::string filterAction, std::string filterCondition, int size, int page, 
	void(* handler)(PageResource«BreRule», Error, void* )
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
	

	itemAtq = stringify(&filterName, "std::string");
	queryParams.insert(pair<string, string>("filter_name", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_name");
	}


	itemAtq = stringify(&filterEnabled, "bool");
	queryParams.insert(pair<string, string>("filter_enabled", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_enabled");
	}


	itemAtq = stringify(&filterSystem, "bool");
	queryParams.insert(pair<string, string>("filter_system", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_system");
	}


	itemAtq = stringify(&filterTrigger, "std::string");
	queryParams.insert(pair<string, string>("filter_trigger", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_trigger");
	}


	itemAtq = stringify(&filterAction, "std::string");
	queryParams.insert(pair<string, string>("filter_action", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_action");
	}


	itemAtq = stringify(&filterCondition, "std::string");
	queryParams.insert(pair<string, string>("filter_condition", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_condition");
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

	string url("/bre/rules");
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
		NetClient::easycurl(Rule_Engine_RulesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getBRERulesProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Rule_Engine_RulesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getBRERulesProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Rule_Engine_RulesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Rule_Engine_RulesManager::getBRERulesAsync(char * accessToken,
	std::string filterName, bool filterEnabled, bool filterSystem, std::string filterTrigger, std::string filterAction, std::string filterCondition, int size, int page, 
	void(* handler)(PageResource«BreRule», Error, void* )
	, void* userData)
{
	return getBRERulesHelper(accessToken,
	filterName, filterEnabled, filterSystem, filterTrigger, filterAction, filterCondition, size, page, 
	handler, userData, true);
}

bool Rule_Engine_RulesManager::getBRERulesSync(char * accessToken,
	std::string filterName, bool filterEnabled, bool filterSystem, std::string filterTrigger, std::string filterAction, std::string filterCondition, int size, int page, 
	void(* handler)(PageResource«BreRule», Error, void* )
	, void* userData)
{
	return getBRERulesHelper(accessToken,
	filterName, filterEnabled, filterSystem, filterTrigger, filterAction, filterCondition, size, page, 
	handler, userData, false);
}

static bool setBRERuleProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool setBRERuleHelper(char * accessToken,
	std::string id, BooleanResource enabled, 
	
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

	if (isprimitive("BooleanResource")) {
		node = converttoJson(&enabled, "BooleanResource", "");
	}
	
	char *jsonStr =  enabled.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/bre/rules/{id}/enabled");
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
	string myhttpmethod("PUT");

	if(strcmp("PUT", "PUT") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(Rule_Engine_RulesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = setBRERuleProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Rule_Engine_RulesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), setBRERuleProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Rule_Engine_RulesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Rule_Engine_RulesManager::setBRERuleAsync(char * accessToken,
	std::string id, BooleanResource enabled, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return setBRERuleHelper(accessToken,
	id, enabled, 
	handler, userData, true);
}

bool Rule_Engine_RulesManager::setBRERuleSync(char * accessToken,
	std::string id, BooleanResource enabled, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return setBRERuleHelper(accessToken,
	id, enabled, 
	handler, userData, false);
}

static bool updateBRERuleProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(BreRule, Error, void* )
	= reinterpret_cast<void(*)(BreRule, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	BreRule out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("BreRule")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "BreRule", "BreRule");
			json_node_free(pJson);

			if ("BreRule" == "std::string") {
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

static bool updateBRERuleHelper(char * accessToken,
	std::string id, BreRule breRule, 
	void(* handler)(BreRule, Error, void* )
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

	if (isprimitive("BreRule")) {
		node = converttoJson(&breRule, "BreRule", "");
	}
	
	char *jsonStr =  breRule.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/bre/rules/{id}");
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
	string myhttpmethod("PUT");

	if(strcmp("PUT", "PUT") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(Rule_Engine_RulesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = updateBRERuleProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Rule_Engine_RulesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), updateBRERuleProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Rule_Engine_RulesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Rule_Engine_RulesManager::updateBRERuleAsync(char * accessToken,
	std::string id, BreRule breRule, 
	void(* handler)(BreRule, Error, void* )
	, void* userData)
{
	return updateBRERuleHelper(accessToken,
	id, breRule, 
	handler, userData, true);
}

bool Rule_Engine_RulesManager::updateBRERuleSync(char * accessToken,
	std::string id, BreRule breRule, 
	void(* handler)(BreRule, Error, void* )
	, void* userData)
{
	return updateBRERuleHelper(accessToken,
	id, breRule, 
	handler, userData, false);
}

