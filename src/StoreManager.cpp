#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "StoreManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


StoreManager::StoreManager()
{

}

StoreManager::~StoreManager()
{

}

static gboolean __StoreManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __StoreManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__StoreManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool createItemTemplateProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(StoreItemTemplateResource, Error, void* )
	= reinterpret_cast<void(*)(StoreItemTemplateResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	StoreItemTemplateResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("StoreItemTemplateResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "StoreItemTemplateResource", "StoreItemTemplateResource");
			json_node_free(pJson);

			if ("StoreItemTemplateResource" == "std::string") {
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

static bool createItemTemplateHelper(char * accessToken,
	StoreItemTemplateResource itemTemplateResource, 
	void(* handler)(StoreItemTemplateResource, Error, void* )
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

	if (isprimitive("StoreItemTemplateResource")) {
		node = converttoJson(&itemTemplateResource, "StoreItemTemplateResource", "");
	}
	
	char *jsonStr =  itemTemplateResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/store/items/templates");
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
		NetClient::easycurl(StoreManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = createItemTemplateProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (StoreManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), createItemTemplateProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __StoreManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool StoreManager::createItemTemplateAsync(char * accessToken,
	StoreItemTemplateResource itemTemplateResource, 
	void(* handler)(StoreItemTemplateResource, Error, void* )
	, void* userData)
{
	return createItemTemplateHelper(accessToken,
	itemTemplateResource, 
	handler, userData, true);
}

bool StoreManager::createItemTemplateSync(char * accessToken,
	StoreItemTemplateResource itemTemplateResource, 
	void(* handler)(StoreItemTemplateResource, Error, void* )
	, void* userData)
{
	return createItemTemplateHelper(accessToken,
	itemTemplateResource, 
	handler, userData, false);
}

static bool createStoreItemProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(StoreItem, Error, void* )
	= reinterpret_cast<void(*)(StoreItem, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	StoreItem out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("StoreItem")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "StoreItem", "StoreItem");
			json_node_free(pJson);

			if ("StoreItem" == "std::string") {
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

static bool createStoreItemHelper(char * accessToken,
	bool cascade, StoreItem storeItem, 
	void(* handler)(StoreItem, Error, void* )
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
	

	itemAtq = stringify(&cascade, "bool");
	queryParams.insert(pair<string, string>("cascade", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("cascade");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	if (isprimitive("StoreItem")) {
		node = converttoJson(&storeItem, "StoreItem", "");
	}
	
	char *jsonStr =  storeItem.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/store/items");
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
		NetClient::easycurl(StoreManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = createStoreItemProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (StoreManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), createStoreItemProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __StoreManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool StoreManager::createStoreItemAsync(char * accessToken,
	bool cascade, StoreItem storeItem, 
	void(* handler)(StoreItem, Error, void* )
	, void* userData)
{
	return createStoreItemHelper(accessToken,
	cascade, storeItem, 
	handler, userData, true);
}

bool StoreManager::createStoreItemSync(char * accessToken,
	bool cascade, StoreItem storeItem, 
	void(* handler)(StoreItem, Error, void* )
	, void* userData)
{
	return createStoreItemHelper(accessToken,
	cascade, storeItem, 
	handler, userData, false);
}

static bool deleteItemTemplateProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool deleteItemTemplateHelper(char * accessToken,
	std::string id, std::string cascade, 
	
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
	

	itemAtq = stringify(&cascade, "std::string");
	queryParams.insert(pair<string, string>("cascade", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("cascade");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/store/items/templates/{id}");
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
		NetClient::easycurl(StoreManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = deleteItemTemplateProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (StoreManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), deleteItemTemplateProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __StoreManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool StoreManager::deleteItemTemplateAsync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteItemTemplateHelper(accessToken,
	id, cascade, 
	handler, userData, true);
}

bool StoreManager::deleteItemTemplateSync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteItemTemplateHelper(accessToken,
	id, cascade, 
	handler, userData, false);
}

static bool deleteStoreItemProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool deleteStoreItemHelper(char * accessToken,
	int id, 
	
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

	string url("/store/items/{id}");
	int pos;

	string s_id("{");
	s_id.append("id");
	s_id.append("}");
	pos = url.find(s_id);
	url.erase(pos, s_id.length());
	url.insert(pos, stringify(&id, "int"));

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
		NetClient::easycurl(StoreManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = deleteStoreItemProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (StoreManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), deleteStoreItemProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __StoreManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool StoreManager::deleteStoreItemAsync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteStoreItemHelper(accessToken,
	id, 
	handler, userData, true);
}

bool StoreManager::deleteStoreItemSync(char * accessToken,
	int id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteStoreItemHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool getBehaviorsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::list<BehaviorDefinitionResource>, Error, void* )
	= reinterpret_cast<void(*)(std::list<BehaviorDefinitionResource>, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	std::list<BehaviorDefinitionResource> out;
	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));



		pJson = json_from_string(data, NULL);
		JsonArray * jsonarray = json_node_get_array (pJson);
		guint length = json_array_get_length (jsonarray);
		for(guint i = 0; i < length; i++){
			JsonNode* myJson = json_array_get_element (jsonarray, i);
			char * singlenodestr = json_to_string(myJson, false);
			BehaviorDefinitionResource singlemodel;
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

static bool getBehaviorsHelper(char * accessToken,
	
	void(* handler)(std::list<BehaviorDefinitionResource>, Error, void* )
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

	string url("/store/items/behaviors");
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
		NetClient::easycurl(StoreManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getBehaviorsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (StoreManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getBehaviorsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __StoreManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool StoreManager::getBehaviorsAsync(char * accessToken,
	
	void(* handler)(std::list<BehaviorDefinitionResource>, Error, void* )
	, void* userData)
{
	return getBehaviorsHelper(accessToken,
	
	handler, userData, true);
}

bool StoreManager::getBehaviorsSync(char * accessToken,
	
	void(* handler)(std::list<BehaviorDefinitionResource>, Error, void* )
	, void* userData)
{
	return getBehaviorsHelper(accessToken,
	
	handler, userData, false);
}

static bool getItemTemplateProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(StoreItemTemplateResource, Error, void* )
	= reinterpret_cast<void(*)(StoreItemTemplateResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	StoreItemTemplateResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("StoreItemTemplateResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "StoreItemTemplateResource", "StoreItemTemplateResource");
			json_node_free(pJson);

			if ("StoreItemTemplateResource" == "std::string") {
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

static bool getItemTemplateHelper(char * accessToken,
	std::string id, 
	void(* handler)(StoreItemTemplateResource, Error, void* )
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

	string url("/store/items/templates/{id}");
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
		NetClient::easycurl(StoreManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getItemTemplateProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (StoreManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getItemTemplateProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __StoreManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool StoreManager::getItemTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(StoreItemTemplateResource, Error, void* )
	, void* userData)
{
	return getItemTemplateHelper(accessToken,
	id, 
	handler, userData, true);
}

bool StoreManager::getItemTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(StoreItemTemplateResource, Error, void* )
	, void* userData)
{
	return getItemTemplateHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool getItemTemplatesProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«StoreItemTemplateResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«StoreItemTemplateResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«StoreItemTemplateResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«StoreItemTemplateResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«StoreItemTemplateResource»", "PageResource«StoreItemTemplateResource»");
			json_node_free(pJson);

			if ("PageResource«StoreItemTemplateResource»" == "std::string") {
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

static bool getItemTemplatesHelper(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«StoreItemTemplateResource», Error, void* )
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


	itemAtq = stringify(&order, "std::string");
	queryParams.insert(pair<string, string>("order", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("order");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/store/items/templates");
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
		NetClient::easycurl(StoreManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getItemTemplatesProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (StoreManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getItemTemplatesProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __StoreManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool StoreManager::getItemTemplatesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«StoreItemTemplateResource», Error, void* )
	, void* userData)
{
	return getItemTemplatesHelper(accessToken,
	size, page, order, 
	handler, userData, true);
}

bool StoreManager::getItemTemplatesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«StoreItemTemplateResource», Error, void* )
	, void* userData)
{
	return getItemTemplatesHelper(accessToken,
	size, page, order, 
	handler, userData, false);
}

static bool getStoreProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«StoreItem», Error, void* )
	= reinterpret_cast<void(*)(PageResource«StoreItem», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«StoreItem» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«StoreItem»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«StoreItem»", "PageResource«StoreItem»");
			json_node_free(pJson);

			if ("PageResource«StoreItem»" == "std::string") {
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

static bool getStoreHelper(char * accessToken,
	int limit, int page, bool useCatalog, bool ignoreLocation, bool inStockOnly, 
	void(* handler)(PageResource«StoreItem», Error, void* )
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
	

	itemAtq = stringify(&limit, "int");
	queryParams.insert(pair<string, string>("limit", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("limit");
	}


	itemAtq = stringify(&page, "int");
	queryParams.insert(pair<string, string>("page", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("page");
	}


	itemAtq = stringify(&useCatalog, "bool");
	queryParams.insert(pair<string, string>("use_catalog", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("use_catalog");
	}


	itemAtq = stringify(&ignoreLocation, "bool");
	queryParams.insert(pair<string, string>("ignore_location", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("ignore_location");
	}


	itemAtq = stringify(&inStockOnly, "bool");
	queryParams.insert(pair<string, string>("in_stock_only", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("in_stock_only");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/store");
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
		NetClient::easycurl(StoreManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getStoreProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (StoreManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getStoreProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __StoreManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool StoreManager::getStoreAsync(char * accessToken,
	int limit, int page, bool useCatalog, bool ignoreLocation, bool inStockOnly, 
	void(* handler)(PageResource«StoreItem», Error, void* )
	, void* userData)
{
	return getStoreHelper(accessToken,
	limit, page, useCatalog, ignoreLocation, inStockOnly, 
	handler, userData, true);
}

bool StoreManager::getStoreSync(char * accessToken,
	int limit, int page, bool useCatalog, bool ignoreLocation, bool inStockOnly, 
	void(* handler)(PageResource«StoreItem», Error, void* )
	, void* userData)
{
	return getStoreHelper(accessToken,
	limit, page, useCatalog, ignoreLocation, inStockOnly, 
	handler, userData, false);
}

static bool getStoreItemProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(StoreItem, Error, void* )
	= reinterpret_cast<void(*)(StoreItem, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	StoreItem out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("StoreItem")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "StoreItem", "StoreItem");
			json_node_free(pJson);

			if ("StoreItem" == "std::string") {
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

static bool getStoreItemHelper(char * accessToken,
	int id, 
	void(* handler)(StoreItem, Error, void* )
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

	string url("/store/items/{id}");
	int pos;

	string s_id("{");
	s_id.append("id");
	s_id.append("}");
	pos = url.find(s_id);
	url.erase(pos, s_id.length());
	url.insert(pos, stringify(&id, "int"));

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
		NetClient::easycurl(StoreManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getStoreItemProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (StoreManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getStoreItemProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __StoreManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool StoreManager::getStoreItemAsync(char * accessToken,
	int id, 
	void(* handler)(StoreItem, Error, void* )
	, void* userData)
{
	return getStoreItemHelper(accessToken,
	id, 
	handler, userData, true);
}

bool StoreManager::getStoreItemSync(char * accessToken,
	int id, 
	void(* handler)(StoreItem, Error, void* )
	, void* userData)
{
	return getStoreItemHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool getStoreItemsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«StoreItem», Error, void* )
	= reinterpret_cast<void(*)(PageResource«StoreItem», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«StoreItem» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«StoreItem»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«StoreItem»", "PageResource«StoreItem»");
			json_node_free(pJson);

			if ("PageResource«StoreItem»" == "std::string") {
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

static bool getStoreItemsHelper(char * accessToken,
	std::string filterNameSearch, std::string filterUniqueKey, bool filterPublished, bool filterDisplayable, std::string filterStart, std::string filterEnd, std::string filterStartDate, std::string filterStopDate, std::string filterSku, std::string filterPrice, std::string filterTag, std::string filterItemsByType, std::string filterBundledSkus, int filterVendor, int size, int page, std::string order, 
	void(* handler)(PageResource«StoreItem», Error, void* )
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
	

	itemAtq = stringify(&filterNameSearch, "std::string");
	queryParams.insert(pair<string, string>("filter_name_search", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_name_search");
	}


	itemAtq = stringify(&filterUniqueKey, "std::string");
	queryParams.insert(pair<string, string>("filter_unique_key", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_unique_key");
	}


	itemAtq = stringify(&filterPublished, "bool");
	queryParams.insert(pair<string, string>("filter_published", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_published");
	}


	itemAtq = stringify(&filterDisplayable, "bool");
	queryParams.insert(pair<string, string>("filter_displayable", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_displayable");
	}


	itemAtq = stringify(&filterStart, "std::string");
	queryParams.insert(pair<string, string>("filter_start", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_start");
	}


	itemAtq = stringify(&filterEnd, "std::string");
	queryParams.insert(pair<string, string>("filter_end", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_end");
	}


	itemAtq = stringify(&filterStartDate, "std::string");
	queryParams.insert(pair<string, string>("filter_start_date", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_start_date");
	}


	itemAtq = stringify(&filterStopDate, "std::string");
	queryParams.insert(pair<string, string>("filter_stop_date", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_stop_date");
	}


	itemAtq = stringify(&filterSku, "std::string");
	queryParams.insert(pair<string, string>("filter_sku", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_sku");
	}


	itemAtq = stringify(&filterPrice, "std::string");
	queryParams.insert(pair<string, string>("filter_price", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_price");
	}


	itemAtq = stringify(&filterTag, "std::string");
	queryParams.insert(pair<string, string>("filter_tag", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_tag");
	}


	itemAtq = stringify(&filterItemsByType, "std::string");
	queryParams.insert(pair<string, string>("filter_items_by_type", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_items_by_type");
	}


	itemAtq = stringify(&filterBundledSkus, "std::string");
	queryParams.insert(pair<string, string>("filter_bundled_skus", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_bundled_skus");
	}


	itemAtq = stringify(&filterVendor, "int");
	queryParams.insert(pair<string, string>("filter_vendor", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_vendor");
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

	string url("/store/items");
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
		NetClient::easycurl(StoreManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getStoreItemsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (StoreManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getStoreItemsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __StoreManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool StoreManager::getStoreItemsAsync(char * accessToken,
	std::string filterNameSearch, std::string filterUniqueKey, bool filterPublished, bool filterDisplayable, std::string filterStart, std::string filterEnd, std::string filterStartDate, std::string filterStopDate, std::string filterSku, std::string filterPrice, std::string filterTag, std::string filterItemsByType, std::string filterBundledSkus, int filterVendor, int size, int page, std::string order, 
	void(* handler)(PageResource«StoreItem», Error, void* )
	, void* userData)
{
	return getStoreItemsHelper(accessToken,
	filterNameSearch, filterUniqueKey, filterPublished, filterDisplayable, filterStart, filterEnd, filterStartDate, filterStopDate, filterSku, filterPrice, filterTag, filterItemsByType, filterBundledSkus, filterVendor, size, page, order, 
	handler, userData, true);
}

bool StoreManager::getStoreItemsSync(char * accessToken,
	std::string filterNameSearch, std::string filterUniqueKey, bool filterPublished, bool filterDisplayable, std::string filterStart, std::string filterEnd, std::string filterStartDate, std::string filterStopDate, std::string filterSku, std::string filterPrice, std::string filterTag, std::string filterItemsByType, std::string filterBundledSkus, int filterVendor, int size, int page, std::string order, 
	void(* handler)(PageResource«StoreItem», Error, void* )
	, void* userData)
{
	return getStoreItemsHelper(accessToken,
	filterNameSearch, filterUniqueKey, filterPublished, filterDisplayable, filterStart, filterEnd, filterStartDate, filterStopDate, filterSku, filterPrice, filterTag, filterItemsByType, filterBundledSkus, filterVendor, size, page, order, 
	handler, userData, false);
}

static bool quickBuyProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(InvoiceResource, Error, void* )
	= reinterpret_cast<void(*)(InvoiceResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	InvoiceResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("InvoiceResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "InvoiceResource", "InvoiceResource");
			json_node_free(pJson);

			if ("InvoiceResource" == "std::string") {
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

static bool quickBuyHelper(char * accessToken,
	QuickBuyRequest quickBuyRequest, 
	void(* handler)(InvoiceResource, Error, void* )
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

	if (isprimitive("QuickBuyRequest")) {
		node = converttoJson(&quickBuyRequest, "QuickBuyRequest", "");
	}
	
	char *jsonStr =  quickBuyRequest.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/store/quick-buy");
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
		NetClient::easycurl(StoreManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = quickBuyProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (StoreManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), quickBuyProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __StoreManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool StoreManager::quickBuyAsync(char * accessToken,
	QuickBuyRequest quickBuyRequest, 
	void(* handler)(InvoiceResource, Error, void* )
	, void* userData)
{
	return quickBuyHelper(accessToken,
	quickBuyRequest, 
	handler, userData, true);
}

bool StoreManager::quickBuySync(char * accessToken,
	QuickBuyRequest quickBuyRequest, 
	void(* handler)(InvoiceResource, Error, void* )
	, void* userData)
{
	return quickBuyHelper(accessToken,
	quickBuyRequest, 
	handler, userData, false);
}

static bool updateItemTemplateProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(StoreItemTemplateResource, Error, void* )
	= reinterpret_cast<void(*)(StoreItemTemplateResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	StoreItemTemplateResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("StoreItemTemplateResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "StoreItemTemplateResource", "StoreItemTemplateResource");
			json_node_free(pJson);

			if ("StoreItemTemplateResource" == "std::string") {
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

static bool updateItemTemplateHelper(char * accessToken,
	std::string id, StoreItemTemplateResource itemTemplateResource, 
	void(* handler)(StoreItemTemplateResource, Error, void* )
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

	if (isprimitive("StoreItemTemplateResource")) {
		node = converttoJson(&itemTemplateResource, "StoreItemTemplateResource", "");
	}
	
	char *jsonStr =  itemTemplateResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/store/items/templates/{id}");
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
		NetClient::easycurl(StoreManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = updateItemTemplateProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (StoreManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), updateItemTemplateProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __StoreManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool StoreManager::updateItemTemplateAsync(char * accessToken,
	std::string id, StoreItemTemplateResource itemTemplateResource, 
	void(* handler)(StoreItemTemplateResource, Error, void* )
	, void* userData)
{
	return updateItemTemplateHelper(accessToken,
	id, itemTemplateResource, 
	handler, userData, true);
}

bool StoreManager::updateItemTemplateSync(char * accessToken,
	std::string id, StoreItemTemplateResource itemTemplateResource, 
	void(* handler)(StoreItemTemplateResource, Error, void* )
	, void* userData)
{
	return updateItemTemplateHelper(accessToken,
	id, itemTemplateResource, 
	handler, userData, false);
}

static bool updateStoreItemProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(StoreItem, Error, void* )
	= reinterpret_cast<void(*)(StoreItem, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	StoreItem out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("StoreItem")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "StoreItem", "StoreItem");
			json_node_free(pJson);

			if ("StoreItem" == "std::string") {
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

static bool updateStoreItemHelper(char * accessToken,
	int id, bool cascade, StoreItem storeItem, 
	void(* handler)(StoreItem, Error, void* )
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
	

	itemAtq = stringify(&cascade, "bool");
	queryParams.insert(pair<string, string>("cascade", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("cascade");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	if (isprimitive("StoreItem")) {
		node = converttoJson(&storeItem, "StoreItem", "");
	}
	
	char *jsonStr =  storeItem.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/store/items/{id}");
	int pos;

	string s_id("{");
	s_id.append("id");
	s_id.append("}");
	pos = url.find(s_id);
	url.erase(pos, s_id.length());
	url.insert(pos, stringify(&id, "int"));

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
		NetClient::easycurl(StoreManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = updateStoreItemProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (StoreManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), updateStoreItemProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __StoreManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool StoreManager::updateStoreItemAsync(char * accessToken,
	int id, bool cascade, StoreItem storeItem, 
	void(* handler)(StoreItem, Error, void* )
	, void* userData)
{
	return updateStoreItemHelper(accessToken,
	id, cascade, storeItem, 
	handler, userData, true);
}

bool StoreManager::updateStoreItemSync(char * accessToken,
	int id, bool cascade, StoreItem storeItem, 
	void(* handler)(StoreItem, Error, void* )
	, void* userData)
{
	return updateStoreItemHelper(accessToken,
	id, cascade, storeItem, 
	handler, userData, false);
}

