#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "MessagingManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


MessagingManager::MessagingManager()
{

}

MessagingManager::~MessagingManager()
{

}

static gboolean __MessagingManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __MessagingManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__MessagingManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool compileMessageTemplateProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::map<string,string>, Error, void* )
	= reinterpret_cast<void(*)(std::map<string,string>, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	std::map<string,string> out;
	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));





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

static bool compileMessageTemplateHelper(char * accessToken,
	MessageTemplateBulkRequest request, 
	void(* handler)(std::map<string,string>, Error, void* )
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

	if (isprimitive("MessageTemplateBulkRequest")) {
		node = converttoJson(&request, "MessageTemplateBulkRequest", "");
	}
	
	char *jsonStr =  request.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/messaging/templates/compilations");
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
		NetClient::easycurl(MessagingManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = compileMessageTemplateProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (MessagingManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), compileMessageTemplateProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __MessagingManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool MessagingManager::compileMessageTemplateAsync(char * accessToken,
	MessageTemplateBulkRequest request, 
	void(* handler)(std::map<string,string>, Error, void* )
	, void* userData)
{
	return compileMessageTemplateHelper(accessToken,
	request, 
	handler, userData, true);
}

bool MessagingManager::compileMessageTemplateSync(char * accessToken,
	MessageTemplateBulkRequest request, 
	void(* handler)(std::map<string,string>, Error, void* )
	, void* userData)
{
	return compileMessageTemplateHelper(accessToken,
	request, 
	handler, userData, false);
}

static bool createMessageTemplateProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(MessageTemplateResource, Error, void* )
	= reinterpret_cast<void(*)(MessageTemplateResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	MessageTemplateResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("MessageTemplateResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "MessageTemplateResource", "MessageTemplateResource");
			json_node_free(pJson);

			if ("MessageTemplateResource" == "std::string") {
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

static bool createMessageTemplateHelper(char * accessToken,
	MessageTemplateResource messageTemplate, 
	void(* handler)(MessageTemplateResource, Error, void* )
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

	if (isprimitive("MessageTemplateResource")) {
		node = converttoJson(&messageTemplate, "MessageTemplateResource", "");
	}
	
	char *jsonStr =  messageTemplate.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/messaging/templates");
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
		NetClient::easycurl(MessagingManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = createMessageTemplateProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (MessagingManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), createMessageTemplateProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __MessagingManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool MessagingManager::createMessageTemplateAsync(char * accessToken,
	MessageTemplateResource messageTemplate, 
	void(* handler)(MessageTemplateResource, Error, void* )
	, void* userData)
{
	return createMessageTemplateHelper(accessToken,
	messageTemplate, 
	handler, userData, true);
}

bool MessagingManager::createMessageTemplateSync(char * accessToken,
	MessageTemplateResource messageTemplate, 
	void(* handler)(MessageTemplateResource, Error, void* )
	, void* userData)
{
	return createMessageTemplateHelper(accessToken,
	messageTemplate, 
	handler, userData, false);
}

static bool deleteMessageTemplateProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool deleteMessageTemplateHelper(char * accessToken,
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

	string url("/messaging/templates/{id}");
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
		NetClient::easycurl(MessagingManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = deleteMessageTemplateProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (MessagingManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), deleteMessageTemplateProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __MessagingManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool MessagingManager::deleteMessageTemplateAsync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteMessageTemplateHelper(accessToken,
	id, 
	handler, userData, true);
}

bool MessagingManager::deleteMessageTemplateSync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteMessageTemplateHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool getMessageTemplateProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(MessageTemplateResource, Error, void* )
	= reinterpret_cast<void(*)(MessageTemplateResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	MessageTemplateResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("MessageTemplateResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "MessageTemplateResource", "MessageTemplateResource");
			json_node_free(pJson);

			if ("MessageTemplateResource" == "std::string") {
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

static bool getMessageTemplateHelper(char * accessToken,
	std::string id, 
	void(* handler)(MessageTemplateResource, Error, void* )
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

	string url("/messaging/templates/{id}");
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
		NetClient::easycurl(MessagingManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getMessageTemplateProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (MessagingManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getMessageTemplateProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __MessagingManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool MessagingManager::getMessageTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(MessageTemplateResource, Error, void* )
	, void* userData)
{
	return getMessageTemplateHelper(accessToken,
	id, 
	handler, userData, true);
}

bool MessagingManager::getMessageTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(MessageTemplateResource, Error, void* )
	, void* userData)
{
	return getMessageTemplateHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool getMessageTemplatesProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«MessageTemplateResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«MessageTemplateResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«MessageTemplateResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«MessageTemplateResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«MessageTemplateResource»", "PageResource«MessageTemplateResource»");
			json_node_free(pJson);

			if ("PageResource«MessageTemplateResource»" == "std::string") {
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

static bool getMessageTemplatesHelper(char * accessToken,
	std::string filterTagset, std::string filterTagIntersection, std::string filterTagExclusion, int size, int page, std::string order, 
	void(* handler)(PageResource«MessageTemplateResource», Error, void* )
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
	

	itemAtq = stringify(&filterTagset, "std::string");
	queryParams.insert(pair<string, string>("filter_tagset", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_tagset");
	}


	itemAtq = stringify(&filterTagIntersection, "std::string");
	queryParams.insert(pair<string, string>("filter_tag_intersection", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_tag_intersection");
	}


	itemAtq = stringify(&filterTagExclusion, "std::string");
	queryParams.insert(pair<string, string>("filter_tag_exclusion", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_tag_exclusion");
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

	string url("/messaging/templates");
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
		NetClient::easycurl(MessagingManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getMessageTemplatesProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (MessagingManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getMessageTemplatesProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __MessagingManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool MessagingManager::getMessageTemplatesAsync(char * accessToken,
	std::string filterTagset, std::string filterTagIntersection, std::string filterTagExclusion, int size, int page, std::string order, 
	void(* handler)(PageResource«MessageTemplateResource», Error, void* )
	, void* userData)
{
	return getMessageTemplatesHelper(accessToken,
	filterTagset, filterTagIntersection, filterTagExclusion, size, page, order, 
	handler, userData, true);
}

bool MessagingManager::getMessageTemplatesSync(char * accessToken,
	std::string filterTagset, std::string filterTagIntersection, std::string filterTagExclusion, int size, int page, std::string order, 
	void(* handler)(PageResource«MessageTemplateResource», Error, void* )
	, void* userData)
{
	return getMessageTemplatesHelper(accessToken,
	filterTagset, filterTagIntersection, filterTagExclusion, size, page, order, 
	handler, userData, false);
}

static bool sendMessage1Processor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool sendMessage1Helper(char * accessToken,
	MessageResource messageResource, 
	
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

	if (isprimitive("MessageResource")) {
		node = converttoJson(&messageResource, "MessageResource", "");
	}
	
	char *jsonStr =  messageResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/messaging/message");
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
		NetClient::easycurl(MessagingManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = sendMessage1Processor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (MessagingManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), sendMessage1Processor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __MessagingManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool MessagingManager::sendMessage1Async(char * accessToken,
	MessageResource messageResource, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return sendMessage1Helper(accessToken,
	messageResource, 
	handler, userData, true);
}

bool MessagingManager::sendMessage1Sync(char * accessToken,
	MessageResource messageResource, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return sendMessage1Helper(accessToken,
	messageResource, 
	handler, userData, false);
}

static bool sendRawEmailProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool sendRawEmailHelper(char * accessToken,
	RawEmailResource rawEmailResource, 
	
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

	if (isprimitive("RawEmailResource")) {
		node = converttoJson(&rawEmailResource, "RawEmailResource", "");
	}
	
	char *jsonStr =  rawEmailResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/messaging/raw-email");
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
		NetClient::easycurl(MessagingManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = sendRawEmailProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (MessagingManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), sendRawEmailProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __MessagingManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool MessagingManager::sendRawEmailAsync(char * accessToken,
	RawEmailResource rawEmailResource, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return sendRawEmailHelper(accessToken,
	rawEmailResource, 
	handler, userData, true);
}

bool MessagingManager::sendRawEmailSync(char * accessToken,
	RawEmailResource rawEmailResource, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return sendRawEmailHelper(accessToken,
	rawEmailResource, 
	handler, userData, false);
}

static bool sendRawPushProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool sendRawPushHelper(char * accessToken,
	RawPushResource rawPushResource, 
	
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

	if (isprimitive("RawPushResource")) {
		node = converttoJson(&rawPushResource, "RawPushResource", "");
	}
	
	char *jsonStr =  rawPushResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/messaging/raw-push");
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
		NetClient::easycurl(MessagingManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = sendRawPushProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (MessagingManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), sendRawPushProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __MessagingManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool MessagingManager::sendRawPushAsync(char * accessToken,
	RawPushResource rawPushResource, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return sendRawPushHelper(accessToken,
	rawPushResource, 
	handler, userData, true);
}

bool MessagingManager::sendRawPushSync(char * accessToken,
	RawPushResource rawPushResource, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return sendRawPushHelper(accessToken,
	rawPushResource, 
	handler, userData, false);
}

static bool sendRawSMSProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool sendRawSMSHelper(char * accessToken,
	RawSMSResource rawSMSResource, 
	
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

	if (isprimitive("RawSMSResource")) {
		node = converttoJson(&rawSMSResource, "RawSMSResource", "");
	}
	
	char *jsonStr =  rawSMSResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/messaging/raw-sms");
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
		NetClient::easycurl(MessagingManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = sendRawSMSProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (MessagingManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), sendRawSMSProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __MessagingManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool MessagingManager::sendRawSMSAsync(char * accessToken,
	RawSMSResource rawSMSResource, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return sendRawSMSHelper(accessToken,
	rawSMSResource, 
	handler, userData, true);
}

bool MessagingManager::sendRawSMSSync(char * accessToken,
	RawSMSResource rawSMSResource, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return sendRawSMSHelper(accessToken,
	rawSMSResource, 
	handler, userData, false);
}

static bool sendTemplatedEmailProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool sendTemplatedEmailHelper(char * accessToken,
	TemplateEmailResource messageResource, 
	
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

	if (isprimitive("TemplateEmailResource")) {
		node = converttoJson(&messageResource, "TemplateEmailResource", "");
	}
	
	char *jsonStr =  messageResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/messaging/templated-email");
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
		NetClient::easycurl(MessagingManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = sendTemplatedEmailProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (MessagingManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), sendTemplatedEmailProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __MessagingManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool MessagingManager::sendTemplatedEmailAsync(char * accessToken,
	TemplateEmailResource messageResource, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return sendTemplatedEmailHelper(accessToken,
	messageResource, 
	handler, userData, true);
}

bool MessagingManager::sendTemplatedEmailSync(char * accessToken,
	TemplateEmailResource messageResource, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return sendTemplatedEmailHelper(accessToken,
	messageResource, 
	handler, userData, false);
}

static bool sendTemplatedPushProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool sendTemplatedPushHelper(char * accessToken,
	TemplatePushResource templatePushResource, 
	
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

	if (isprimitive("TemplatePushResource")) {
		node = converttoJson(&templatePushResource, "TemplatePushResource", "");
	}
	
	char *jsonStr =  templatePushResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/messaging/templated-push");
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
		NetClient::easycurl(MessagingManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = sendTemplatedPushProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (MessagingManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), sendTemplatedPushProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __MessagingManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool MessagingManager::sendTemplatedPushAsync(char * accessToken,
	TemplatePushResource templatePushResource, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return sendTemplatedPushHelper(accessToken,
	templatePushResource, 
	handler, userData, true);
}

bool MessagingManager::sendTemplatedPushSync(char * accessToken,
	TemplatePushResource templatePushResource, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return sendTemplatedPushHelper(accessToken,
	templatePushResource, 
	handler, userData, false);
}

static bool sendTemplatedSMSProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool sendTemplatedSMSHelper(char * accessToken,
	TemplateSMSResource templateSMSResource, 
	
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

	if (isprimitive("TemplateSMSResource")) {
		node = converttoJson(&templateSMSResource, "TemplateSMSResource", "");
	}
	
	char *jsonStr =  templateSMSResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/messaging/templated-sms");
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
		NetClient::easycurl(MessagingManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = sendTemplatedSMSProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (MessagingManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), sendTemplatedSMSProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __MessagingManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool MessagingManager::sendTemplatedSMSAsync(char * accessToken,
	TemplateSMSResource templateSMSResource, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return sendTemplatedSMSHelper(accessToken,
	templateSMSResource, 
	handler, userData, true);
}

bool MessagingManager::sendTemplatedSMSSync(char * accessToken,
	TemplateSMSResource templateSMSResource, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return sendTemplatedSMSHelper(accessToken,
	templateSMSResource, 
	handler, userData, false);
}

static bool sendWebsocketProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool sendWebsocketHelper(char * accessToken,
	WebsocketMessageResource websocketResource, 
	
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

	if (isprimitive("WebsocketMessageResource")) {
		node = converttoJson(&websocketResource, "WebsocketMessageResource", "");
	}
	
	char *jsonStr =  websocketResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/messaging/websocket-message");
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
		NetClient::easycurl(MessagingManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = sendWebsocketProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (MessagingManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), sendWebsocketProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __MessagingManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool MessagingManager::sendWebsocketAsync(char * accessToken,
	WebsocketMessageResource websocketResource, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return sendWebsocketHelper(accessToken,
	websocketResource, 
	handler, userData, true);
}

bool MessagingManager::sendWebsocketSync(char * accessToken,
	WebsocketMessageResource websocketResource, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return sendWebsocketHelper(accessToken,
	websocketResource, 
	handler, userData, false);
}

static bool updateMessageTemplateProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(MessageTemplateResource, Error, void* )
	= reinterpret_cast<void(*)(MessageTemplateResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	MessageTemplateResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("MessageTemplateResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "MessageTemplateResource", "MessageTemplateResource");
			json_node_free(pJson);

			if ("MessageTemplateResource" == "std::string") {
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

static bool updateMessageTemplateHelper(char * accessToken,
	std::string id, MessageTemplateResource messageTemplateResource, 
	void(* handler)(MessageTemplateResource, Error, void* )
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

	if (isprimitive("MessageTemplateResource")) {
		node = converttoJson(&messageTemplateResource, "MessageTemplateResource", "");
	}
	
	char *jsonStr =  messageTemplateResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/messaging/templates/{id}");
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
		NetClient::easycurl(MessagingManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = updateMessageTemplateProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (MessagingManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), updateMessageTemplateProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __MessagingManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool MessagingManager::updateMessageTemplateAsync(char * accessToken,
	std::string id, MessageTemplateResource messageTemplateResource, 
	void(* handler)(MessageTemplateResource, Error, void* )
	, void* userData)
{
	return updateMessageTemplateHelper(accessToken,
	id, messageTemplateResource, 
	handler, userData, true);
}

bool MessagingManager::updateMessageTemplateSync(char * accessToken,
	std::string id, MessageTemplateResource messageTemplateResource, 
	void(* handler)(MessageTemplateResource, Error, void* )
	, void* userData)
{
	return updateMessageTemplateHelper(accessToken,
	id, messageTemplateResource, 
	handler, userData, false);
}

