#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "Rule_Engine_ExpressionsManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


Rule_Engine_ExpressionsManager::Rule_Engine_ExpressionsManager()
{

}

Rule_Engine_ExpressionsManager::~Rule_Engine_ExpressionsManager()
{

}

static gboolean __Rule_Engine_ExpressionsManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __Rule_Engine_ExpressionsManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__Rule_Engine_ExpressionsManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool getBREExpressionProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(ExpressionResource, Error, void* )
	= reinterpret_cast<void(*)(ExpressionResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	ExpressionResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("ExpressionResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "ExpressionResource", "ExpressionResource");
			json_node_free(pJson);

			if ("ExpressionResource" == "std::string") {
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

static bool getBREExpressionHelper(char * accessToken,
	std::string type, 
	void(* handler)(ExpressionResource, Error, void* )
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

	string url("/bre/expressions/{type}");
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
		NetClient::easycurl(Rule_Engine_ExpressionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getBREExpressionProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Rule_Engine_ExpressionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getBREExpressionProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Rule_Engine_ExpressionsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Rule_Engine_ExpressionsManager::getBREExpressionAsync(char * accessToken,
	std::string type, 
	void(* handler)(ExpressionResource, Error, void* )
	, void* userData)
{
	return getBREExpressionHelper(accessToken,
	type, 
	handler, userData, true);
}

bool Rule_Engine_ExpressionsManager::getBREExpressionSync(char * accessToken,
	std::string type, 
	void(* handler)(ExpressionResource, Error, void* )
	, void* userData)
{
	return getBREExpressionHelper(accessToken,
	type, 
	handler, userData, false);
}

static bool getBREExpressionsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::list<ExpressionResource>, Error, void* )
	= reinterpret_cast<void(*)(std::list<ExpressionResource>, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	std::list<ExpressionResource> out;
	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));



		pJson = json_from_string(data, NULL);
		JsonArray * jsonarray = json_node_get_array (pJson);
		guint length = json_array_get_length (jsonarray);
		for(guint i = 0; i < length; i++){
			JsonNode* myJson = json_array_get_element (jsonarray, i);
			char * singlenodestr = json_to_string(myJson, false);
			ExpressionResource singlemodel;
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

static bool getBREExpressionsHelper(char * accessToken,
	std::string filterTypeGroup, 
	void(* handler)(std::list<ExpressionResource>, Error, void* )
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
	

	itemAtq = stringify(&filterTypeGroup, "std::string");
	queryParams.insert(pair<string, string>("filter_type_group", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_type_group");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/bre/expressions");
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
		NetClient::easycurl(Rule_Engine_ExpressionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getBREExpressionsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Rule_Engine_ExpressionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getBREExpressionsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Rule_Engine_ExpressionsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Rule_Engine_ExpressionsManager::getBREExpressionsAsync(char * accessToken,
	std::string filterTypeGroup, 
	void(* handler)(std::list<ExpressionResource>, Error, void* )
	, void* userData)
{
	return getBREExpressionsHelper(accessToken,
	filterTypeGroup, 
	handler, userData, true);
}

bool Rule_Engine_ExpressionsManager::getBREExpressionsSync(char * accessToken,
	std::string filterTypeGroup, 
	void(* handler)(std::list<ExpressionResource>, Error, void* )
	, void* userData)
{
	return getBREExpressionsHelper(accessToken,
	filterTypeGroup, 
	handler, userData, false);
}

static bool getExpressionAsTextProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(StringWrapper, Error, void* )
	= reinterpret_cast<void(*)(StringWrapper, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	StringWrapper out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("StringWrapper")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "StringWrapper", "StringWrapper");
			json_node_free(pJson);

			if ("StringWrapper" == "std::string") {
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

static bool getExpressionAsTextHelper(char * accessToken,
	ExpressionResource expression, 
	void(* handler)(StringWrapper, Error, void* )
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

	if (isprimitive("ExpressionResource")) {
		node = converttoJson(&expression, "ExpressionResource", "");
	}
	
	char *jsonStr =  expression.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/bre/expressions");
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
		NetClient::easycurl(Rule_Engine_ExpressionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getExpressionAsTextProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Rule_Engine_ExpressionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getExpressionAsTextProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Rule_Engine_ExpressionsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Rule_Engine_ExpressionsManager::getExpressionAsTextAsync(char * accessToken,
	ExpressionResource expression, 
	void(* handler)(StringWrapper, Error, void* )
	, void* userData)
{
	return getExpressionAsTextHelper(accessToken,
	expression, 
	handler, userData, true);
}

bool Rule_Engine_ExpressionsManager::getExpressionAsTextSync(char * accessToken,
	ExpressionResource expression, 
	void(* handler)(StringWrapper, Error, void* )
	, void* userData)
{
	return getExpressionAsTextHelper(accessToken,
	expression, 
	handler, userData, false);
}

