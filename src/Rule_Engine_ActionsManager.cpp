#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "Rule_Engine_ActionsManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


Rule_Engine_ActionsManager::Rule_Engine_ActionsManager()
{

}

Rule_Engine_ActionsManager::~Rule_Engine_ActionsManager()
{

}

static gboolean __Rule_Engine_ActionsManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __Rule_Engine_ActionsManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__Rule_Engine_ActionsManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool getBREActionsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::list<ActionResource>, Error, void* )
	= reinterpret_cast<void(*)(std::list<ActionResource>, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	std::list<ActionResource> out;
	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));



		pJson = json_from_string(data, NULL);
		JsonArray * jsonarray = json_node_get_array (pJson);
		guint length = json_array_get_length (jsonarray);
		for(guint i = 0; i < length; i++){
			JsonNode* myJson = json_array_get_element (jsonarray, i);
			char * singlenodestr = json_to_string(myJson, false);
			ActionResource singlemodel;
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

static bool getBREActionsHelper(char * accessToken,
	std::string filterCategory, std::string filterName, std::string filterTags, std::string filterSearch, 
	void(* handler)(std::list<ActionResource>, Error, void* )
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
	

	itemAtq = stringify(&filterCategory, "std::string");
	queryParams.insert(pair<string, string>("filter_category", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_category");
	}


	itemAtq = stringify(&filterName, "std::string");
	queryParams.insert(pair<string, string>("filter_name", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_name");
	}


	itemAtq = stringify(&filterTags, "std::string");
	queryParams.insert(pair<string, string>("filter_tags", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_tags");
	}


	itemAtq = stringify(&filterSearch, "std::string");
	queryParams.insert(pair<string, string>("filter_search", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_search");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/bre/actions");
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
		NetClient::easycurl(Rule_Engine_ActionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getBREActionsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Rule_Engine_ActionsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getBREActionsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Rule_Engine_ActionsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Rule_Engine_ActionsManager::getBREActionsAsync(char * accessToken,
	std::string filterCategory, std::string filterName, std::string filterTags, std::string filterSearch, 
	void(* handler)(std::list<ActionResource>, Error, void* )
	, void* userData)
{
	return getBREActionsHelper(accessToken,
	filterCategory, filterName, filterTags, filterSearch, 
	handler, userData, true);
}

bool Rule_Engine_ActionsManager::getBREActionsSync(char * accessToken,
	std::string filterCategory, std::string filterName, std::string filterTags, std::string filterSearch, 
	void(* handler)(std::list<ActionResource>, Error, void* )
	, void* userData)
{
	return getBREActionsHelper(accessToken,
	filterCategory, filterName, filterTags, filterSearch, 
	handler, userData, false);
}

