#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "GamificationLeaderboardsManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


GamificationLeaderboardsManager::GamificationLeaderboardsManager()
{

}

GamificationLeaderboardsManager::~GamificationLeaderboardsManager()
{

}

static gboolean __GamificationLeaderboardsManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __GamificationLeaderboardsManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__GamificationLeaderboardsManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool getLeaderboardProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(LeaderboardResource, Error, void* )
	= reinterpret_cast<void(*)(LeaderboardResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	LeaderboardResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("LeaderboardResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "LeaderboardResource", "LeaderboardResource");
			json_node_free(pJson);

			if ("LeaderboardResource" == "std::string") {
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

static bool getLeaderboardHelper(char * accessToken,
	std::string contextType, std::string contextId, int size, int page, std::string order, 
	void(* handler)(LeaderboardResource, Error, void* )
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

	string url("/leaderboards/{context_type}/{context_id}");
	int pos;

	string s_contextType("{");
	s_contextType.append("context_type");
	s_contextType.append("}");
	pos = url.find(s_contextType);
	url.erase(pos, s_contextType.length());
	url.insert(pos, stringify(&contextType, "std::string"));
	string s_contextId("{");
	s_contextId.append("context_id");
	s_contextId.append("}");
	pos = url.find(s_contextId);
	url.erase(pos, s_contextId.length());
	url.insert(pos, stringify(&contextId, "std::string"));

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
		NetClient::easycurl(GamificationLeaderboardsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getLeaderboardProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationLeaderboardsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getLeaderboardProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationLeaderboardsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationLeaderboardsManager::getLeaderboardAsync(char * accessToken,
	std::string contextType, std::string contextId, int size, int page, std::string order, 
	void(* handler)(LeaderboardResource, Error, void* )
	, void* userData)
{
	return getLeaderboardHelper(accessToken,
	contextType, contextId, size, page, order, 
	handler, userData, true);
}

bool GamificationLeaderboardsManager::getLeaderboardSync(char * accessToken,
	std::string contextType, std::string contextId, int size, int page, std::string order, 
	void(* handler)(LeaderboardResource, Error, void* )
	, void* userData)
{
	return getLeaderboardHelper(accessToken,
	contextType, contextId, size, page, order, 
	handler, userData, false);
}

static bool getLeaderboardRankProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(LeaderboardEntryResource, Error, void* )
	= reinterpret_cast<void(*)(LeaderboardEntryResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	LeaderboardEntryResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("LeaderboardEntryResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "LeaderboardEntryResource", "LeaderboardEntryResource");
			json_node_free(pJson);

			if ("LeaderboardEntryResource" == "std::string") {
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

static bool getLeaderboardRankHelper(char * accessToken,
	std::string contextType, std::string contextId, std::string id, 
	void(* handler)(LeaderboardEntryResource, Error, void* )
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

	string url("/leaderboards/{context_type}/{context_id}/users/{id}/rank");
	int pos;

	string s_contextType("{");
	s_contextType.append("context_type");
	s_contextType.append("}");
	pos = url.find(s_contextType);
	url.erase(pos, s_contextType.length());
	url.insert(pos, stringify(&contextType, "std::string"));
	string s_contextId("{");
	s_contextId.append("context_id");
	s_contextId.append("}");
	pos = url.find(s_contextId);
	url.erase(pos, s_contextId.length());
	url.insert(pos, stringify(&contextId, "std::string"));
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
		NetClient::easycurl(GamificationLeaderboardsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getLeaderboardRankProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationLeaderboardsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getLeaderboardRankProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationLeaderboardsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationLeaderboardsManager::getLeaderboardRankAsync(char * accessToken,
	std::string contextType, std::string contextId, std::string id, 
	void(* handler)(LeaderboardEntryResource, Error, void* )
	, void* userData)
{
	return getLeaderboardRankHelper(accessToken,
	contextType, contextId, id, 
	handler, userData, true);
}

bool GamificationLeaderboardsManager::getLeaderboardRankSync(char * accessToken,
	std::string contextType, std::string contextId, std::string id, 
	void(* handler)(LeaderboardEntryResource, Error, void* )
	, void* userData)
{
	return getLeaderboardRankHelper(accessToken,
	contextType, contextId, id, 
	handler, userData, false);
}

static bool getLeaderboardStrategiesProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool getLeaderboardStrategiesHelper(char * accessToken,
	
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
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/leaderboards/strategies");
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
		NetClient::easycurl(GamificationLeaderboardsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getLeaderboardStrategiesProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationLeaderboardsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getLeaderboardStrategiesProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationLeaderboardsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationLeaderboardsManager::getLeaderboardStrategiesAsync(char * accessToken,
	
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData)
{
	return getLeaderboardStrategiesHelper(accessToken,
	
	handler, userData, true);
}

bool GamificationLeaderboardsManager::getLeaderboardStrategiesSync(char * accessToken,
	
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData)
{
	return getLeaderboardStrategiesHelper(accessToken,
	
	handler, userData, false);
}

