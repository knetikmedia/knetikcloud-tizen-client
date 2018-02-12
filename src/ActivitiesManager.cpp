#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "ActivitiesManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


ActivitiesManager::ActivitiesManager()
{

}

ActivitiesManager::~ActivitiesManager()
{

}

static gboolean __ActivitiesManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __ActivitiesManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__ActivitiesManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool addUserProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(ActivityOccurrenceResource, Error, void* )
	= reinterpret_cast<void(*)(ActivityOccurrenceResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	ActivityOccurrenceResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("ActivityOccurrenceResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "ActivityOccurrenceResource", "ActivityOccurrenceResource");
			json_node_free(pJson);

			if ("ActivityOccurrenceResource" == "std::string") {
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

static bool addUserHelper(char * accessToken,
	long long activityOccurrenceId, bool test, bool bypassRestrictions, IntWrapper userId, 
	void(* handler)(ActivityOccurrenceResource, Error, void* )
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
	

	itemAtq = stringify(&test, "bool");
	queryParams.insert(pair<string, string>("test", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("test");
	}


	itemAtq = stringify(&bypassRestrictions, "bool");
	queryParams.insert(pair<string, string>("bypass_restrictions", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("bypass_restrictions");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	if (isprimitive("IntWrapper")) {
		node = converttoJson(&userId, "IntWrapper", "");
	}
	
	char *jsonStr =  userId.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/activity-occurrences/{activity_occurrence_id}/users");
	int pos;

	string s_activityOccurrenceId("{");
	s_activityOccurrenceId.append("activity_occurrence_id");
	s_activityOccurrenceId.append("}");
	pos = url.find(s_activityOccurrenceId);
	url.erase(pos, s_activityOccurrenceId.length());
	url.insert(pos, stringify(&activityOccurrenceId, "long long"));

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
		NetClient::easycurl(ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = addUserProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), addUserProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __ActivitiesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool ActivitiesManager::addUserAsync(char * accessToken,
	long long activityOccurrenceId, bool test, bool bypassRestrictions, IntWrapper userId, 
	void(* handler)(ActivityOccurrenceResource, Error, void* )
	, void* userData)
{
	return addUserHelper(accessToken,
	activityOccurrenceId, test, bypassRestrictions, userId, 
	handler, userData, true);
}

bool ActivitiesManager::addUserSync(char * accessToken,
	long long activityOccurrenceId, bool test, bool bypassRestrictions, IntWrapper userId, 
	void(* handler)(ActivityOccurrenceResource, Error, void* )
	, void* userData)
{
	return addUserHelper(accessToken,
	activityOccurrenceId, test, bypassRestrictions, userId, 
	handler, userData, false);
}

static bool createActivityProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(ActivityResource, Error, void* )
	= reinterpret_cast<void(*)(ActivityResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	ActivityResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("ActivityResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "ActivityResource", "ActivityResource");
			json_node_free(pJson);

			if ("ActivityResource" == "std::string") {
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

static bool createActivityHelper(char * accessToken,
	ActivityResource activityResource, 
	void(* handler)(ActivityResource, Error, void* )
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

	if (isprimitive("ActivityResource")) {
		node = converttoJson(&activityResource, "ActivityResource", "");
	}
	
	char *jsonStr =  activityResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/activities");
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
		NetClient::easycurl(ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = createActivityProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), createActivityProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __ActivitiesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool ActivitiesManager::createActivityAsync(char * accessToken,
	ActivityResource activityResource, 
	void(* handler)(ActivityResource, Error, void* )
	, void* userData)
{
	return createActivityHelper(accessToken,
	activityResource, 
	handler, userData, true);
}

bool ActivitiesManager::createActivitySync(char * accessToken,
	ActivityResource activityResource, 
	void(* handler)(ActivityResource, Error, void* )
	, void* userData)
{
	return createActivityHelper(accessToken,
	activityResource, 
	handler, userData, false);
}

static bool createActivityOccurrenceProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(ActivityOccurrenceResource, Error, void* )
	= reinterpret_cast<void(*)(ActivityOccurrenceResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	ActivityOccurrenceResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("ActivityOccurrenceResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "ActivityOccurrenceResource", "ActivityOccurrenceResource");
			json_node_free(pJson);

			if ("ActivityOccurrenceResource" == "std::string") {
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

static bool createActivityOccurrenceHelper(char * accessToken,
	bool test, CreateActivityOccurrenceRequest activityOccurrenceResource, 
	void(* handler)(ActivityOccurrenceResource, Error, void* )
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
	

	itemAtq = stringify(&test, "bool");
	queryParams.insert(pair<string, string>("test", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("test");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	if (isprimitive("CreateActivityOccurrenceRequest")) {
		node = converttoJson(&activityOccurrenceResource, "CreateActivityOccurrenceRequest", "");
	}
	
	char *jsonStr =  activityOccurrenceResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/activity-occurrences");
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
		NetClient::easycurl(ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = createActivityOccurrenceProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), createActivityOccurrenceProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __ActivitiesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool ActivitiesManager::createActivityOccurrenceAsync(char * accessToken,
	bool test, CreateActivityOccurrenceRequest activityOccurrenceResource, 
	void(* handler)(ActivityOccurrenceResource, Error, void* )
	, void* userData)
{
	return createActivityOccurrenceHelper(accessToken,
	test, activityOccurrenceResource, 
	handler, userData, true);
}

bool ActivitiesManager::createActivityOccurrenceSync(char * accessToken,
	bool test, CreateActivityOccurrenceRequest activityOccurrenceResource, 
	void(* handler)(ActivityOccurrenceResource, Error, void* )
	, void* userData)
{
	return createActivityOccurrenceHelper(accessToken,
	test, activityOccurrenceResource, 
	handler, userData, false);
}

static bool createActivityTemplateProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(TemplateResource, Error, void* )
	= reinterpret_cast<void(*)(TemplateResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	TemplateResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("TemplateResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "TemplateResource", "TemplateResource");
			json_node_free(pJson);

			if ("TemplateResource" == "std::string") {
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

static bool createActivityTemplateHelper(char * accessToken,
	TemplateResource activityTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
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

	if (isprimitive("TemplateResource")) {
		node = converttoJson(&activityTemplateResource, "TemplateResource", "");
	}
	
	char *jsonStr =  activityTemplateResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/activities/templates");
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
		NetClient::easycurl(ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = createActivityTemplateProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), createActivityTemplateProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __ActivitiesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool ActivitiesManager::createActivityTemplateAsync(char * accessToken,
	TemplateResource activityTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData)
{
	return createActivityTemplateHelper(accessToken,
	activityTemplateResource, 
	handler, userData, true);
}

bool ActivitiesManager::createActivityTemplateSync(char * accessToken,
	TemplateResource activityTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData)
{
	return createActivityTemplateHelper(accessToken,
	activityTemplateResource, 
	handler, userData, false);
}

static bool deleteActivityProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool deleteActivityHelper(char * accessToken,
	long long id, 
	
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

	string url("/activities/{id}");
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
	string myhttpmethod("DELETE");

	if(strcmp("PUT", "DELETE") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = deleteActivityProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), deleteActivityProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __ActivitiesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool ActivitiesManager::deleteActivityAsync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteActivityHelper(accessToken,
	id, 
	handler, userData, true);
}

bool ActivitiesManager::deleteActivitySync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteActivityHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool deleteActivityTemplateProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool deleteActivityTemplateHelper(char * accessToken,
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

	string url("/activities/templates/{id}");
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
		NetClient::easycurl(ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = deleteActivityTemplateProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), deleteActivityTemplateProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __ActivitiesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool ActivitiesManager::deleteActivityTemplateAsync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteActivityTemplateHelper(accessToken,
	id, cascade, 
	handler, userData, true);
}

bool ActivitiesManager::deleteActivityTemplateSync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteActivityTemplateHelper(accessToken,
	id, cascade, 
	handler, userData, false);
}

static bool getActivitiesProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«BareActivityResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«BareActivityResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«BareActivityResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«BareActivityResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«BareActivityResource»", "PageResource«BareActivityResource»");
			json_node_free(pJson);

			if ("PageResource«BareActivityResource»" == "std::string") {
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

static bool getActivitiesHelper(char * accessToken,
	bool filterTemplate, std::string filterName, std::string filterId, int size, int page, std::string order, 
	void(* handler)(PageResource«BareActivityResource», Error, void* )
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
	

	itemAtq = stringify(&filterTemplate, "bool");
	queryParams.insert(pair<string, string>("filter_template", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_template");
	}


	itemAtq = stringify(&filterName, "std::string");
	queryParams.insert(pair<string, string>("filter_name", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_name");
	}


	itemAtq = stringify(&filterId, "std::string");
	queryParams.insert(pair<string, string>("filter_id", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_id");
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

	string url("/activities");
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
		NetClient::easycurl(ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getActivitiesProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getActivitiesProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __ActivitiesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool ActivitiesManager::getActivitiesAsync(char * accessToken,
	bool filterTemplate, std::string filterName, std::string filterId, int size, int page, std::string order, 
	void(* handler)(PageResource«BareActivityResource», Error, void* )
	, void* userData)
{
	return getActivitiesHelper(accessToken,
	filterTemplate, filterName, filterId, size, page, order, 
	handler, userData, true);
}

bool ActivitiesManager::getActivitiesSync(char * accessToken,
	bool filterTemplate, std::string filterName, std::string filterId, int size, int page, std::string order, 
	void(* handler)(PageResource«BareActivityResource», Error, void* )
	, void* userData)
{
	return getActivitiesHelper(accessToken,
	filterTemplate, filterName, filterId, size, page, order, 
	handler, userData, false);
}

static bool getActivityProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(ActivityResource, Error, void* )
	= reinterpret_cast<void(*)(ActivityResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	ActivityResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("ActivityResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "ActivityResource", "ActivityResource");
			json_node_free(pJson);

			if ("ActivityResource" == "std::string") {
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

static bool getActivityHelper(char * accessToken,
	long long id, 
	void(* handler)(ActivityResource, Error, void* )
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

	string url("/activities/{id}");
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
		NetClient::easycurl(ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getActivityProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getActivityProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __ActivitiesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool ActivitiesManager::getActivityAsync(char * accessToken,
	long long id, 
	void(* handler)(ActivityResource, Error, void* )
	, void* userData)
{
	return getActivityHelper(accessToken,
	id, 
	handler, userData, true);
}

bool ActivitiesManager::getActivitySync(char * accessToken,
	long long id, 
	void(* handler)(ActivityResource, Error, void* )
	, void* userData)
{
	return getActivityHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool getActivityOccurrenceDetailsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(ActivityOccurrenceResource, Error, void* )
	= reinterpret_cast<void(*)(ActivityOccurrenceResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	ActivityOccurrenceResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("ActivityOccurrenceResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "ActivityOccurrenceResource", "ActivityOccurrenceResource");
			json_node_free(pJson);

			if ("ActivityOccurrenceResource" == "std::string") {
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

static bool getActivityOccurrenceDetailsHelper(char * accessToken,
	long long activityOccurrenceId, 
	void(* handler)(ActivityOccurrenceResource, Error, void* )
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

	string url("/activity-occurrences/{activity_occurrence_id}");
	int pos;

	string s_activityOccurrenceId("{");
	s_activityOccurrenceId.append("activity_occurrence_id");
	s_activityOccurrenceId.append("}");
	pos = url.find(s_activityOccurrenceId);
	url.erase(pos, s_activityOccurrenceId.length());
	url.insert(pos, stringify(&activityOccurrenceId, "long long"));

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
		NetClient::easycurl(ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getActivityOccurrenceDetailsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getActivityOccurrenceDetailsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __ActivitiesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool ActivitiesManager::getActivityOccurrenceDetailsAsync(char * accessToken,
	long long activityOccurrenceId, 
	void(* handler)(ActivityOccurrenceResource, Error, void* )
	, void* userData)
{
	return getActivityOccurrenceDetailsHelper(accessToken,
	activityOccurrenceId, 
	handler, userData, true);
}

bool ActivitiesManager::getActivityOccurrenceDetailsSync(char * accessToken,
	long long activityOccurrenceId, 
	void(* handler)(ActivityOccurrenceResource, Error, void* )
	, void* userData)
{
	return getActivityOccurrenceDetailsHelper(accessToken,
	activityOccurrenceId, 
	handler, userData, false);
}

static bool getActivityTemplateProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(TemplateResource, Error, void* )
	= reinterpret_cast<void(*)(TemplateResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	TemplateResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("TemplateResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "TemplateResource", "TemplateResource");
			json_node_free(pJson);

			if ("TemplateResource" == "std::string") {
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

static bool getActivityTemplateHelper(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
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

	string url("/activities/templates/{id}");
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
		NetClient::easycurl(ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getActivityTemplateProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getActivityTemplateProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __ActivitiesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool ActivitiesManager::getActivityTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData)
{
	return getActivityTemplateHelper(accessToken,
	id, 
	handler, userData, true);
}

bool ActivitiesManager::getActivityTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData)
{
	return getActivityTemplateHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool getActivityTemplatesProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«TemplateResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«TemplateResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«TemplateResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«TemplateResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«TemplateResource»", "PageResource«TemplateResource»");
			json_node_free(pJson);

			if ("PageResource«TemplateResource»" == "std::string") {
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

static bool getActivityTemplatesHelper(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
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

	string url("/activities/templates");
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
		NetClient::easycurl(ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getActivityTemplatesProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getActivityTemplatesProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __ActivitiesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool ActivitiesManager::getActivityTemplatesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData)
{
	return getActivityTemplatesHelper(accessToken,
	size, page, order, 
	handler, userData, true);
}

bool ActivitiesManager::getActivityTemplatesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData)
{
	return getActivityTemplatesHelper(accessToken,
	size, page, order, 
	handler, userData, false);
}

static bool listActivityOccurrencesProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«ActivityOccurrenceResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«ActivityOccurrenceResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«ActivityOccurrenceResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«ActivityOccurrenceResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«ActivityOccurrenceResource»", "PageResource«ActivityOccurrenceResource»");
			json_node_free(pJson);

			if ("PageResource«ActivityOccurrenceResource»" == "std::string") {
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

static bool listActivityOccurrencesHelper(char * accessToken,
	std::string filterActivity, std::string filterStatus, int filterEvent, int filterChallenge, int size, int page, std::string order, 
	void(* handler)(PageResource«ActivityOccurrenceResource», Error, void* )
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
	

	itemAtq = stringify(&filterActivity, "std::string");
	queryParams.insert(pair<string, string>("filter_activity", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_activity");
	}


	itemAtq = stringify(&filterStatus, "std::string");
	queryParams.insert(pair<string, string>("filter_status", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_status");
	}


	itemAtq = stringify(&filterEvent, "int");
	queryParams.insert(pair<string, string>("filter_event", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_event");
	}


	itemAtq = stringify(&filterChallenge, "int");
	queryParams.insert(pair<string, string>("filter_challenge", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_challenge");
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

	string url("/activity-occurrences");
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
		NetClient::easycurl(ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = listActivityOccurrencesProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), listActivityOccurrencesProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __ActivitiesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool ActivitiesManager::listActivityOccurrencesAsync(char * accessToken,
	std::string filterActivity, std::string filterStatus, int filterEvent, int filterChallenge, int size, int page, std::string order, 
	void(* handler)(PageResource«ActivityOccurrenceResource», Error, void* )
	, void* userData)
{
	return listActivityOccurrencesHelper(accessToken,
	filterActivity, filterStatus, filterEvent, filterChallenge, size, page, order, 
	handler, userData, true);
}

bool ActivitiesManager::listActivityOccurrencesSync(char * accessToken,
	std::string filterActivity, std::string filterStatus, int filterEvent, int filterChallenge, int size, int page, std::string order, 
	void(* handler)(PageResource«ActivityOccurrenceResource», Error, void* )
	, void* userData)
{
	return listActivityOccurrencesHelper(accessToken,
	filterActivity, filterStatus, filterEvent, filterChallenge, size, page, order, 
	handler, userData, false);
}

static bool removeUserProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool removeUserHelper(char * accessToken,
	long long activityOccurrenceId, std::string userId, bool ban, bool bypassRestrictions, 
	
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
	

	itemAtq = stringify(&ban, "bool");
	queryParams.insert(pair<string, string>("ban", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("ban");
	}


	itemAtq = stringify(&bypassRestrictions, "bool");
	queryParams.insert(pair<string, string>("bypass_restrictions", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("bypass_restrictions");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/activity-occurrences/{activity_occurrence_id}/users/{user_id}");
	int pos;

	string s_activityOccurrenceId("{");
	s_activityOccurrenceId.append("activity_occurrence_id");
	s_activityOccurrenceId.append("}");
	pos = url.find(s_activityOccurrenceId);
	url.erase(pos, s_activityOccurrenceId.length());
	url.insert(pos, stringify(&activityOccurrenceId, "long long"));
	string s_userId("{");
	s_userId.append("user_id");
	s_userId.append("}");
	pos = url.find(s_userId);
	url.erase(pos, s_userId.length());
	url.insert(pos, stringify(&userId, "std::string"));

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
		NetClient::easycurl(ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = removeUserProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), removeUserProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __ActivitiesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool ActivitiesManager::removeUserAsync(char * accessToken,
	long long activityOccurrenceId, std::string userId, bool ban, bool bypassRestrictions, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return removeUserHelper(accessToken,
	activityOccurrenceId, userId, ban, bypassRestrictions, 
	handler, userData, true);
}

bool ActivitiesManager::removeUserSync(char * accessToken,
	long long activityOccurrenceId, std::string userId, bool ban, bool bypassRestrictions, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return removeUserHelper(accessToken,
	activityOccurrenceId, userId, ban, bypassRestrictions, 
	handler, userData, false);
}

static bool setActivityOccurrenceResultsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(ActivityOccurrenceResults, Error, void* )
	= reinterpret_cast<void(*)(ActivityOccurrenceResults, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	ActivityOccurrenceResults out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("ActivityOccurrenceResults")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "ActivityOccurrenceResults", "ActivityOccurrenceResults");
			json_node_free(pJson);

			if ("ActivityOccurrenceResults" == "std::string") {
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

static bool setActivityOccurrenceResultsHelper(char * accessToken,
	long long activityOccurrenceId, ActivityOccurrenceResultsResource activityOccurrenceResults, 
	void(* handler)(ActivityOccurrenceResults, Error, void* )
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

	if (isprimitive("ActivityOccurrenceResultsResource")) {
		node = converttoJson(&activityOccurrenceResults, "ActivityOccurrenceResultsResource", "");
	}
	
	char *jsonStr =  activityOccurrenceResults.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/activity-occurrences/{activity_occurrence_id}/results");
	int pos;

	string s_activityOccurrenceId("{");
	s_activityOccurrenceId.append("activity_occurrence_id");
	s_activityOccurrenceId.append("}");
	pos = url.find(s_activityOccurrenceId);
	url.erase(pos, s_activityOccurrenceId.length());
	url.insert(pos, stringify(&activityOccurrenceId, "long long"));

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
		NetClient::easycurl(ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = setActivityOccurrenceResultsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), setActivityOccurrenceResultsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __ActivitiesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool ActivitiesManager::setActivityOccurrenceResultsAsync(char * accessToken,
	long long activityOccurrenceId, ActivityOccurrenceResultsResource activityOccurrenceResults, 
	void(* handler)(ActivityOccurrenceResults, Error, void* )
	, void* userData)
{
	return setActivityOccurrenceResultsHelper(accessToken,
	activityOccurrenceId, activityOccurrenceResults, 
	handler, userData, true);
}

bool ActivitiesManager::setActivityOccurrenceResultsSync(char * accessToken,
	long long activityOccurrenceId, ActivityOccurrenceResultsResource activityOccurrenceResults, 
	void(* handler)(ActivityOccurrenceResults, Error, void* )
	, void* userData)
{
	return setActivityOccurrenceResultsHelper(accessToken,
	activityOccurrenceId, activityOccurrenceResults, 
	handler, userData, false);
}

static bool setActivityOccurrenceSettingsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(ActivityOccurrenceResource, Error, void* )
	= reinterpret_cast<void(*)(ActivityOccurrenceResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	ActivityOccurrenceResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("ActivityOccurrenceResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "ActivityOccurrenceResource", "ActivityOccurrenceResource");
			json_node_free(pJson);

			if ("ActivityOccurrenceResource" == "std::string") {
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

static bool setActivityOccurrenceSettingsHelper(char * accessToken,
	long long activityOccurrenceId, ActivityOccurrenceSettingsResource settings, 
	void(* handler)(ActivityOccurrenceResource, Error, void* )
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

	if (isprimitive("ActivityOccurrenceSettingsResource")) {
		node = converttoJson(&settings, "ActivityOccurrenceSettingsResource", "");
	}
	
	char *jsonStr =  settings.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/activity-occurrences/{activity_occurrence_id}/settings");
	int pos;

	string s_activityOccurrenceId("{");
	s_activityOccurrenceId.append("activity_occurrence_id");
	s_activityOccurrenceId.append("}");
	pos = url.find(s_activityOccurrenceId);
	url.erase(pos, s_activityOccurrenceId.length());
	url.insert(pos, stringify(&activityOccurrenceId, "long long"));

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
		NetClient::easycurl(ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = setActivityOccurrenceSettingsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), setActivityOccurrenceSettingsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __ActivitiesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool ActivitiesManager::setActivityOccurrenceSettingsAsync(char * accessToken,
	long long activityOccurrenceId, ActivityOccurrenceSettingsResource settings, 
	void(* handler)(ActivityOccurrenceResource, Error, void* )
	, void* userData)
{
	return setActivityOccurrenceSettingsHelper(accessToken,
	activityOccurrenceId, settings, 
	handler, userData, true);
}

bool ActivitiesManager::setActivityOccurrenceSettingsSync(char * accessToken,
	long long activityOccurrenceId, ActivityOccurrenceSettingsResource settings, 
	void(* handler)(ActivityOccurrenceResource, Error, void* )
	, void* userData)
{
	return setActivityOccurrenceSettingsHelper(accessToken,
	activityOccurrenceId, settings, 
	handler, userData, false);
}

static bool setUserStatusProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(ActivityUserResource, Error, void* )
	= reinterpret_cast<void(*)(ActivityUserResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	ActivityUserResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("ActivityUserResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "ActivityUserResource", "ActivityUserResource");
			json_node_free(pJson);

			if ("ActivityUserResource" == "std::string") {
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

static bool setUserStatusHelper(char * accessToken,
	long long activityOccurrenceId, std::string userId, std::string status, 
	void(* handler)(ActivityUserResource, Error, void* )
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

	if (isprimitive("std::string")) {
		node = converttoJson(&status, "std::string", "");
	}
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/activity-occurrences/{activity_occurrence_id}/users/{user_id}/status");
	int pos;

	string s_activityOccurrenceId("{");
	s_activityOccurrenceId.append("activity_occurrence_id");
	s_activityOccurrenceId.append("}");
	pos = url.find(s_activityOccurrenceId);
	url.erase(pos, s_activityOccurrenceId.length());
	url.insert(pos, stringify(&activityOccurrenceId, "long long"));
	string s_userId("{");
	s_userId.append("user_id");
	s_userId.append("}");
	pos = url.find(s_userId);
	url.erase(pos, s_userId.length());
	url.insert(pos, stringify(&userId, "std::string"));

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
		NetClient::easycurl(ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = setUserStatusProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), setUserStatusProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __ActivitiesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool ActivitiesManager::setUserStatusAsync(char * accessToken,
	long long activityOccurrenceId, std::string userId, std::string status, 
	void(* handler)(ActivityUserResource, Error, void* )
	, void* userData)
{
	return setUserStatusHelper(accessToken,
	activityOccurrenceId, userId, status, 
	handler, userData, true);
}

bool ActivitiesManager::setUserStatusSync(char * accessToken,
	long long activityOccurrenceId, std::string userId, std::string status, 
	void(* handler)(ActivityUserResource, Error, void* )
	, void* userData)
{
	return setUserStatusHelper(accessToken,
	activityOccurrenceId, userId, status, 
	handler, userData, false);
}

static bool updateActivityProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(ActivityResource, Error, void* )
	= reinterpret_cast<void(*)(ActivityResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	ActivityResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("ActivityResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "ActivityResource", "ActivityResource");
			json_node_free(pJson);

			if ("ActivityResource" == "std::string") {
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

static bool updateActivityHelper(char * accessToken,
	long long id, ActivityResource activityResource, 
	void(* handler)(ActivityResource, Error, void* )
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

	if (isprimitive("ActivityResource")) {
		node = converttoJson(&activityResource, "ActivityResource", "");
	}
	
	char *jsonStr =  activityResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/activities/{id}");
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
		NetClient::easycurl(ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = updateActivityProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), updateActivityProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __ActivitiesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool ActivitiesManager::updateActivityAsync(char * accessToken,
	long long id, ActivityResource activityResource, 
	void(* handler)(ActivityResource, Error, void* )
	, void* userData)
{
	return updateActivityHelper(accessToken,
	id, activityResource, 
	handler, userData, true);
}

bool ActivitiesManager::updateActivitySync(char * accessToken,
	long long id, ActivityResource activityResource, 
	void(* handler)(ActivityResource, Error, void* )
	, void* userData)
{
	return updateActivityHelper(accessToken,
	id, activityResource, 
	handler, userData, false);
}

static bool updateActivityOccurrenceStatusProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool updateActivityOccurrenceStatusHelper(char * accessToken,
	long long activityOccurrenceId, ValueWrapper«string» activityOccurrenceStatus, 
	
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

	if (isprimitive("ValueWrapper«string»")) {
		node = converttoJson(&activityOccurrenceStatus, "ValueWrapper«string»", "");
	}
	
	char *jsonStr =  activityOccurrenceStatus.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/activity-occurrences/{activity_occurrence_id}/status");
	int pos;

	string s_activityOccurrenceId("{");
	s_activityOccurrenceId.append("activity_occurrence_id");
	s_activityOccurrenceId.append("}");
	pos = url.find(s_activityOccurrenceId);
	url.erase(pos, s_activityOccurrenceId.length());
	url.insert(pos, stringify(&activityOccurrenceId, "long long"));

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
		NetClient::easycurl(ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = updateActivityOccurrenceStatusProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), updateActivityOccurrenceStatusProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __ActivitiesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool ActivitiesManager::updateActivityOccurrenceStatusAsync(char * accessToken,
	long long activityOccurrenceId, ValueWrapper«string» activityOccurrenceStatus, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return updateActivityOccurrenceStatusHelper(accessToken,
	activityOccurrenceId, activityOccurrenceStatus, 
	handler, userData, true);
}

bool ActivitiesManager::updateActivityOccurrenceStatusSync(char * accessToken,
	long long activityOccurrenceId, ValueWrapper«string» activityOccurrenceStatus, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return updateActivityOccurrenceStatusHelper(accessToken,
	activityOccurrenceId, activityOccurrenceStatus, 
	handler, userData, false);
}

static bool updateActivityTemplateProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(TemplateResource, Error, void* )
	= reinterpret_cast<void(*)(TemplateResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	TemplateResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("TemplateResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "TemplateResource", "TemplateResource");
			json_node_free(pJson);

			if ("TemplateResource" == "std::string") {
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

static bool updateActivityTemplateHelper(char * accessToken,
	std::string id, TemplateResource activityTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
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

	if (isprimitive("TemplateResource")) {
		node = converttoJson(&activityTemplateResource, "TemplateResource", "");
	}
	
	char *jsonStr =  activityTemplateResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/activities/templates/{id}");
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
		NetClient::easycurl(ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = updateActivityTemplateProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (ActivitiesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), updateActivityTemplateProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __ActivitiesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool ActivitiesManager::updateActivityTemplateAsync(char * accessToken,
	std::string id, TemplateResource activityTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData)
{
	return updateActivityTemplateHelper(accessToken,
	id, activityTemplateResource, 
	handler, userData, true);
}

bool ActivitiesManager::updateActivityTemplateSync(char * accessToken,
	std::string id, TemplateResource activityTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData)
{
	return updateActivityTemplateHelper(accessToken,
	id, activityTemplateResource, 
	handler, userData, false);
}

