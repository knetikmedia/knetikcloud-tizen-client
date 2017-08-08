#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "AmazonWebServicesS3Manager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


AmazonWebServicesS3Manager::AmazonWebServicesS3Manager()
{

}

AmazonWebServicesS3Manager::~AmazonWebServicesS3Manager()
{

}

static gboolean __AmazonWebServicesS3ManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __AmazonWebServicesS3ManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__AmazonWebServicesS3ManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool getSignedS3URLProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(AmazonS3Activity, Error, void* )
	= reinterpret_cast<void(*)(AmazonS3Activity, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	AmazonS3Activity out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("AmazonS3Activity")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "AmazonS3Activity", "AmazonS3Activity");
			json_node_free(pJson);

			if ("AmazonS3Activity" == "std::string") {
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

static bool getSignedS3URLHelper(char * accessToken,
	std::string filename, std::string contentType, 
	void(* handler)(AmazonS3Activity, Error, void* )
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
	

	itemAtq = stringify(&filename, "std::string");
	queryParams.insert(pair<string, string>("filename", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filename");
	}


	itemAtq = stringify(&contentType, "std::string");
	queryParams.insert(pair<string, string>("content_type", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("content_type");
	}

	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	string url("/amazon/s3/signedposturl");
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
		NetClient::easycurl(AmazonWebServicesS3Manager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getSignedS3URLProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (AmazonWebServicesS3Manager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getSignedS3URLProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __AmazonWebServicesS3ManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool AmazonWebServicesS3Manager::getSignedS3URLAsync(char * accessToken,
	std::string filename, std::string contentType, 
	void(* handler)(AmazonS3Activity, Error, void* )
	, void* userData)
{
	return getSignedS3URLHelper(accessToken,
	filename, contentType, 
	handler, userData, true);
}

bool AmazonWebServicesS3Manager::getSignedS3URLSync(char * accessToken,
	std::string filename, std::string contentType, 
	void(* handler)(AmazonS3Activity, Error, void* )
	, void* userData)
{
	return getSignedS3URLHelper(accessToken,
	filename, contentType, 
	handler, userData, false);
}

