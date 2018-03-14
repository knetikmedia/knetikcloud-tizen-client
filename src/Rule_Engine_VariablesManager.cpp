#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "Rule_Engine_VariablesManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


Rule_Engine_VariablesManager::Rule_Engine_VariablesManager()
{

}

Rule_Engine_VariablesManager::~Rule_Engine_VariablesManager()
{

}

static gboolean __Rule_Engine_VariablesManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __Rule_Engine_VariablesManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__Rule_Engine_VariablesManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool getBREVariableTypesProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::list<VariableTypeResource>, Error, void* )
	= reinterpret_cast<void(*)(std::list<VariableTypeResource>, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	std::list<VariableTypeResource> out;
	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));



		pJson = json_from_string(data, NULL);
		JsonArray * jsonarray = json_node_get_array (pJson);
		guint length = json_array_get_length (jsonarray);
		for(guint i = 0; i < length; i++){
			JsonNode* myJson = json_array_get_element (jsonarray, i);
			char * singlenodestr = json_to_string(myJson, false);
			VariableTypeResource singlemodel;
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

static bool getBREVariableTypesHelper(char * accessToken,
	
	void(* handler)(std::list<VariableTypeResource>, Error, void* )
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

	string url("/bre/variable-types");
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
		NetClient::easycurl(Rule_Engine_VariablesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getBREVariableTypesProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Rule_Engine_VariablesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getBREVariableTypesProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Rule_Engine_VariablesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Rule_Engine_VariablesManager::getBREVariableTypesAsync(char * accessToken,
	
	void(* handler)(std::list<VariableTypeResource>, Error, void* )
	, void* userData)
{
	return getBREVariableTypesHelper(accessToken,
	
	handler, userData, true);
}

bool Rule_Engine_VariablesManager::getBREVariableTypesSync(char * accessToken,
	
	void(* handler)(std::list<VariableTypeResource>, Error, void* )
	, void* userData)
{
	return getBREVariableTypesHelper(accessToken,
	
	handler, userData, false);
}

static bool getBREVariableValuesProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«SimpleReferenceResource«object»», Error, void* )
	= reinterpret_cast<void(*)(PageResource«SimpleReferenceResource«object»», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«SimpleReferenceResource«object»» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«SimpleReferenceResource«object»»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«SimpleReferenceResource«object»»", "PageResource«SimpleReferenceResource«object»»");
			json_node_free(pJson);

			if ("PageResource«SimpleReferenceResource«object»»" == "std::string") {
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

static bool getBREVariableValuesHelper(char * accessToken,
	std::string name, std::string filterName, int size, int page, 
	void(* handler)(PageResource«SimpleReferenceResource«object»», Error, void* )
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

	string url("/bre/variable-types/{name}/values");
	int pos;

	string s_name("{");
	s_name.append("name");
	s_name.append("}");
	pos = url.find(s_name);
	url.erase(pos, s_name.length());
	url.insert(pos, stringify(&name, "std::string"));

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
		NetClient::easycurl(Rule_Engine_VariablesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getBREVariableValuesProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Rule_Engine_VariablesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getBREVariableValuesProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Rule_Engine_VariablesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Rule_Engine_VariablesManager::getBREVariableValuesAsync(char * accessToken,
	std::string name, std::string filterName, int size, int page, 
	void(* handler)(PageResource«SimpleReferenceResource«object»», Error, void* )
	, void* userData)
{
	return getBREVariableValuesHelper(accessToken,
	name, filterName, size, page, 
	handler, userData, true);
}

bool Rule_Engine_VariablesManager::getBREVariableValuesSync(char * accessToken,
	std::string name, std::string filterName, int size, int page, 
	void(* handler)(PageResource«SimpleReferenceResource«object»», Error, void* )
	, void* userData)
{
	return getBREVariableValuesHelper(accessToken,
	name, filterName, size, page, 
	handler, userData, false);
}

