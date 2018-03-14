#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "Reporting_ChallengesManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


Reporting_ChallengesManager::Reporting_ChallengesManager()
{

}

Reporting_ChallengesManager::~Reporting_ChallengesManager()
{

}

static gboolean __Reporting_ChallengesManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __Reporting_ChallengesManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__Reporting_ChallengesManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool getChallengeEventLeaderboardProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«ChallengeEventParticipantResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«ChallengeEventParticipantResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«ChallengeEventParticipantResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«ChallengeEventParticipantResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«ChallengeEventParticipantResource»", "PageResource«ChallengeEventParticipantResource»");
			json_node_free(pJson);

			if ("PageResource«ChallengeEventParticipantResource»" == "std::string") {
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

static bool getChallengeEventLeaderboardHelper(char * accessToken,
	long long filterEvent, int size, int page, std::string order, 
	void(* handler)(PageResource«ChallengeEventParticipantResource», Error, void* )
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
	

	itemAtq = stringify(&filterEvent, "long long");
	queryParams.insert(pair<string, string>("filter_event", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_event");
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

	string url("/reporting/events/leaderboard");
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
		NetClient::easycurl(Reporting_ChallengesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getChallengeEventLeaderboardProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Reporting_ChallengesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getChallengeEventLeaderboardProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Reporting_ChallengesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Reporting_ChallengesManager::getChallengeEventLeaderboardAsync(char * accessToken,
	long long filterEvent, int size, int page, std::string order, 
	void(* handler)(PageResource«ChallengeEventParticipantResource», Error, void* )
	, void* userData)
{
	return getChallengeEventLeaderboardHelper(accessToken,
	filterEvent, size, page, order, 
	handler, userData, true);
}

bool Reporting_ChallengesManager::getChallengeEventLeaderboardSync(char * accessToken,
	long long filterEvent, int size, int page, std::string order, 
	void(* handler)(PageResource«ChallengeEventParticipantResource», Error, void* )
	, void* userData)
{
	return getChallengeEventLeaderboardHelper(accessToken,
	filterEvent, size, page, order, 
	handler, userData, false);
}

static bool getChallengeEventParticipantsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«ChallengeEventParticipantResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«ChallengeEventParticipantResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«ChallengeEventParticipantResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«ChallengeEventParticipantResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«ChallengeEventParticipantResource»", "PageResource«ChallengeEventParticipantResource»");
			json_node_free(pJson);

			if ("PageResource«ChallengeEventParticipantResource»" == "std::string") {
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

static bool getChallengeEventParticipantsHelper(char * accessToken,
	long long filterEvent, int size, int page, std::string order, 
	void(* handler)(PageResource«ChallengeEventParticipantResource», Error, void* )
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
	

	itemAtq = stringify(&filterEvent, "long long");
	queryParams.insert(pair<string, string>("filter_event", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_event");
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

	string url("/reporting/events/participants");
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
		NetClient::easycurl(Reporting_ChallengesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getChallengeEventParticipantsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Reporting_ChallengesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getChallengeEventParticipantsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Reporting_ChallengesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Reporting_ChallengesManager::getChallengeEventParticipantsAsync(char * accessToken,
	long long filterEvent, int size, int page, std::string order, 
	void(* handler)(PageResource«ChallengeEventParticipantResource», Error, void* )
	, void* userData)
{
	return getChallengeEventParticipantsHelper(accessToken,
	filterEvent, size, page, order, 
	handler, userData, true);
}

bool Reporting_ChallengesManager::getChallengeEventParticipantsSync(char * accessToken,
	long long filterEvent, int size, int page, std::string order, 
	void(* handler)(PageResource«ChallengeEventParticipantResource», Error, void* )
	, void* userData)
{
	return getChallengeEventParticipantsHelper(accessToken,
	filterEvent, size, page, order, 
	handler, userData, false);
}

