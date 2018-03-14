#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "Media_VideosManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


Media_VideosManager::Media_VideosManager()
{

}

Media_VideosManager::~Media_VideosManager()
{

}

static gboolean __Media_VideosManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __Media_VideosManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__Media_VideosManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool addUserToVideoWhitelistProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool addUserToVideoWhitelistHelper(char * accessToken,
	long long id, IntWrapper userId, 
	
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

	if (isprimitive("IntWrapper")) {
		node = converttoJson(&userId, "IntWrapper", "");
	}
	
	char *jsonStr =  userId.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/media/videos/{id}/whitelist");
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
	string myhttpmethod("POST");

	if(strcmp("PUT", "POST") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = addUserToVideoWhitelistProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), addUserToVideoWhitelistProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_VideosManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_VideosManager::addUserToVideoWhitelistAsync(char * accessToken,
	long long id, IntWrapper userId, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return addUserToVideoWhitelistHelper(accessToken,
	id, userId, 
	handler, userData, true);
}

bool Media_VideosManager::addUserToVideoWhitelistSync(char * accessToken,
	long long id, IntWrapper userId, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return addUserToVideoWhitelistHelper(accessToken,
	id, userId, 
	handler, userData, false);
}

static bool addVideoProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(VideoResource, Error, void* )
	= reinterpret_cast<void(*)(VideoResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	VideoResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("VideoResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "VideoResource", "VideoResource");
			json_node_free(pJson);

			if ("VideoResource" == "std::string") {
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

static bool addVideoHelper(char * accessToken,
	VideoResource videoResource, 
	void(* handler)(VideoResource, Error, void* )
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

	if (isprimitive("VideoResource")) {
		node = converttoJson(&videoResource, "VideoResource", "");
	}
	
	char *jsonStr =  videoResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/media/videos");
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
		NetClient::easycurl(Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = addVideoProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), addVideoProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_VideosManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_VideosManager::addVideoAsync(char * accessToken,
	VideoResource videoResource, 
	void(* handler)(VideoResource, Error, void* )
	, void* userData)
{
	return addVideoHelper(accessToken,
	videoResource, 
	handler, userData, true);
}

bool Media_VideosManager::addVideoSync(char * accessToken,
	VideoResource videoResource, 
	void(* handler)(VideoResource, Error, void* )
	, void* userData)
{
	return addVideoHelper(accessToken,
	videoResource, 
	handler, userData, false);
}

static bool addVideoCommentProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(CommentResource, Error, void* )
	= reinterpret_cast<void(*)(CommentResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	CommentResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("CommentResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "CommentResource", "CommentResource");
			json_node_free(pJson);

			if ("CommentResource" == "std::string") {
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

static bool addVideoCommentHelper(char * accessToken,
	int videoId, CommentResource commentResource, 
	void(* handler)(CommentResource, Error, void* )
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

	if (isprimitive("CommentResource")) {
		node = converttoJson(&commentResource, "CommentResource", "");
	}
	
	char *jsonStr =  commentResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/media/videos/{video_id}/comments");
	int pos;

	string s_videoId("{");
	s_videoId.append("video_id");
	s_videoId.append("}");
	pos = url.find(s_videoId);
	url.erase(pos, s_videoId.length());
	url.insert(pos, stringify(&videoId, "int"));

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
		NetClient::easycurl(Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = addVideoCommentProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), addVideoCommentProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_VideosManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_VideosManager::addVideoCommentAsync(char * accessToken,
	int videoId, CommentResource commentResource, 
	void(* handler)(CommentResource, Error, void* )
	, void* userData)
{
	return addVideoCommentHelper(accessToken,
	videoId, commentResource, 
	handler, userData, true);
}

bool Media_VideosManager::addVideoCommentSync(char * accessToken,
	int videoId, CommentResource commentResource, 
	void(* handler)(CommentResource, Error, void* )
	, void* userData)
{
	return addVideoCommentHelper(accessToken,
	videoId, commentResource, 
	handler, userData, false);
}

static bool addVideoContributorProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool addVideoContributorHelper(char * accessToken,
	long long videoId, ContributionResource contributionResource, 
	
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

	if (isprimitive("ContributionResource")) {
		node = converttoJson(&contributionResource, "ContributionResource", "");
	}
	
	char *jsonStr =  contributionResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/media/videos/{video_id}/contributors");
	int pos;

	string s_videoId("{");
	s_videoId.append("video_id");
	s_videoId.append("}");
	pos = url.find(s_videoId);
	url.erase(pos, s_videoId.length());
	url.insert(pos, stringify(&videoId, "long long"));

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
		NetClient::easycurl(Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = addVideoContributorProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), addVideoContributorProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_VideosManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_VideosManager::addVideoContributorAsync(char * accessToken,
	long long videoId, ContributionResource contributionResource, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return addVideoContributorHelper(accessToken,
	videoId, contributionResource, 
	handler, userData, true);
}

bool Media_VideosManager::addVideoContributorSync(char * accessToken,
	long long videoId, ContributionResource contributionResource, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return addVideoContributorHelper(accessToken,
	videoId, contributionResource, 
	handler, userData, false);
}

static bool addVideoFlagProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(FlagResource, Error, void* )
	= reinterpret_cast<void(*)(FlagResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	FlagResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("FlagResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "FlagResource", "FlagResource");
			json_node_free(pJson);

			if ("FlagResource" == "std::string") {
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

static bool addVideoFlagHelper(char * accessToken,
	long long videoId, StringWrapper reason, 
	void(* handler)(FlagResource, Error, void* )
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

	if (isprimitive("StringWrapper")) {
		node = converttoJson(&reason, "StringWrapper", "");
	}
	
	char *jsonStr =  reason.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/media/videos/{video_id}/moderation");
	int pos;

	string s_videoId("{");
	s_videoId.append("video_id");
	s_videoId.append("}");
	pos = url.find(s_videoId);
	url.erase(pos, s_videoId.length());
	url.insert(pos, stringify(&videoId, "long long"));

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
		NetClient::easycurl(Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = addVideoFlagProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), addVideoFlagProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_VideosManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_VideosManager::addVideoFlagAsync(char * accessToken,
	long long videoId, StringWrapper reason, 
	void(* handler)(FlagResource, Error, void* )
	, void* userData)
{
	return addVideoFlagHelper(accessToken,
	videoId, reason, 
	handler, userData, true);
}

bool Media_VideosManager::addVideoFlagSync(char * accessToken,
	long long videoId, StringWrapper reason, 
	void(* handler)(FlagResource, Error, void* )
	, void* userData)
{
	return addVideoFlagHelper(accessToken,
	videoId, reason, 
	handler, userData, false);
}

static bool addVideoRelationshipsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(VideoRelationshipResource, Error, void* )
	= reinterpret_cast<void(*)(VideoRelationshipResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	VideoRelationshipResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("VideoRelationshipResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "VideoRelationshipResource", "VideoRelationshipResource");
			json_node_free(pJson);

			if ("VideoRelationshipResource" == "std::string") {
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

static bool addVideoRelationshipsHelper(char * accessToken,
	long long videoId, VideoRelationshipResource videoRelationshipResource, 
	void(* handler)(VideoRelationshipResource, Error, void* )
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

	if (isprimitive("VideoRelationshipResource")) {
		node = converttoJson(&videoRelationshipResource, "VideoRelationshipResource", "");
	}
	
	char *jsonStr =  videoRelationshipResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/media/videos/{video_id}/related");
	int pos;

	string s_videoId("{");
	s_videoId.append("video_id");
	s_videoId.append("}");
	pos = url.find(s_videoId);
	url.erase(pos, s_videoId.length());
	url.insert(pos, stringify(&videoId, "long long"));

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
		NetClient::easycurl(Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = addVideoRelationshipsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), addVideoRelationshipsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_VideosManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_VideosManager::addVideoRelationshipsAsync(char * accessToken,
	long long videoId, VideoRelationshipResource videoRelationshipResource, 
	void(* handler)(VideoRelationshipResource, Error, void* )
	, void* userData)
{
	return addVideoRelationshipsHelper(accessToken,
	videoId, videoRelationshipResource, 
	handler, userData, true);
}

bool Media_VideosManager::addVideoRelationshipsSync(char * accessToken,
	long long videoId, VideoRelationshipResource videoRelationshipResource, 
	void(* handler)(VideoRelationshipResource, Error, void* )
	, void* userData)
{
	return addVideoRelationshipsHelper(accessToken,
	videoId, videoRelationshipResource, 
	handler, userData, false);
}

static bool createVideoDispositionProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(DispositionResource, Error, void* )
	= reinterpret_cast<void(*)(DispositionResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	DispositionResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("DispositionResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "DispositionResource", "DispositionResource");
			json_node_free(pJson);

			if ("DispositionResource" == "std::string") {
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

static bool createVideoDispositionHelper(char * accessToken,
	int videoId, DispositionResource dispositionResource, 
	void(* handler)(DispositionResource, Error, void* )
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

	if (isprimitive("DispositionResource")) {
		node = converttoJson(&dispositionResource, "DispositionResource", "");
	}
	
	char *jsonStr =  dispositionResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/media/videos/{video_id}/dispositions");
	int pos;

	string s_videoId("{");
	s_videoId.append("video_id");
	s_videoId.append("}");
	pos = url.find(s_videoId);
	url.erase(pos, s_videoId.length());
	url.insert(pos, stringify(&videoId, "int"));

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
		NetClient::easycurl(Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = createVideoDispositionProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), createVideoDispositionProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_VideosManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_VideosManager::createVideoDispositionAsync(char * accessToken,
	int videoId, DispositionResource dispositionResource, 
	void(* handler)(DispositionResource, Error, void* )
	, void* userData)
{
	return createVideoDispositionHelper(accessToken,
	videoId, dispositionResource, 
	handler, userData, true);
}

bool Media_VideosManager::createVideoDispositionSync(char * accessToken,
	int videoId, DispositionResource dispositionResource, 
	void(* handler)(DispositionResource, Error, void* )
	, void* userData)
{
	return createVideoDispositionHelper(accessToken,
	videoId, dispositionResource, 
	handler, userData, false);
}

static bool createVideoTemplateProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool createVideoTemplateHelper(char * accessToken,
	TemplateResource videoTemplateResource, 
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
		node = converttoJson(&videoTemplateResource, "TemplateResource", "");
	}
	
	char *jsonStr =  videoTemplateResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/media/videos/templates");
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
		NetClient::easycurl(Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = createVideoTemplateProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), createVideoTemplateProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_VideosManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_VideosManager::createVideoTemplateAsync(char * accessToken,
	TemplateResource videoTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData)
{
	return createVideoTemplateHelper(accessToken,
	videoTemplateResource, 
	handler, userData, true);
}

bool Media_VideosManager::createVideoTemplateSync(char * accessToken,
	TemplateResource videoTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData)
{
	return createVideoTemplateHelper(accessToken,
	videoTemplateResource, 
	handler, userData, false);
}

static bool deleteVideoProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool deleteVideoHelper(char * accessToken,
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

	string url("/media/videos/{id}");
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
		NetClient::easycurl(Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = deleteVideoProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), deleteVideoProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_VideosManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_VideosManager::deleteVideoAsync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteVideoHelper(accessToken,
	id, 
	handler, userData, true);
}

bool Media_VideosManager::deleteVideoSync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteVideoHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool deleteVideoCommentProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool deleteVideoCommentHelper(char * accessToken,
	long long videoId, long long id, 
	
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

	string url("/media/videos/{video_id}/comments/{id}");
	int pos;

	string s_videoId("{");
	s_videoId.append("video_id");
	s_videoId.append("}");
	pos = url.find(s_videoId);
	url.erase(pos, s_videoId.length());
	url.insert(pos, stringify(&videoId, "long long"));
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
		NetClient::easycurl(Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = deleteVideoCommentProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), deleteVideoCommentProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_VideosManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_VideosManager::deleteVideoCommentAsync(char * accessToken,
	long long videoId, long long id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteVideoCommentHelper(accessToken,
	videoId, id, 
	handler, userData, true);
}

bool Media_VideosManager::deleteVideoCommentSync(char * accessToken,
	long long videoId, long long id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteVideoCommentHelper(accessToken,
	videoId, id, 
	handler, userData, false);
}

static bool deleteVideoDispositionProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool deleteVideoDispositionHelper(char * accessToken,
	long long dispositionId, 
	
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

	string url("/media/videos/{video_id}/dispositions/{disposition_id}");
	int pos;

	string s_dispositionId("{");
	s_dispositionId.append("disposition_id");
	s_dispositionId.append("}");
	pos = url.find(s_dispositionId);
	url.erase(pos, s_dispositionId.length());
	url.insert(pos, stringify(&dispositionId, "long long"));

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
		NetClient::easycurl(Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = deleteVideoDispositionProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), deleteVideoDispositionProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_VideosManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_VideosManager::deleteVideoDispositionAsync(char * accessToken,
	long long dispositionId, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteVideoDispositionHelper(accessToken,
	dispositionId, 
	handler, userData, true);
}

bool Media_VideosManager::deleteVideoDispositionSync(char * accessToken,
	long long dispositionId, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteVideoDispositionHelper(accessToken,
	dispositionId, 
	handler, userData, false);
}

static bool deleteVideoFlagProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool deleteVideoFlagHelper(char * accessToken,
	long long videoId, 
	
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

	string url("/media/videos/{video_id}/moderation");
	int pos;

	string s_videoId("{");
	s_videoId.append("video_id");
	s_videoId.append("}");
	pos = url.find(s_videoId);
	url.erase(pos, s_videoId.length());
	url.insert(pos, stringify(&videoId, "long long"));

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
		NetClient::easycurl(Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = deleteVideoFlagProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), deleteVideoFlagProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_VideosManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_VideosManager::deleteVideoFlagAsync(char * accessToken,
	long long videoId, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteVideoFlagHelper(accessToken,
	videoId, 
	handler, userData, true);
}

bool Media_VideosManager::deleteVideoFlagSync(char * accessToken,
	long long videoId, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteVideoFlagHelper(accessToken,
	videoId, 
	handler, userData, false);
}

static bool deleteVideoRelationshipProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool deleteVideoRelationshipHelper(char * accessToken,
	long long videoId, long long id, 
	
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

	string url("/media/videos/{video_id}/related/{id}");
	int pos;

	string s_videoId("{");
	s_videoId.append("video_id");
	s_videoId.append("}");
	pos = url.find(s_videoId);
	url.erase(pos, s_videoId.length());
	url.insert(pos, stringify(&videoId, "long long"));
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
		NetClient::easycurl(Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = deleteVideoRelationshipProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), deleteVideoRelationshipProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_VideosManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_VideosManager::deleteVideoRelationshipAsync(char * accessToken,
	long long videoId, long long id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteVideoRelationshipHelper(accessToken,
	videoId, id, 
	handler, userData, true);
}

bool Media_VideosManager::deleteVideoRelationshipSync(char * accessToken,
	long long videoId, long long id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteVideoRelationshipHelper(accessToken,
	videoId, id, 
	handler, userData, false);
}

static bool deleteVideoTemplateProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool deleteVideoTemplateHelper(char * accessToken,
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

	string url("/media/videos/templates/{id}");
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
		NetClient::easycurl(Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = deleteVideoTemplateProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), deleteVideoTemplateProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_VideosManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_VideosManager::deleteVideoTemplateAsync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteVideoTemplateHelper(accessToken,
	id, cascade, 
	handler, userData, true);
}

bool Media_VideosManager::deleteVideoTemplateSync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteVideoTemplateHelper(accessToken,
	id, cascade, 
	handler, userData, false);
}

static bool getUserVideosProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«VideoResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«VideoResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«VideoResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«VideoResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«VideoResource»", "PageResource«VideoResource»");
			json_node_free(pJson);

			if ("PageResource«VideoResource»" == "std::string") {
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

static bool getUserVideosHelper(char * accessToken,
	int userId, bool excludeFlagged, int size, int page, 
	void(* handler)(PageResource«VideoResource», Error, void* )
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
	

	itemAtq = stringify(&excludeFlagged, "bool");
	queryParams.insert(pair<string, string>("exclude_flagged", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("exclude_flagged");
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

	string url("/users/{user_id}/videos");
	int pos;

	string s_userId("{");
	s_userId.append("user_id");
	s_userId.append("}");
	pos = url.find(s_userId);
	url.erase(pos, s_userId.length());
	url.insert(pos, stringify(&userId, "int"));

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
		NetClient::easycurl(Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getUserVideosProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getUserVideosProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_VideosManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_VideosManager::getUserVideosAsync(char * accessToken,
	int userId, bool excludeFlagged, int size, int page, 
	void(* handler)(PageResource«VideoResource», Error, void* )
	, void* userData)
{
	return getUserVideosHelper(accessToken,
	userId, excludeFlagged, size, page, 
	handler, userData, true);
}

bool Media_VideosManager::getUserVideosSync(char * accessToken,
	int userId, bool excludeFlagged, int size, int page, 
	void(* handler)(PageResource«VideoResource», Error, void* )
	, void* userData)
{
	return getUserVideosHelper(accessToken,
	userId, excludeFlagged, size, page, 
	handler, userData, false);
}

static bool getVideoProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(VideoResource, Error, void* )
	= reinterpret_cast<void(*)(VideoResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	VideoResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("VideoResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "VideoResource", "VideoResource");
			json_node_free(pJson);

			if ("VideoResource" == "std::string") {
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

static bool getVideoHelper(char * accessToken,
	long long id, 
	void(* handler)(VideoResource, Error, void* )
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

	string url("/media/videos/{id}");
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
		NetClient::easycurl(Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getVideoProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getVideoProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_VideosManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_VideosManager::getVideoAsync(char * accessToken,
	long long id, 
	void(* handler)(VideoResource, Error, void* )
	, void* userData)
{
	return getVideoHelper(accessToken,
	id, 
	handler, userData, true);
}

bool Media_VideosManager::getVideoSync(char * accessToken,
	long long id, 
	void(* handler)(VideoResource, Error, void* )
	, void* userData)
{
	return getVideoHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool getVideoCommentsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«CommentResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«CommentResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«CommentResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«CommentResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«CommentResource»", "PageResource«CommentResource»");
			json_node_free(pJson);

			if ("PageResource«CommentResource»" == "std::string") {
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

static bool getVideoCommentsHelper(char * accessToken,
	int videoId, int size, int page, 
	void(* handler)(PageResource«CommentResource», Error, void* )
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

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/media/videos/{video_id}/comments");
	int pos;

	string s_videoId("{");
	s_videoId.append("video_id");
	s_videoId.append("}");
	pos = url.find(s_videoId);
	url.erase(pos, s_videoId.length());
	url.insert(pos, stringify(&videoId, "int"));

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
		NetClient::easycurl(Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getVideoCommentsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getVideoCommentsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_VideosManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_VideosManager::getVideoCommentsAsync(char * accessToken,
	int videoId, int size, int page, 
	void(* handler)(PageResource«CommentResource», Error, void* )
	, void* userData)
{
	return getVideoCommentsHelper(accessToken,
	videoId, size, page, 
	handler, userData, true);
}

bool Media_VideosManager::getVideoCommentsSync(char * accessToken,
	int videoId, int size, int page, 
	void(* handler)(PageResource«CommentResource», Error, void* )
	, void* userData)
{
	return getVideoCommentsHelper(accessToken,
	videoId, size, page, 
	handler, userData, false);
}

static bool getVideoDispositionsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«DispositionResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«DispositionResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«DispositionResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«DispositionResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«DispositionResource»", "PageResource«DispositionResource»");
			json_node_free(pJson);

			if ("PageResource«DispositionResource»" == "std::string") {
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

static bool getVideoDispositionsHelper(char * accessToken,
	int videoId, int size, int page, 
	void(* handler)(PageResource«DispositionResource», Error, void* )
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

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/media/videos/{video_id}/dispositions");
	int pos;

	string s_videoId("{");
	s_videoId.append("video_id");
	s_videoId.append("}");
	pos = url.find(s_videoId);
	url.erase(pos, s_videoId.length());
	url.insert(pos, stringify(&videoId, "int"));

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
		NetClient::easycurl(Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getVideoDispositionsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getVideoDispositionsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_VideosManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_VideosManager::getVideoDispositionsAsync(char * accessToken,
	int videoId, int size, int page, 
	void(* handler)(PageResource«DispositionResource», Error, void* )
	, void* userData)
{
	return getVideoDispositionsHelper(accessToken,
	videoId, size, page, 
	handler, userData, true);
}

bool Media_VideosManager::getVideoDispositionsSync(char * accessToken,
	int videoId, int size, int page, 
	void(* handler)(PageResource«DispositionResource», Error, void* )
	, void* userData)
{
	return getVideoDispositionsHelper(accessToken,
	videoId, size, page, 
	handler, userData, false);
}

static bool getVideoRelationshipsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«VideoRelationshipResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«VideoRelationshipResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«VideoRelationshipResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«VideoRelationshipResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«VideoRelationshipResource»", "PageResource«VideoRelationshipResource»");
			json_node_free(pJson);

			if ("PageResource«VideoRelationshipResource»" == "std::string") {
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

static bool getVideoRelationshipsHelper(char * accessToken,
	long long videoId, int size, int page, 
	void(* handler)(PageResource«VideoRelationshipResource», Error, void* )
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

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/media/videos/{video_id}/related");
	int pos;

	string s_videoId("{");
	s_videoId.append("video_id");
	s_videoId.append("}");
	pos = url.find(s_videoId);
	url.erase(pos, s_videoId.length());
	url.insert(pos, stringify(&videoId, "long long"));

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
		NetClient::easycurl(Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getVideoRelationshipsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getVideoRelationshipsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_VideosManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_VideosManager::getVideoRelationshipsAsync(char * accessToken,
	long long videoId, int size, int page, 
	void(* handler)(PageResource«VideoRelationshipResource», Error, void* )
	, void* userData)
{
	return getVideoRelationshipsHelper(accessToken,
	videoId, size, page, 
	handler, userData, true);
}

bool Media_VideosManager::getVideoRelationshipsSync(char * accessToken,
	long long videoId, int size, int page, 
	void(* handler)(PageResource«VideoRelationshipResource», Error, void* )
	, void* userData)
{
	return getVideoRelationshipsHelper(accessToken,
	videoId, size, page, 
	handler, userData, false);
}

static bool getVideoTemplateProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool getVideoTemplateHelper(char * accessToken,
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

	string url("/media/videos/templates/{id}");
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
		NetClient::easycurl(Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getVideoTemplateProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getVideoTemplateProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_VideosManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_VideosManager::getVideoTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData)
{
	return getVideoTemplateHelper(accessToken,
	id, 
	handler, userData, true);
}

bool Media_VideosManager::getVideoTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData)
{
	return getVideoTemplateHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool getVideoTemplatesProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool getVideoTemplatesHelper(char * accessToken,
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

	string url("/media/videos/templates");
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
		NetClient::easycurl(Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getVideoTemplatesProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getVideoTemplatesProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_VideosManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_VideosManager::getVideoTemplatesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData)
{
	return getVideoTemplatesHelper(accessToken,
	size, page, order, 
	handler, userData, true);
}

bool Media_VideosManager::getVideoTemplatesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData)
{
	return getVideoTemplatesHelper(accessToken,
	size, page, order, 
	handler, userData, false);
}

static bool getVideosProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«VideoResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«VideoResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«VideoResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«VideoResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«VideoResource»", "PageResource«VideoResource»");
			json_node_free(pJson);

			if ("PageResource«VideoResource»" == "std::string") {
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

static bool getVideosHelper(char * accessToken,
	bool excludeFlagged, int filterVideosByUploader, std::string filterCategory, std::string filterTagset, std::string filterVideosByName, int filterVideosByContributor, int filterVideosByAuthor, bool filterHasAuthor, bool filterHasUploader, std::string filterRelatedTo, bool filterFriends, std::string filterDisposition, int size, int page, std::string order, 
	void(* handler)(PageResource«VideoResource», Error, void* )
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
	

	itemAtq = stringify(&excludeFlagged, "bool");
	queryParams.insert(pair<string, string>("exclude_flagged", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("exclude_flagged");
	}


	itemAtq = stringify(&filterVideosByUploader, "int");
	queryParams.insert(pair<string, string>("filter_videos_by_uploader", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_videos_by_uploader");
	}


	itemAtq = stringify(&filterCategory, "std::string");
	queryParams.insert(pair<string, string>("filter_category", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_category");
	}


	itemAtq = stringify(&filterTagset, "std::string");
	queryParams.insert(pair<string, string>("filter_tagset", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_tagset");
	}


	itemAtq = stringify(&filterVideosByName, "std::string");
	queryParams.insert(pair<string, string>("filter_videos_by_name", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_videos_by_name");
	}


	itemAtq = stringify(&filterVideosByContributor, "int");
	queryParams.insert(pair<string, string>("filter_videos_by_contributor", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_videos_by_contributor");
	}


	itemAtq = stringify(&filterVideosByAuthor, "int");
	queryParams.insert(pair<string, string>("filter_videos_by_author", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_videos_by_author");
	}


	itemAtq = stringify(&filterHasAuthor, "bool");
	queryParams.insert(pair<string, string>("filter_has_author", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_has_author");
	}


	itemAtq = stringify(&filterHasUploader, "bool");
	queryParams.insert(pair<string, string>("filter_has_uploader", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_has_uploader");
	}


	itemAtq = stringify(&filterRelatedTo, "std::string");
	queryParams.insert(pair<string, string>("filter_related_to", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_related_to");
	}


	itemAtq = stringify(&filterFriends, "bool");
	queryParams.insert(pair<string, string>("filter_friends", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_friends");
	}


	itemAtq = stringify(&filterDisposition, "std::string");
	queryParams.insert(pair<string, string>("filter_disposition", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_disposition");
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

	string url("/media/videos");
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
		NetClient::easycurl(Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getVideosProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getVideosProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_VideosManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_VideosManager::getVideosAsync(char * accessToken,
	bool excludeFlagged, int filterVideosByUploader, std::string filterCategory, std::string filterTagset, std::string filterVideosByName, int filterVideosByContributor, int filterVideosByAuthor, bool filterHasAuthor, bool filterHasUploader, std::string filterRelatedTo, bool filterFriends, std::string filterDisposition, int size, int page, std::string order, 
	void(* handler)(PageResource«VideoResource», Error, void* )
	, void* userData)
{
	return getVideosHelper(accessToken,
	excludeFlagged, filterVideosByUploader, filterCategory, filterTagset, filterVideosByName, filterVideosByContributor, filterVideosByAuthor, filterHasAuthor, filterHasUploader, filterRelatedTo, filterFriends, filterDisposition, size, page, order, 
	handler, userData, true);
}

bool Media_VideosManager::getVideosSync(char * accessToken,
	bool excludeFlagged, int filterVideosByUploader, std::string filterCategory, std::string filterTagset, std::string filterVideosByName, int filterVideosByContributor, int filterVideosByAuthor, bool filterHasAuthor, bool filterHasUploader, std::string filterRelatedTo, bool filterFriends, std::string filterDisposition, int size, int page, std::string order, 
	void(* handler)(PageResource«VideoResource», Error, void* )
	, void* userData)
{
	return getVideosHelper(accessToken,
	excludeFlagged, filterVideosByUploader, filterCategory, filterTagset, filterVideosByName, filterVideosByContributor, filterVideosByAuthor, filterHasAuthor, filterHasUploader, filterRelatedTo, filterFriends, filterDisposition, size, page, order, 
	handler, userData, false);
}

static bool removeUserFromVideoWhitelistProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool removeUserFromVideoWhitelistHelper(char * accessToken,
	long long videoId, int id, 
	
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

	string url("/media/videos/{video_id}/whitelist/{id}");
	int pos;

	string s_videoId("{");
	s_videoId.append("video_id");
	s_videoId.append("}");
	pos = url.find(s_videoId);
	url.erase(pos, s_videoId.length());
	url.insert(pos, stringify(&videoId, "long long"));
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
		NetClient::easycurl(Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = removeUserFromVideoWhitelistProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), removeUserFromVideoWhitelistProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_VideosManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_VideosManager::removeUserFromVideoWhitelistAsync(char * accessToken,
	long long videoId, int id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return removeUserFromVideoWhitelistHelper(accessToken,
	videoId, id, 
	handler, userData, true);
}

bool Media_VideosManager::removeUserFromVideoWhitelistSync(char * accessToken,
	long long videoId, int id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return removeUserFromVideoWhitelistHelper(accessToken,
	videoId, id, 
	handler, userData, false);
}

static bool removeVideoContributorProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool removeVideoContributorHelper(char * accessToken,
	long long videoId, int id, 
	
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

	string url("/media/videos/{video_id}/contributors/{id}");
	int pos;

	string s_videoId("{");
	s_videoId.append("video_id");
	s_videoId.append("}");
	pos = url.find(s_videoId);
	url.erase(pos, s_videoId.length());
	url.insert(pos, stringify(&videoId, "long long"));
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
		NetClient::easycurl(Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = removeVideoContributorProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), removeVideoContributorProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_VideosManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_VideosManager::removeVideoContributorAsync(char * accessToken,
	long long videoId, int id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return removeVideoContributorHelper(accessToken,
	videoId, id, 
	handler, userData, true);
}

bool Media_VideosManager::removeVideoContributorSync(char * accessToken,
	long long videoId, int id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return removeVideoContributorHelper(accessToken,
	videoId, id, 
	handler, userData, false);
}

static bool updateVideoProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool updateVideoHelper(char * accessToken,
	long long id, VideoResource videoResource, 
	
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

	if (isprimitive("VideoResource")) {
		node = converttoJson(&videoResource, "VideoResource", "");
	}
	
	char *jsonStr =  videoResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/media/videos/{id}");
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
		NetClient::easycurl(Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = updateVideoProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), updateVideoProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_VideosManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_VideosManager::updateVideoAsync(char * accessToken,
	long long id, VideoResource videoResource, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return updateVideoHelper(accessToken,
	id, videoResource, 
	handler, userData, true);
}

bool Media_VideosManager::updateVideoSync(char * accessToken,
	long long id, VideoResource videoResource, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return updateVideoHelper(accessToken,
	id, videoResource, 
	handler, userData, false);
}

static bool updateVideoCommentProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool updateVideoCommentHelper(char * accessToken,
	long long videoId, long long id, StringWrapper content, 
	
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

	if (isprimitive("StringWrapper")) {
		node = converttoJson(&content, "StringWrapper", "");
	}
	
	char *jsonStr =  content.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/media/videos/{video_id}/comments/{id}/content");
	int pos;

	string s_videoId("{");
	s_videoId.append("video_id");
	s_videoId.append("}");
	pos = url.find(s_videoId);
	url.erase(pos, s_videoId.length());
	url.insert(pos, stringify(&videoId, "long long"));
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
		NetClient::easycurl(Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = updateVideoCommentProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), updateVideoCommentProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_VideosManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_VideosManager::updateVideoCommentAsync(char * accessToken,
	long long videoId, long long id, StringWrapper content, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return updateVideoCommentHelper(accessToken,
	videoId, id, content, 
	handler, userData, true);
}

bool Media_VideosManager::updateVideoCommentSync(char * accessToken,
	long long videoId, long long id, StringWrapper content, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return updateVideoCommentHelper(accessToken,
	videoId, id, content, 
	handler, userData, false);
}

static bool updateVideoRelationshipProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool updateVideoRelationshipHelper(char * accessToken,
	long long videoId, long long relationshipId, StringWrapper details, 
	
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

	if (isprimitive("StringWrapper")) {
		node = converttoJson(&details, "StringWrapper", "");
	}
	
	char *jsonStr =  details.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/media/videos/{video_id}/related/{id}/relationship_details");
	int pos;

	string s_videoId("{");
	s_videoId.append("video_id");
	s_videoId.append("}");
	pos = url.find(s_videoId);
	url.erase(pos, s_videoId.length());
	url.insert(pos, stringify(&videoId, "long long"));
	string s_relationshipId("{");
	s_relationshipId.append("relationship_id");
	s_relationshipId.append("}");
	pos = url.find(s_relationshipId);
	url.erase(pos, s_relationshipId.length());
	url.insert(pos, stringify(&relationshipId, "long long"));

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
		NetClient::easycurl(Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = updateVideoRelationshipProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), updateVideoRelationshipProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_VideosManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_VideosManager::updateVideoRelationshipAsync(char * accessToken,
	long long videoId, long long relationshipId, StringWrapper details, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return updateVideoRelationshipHelper(accessToken,
	videoId, relationshipId, details, 
	handler, userData, true);
}

bool Media_VideosManager::updateVideoRelationshipSync(char * accessToken,
	long long videoId, long long relationshipId, StringWrapper details, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return updateVideoRelationshipHelper(accessToken,
	videoId, relationshipId, details, 
	handler, userData, false);
}

static bool updateVideoTemplateProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool updateVideoTemplateHelper(char * accessToken,
	std::string id, TemplateResource videoTemplateResource, 
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
		node = converttoJson(&videoTemplateResource, "TemplateResource", "");
	}
	
	char *jsonStr =  videoTemplateResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/media/videos/templates/{id}");
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
		NetClient::easycurl(Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = updateVideoTemplateProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), updateVideoTemplateProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_VideosManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_VideosManager::updateVideoTemplateAsync(char * accessToken,
	std::string id, TemplateResource videoTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData)
{
	return updateVideoTemplateHelper(accessToken,
	id, videoTemplateResource, 
	handler, userData, true);
}

bool Media_VideosManager::updateVideoTemplateSync(char * accessToken,
	std::string id, TemplateResource videoTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData)
{
	return updateVideoTemplateHelper(accessToken,
	id, videoTemplateResource, 
	handler, userData, false);
}

static bool viewVideoProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool viewVideoHelper(char * accessToken,
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

	string url("/media/videos/{id}/views");
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
	string myhttpmethod("POST");

	if(strcmp("PUT", "POST") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = viewVideoProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Media_VideosManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), viewVideoProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Media_VideosManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Media_VideosManager::viewVideoAsync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return viewVideoHelper(accessToken,
	id, 
	handler, userData, true);
}

bool Media_VideosManager::viewVideoSync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return viewVideoHelper(accessToken,
	id, 
	handler, userData, false);
}

