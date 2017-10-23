#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "GamificationTriviaManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


GamificationTriviaManager::GamificationTriviaManager()
{

}

GamificationTriviaManager::~GamificationTriviaManager()
{

}

static gboolean __GamificationTriviaManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __GamificationTriviaManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__GamificationTriviaManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool addQuestionAnswersProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(AnswerResource, Error, void* )
	= reinterpret_cast<void(*)(AnswerResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	AnswerResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("AnswerResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "AnswerResource", "AnswerResource");
			json_node_free(pJson);

			if ("AnswerResource" == "std::string") {
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

static bool addQuestionAnswersHelper(char * accessToken,
	std::string questionId, AnswerResource answer, 
	void(* handler)(AnswerResource, Error, void* )
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

	if (isprimitive("AnswerResource")) {
		node = converttoJson(&answer, "AnswerResource", "");
	}
	
	char *jsonStr =  answer.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/trivia/questions/{question_id}/answers");
	int pos;

	string s_questionId("{");
	s_questionId.append("question_id");
	s_questionId.append("}");
	pos = url.find(s_questionId);
	url.erase(pos, s_questionId.length());
	url.insert(pos, stringify(&questionId, "std::string"));

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
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = addQuestionAnswersProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), addQuestionAnswersProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::addQuestionAnswersAsync(char * accessToken,
	std::string questionId, AnswerResource answer, 
	void(* handler)(AnswerResource, Error, void* )
	, void* userData)
{
	return addQuestionAnswersHelper(accessToken,
	questionId, answer, 
	handler, userData, true);
}

bool GamificationTriviaManager::addQuestionAnswersSync(char * accessToken,
	std::string questionId, AnswerResource answer, 
	void(* handler)(AnswerResource, Error, void* )
	, void* userData)
{
	return addQuestionAnswersHelper(accessToken,
	questionId, answer, 
	handler, userData, false);
}

static bool addQuestionTagProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool addQuestionTagHelper(char * accessToken,
	std::string id, StringWrapper tag, 
	
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
		node = converttoJson(&tag, "StringWrapper", "");
	}
	
	char *jsonStr =  tag.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/trivia/questions/{id}/tags");
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
	string myhttpmethod("POST");

	if(strcmp("PUT", "POST") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = addQuestionTagProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), addQuestionTagProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::addQuestionTagAsync(char * accessToken,
	std::string id, StringWrapper tag, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return addQuestionTagHelper(accessToken,
	id, tag, 
	handler, userData, true);
}

bool GamificationTriviaManager::addQuestionTagSync(char * accessToken,
	std::string id, StringWrapper tag, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return addQuestionTagHelper(accessToken,
	id, tag, 
	handler, userData, false);
}

static bool addTagToQuestionsBatchProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(int, Error, void* )
	= reinterpret_cast<void(*)(int, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	int out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("int")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "int", "int");
			json_node_free(pJson);

			if ("int" == "std::string") {
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

static bool addTagToQuestionsBatchHelper(char * accessToken,
	StringWrapper tag, std::string filterSearch, std::string filterIdset, std::string filterCategory, std::string filterTag, std::string filterTagset, std::string filterType, bool filterPublished, long long filterImportId, 
	void(* handler)(int, Error, void* )
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
	

	itemAtq = stringify(&filterSearch, "std::string");
	queryParams.insert(pair<string, string>("filter_search", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_search");
	}


	itemAtq = stringify(&filterIdset, "std::string");
	queryParams.insert(pair<string, string>("filter_idset", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_idset");
	}


	itemAtq = stringify(&filterCategory, "std::string");
	queryParams.insert(pair<string, string>("filter_category", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_category");
	}


	itemAtq = stringify(&filterTag, "std::string");
	queryParams.insert(pair<string, string>("filter_tag", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_tag");
	}


	itemAtq = stringify(&filterTagset, "std::string");
	queryParams.insert(pair<string, string>("filter_tagset", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_tagset");
	}


	itemAtq = stringify(&filterType, "std::string");
	queryParams.insert(pair<string, string>("filter_type", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_type");
	}


	itemAtq = stringify(&filterPublished, "bool");
	queryParams.insert(pair<string, string>("filter_published", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_published");
	}


	itemAtq = stringify(&filterImportId, "long long");
	queryParams.insert(pair<string, string>("filter_import_id", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_import_id");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	if (isprimitive("StringWrapper")) {
		node = converttoJson(&tag, "StringWrapper", "");
	}
	
	char *jsonStr =  tag.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/trivia/questions/tags");
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
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = addTagToQuestionsBatchProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), addTagToQuestionsBatchProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::addTagToQuestionsBatchAsync(char * accessToken,
	StringWrapper tag, std::string filterSearch, std::string filterIdset, std::string filterCategory, std::string filterTag, std::string filterTagset, std::string filterType, bool filterPublished, long long filterImportId, 
	void(* handler)(int, Error, void* )
	, void* userData)
{
	return addTagToQuestionsBatchHelper(accessToken,
	tag, filterSearch, filterIdset, filterCategory, filterTag, filterTagset, filterType, filterPublished, filterImportId, 
	handler, userData, true);
}

bool GamificationTriviaManager::addTagToQuestionsBatchSync(char * accessToken,
	StringWrapper tag, std::string filterSearch, std::string filterIdset, std::string filterCategory, std::string filterTag, std::string filterTagset, std::string filterType, bool filterPublished, long long filterImportId, 
	void(* handler)(int, Error, void* )
	, void* userData)
{
	return addTagToQuestionsBatchHelper(accessToken,
	tag, filterSearch, filterIdset, filterCategory, filterTag, filterTagset, filterType, filterPublished, filterImportId, 
	handler, userData, false);
}

static bool createImportJobProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(ImportJobResource, Error, void* )
	= reinterpret_cast<void(*)(ImportJobResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	ImportJobResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("ImportJobResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "ImportJobResource", "ImportJobResource");
			json_node_free(pJson);

			if ("ImportJobResource" == "std::string") {
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

static bool createImportJobHelper(char * accessToken,
	ImportJobResource request, 
	void(* handler)(ImportJobResource, Error, void* )
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

	if (isprimitive("ImportJobResource")) {
		node = converttoJson(&request, "ImportJobResource", "");
	}
	
	char *jsonStr =  request.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/trivia/import");
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
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = createImportJobProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), createImportJobProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::createImportJobAsync(char * accessToken,
	ImportJobResource request, 
	void(* handler)(ImportJobResource, Error, void* )
	, void* userData)
{
	return createImportJobHelper(accessToken,
	request, 
	handler, userData, true);
}

bool GamificationTriviaManager::createImportJobSync(char * accessToken,
	ImportJobResource request, 
	void(* handler)(ImportJobResource, Error, void* )
	, void* userData)
{
	return createImportJobHelper(accessToken,
	request, 
	handler, userData, false);
}

static bool createQuestionProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(QuestionResource, Error, void* )
	= reinterpret_cast<void(*)(QuestionResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	QuestionResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("QuestionResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "QuestionResource", "QuestionResource");
			json_node_free(pJson);

			if ("QuestionResource" == "std::string") {
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

static bool createQuestionHelper(char * accessToken,
	QuestionResource question, 
	void(* handler)(QuestionResource, Error, void* )
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

	if (isprimitive("QuestionResource")) {
		node = converttoJson(&question, "QuestionResource", "");
	}
	
	char *jsonStr =  question.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/trivia/questions");
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
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = createQuestionProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), createQuestionProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::createQuestionAsync(char * accessToken,
	QuestionResource question, 
	void(* handler)(QuestionResource, Error, void* )
	, void* userData)
{
	return createQuestionHelper(accessToken,
	question, 
	handler, userData, true);
}

bool GamificationTriviaManager::createQuestionSync(char * accessToken,
	QuestionResource question, 
	void(* handler)(QuestionResource, Error, void* )
	, void* userData)
{
	return createQuestionHelper(accessToken,
	question, 
	handler, userData, false);
}

static bool createQuestionTemplateProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(QuestionTemplateResource, Error, void* )
	= reinterpret_cast<void(*)(QuestionTemplateResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	QuestionTemplateResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("QuestionTemplateResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "QuestionTemplateResource", "QuestionTemplateResource");
			json_node_free(pJson);

			if ("QuestionTemplateResource" == "std::string") {
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

static bool createQuestionTemplateHelper(char * accessToken,
	QuestionTemplateResource questionTemplateResource, 
	void(* handler)(QuestionTemplateResource, Error, void* )
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

	if (isprimitive("QuestionTemplateResource")) {
		node = converttoJson(&questionTemplateResource, "QuestionTemplateResource", "");
	}
	
	char *jsonStr =  questionTemplateResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/trivia/questions/templates");
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
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = createQuestionTemplateProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), createQuestionTemplateProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::createQuestionTemplateAsync(char * accessToken,
	QuestionTemplateResource questionTemplateResource, 
	void(* handler)(QuestionTemplateResource, Error, void* )
	, void* userData)
{
	return createQuestionTemplateHelper(accessToken,
	questionTemplateResource, 
	handler, userData, true);
}

bool GamificationTriviaManager::createQuestionTemplateSync(char * accessToken,
	QuestionTemplateResource questionTemplateResource, 
	void(* handler)(QuestionTemplateResource, Error, void* )
	, void* userData)
{
	return createQuestionTemplateHelper(accessToken,
	questionTemplateResource, 
	handler, userData, false);
}

static bool deleteImportJobProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool deleteImportJobHelper(char * accessToken,
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

	string url("/trivia/import/{id}");
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
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = deleteImportJobProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), deleteImportJobProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::deleteImportJobAsync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteImportJobHelper(accessToken,
	id, 
	handler, userData, true);
}

bool GamificationTriviaManager::deleteImportJobSync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteImportJobHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool deleteQuestionProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool deleteQuestionHelper(char * accessToken,
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

	string url("/trivia/questions/{id}");
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
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = deleteQuestionProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), deleteQuestionProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::deleteQuestionAsync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteQuestionHelper(accessToken,
	id, 
	handler, userData, true);
}

bool GamificationTriviaManager::deleteQuestionSync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteQuestionHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool deleteQuestionAnswersProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool deleteQuestionAnswersHelper(char * accessToken,
	std::string questionId, std::string id, 
	
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

	string url("/trivia/questions/{question_id}/answers/{id}");
	int pos;

	string s_questionId("{");
	s_questionId.append("question_id");
	s_questionId.append("}");
	pos = url.find(s_questionId);
	url.erase(pos, s_questionId.length());
	url.insert(pos, stringify(&questionId, "std::string"));
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
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = deleteQuestionAnswersProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), deleteQuestionAnswersProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::deleteQuestionAnswersAsync(char * accessToken,
	std::string questionId, std::string id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteQuestionAnswersHelper(accessToken,
	questionId, id, 
	handler, userData, true);
}

bool GamificationTriviaManager::deleteQuestionAnswersSync(char * accessToken,
	std::string questionId, std::string id, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteQuestionAnswersHelper(accessToken,
	questionId, id, 
	handler, userData, false);
}

static bool deleteQuestionTemplateProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool deleteQuestionTemplateHelper(char * accessToken,
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

	string url("/trivia/questions/templates/{id}");
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
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = deleteQuestionTemplateProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), deleteQuestionTemplateProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::deleteQuestionTemplateAsync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteQuestionTemplateHelper(accessToken,
	id, cascade, 
	handler, userData, true);
}

bool GamificationTriviaManager::deleteQuestionTemplateSync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteQuestionTemplateHelper(accessToken,
	id, cascade, 
	handler, userData, false);
}

static bool getImportJobProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(ImportJobResource, Error, void* )
	= reinterpret_cast<void(*)(ImportJobResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	ImportJobResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("ImportJobResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "ImportJobResource", "ImportJobResource");
			json_node_free(pJson);

			if ("ImportJobResource" == "std::string") {
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

static bool getImportJobHelper(char * accessToken,
	long long id, 
	void(* handler)(ImportJobResource, Error, void* )
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

	string url("/trivia/import/{id}");
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
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getImportJobProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getImportJobProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::getImportJobAsync(char * accessToken,
	long long id, 
	void(* handler)(ImportJobResource, Error, void* )
	, void* userData)
{
	return getImportJobHelper(accessToken,
	id, 
	handler, userData, true);
}

bool GamificationTriviaManager::getImportJobSync(char * accessToken,
	long long id, 
	void(* handler)(ImportJobResource, Error, void* )
	, void* userData)
{
	return getImportJobHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool getImportJobsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«ImportJobResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«ImportJobResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«ImportJobResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«ImportJobResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«ImportJobResource»", "PageResource«ImportJobResource»");
			json_node_free(pJson);

			if ("PageResource«ImportJobResource»" == "std::string") {
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

static bool getImportJobsHelper(char * accessToken,
	std::string filterVendor, std::string filterCategory, std::string filterName, std::string filterStatus, int size, int page, std::string order, 
	void(* handler)(PageResource«ImportJobResource», Error, void* )
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
	

	itemAtq = stringify(&filterVendor, "std::string");
	queryParams.insert(pair<string, string>("filter_vendor", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_vendor");
	}


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


	itemAtq = stringify(&filterStatus, "std::string");
	queryParams.insert(pair<string, string>("filter_status", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_status");
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

	string url("/trivia/import");
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
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getImportJobsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getImportJobsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::getImportJobsAsync(char * accessToken,
	std::string filterVendor, std::string filterCategory, std::string filterName, std::string filterStatus, int size, int page, std::string order, 
	void(* handler)(PageResource«ImportJobResource», Error, void* )
	, void* userData)
{
	return getImportJobsHelper(accessToken,
	filterVendor, filterCategory, filterName, filterStatus, size, page, order, 
	handler, userData, true);
}

bool GamificationTriviaManager::getImportJobsSync(char * accessToken,
	std::string filterVendor, std::string filterCategory, std::string filterName, std::string filterStatus, int size, int page, std::string order, 
	void(* handler)(PageResource«ImportJobResource», Error, void* )
	, void* userData)
{
	return getImportJobsHelper(accessToken,
	filterVendor, filterCategory, filterName, filterStatus, size, page, order, 
	handler, userData, false);
}

static bool getQuestionProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(QuestionResource, Error, void* )
	= reinterpret_cast<void(*)(QuestionResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	QuestionResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("QuestionResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "QuestionResource", "QuestionResource");
			json_node_free(pJson);

			if ("QuestionResource" == "std::string") {
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

static bool getQuestionHelper(char * accessToken,
	std::string id, 
	void(* handler)(QuestionResource, Error, void* )
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

	string url("/trivia/questions/{id}");
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
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getQuestionProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getQuestionProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::getQuestionAsync(char * accessToken,
	std::string id, 
	void(* handler)(QuestionResource, Error, void* )
	, void* userData)
{
	return getQuestionHelper(accessToken,
	id, 
	handler, userData, true);
}

bool GamificationTriviaManager::getQuestionSync(char * accessToken,
	std::string id, 
	void(* handler)(QuestionResource, Error, void* )
	, void* userData)
{
	return getQuestionHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool getQuestionAnswerProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(AnswerResource, Error, void* )
	= reinterpret_cast<void(*)(AnswerResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	AnswerResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("AnswerResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "AnswerResource", "AnswerResource");
			json_node_free(pJson);

			if ("AnswerResource" == "std::string") {
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

static bool getQuestionAnswerHelper(char * accessToken,
	std::string questionId, std::string id, 
	void(* handler)(AnswerResource, Error, void* )
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

	string url("/trivia/questions/{question_id}/answers/{id}");
	int pos;

	string s_questionId("{");
	s_questionId.append("question_id");
	s_questionId.append("}");
	pos = url.find(s_questionId);
	url.erase(pos, s_questionId.length());
	url.insert(pos, stringify(&questionId, "std::string"));
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
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getQuestionAnswerProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getQuestionAnswerProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::getQuestionAnswerAsync(char * accessToken,
	std::string questionId, std::string id, 
	void(* handler)(AnswerResource, Error, void* )
	, void* userData)
{
	return getQuestionAnswerHelper(accessToken,
	questionId, id, 
	handler, userData, true);
}

bool GamificationTriviaManager::getQuestionAnswerSync(char * accessToken,
	std::string questionId, std::string id, 
	void(* handler)(AnswerResource, Error, void* )
	, void* userData)
{
	return getQuestionAnswerHelper(accessToken,
	questionId, id, 
	handler, userData, false);
}

static bool getQuestionAnswersProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::list<AnswerResource>, Error, void* )
	= reinterpret_cast<void(*)(std::list<AnswerResource>, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	std::list<AnswerResource> out;
	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));



		pJson = json_from_string(data, NULL);
		JsonArray * jsonarray = json_node_get_array (pJson);
		guint length = json_array_get_length (jsonarray);
		for(guint i = 0; i < length; i++){
			JsonNode* myJson = json_array_get_element (jsonarray, i);
			char * singlenodestr = json_to_string(myJson, false);
			AnswerResource singlemodel;
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

static bool getQuestionAnswersHelper(char * accessToken,
	std::string questionId, 
	void(* handler)(std::list<AnswerResource>, Error, void* )
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

	string url("/trivia/questions/{question_id}/answers");
	int pos;

	string s_questionId("{");
	s_questionId.append("question_id");
	s_questionId.append("}");
	pos = url.find(s_questionId);
	url.erase(pos, s_questionId.length());
	url.insert(pos, stringify(&questionId, "std::string"));

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
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getQuestionAnswersProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getQuestionAnswersProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::getQuestionAnswersAsync(char * accessToken,
	std::string questionId, 
	void(* handler)(std::list<AnswerResource>, Error, void* )
	, void* userData)
{
	return getQuestionAnswersHelper(accessToken,
	questionId, 
	handler, userData, true);
}

bool GamificationTriviaManager::getQuestionAnswersSync(char * accessToken,
	std::string questionId, 
	void(* handler)(std::list<AnswerResource>, Error, void* )
	, void* userData)
{
	return getQuestionAnswersHelper(accessToken,
	questionId, 
	handler, userData, false);
}

static bool getQuestionDeltasProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::list<DeltaResource>, Error, void* )
	= reinterpret_cast<void(*)(std::list<DeltaResource>, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	std::list<DeltaResource> out;
	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));



		pJson = json_from_string(data, NULL);
		JsonArray * jsonarray = json_node_get_array (pJson);
		guint length = json_array_get_length (jsonarray);
		for(guint i = 0; i < length; i++){
			JsonNode* myJson = json_array_get_element (jsonarray, i);
			char * singlenodestr = json_to_string(myJson, false);
			DeltaResource singlemodel;
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

static bool getQuestionDeltasHelper(char * accessToken,
	long long since, 
	void(* handler)(std::list<DeltaResource>, Error, void* )
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
	

	itemAtq = stringify(&since, "long long");
	queryParams.insert(pair<string, string>("since", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("since");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/trivia/questions/delta");
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
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getQuestionDeltasProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getQuestionDeltasProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::getQuestionDeltasAsync(char * accessToken,
	long long since, 
	void(* handler)(std::list<DeltaResource>, Error, void* )
	, void* userData)
{
	return getQuestionDeltasHelper(accessToken,
	since, 
	handler, userData, true);
}

bool GamificationTriviaManager::getQuestionDeltasSync(char * accessToken,
	long long since, 
	void(* handler)(std::list<DeltaResource>, Error, void* )
	, void* userData)
{
	return getQuestionDeltasHelper(accessToken,
	since, 
	handler, userData, false);
}

static bool getQuestionTagsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool getQuestionTagsHelper(char * accessToken,
	std::string id, 
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

	string url("/trivia/questions/{id}/tags");
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
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getQuestionTagsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getQuestionTagsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::getQuestionTagsAsync(char * accessToken,
	std::string id, 
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData)
{
	return getQuestionTagsHelper(accessToken,
	id, 
	handler, userData, true);
}

bool GamificationTriviaManager::getQuestionTagsSync(char * accessToken,
	std::string id, 
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData)
{
	return getQuestionTagsHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool getQuestionTemplateProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(QuestionTemplateResource, Error, void* )
	= reinterpret_cast<void(*)(QuestionTemplateResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	QuestionTemplateResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("QuestionTemplateResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "QuestionTemplateResource", "QuestionTemplateResource");
			json_node_free(pJson);

			if ("QuestionTemplateResource" == "std::string") {
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

static bool getQuestionTemplateHelper(char * accessToken,
	std::string id, 
	void(* handler)(QuestionTemplateResource, Error, void* )
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

	string url("/trivia/questions/templates/{id}");
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
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getQuestionTemplateProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getQuestionTemplateProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::getQuestionTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(QuestionTemplateResource, Error, void* )
	, void* userData)
{
	return getQuestionTemplateHelper(accessToken,
	id, 
	handler, userData, true);
}

bool GamificationTriviaManager::getQuestionTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(QuestionTemplateResource, Error, void* )
	, void* userData)
{
	return getQuestionTemplateHelper(accessToken,
	id, 
	handler, userData, false);
}

static bool getQuestionTemplatesProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«QuestionTemplateResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«QuestionTemplateResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«QuestionTemplateResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«QuestionTemplateResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«QuestionTemplateResource»", "PageResource«QuestionTemplateResource»");
			json_node_free(pJson);

			if ("PageResource«QuestionTemplateResource»" == "std::string") {
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

static bool getQuestionTemplatesHelper(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«QuestionTemplateResource», Error, void* )
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

	string url("/trivia/questions/templates");
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
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getQuestionTemplatesProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getQuestionTemplatesProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::getQuestionTemplatesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«QuestionTemplateResource», Error, void* )
	, void* userData)
{
	return getQuestionTemplatesHelper(accessToken,
	size, page, order, 
	handler, userData, true);
}

bool GamificationTriviaManager::getQuestionTemplatesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«QuestionTemplateResource», Error, void* )
	, void* userData)
{
	return getQuestionTemplatesHelper(accessToken,
	size, page, order, 
	handler, userData, false);
}

static bool getQuestionsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«QuestionResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«QuestionResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«QuestionResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«QuestionResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«QuestionResource»", "PageResource«QuestionResource»");
			json_node_free(pJson);

			if ("PageResource«QuestionResource»" == "std::string") {
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

static bool getQuestionsHelper(char * accessToken,
	int size, int page, std::string order, std::string filterSearch, std::string filterIdset, std::string filterCategory, std::string filterTagset, std::string filterTag, std::string filterType, bool filterPublished, long long filterImportId, 
	void(* handler)(PageResource«QuestionResource», Error, void* )
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


	itemAtq = stringify(&filterSearch, "std::string");
	queryParams.insert(pair<string, string>("filter_search", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_search");
	}


	itemAtq = stringify(&filterIdset, "std::string");
	queryParams.insert(pair<string, string>("filter_idset", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_idset");
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


	itemAtq = stringify(&filterTag, "std::string");
	queryParams.insert(pair<string, string>("filter_tag", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_tag");
	}


	itemAtq = stringify(&filterType, "std::string");
	queryParams.insert(pair<string, string>("filter_type", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_type");
	}


	itemAtq = stringify(&filterPublished, "bool");
	queryParams.insert(pair<string, string>("filter_published", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_published");
	}


	itemAtq = stringify(&filterImportId, "long long");
	queryParams.insert(pair<string, string>("filter_import_id", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_import_id");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/trivia/questions");
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
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getQuestionsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getQuestionsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::getQuestionsAsync(char * accessToken,
	int size, int page, std::string order, std::string filterSearch, std::string filterIdset, std::string filterCategory, std::string filterTagset, std::string filterTag, std::string filterType, bool filterPublished, long long filterImportId, 
	void(* handler)(PageResource«QuestionResource», Error, void* )
	, void* userData)
{
	return getQuestionsHelper(accessToken,
	size, page, order, filterSearch, filterIdset, filterCategory, filterTagset, filterTag, filterType, filterPublished, filterImportId, 
	handler, userData, true);
}

bool GamificationTriviaManager::getQuestionsSync(char * accessToken,
	int size, int page, std::string order, std::string filterSearch, std::string filterIdset, std::string filterCategory, std::string filterTagset, std::string filterTag, std::string filterType, bool filterPublished, long long filterImportId, 
	void(* handler)(PageResource«QuestionResource», Error, void* )
	, void* userData)
{
	return getQuestionsHelper(accessToken,
	size, page, order, filterSearch, filterIdset, filterCategory, filterTagset, filterTag, filterType, filterPublished, filterImportId, 
	handler, userData, false);
}

static bool getQuestionsCountProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(long long, Error, void* )
	= reinterpret_cast<void(*)(long long, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	long long out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("long long")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "long long", "long long");
			json_node_free(pJson);

			if ("long long" == "std::string") {
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

static bool getQuestionsCountHelper(char * accessToken,
	std::string filterSearch, std::string filterIdset, std::string filterCategory, std::string filterTag, std::string filterTagset, std::string filterType, bool filterPublished, 
	void(* handler)(long long, Error, void* )
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
	

	itemAtq = stringify(&filterSearch, "std::string");
	queryParams.insert(pair<string, string>("filter_search", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_search");
	}


	itemAtq = stringify(&filterIdset, "std::string");
	queryParams.insert(pair<string, string>("filter_idset", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_idset");
	}


	itemAtq = stringify(&filterCategory, "std::string");
	queryParams.insert(pair<string, string>("filter_category", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_category");
	}


	itemAtq = stringify(&filterTag, "std::string");
	queryParams.insert(pair<string, string>("filter_tag", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_tag");
	}


	itemAtq = stringify(&filterTagset, "std::string");
	queryParams.insert(pair<string, string>("filter_tagset", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_tagset");
	}


	itemAtq = stringify(&filterType, "std::string");
	queryParams.insert(pair<string, string>("filter_type", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_type");
	}


	itemAtq = stringify(&filterPublished, "bool");
	queryParams.insert(pair<string, string>("filter_published", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_published");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/trivia/questions/count");
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
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getQuestionsCountProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getQuestionsCountProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::getQuestionsCountAsync(char * accessToken,
	std::string filterSearch, std::string filterIdset, std::string filterCategory, std::string filterTag, std::string filterTagset, std::string filterType, bool filterPublished, 
	void(* handler)(long long, Error, void* )
	, void* userData)
{
	return getQuestionsCountHelper(accessToken,
	filterSearch, filterIdset, filterCategory, filterTag, filterTagset, filterType, filterPublished, 
	handler, userData, true);
}

bool GamificationTriviaManager::getQuestionsCountSync(char * accessToken,
	std::string filterSearch, std::string filterIdset, std::string filterCategory, std::string filterTag, std::string filterTagset, std::string filterType, bool filterPublished, 
	void(* handler)(long long, Error, void* )
	, void* userData)
{
	return getQuestionsCountHelper(accessToken,
	filterSearch, filterIdset, filterCategory, filterTag, filterTagset, filterType, filterPublished, 
	handler, userData, false);
}

static bool processImportJobProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(ImportJobResource, Error, void* )
	= reinterpret_cast<void(*)(ImportJobResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	ImportJobResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("ImportJobResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "ImportJobResource", "ImportJobResource");
			json_node_free(pJson);

			if ("ImportJobResource" == "std::string") {
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

static bool processImportJobHelper(char * accessToken,
	long long id, bool publishNow, 
	void(* handler)(ImportJobResource, Error, void* )
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
	

	itemAtq = stringify(&publishNow, "bool");
	queryParams.insert(pair<string, string>("publish_now", itemAtq));

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/trivia/import/{id}/process");
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
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = processImportJobProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), processImportJobProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::processImportJobAsync(char * accessToken,
	long long id, bool publishNow, 
	void(* handler)(ImportJobResource, Error, void* )
	, void* userData)
{
	return processImportJobHelper(accessToken,
	id, publishNow, 
	handler, userData, true);
}

bool GamificationTriviaManager::processImportJobSync(char * accessToken,
	long long id, bool publishNow, 
	void(* handler)(ImportJobResource, Error, void* )
	, void* userData)
{
	return processImportJobHelper(accessToken,
	id, publishNow, 
	handler, userData, false);
}

static bool removeQuestionTagProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool removeQuestionTagHelper(char * accessToken,
	std::string id, std::string tag, 
	
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

	string url("/trivia/questions/{id}/tags/{tag}");
	int pos;

	string s_id("{");
	s_id.append("id");
	s_id.append("}");
	pos = url.find(s_id);
	url.erase(pos, s_id.length());
	url.insert(pos, stringify(&id, "std::string"));
	string s_tag("{");
	s_tag.append("tag");
	s_tag.append("}");
	pos = url.find(s_tag);
	url.erase(pos, s_tag.length());
	url.insert(pos, stringify(&tag, "std::string"));

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
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = removeQuestionTagProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), removeQuestionTagProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::removeQuestionTagAsync(char * accessToken,
	std::string id, std::string tag, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return removeQuestionTagHelper(accessToken,
	id, tag, 
	handler, userData, true);
}

bool GamificationTriviaManager::removeQuestionTagSync(char * accessToken,
	std::string id, std::string tag, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return removeQuestionTagHelper(accessToken,
	id, tag, 
	handler, userData, false);
}

static bool removeTagToQuestionsBatchProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(int, Error, void* )
	= reinterpret_cast<void(*)(int, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	int out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("int")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "int", "int");
			json_node_free(pJson);

			if ("int" == "std::string") {
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

static bool removeTagToQuestionsBatchHelper(char * accessToken,
	std::string tag, std::string filterSearch, std::string filterIdset, std::string filterCategory, std::string filterTag, std::string filterTagset, std::string filterType, bool filterPublished, long long filterImportId, 
	void(* handler)(int, Error, void* )
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
	

	itemAtq = stringify(&filterSearch, "std::string");
	queryParams.insert(pair<string, string>("filter_search", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_search");
	}


	itemAtq = stringify(&filterIdset, "std::string");
	queryParams.insert(pair<string, string>("filter_idset", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_idset");
	}


	itemAtq = stringify(&filterCategory, "std::string");
	queryParams.insert(pair<string, string>("filter_category", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_category");
	}


	itemAtq = stringify(&filterTag, "std::string");
	queryParams.insert(pair<string, string>("filter_tag", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_tag");
	}


	itemAtq = stringify(&filterTagset, "std::string");
	queryParams.insert(pair<string, string>("filter_tagset", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_tagset");
	}


	itemAtq = stringify(&filterType, "std::string");
	queryParams.insert(pair<string, string>("filter_type", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_type");
	}


	itemAtq = stringify(&filterPublished, "bool");
	queryParams.insert(pair<string, string>("filter_published", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_published");
	}


	itemAtq = stringify(&filterImportId, "long long");
	queryParams.insert(pair<string, string>("filter_import_id", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_import_id");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/trivia/questions/tags/{tag}");
	int pos;

	string s_tag("{");
	s_tag.append("tag");
	s_tag.append("}");
	pos = url.find(s_tag);
	url.erase(pos, s_tag.length());
	url.insert(pos, stringify(&tag, "std::string"));

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
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = removeTagToQuestionsBatchProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), removeTagToQuestionsBatchProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::removeTagToQuestionsBatchAsync(char * accessToken,
	std::string tag, std::string filterSearch, std::string filterIdset, std::string filterCategory, std::string filterTag, std::string filterTagset, std::string filterType, bool filterPublished, long long filterImportId, 
	void(* handler)(int, Error, void* )
	, void* userData)
{
	return removeTagToQuestionsBatchHelper(accessToken,
	tag, filterSearch, filterIdset, filterCategory, filterTag, filterTagset, filterType, filterPublished, filterImportId, 
	handler, userData, true);
}

bool GamificationTriviaManager::removeTagToQuestionsBatchSync(char * accessToken,
	std::string tag, std::string filterSearch, std::string filterIdset, std::string filterCategory, std::string filterTag, std::string filterTagset, std::string filterType, bool filterPublished, long long filterImportId, 
	void(* handler)(int, Error, void* )
	, void* userData)
{
	return removeTagToQuestionsBatchHelper(accessToken,
	tag, filterSearch, filterIdset, filterCategory, filterTag, filterTagset, filterType, filterPublished, filterImportId, 
	handler, userData, false);
}

static bool searchQuestionTagsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool searchQuestionTagsHelper(char * accessToken,
	std::string filterSearch, std::string filterCategory, long long filterImportId, 
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
	

	itemAtq = stringify(&filterSearch, "std::string");
	queryParams.insert(pair<string, string>("filter_search", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_search");
	}


	itemAtq = stringify(&filterCategory, "std::string");
	queryParams.insert(pair<string, string>("filter_category", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_category");
	}


	itemAtq = stringify(&filterImportId, "long long");
	queryParams.insert(pair<string, string>("filter_import_id", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_import_id");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/trivia/tags");
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
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = searchQuestionTagsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), searchQuestionTagsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::searchQuestionTagsAsync(char * accessToken,
	std::string filterSearch, std::string filterCategory, long long filterImportId, 
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData)
{
	return searchQuestionTagsHelper(accessToken,
	filterSearch, filterCategory, filterImportId, 
	handler, userData, true);
}

bool GamificationTriviaManager::searchQuestionTagsSync(char * accessToken,
	std::string filterSearch, std::string filterCategory, long long filterImportId, 
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData)
{
	return searchQuestionTagsHelper(accessToken,
	filterSearch, filterCategory, filterImportId, 
	handler, userData, false);
}

static bool updateImportJobProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(ImportJobResource, Error, void* )
	= reinterpret_cast<void(*)(ImportJobResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	ImportJobResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("ImportJobResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "ImportJobResource", "ImportJobResource");
			json_node_free(pJson);

			if ("ImportJobResource" == "std::string") {
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

static bool updateImportJobHelper(char * accessToken,
	long long id, ImportJobResource request, 
	void(* handler)(ImportJobResource, Error, void* )
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

	if (isprimitive("ImportJobResource")) {
		node = converttoJson(&request, "ImportJobResource", "");
	}
	
	char *jsonStr =  request.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/trivia/import/{id}");
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
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = updateImportJobProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), updateImportJobProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::updateImportJobAsync(char * accessToken,
	long long id, ImportJobResource request, 
	void(* handler)(ImportJobResource, Error, void* )
	, void* userData)
{
	return updateImportJobHelper(accessToken,
	id, request, 
	handler, userData, true);
}

bool GamificationTriviaManager::updateImportJobSync(char * accessToken,
	long long id, ImportJobResource request, 
	void(* handler)(ImportJobResource, Error, void* )
	, void* userData)
{
	return updateImportJobHelper(accessToken,
	id, request, 
	handler, userData, false);
}

static bool updateQuestionProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(QuestionResource, Error, void* )
	= reinterpret_cast<void(*)(QuestionResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	QuestionResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("QuestionResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "QuestionResource", "QuestionResource");
			json_node_free(pJson);

			if ("QuestionResource" == "std::string") {
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

static bool updateQuestionHelper(char * accessToken,
	std::string id, QuestionResource question, 
	void(* handler)(QuestionResource, Error, void* )
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

	if (isprimitive("QuestionResource")) {
		node = converttoJson(&question, "QuestionResource", "");
	}
	
	char *jsonStr =  question.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/trivia/questions/{id}");
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
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = updateQuestionProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), updateQuestionProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::updateQuestionAsync(char * accessToken,
	std::string id, QuestionResource question, 
	void(* handler)(QuestionResource, Error, void* )
	, void* userData)
{
	return updateQuestionHelper(accessToken,
	id, question, 
	handler, userData, true);
}

bool GamificationTriviaManager::updateQuestionSync(char * accessToken,
	std::string id, QuestionResource question, 
	void(* handler)(QuestionResource, Error, void* )
	, void* userData)
{
	return updateQuestionHelper(accessToken,
	id, question, 
	handler, userData, false);
}

static bool updateQuestionAnswerProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool updateQuestionAnswerHelper(char * accessToken,
	std::string questionId, std::string id, AnswerResource answer, 
	
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

	if (isprimitive("AnswerResource")) {
		node = converttoJson(&answer, "AnswerResource", "");
	}
	
	char *jsonStr =  answer.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/trivia/questions/{question_id}/answers/{id}");
	int pos;

	string s_questionId("{");
	s_questionId.append("question_id");
	s_questionId.append("}");
	pos = url.find(s_questionId);
	url.erase(pos, s_questionId.length());
	url.insert(pos, stringify(&questionId, "std::string"));
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
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = updateQuestionAnswerProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), updateQuestionAnswerProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::updateQuestionAnswerAsync(char * accessToken,
	std::string questionId, std::string id, AnswerResource answer, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return updateQuestionAnswerHelper(accessToken,
	questionId, id, answer, 
	handler, userData, true);
}

bool GamificationTriviaManager::updateQuestionAnswerSync(char * accessToken,
	std::string questionId, std::string id, AnswerResource answer, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return updateQuestionAnswerHelper(accessToken,
	questionId, id, answer, 
	handler, userData, false);
}

static bool updateQuestionTemplateProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(QuestionTemplateResource, Error, void* )
	= reinterpret_cast<void(*)(QuestionTemplateResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	QuestionTemplateResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("QuestionTemplateResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "QuestionTemplateResource", "QuestionTemplateResource");
			json_node_free(pJson);

			if ("QuestionTemplateResource" == "std::string") {
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

static bool updateQuestionTemplateHelper(char * accessToken,
	std::string id, QuestionTemplateResource questionTemplateResource, 
	void(* handler)(QuestionTemplateResource, Error, void* )
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

	if (isprimitive("QuestionTemplateResource")) {
		node = converttoJson(&questionTemplateResource, "QuestionTemplateResource", "");
	}
	
	char *jsonStr =  questionTemplateResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/trivia/questions/templates/{id}");
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
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = updateQuestionTemplateProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), updateQuestionTemplateProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::updateQuestionTemplateAsync(char * accessToken,
	std::string id, QuestionTemplateResource questionTemplateResource, 
	void(* handler)(QuestionTemplateResource, Error, void* )
	, void* userData)
{
	return updateQuestionTemplateHelper(accessToken,
	id, questionTemplateResource, 
	handler, userData, true);
}

bool GamificationTriviaManager::updateQuestionTemplateSync(char * accessToken,
	std::string id, QuestionTemplateResource questionTemplateResource, 
	void(* handler)(QuestionTemplateResource, Error, void* )
	, void* userData)
{
	return updateQuestionTemplateHelper(accessToken,
	id, questionTemplateResource, 
	handler, userData, false);
}

static bool updateQuestionsInBulkProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(int, Error, void* )
	= reinterpret_cast<void(*)(int, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	int out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("int")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "int", "int");
			json_node_free(pJson);

			if ("int" == "std::string") {
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

static bool updateQuestionsInBulkHelper(char * accessToken,
	QuestionResource question, std::string filterSearch, std::string filterIdset, std::string filterCategory, std::string filterTagset, std::string filterType, bool filterPublished, long long filterImportId, 
	void(* handler)(int, Error, void* )
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
	

	itemAtq = stringify(&filterSearch, "std::string");
	queryParams.insert(pair<string, string>("filter_search", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_search");
	}


	itemAtq = stringify(&filterIdset, "std::string");
	queryParams.insert(pair<string, string>("filter_idset", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_idset");
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


	itemAtq = stringify(&filterType, "std::string");
	queryParams.insert(pair<string, string>("filter_type", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_type");
	}


	itemAtq = stringify(&filterPublished, "bool");
	queryParams.insert(pair<string, string>("filter_published", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_published");
	}


	itemAtq = stringify(&filterImportId, "long long");
	queryParams.insert(pair<string, string>("filter_import_id", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_import_id");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	if (isprimitive("QuestionResource")) {
		node = converttoJson(&question, "QuestionResource", "");
	}
	
	char *jsonStr =  question.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/trivia/questions");
	int pos;


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
		NetClient::easycurl(GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = updateQuestionsInBulkProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (GamificationTriviaManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), updateQuestionsInBulkProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __GamificationTriviaManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool GamificationTriviaManager::updateQuestionsInBulkAsync(char * accessToken,
	QuestionResource question, std::string filterSearch, std::string filterIdset, std::string filterCategory, std::string filterTagset, std::string filterType, bool filterPublished, long long filterImportId, 
	void(* handler)(int, Error, void* )
	, void* userData)
{
	return updateQuestionsInBulkHelper(accessToken,
	question, filterSearch, filterIdset, filterCategory, filterTagset, filterType, filterPublished, filterImportId, 
	handler, userData, true);
}

bool GamificationTriviaManager::updateQuestionsInBulkSync(char * accessToken,
	QuestionResource question, std::string filterSearch, std::string filterIdset, std::string filterCategory, std::string filterTagset, std::string filterType, bool filterPublished, long long filterImportId, 
	void(* handler)(int, Error, void* )
	, void* userData)
{
	return updateQuestionsInBulkHelper(accessToken,
	question, filterSearch, filterIdset, filterCategory, filterTagset, filterType, filterPublished, filterImportId, 
	handler, userData, false);
}

