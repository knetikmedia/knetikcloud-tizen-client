#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "PaymentsFattMerchantManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


PaymentsFattMerchantManager::PaymentsFattMerchantManager()
{

}

PaymentsFattMerchantManager::~PaymentsFattMerchantManager()
{

}

static gboolean __PaymentsFattMerchantManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __PaymentsFattMerchantManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__PaymentsFattMerchantManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool createOrUpdateFattMerchantPaymentMethodProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PaymentMethodResource, Error, void* )
	= reinterpret_cast<void(*)(PaymentMethodResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PaymentMethodResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PaymentMethodResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PaymentMethodResource", "PaymentMethodResource");
			json_node_free(pJson);

			if ("PaymentMethodResource" == "std::string") {
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

static bool createOrUpdateFattMerchantPaymentMethodHelper(char * accessToken,
	FattMerchantPaymentMethodRequest request, 
	void(* handler)(PaymentMethodResource, Error, void* )
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

	if (isprimitive("FattMerchantPaymentMethodRequest")) {
		node = converttoJson(&request, "FattMerchantPaymentMethodRequest", "");
	}
	
	char *jsonStr =  request.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/payment/provider/fattmerchant/payment-methods");
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
		NetClient::easycurl(PaymentsFattMerchantManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = createOrUpdateFattMerchantPaymentMethodProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (PaymentsFattMerchantManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), createOrUpdateFattMerchantPaymentMethodProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __PaymentsFattMerchantManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool PaymentsFattMerchantManager::createOrUpdateFattMerchantPaymentMethodAsync(char * accessToken,
	FattMerchantPaymentMethodRequest request, 
	void(* handler)(PaymentMethodResource, Error, void* )
	, void* userData)
{
	return createOrUpdateFattMerchantPaymentMethodHelper(accessToken,
	request, 
	handler, userData, true);
}

bool PaymentsFattMerchantManager::createOrUpdateFattMerchantPaymentMethodSync(char * accessToken,
	FattMerchantPaymentMethodRequest request, 
	void(* handler)(PaymentMethodResource, Error, void* )
	, void* userData)
{
	return createOrUpdateFattMerchantPaymentMethodHelper(accessToken,
	request, 
	handler, userData, false);
}

