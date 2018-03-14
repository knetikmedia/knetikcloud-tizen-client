#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "Reporting_OrdersManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


Reporting_OrdersManager::Reporting_OrdersManager()
{

}

Reporting_OrdersManager::~Reporting_OrdersManager()
{

}

static gboolean __Reporting_OrdersManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __Reporting_OrdersManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__Reporting_OrdersManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool getInvoiceReportsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«AggregateInvoiceReportResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«AggregateInvoiceReportResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«AggregateInvoiceReportResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«AggregateInvoiceReportResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«AggregateInvoiceReportResource»", "PageResource«AggregateInvoiceReportResource»");
			json_node_free(pJson);

			if ("PageResource«AggregateInvoiceReportResource»" == "std::string") {
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

static bool getInvoiceReportsHelper(char * accessToken,
	std::string currencyCode, std::string granularity, std::string filterPaymentStatus, std::string filterFulfillmentStatus, long long startDate, long long endDate, int size, int page, 
	void(* handler)(PageResource«AggregateInvoiceReportResource», Error, void* )
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
	

	itemAtq = stringify(&granularity, "std::string");
	queryParams.insert(pair<string, string>("granularity", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("granularity");
	}


	itemAtq = stringify(&filterPaymentStatus, "std::string");
	queryParams.insert(pair<string, string>("filter_payment_status", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_payment_status");
	}


	itemAtq = stringify(&filterFulfillmentStatus, "std::string");
	queryParams.insert(pair<string, string>("filter_fulfillment_status", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_fulfillment_status");
	}


	itemAtq = stringify(&startDate, "long long");
	queryParams.insert(pair<string, string>("start_date", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("start_date");
	}


	itemAtq = stringify(&endDate, "long long");
	queryParams.insert(pair<string, string>("end_date", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("end_date");
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

	string url("/reporting/orders/count/{currency_code}");
	int pos;

	string s_currencyCode("{");
	s_currencyCode.append("currency_code");
	s_currencyCode.append("}");
	pos = url.find(s_currencyCode);
	url.erase(pos, s_currencyCode.length());
	url.insert(pos, stringify(&currencyCode, "std::string"));

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
		NetClient::easycurl(Reporting_OrdersManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getInvoiceReportsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Reporting_OrdersManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getInvoiceReportsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Reporting_OrdersManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Reporting_OrdersManager::getInvoiceReportsAsync(char * accessToken,
	std::string currencyCode, std::string granularity, std::string filterPaymentStatus, std::string filterFulfillmentStatus, long long startDate, long long endDate, int size, int page, 
	void(* handler)(PageResource«AggregateInvoiceReportResource», Error, void* )
	, void* userData)
{
	return getInvoiceReportsHelper(accessToken,
	currencyCode, granularity, filterPaymentStatus, filterFulfillmentStatus, startDate, endDate, size, page, 
	handler, userData, true);
}

bool Reporting_OrdersManager::getInvoiceReportsSync(char * accessToken,
	std::string currencyCode, std::string granularity, std::string filterPaymentStatus, std::string filterFulfillmentStatus, long long startDate, long long endDate, int size, int page, 
	void(* handler)(PageResource«AggregateInvoiceReportResource», Error, void* )
	, void* userData)
{
	return getInvoiceReportsHelper(accessToken,
	currencyCode, granularity, filterPaymentStatus, filterFulfillmentStatus, startDate, endDate, size, page, 
	handler, userData, false);
}

