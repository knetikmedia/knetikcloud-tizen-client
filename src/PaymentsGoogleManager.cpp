#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "PaymentsGoogleManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


PaymentsGoogleManager::PaymentsGoogleManager()
{

}

PaymentsGoogleManager::~PaymentsGoogleManager()
{

}

static gboolean __PaymentsGoogleManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __PaymentsGoogleManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__PaymentsGoogleManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool handleGooglePaymentProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool handleGooglePaymentHelper(char * accessToken,
	GooglePaymentRequest request, 
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
	
	string mBody = "";
	JsonNode* node;
	JsonArray* json_array;

	if (isprimitive("GooglePaymentRequest")) {
		node = converttoJson(&request, "GooglePaymentRequest", "");
	}
	
	char *jsonStr =  request.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/payment/provider/google/payments");
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
		NetClient::easycurl(PaymentsGoogleManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = handleGooglePaymentProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (PaymentsGoogleManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), handleGooglePaymentProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __PaymentsGoogleManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool PaymentsGoogleManager::handleGooglePaymentAsync(char * accessToken,
	GooglePaymentRequest request, 
	void(* handler)(int, Error, void* )
	, void* userData)
{
	return handleGooglePaymentHelper(accessToken,
	request, 
	handler, userData, true);
}

bool PaymentsGoogleManager::handleGooglePaymentSync(char * accessToken,
	GooglePaymentRequest request, 
	void(* handler)(int, Error, void* )
	, void* userData)
{
	return handleGooglePaymentHelper(accessToken,
	request, 
	handler, userData, false);
}

