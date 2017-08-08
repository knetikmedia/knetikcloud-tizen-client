#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "PaymentsPayPalClassicManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


PaymentsPayPalClassicManager::PaymentsPayPalClassicManager()
{

}

PaymentsPayPalClassicManager::~PaymentsPayPalClassicManager()
{

}

static gboolean __PaymentsPayPalClassicManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __PaymentsPayPalClassicManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__PaymentsPayPalClassicManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool createPayPalBillingAgreementUrlProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::string, Error, void* )
	= reinterpret_cast<void(*)(std::string, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	std::string out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("std::string")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "std::string", "std::string");
			json_node_free(pJson);

			if ("std::string" == "std::string") {
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

static bool createPayPalBillingAgreementUrlHelper(char * accessToken,
	CreateBillingAgreementRequest request, 
	void(* handler)(std::string, Error, void* )
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

	if (isprimitive("CreateBillingAgreementRequest")) {
		node = converttoJson(&request, "CreateBillingAgreementRequest", "");
	}
	
	char *jsonStr =  request.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/payment/provider/paypal/classic/agreements/start");
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
		NetClient::easycurl(PaymentsPayPalClassicManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = createPayPalBillingAgreementUrlProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (PaymentsPayPalClassicManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), createPayPalBillingAgreementUrlProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __PaymentsPayPalClassicManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool PaymentsPayPalClassicManager::createPayPalBillingAgreementUrlAsync(char * accessToken,
	CreateBillingAgreementRequest request, 
	void(* handler)(std::string, Error, void* )
	, void* userData)
{
	return createPayPalBillingAgreementUrlHelper(accessToken,
	request, 
	handler, userData, true);
}

bool PaymentsPayPalClassicManager::createPayPalBillingAgreementUrlSync(char * accessToken,
	CreateBillingAgreementRequest request, 
	void(* handler)(std::string, Error, void* )
	, void* userData)
{
	return createPayPalBillingAgreementUrlHelper(accessToken,
	request, 
	handler, userData, false);
}

static bool createPayPalExpressCheckoutProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::string, Error, void* )
	= reinterpret_cast<void(*)(std::string, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	std::string out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("std::string")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "std::string", "std::string");
			json_node_free(pJson);

			if ("std::string" == "std::string") {
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

static bool createPayPalExpressCheckoutHelper(char * accessToken,
	CreatePayPalPaymentRequest request, 
	void(* handler)(std::string, Error, void* )
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

	if (isprimitive("CreatePayPalPaymentRequest")) {
		node = converttoJson(&request, "CreatePayPalPaymentRequest", "");
	}
	
	char *jsonStr =  request.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/payment/provider/paypal/classic/checkout/start");
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
		NetClient::easycurl(PaymentsPayPalClassicManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = createPayPalExpressCheckoutProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (PaymentsPayPalClassicManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), createPayPalExpressCheckoutProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __PaymentsPayPalClassicManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool PaymentsPayPalClassicManager::createPayPalExpressCheckoutAsync(char * accessToken,
	CreatePayPalPaymentRequest request, 
	void(* handler)(std::string, Error, void* )
	, void* userData)
{
	return createPayPalExpressCheckoutHelper(accessToken,
	request, 
	handler, userData, true);
}

bool PaymentsPayPalClassicManager::createPayPalExpressCheckoutSync(char * accessToken,
	CreatePayPalPaymentRequest request, 
	void(* handler)(std::string, Error, void* )
	, void* userData)
{
	return createPayPalExpressCheckoutHelper(accessToken,
	request, 
	handler, userData, false);
}

static bool finalizePayPalBillingAgreementProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool finalizePayPalBillingAgreementHelper(char * accessToken,
	FinalizeBillingAgreementRequest request, 
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

	if (isprimitive("FinalizeBillingAgreementRequest")) {
		node = converttoJson(&request, "FinalizeBillingAgreementRequest", "");
	}
	
	char *jsonStr =  request.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/payment/provider/paypal/classic/agreements/finish");
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
		NetClient::easycurl(PaymentsPayPalClassicManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = finalizePayPalBillingAgreementProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (PaymentsPayPalClassicManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), finalizePayPalBillingAgreementProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __PaymentsPayPalClassicManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool PaymentsPayPalClassicManager::finalizePayPalBillingAgreementAsync(char * accessToken,
	FinalizeBillingAgreementRequest request, 
	void(* handler)(int, Error, void* )
	, void* userData)
{
	return finalizePayPalBillingAgreementHelper(accessToken,
	request, 
	handler, userData, true);
}

bool PaymentsPayPalClassicManager::finalizePayPalBillingAgreementSync(char * accessToken,
	FinalizeBillingAgreementRequest request, 
	void(* handler)(int, Error, void* )
	, void* userData)
{
	return finalizePayPalBillingAgreementHelper(accessToken,
	request, 
	handler, userData, false);
}

static bool finalizePayPalCheckoutProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool finalizePayPalCheckoutHelper(char * accessToken,
	FinalizePayPalPaymentRequest request, 
	
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

	if (isprimitive("FinalizePayPalPaymentRequest")) {
		node = converttoJson(&request, "FinalizePayPalPaymentRequest", "");
	}
	
	char *jsonStr =  request.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/payment/provider/paypal/classic/checkout/finish");
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
		NetClient::easycurl(PaymentsPayPalClassicManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = finalizePayPalCheckoutProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (PaymentsPayPalClassicManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), finalizePayPalCheckoutProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __PaymentsPayPalClassicManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool PaymentsPayPalClassicManager::finalizePayPalCheckoutAsync(char * accessToken,
	FinalizePayPalPaymentRequest request, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return finalizePayPalCheckoutHelper(accessToken,
	request, 
	handler, userData, true);
}

bool PaymentsPayPalClassicManager::finalizePayPalCheckoutSync(char * accessToken,
	FinalizePayPalPaymentRequest request, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return finalizePayPalCheckoutHelper(accessToken,
	request, 
	handler, userData, false);
}

