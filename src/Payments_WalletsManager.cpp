#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "Payments_WalletsManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


Payments_WalletsManager::Payments_WalletsManager()
{

}

Payments_WalletsManager::~Payments_WalletsManager()
{

}

static gboolean __Payments_WalletsManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __Payments_WalletsManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__Payments_WalletsManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool getUserWalletProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(SimpleWallet, Error, void* )
	= reinterpret_cast<void(*)(SimpleWallet, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	SimpleWallet out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("SimpleWallet")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "SimpleWallet", "SimpleWallet");
			json_node_free(pJson);

			if ("SimpleWallet" == "std::string") {
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

static bool getUserWalletHelper(char * accessToken,
	int userId, std::string currencyCode, 
	void(* handler)(SimpleWallet, Error, void* )
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

	string url("/users/{user_id}/wallets/{currency_code}");
	int pos;

	string s_userId("{");
	s_userId.append("user_id");
	s_userId.append("}");
	pos = url.find(s_userId);
	url.erase(pos, s_userId.length());
	url.insert(pos, stringify(&userId, "int"));
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
		NetClient::easycurl(Payments_WalletsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getUserWalletProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Payments_WalletsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getUserWalletProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Payments_WalletsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Payments_WalletsManager::getUserWalletAsync(char * accessToken,
	int userId, std::string currencyCode, 
	void(* handler)(SimpleWallet, Error, void* )
	, void* userData)
{
	return getUserWalletHelper(accessToken,
	userId, currencyCode, 
	handler, userData, true);
}

bool Payments_WalletsManager::getUserWalletSync(char * accessToken,
	int userId, std::string currencyCode, 
	void(* handler)(SimpleWallet, Error, void* )
	, void* userData)
{
	return getUserWalletHelper(accessToken,
	userId, currencyCode, 
	handler, userData, false);
}

static bool getUserWalletTransactionsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«WalletTransactionResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«WalletTransactionResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«WalletTransactionResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«WalletTransactionResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«WalletTransactionResource»", "PageResource«WalletTransactionResource»");
			json_node_free(pJson);

			if ("PageResource«WalletTransactionResource»" == "std::string") {
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

static bool getUserWalletTransactionsHelper(char * accessToken,
	int userId, std::string currencyCode, std::string filterType, long long filterMaxDate, long long filterMinDate, std::string filterSign, int size, int page, std::string order, 
	void(* handler)(PageResource«WalletTransactionResource», Error, void* )
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
	

	itemAtq = stringify(&filterType, "std::string");
	queryParams.insert(pair<string, string>("filter_type", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_type");
	}


	itemAtq = stringify(&filterMaxDate, "long long");
	queryParams.insert(pair<string, string>("filter_max_date", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_max_date");
	}


	itemAtq = stringify(&filterMinDate, "long long");
	queryParams.insert(pair<string, string>("filter_min_date", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_min_date");
	}


	itemAtq = stringify(&filterSign, "std::string");
	queryParams.insert(pair<string, string>("filter_sign", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_sign");
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

	string url("/users/{user_id}/wallets/{currency_code}/transactions");
	int pos;

	string s_userId("{");
	s_userId.append("user_id");
	s_userId.append("}");
	pos = url.find(s_userId);
	url.erase(pos, s_userId.length());
	url.insert(pos, stringify(&userId, "int"));
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
		NetClient::easycurl(Payments_WalletsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getUserWalletTransactionsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Payments_WalletsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getUserWalletTransactionsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Payments_WalletsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Payments_WalletsManager::getUserWalletTransactionsAsync(char * accessToken,
	int userId, std::string currencyCode, std::string filterType, long long filterMaxDate, long long filterMinDate, std::string filterSign, int size, int page, std::string order, 
	void(* handler)(PageResource«WalletTransactionResource», Error, void* )
	, void* userData)
{
	return getUserWalletTransactionsHelper(accessToken,
	userId, currencyCode, filterType, filterMaxDate, filterMinDate, filterSign, size, page, order, 
	handler, userData, true);
}

bool Payments_WalletsManager::getUserWalletTransactionsSync(char * accessToken,
	int userId, std::string currencyCode, std::string filterType, long long filterMaxDate, long long filterMinDate, std::string filterSign, int size, int page, std::string order, 
	void(* handler)(PageResource«WalletTransactionResource», Error, void* )
	, void* userData)
{
	return getUserWalletTransactionsHelper(accessToken,
	userId, currencyCode, filterType, filterMaxDate, filterMinDate, filterSign, size, page, order, 
	handler, userData, false);
}

static bool getUserWalletsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(std::list<SimpleWallet>, Error, void* )
	= reinterpret_cast<void(*)(std::list<SimpleWallet>, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	std::list<SimpleWallet> out;
	

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));



		pJson = json_from_string(data, NULL);
		JsonArray * jsonarray = json_node_get_array (pJson);
		guint length = json_array_get_length (jsonarray);
		for(guint i = 0; i < length; i++){
			JsonNode* myJson = json_array_get_element (jsonarray, i);
			char * singlenodestr = json_to_string(myJson, false);
			SimpleWallet singlemodel;
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

static bool getUserWalletsHelper(char * accessToken,
	int userId, 
	void(* handler)(std::list<SimpleWallet>, Error, void* )
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

	string url("/users/{user_id}/wallets");
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
		NetClient::easycurl(Payments_WalletsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getUserWalletsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Payments_WalletsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getUserWalletsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Payments_WalletsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Payments_WalletsManager::getUserWalletsAsync(char * accessToken,
	int userId, 
	void(* handler)(std::list<SimpleWallet>, Error, void* )
	, void* userData)
{
	return getUserWalletsHelper(accessToken,
	userId, 
	handler, userData, true);
}

bool Payments_WalletsManager::getUserWalletsSync(char * accessToken,
	int userId, 
	void(* handler)(std::list<SimpleWallet>, Error, void* )
	, void* userData)
{
	return getUserWalletsHelper(accessToken,
	userId, 
	handler, userData, false);
}

static bool getWalletBalancesProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«WalletTotalResponse», Error, void* )
	= reinterpret_cast<void(*)(PageResource«WalletTotalResponse», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«WalletTotalResponse» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«WalletTotalResponse»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«WalletTotalResponse»", "PageResource«WalletTotalResponse»");
			json_node_free(pJson);

			if ("PageResource«WalletTotalResponse»" == "std::string") {
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

static bool getWalletBalancesHelper(char * accessToken,
	
	void(* handler)(PageResource«WalletTotalResponse», Error, void* )
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

	string url("/wallets/totals");
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
		NetClient::easycurl(Payments_WalletsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getWalletBalancesProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Payments_WalletsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getWalletBalancesProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Payments_WalletsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Payments_WalletsManager::getWalletBalancesAsync(char * accessToken,
	
	void(* handler)(PageResource«WalletTotalResponse», Error, void* )
	, void* userData)
{
	return getWalletBalancesHelper(accessToken,
	
	handler, userData, true);
}

bool Payments_WalletsManager::getWalletBalancesSync(char * accessToken,
	
	void(* handler)(PageResource«WalletTotalResponse», Error, void* )
	, void* userData)
{
	return getWalletBalancesHelper(accessToken,
	
	handler, userData, false);
}

static bool getWalletTransactionsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«WalletTransactionResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«WalletTransactionResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«WalletTransactionResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«WalletTransactionResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«WalletTransactionResource»", "PageResource«WalletTransactionResource»");
			json_node_free(pJson);

			if ("PageResource«WalletTransactionResource»" == "std::string") {
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

static bool getWalletTransactionsHelper(char * accessToken,
	int filterInvoice, std::string filterType, std::string filterDate, std::string filterSign, int filterUserId, std::string filterUsername, std::string filterDetails, std::string filterCurrencyCode, int size, int page, std::string order, 
	void(* handler)(PageResource«WalletTransactionResource», Error, void* )
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
	

	itemAtq = stringify(&filterInvoice, "int");
	queryParams.insert(pair<string, string>("filter_invoice", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_invoice");
	}


	itemAtq = stringify(&filterType, "std::string");
	queryParams.insert(pair<string, string>("filter_type", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_type");
	}


	itemAtq = stringify(&filterDate, "std::string");
	queryParams.insert(pair<string, string>("filter_date", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_date");
	}


	itemAtq = stringify(&filterSign, "std::string");
	queryParams.insert(pair<string, string>("filter_sign", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_sign");
	}


	itemAtq = stringify(&filterUserId, "int");
	queryParams.insert(pair<string, string>("filter_user_id", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_user_id");
	}


	itemAtq = stringify(&filterUsername, "std::string");
	queryParams.insert(pair<string, string>("filter_username", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_username");
	}


	itemAtq = stringify(&filterDetails, "std::string");
	queryParams.insert(pair<string, string>("filter_details", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_details");
	}


	itemAtq = stringify(&filterCurrencyCode, "std::string");
	queryParams.insert(pair<string, string>("filter_currency_code", itemAtq));
	if( itemAtq.empty()==true){
		queryParams.erase("filter_currency_code");
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

	string url("/wallets/transactions");
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
		NetClient::easycurl(Payments_WalletsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getWalletTransactionsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Payments_WalletsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getWalletTransactionsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Payments_WalletsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Payments_WalletsManager::getWalletTransactionsAsync(char * accessToken,
	int filterInvoice, std::string filterType, std::string filterDate, std::string filterSign, int filterUserId, std::string filterUsername, std::string filterDetails, std::string filterCurrencyCode, int size, int page, std::string order, 
	void(* handler)(PageResource«WalletTransactionResource», Error, void* )
	, void* userData)
{
	return getWalletTransactionsHelper(accessToken,
	filterInvoice, filterType, filterDate, filterSign, filterUserId, filterUsername, filterDetails, filterCurrencyCode, size, page, order, 
	handler, userData, true);
}

bool Payments_WalletsManager::getWalletTransactionsSync(char * accessToken,
	int filterInvoice, std::string filterType, std::string filterDate, std::string filterSign, int filterUserId, std::string filterUsername, std::string filterDetails, std::string filterCurrencyCode, int size, int page, std::string order, 
	void(* handler)(PageResource«WalletTransactionResource», Error, void* )
	, void* userData)
{
	return getWalletTransactionsHelper(accessToken,
	filterInvoice, filterType, filterDate, filterSign, filterUserId, filterUsername, filterDetails, filterCurrencyCode, size, page, order, 
	handler, userData, false);
}

static bool getWalletsProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«SimpleWallet», Error, void* )
	= reinterpret_cast<void(*)(PageResource«SimpleWallet», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«SimpleWallet» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«SimpleWallet»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«SimpleWallet»", "PageResource«SimpleWallet»");
			json_node_free(pJson);

			if ("PageResource«SimpleWallet»" == "std::string") {
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

static bool getWalletsHelper(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«SimpleWallet», Error, void* )
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

	string url("/wallets");
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
		NetClient::easycurl(Payments_WalletsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getWalletsProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Payments_WalletsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getWalletsProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Payments_WalletsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Payments_WalletsManager::getWalletsAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«SimpleWallet», Error, void* )
	, void* userData)
{
	return getWalletsHelper(accessToken,
	size, page, order, 
	handler, userData, true);
}

bool Payments_WalletsManager::getWalletsSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«SimpleWallet», Error, void* )
	, void* userData)
{
	return getWalletsHelper(accessToken,
	size, page, order, 
	handler, userData, false);
}

static bool updateWalletBalanceProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(WalletTransactionResource, Error, void* )
	= reinterpret_cast<void(*)(WalletTransactionResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	WalletTransactionResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("WalletTransactionResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "WalletTransactionResource", "WalletTransactionResource");
			json_node_free(pJson);

			if ("WalletTransactionResource" == "std::string") {
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

static bool updateWalletBalanceHelper(char * accessToken,
	int userId, std::string currencyCode, WalletAlterRequest request, 
	void(* handler)(WalletTransactionResource, Error, void* )
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

	if (isprimitive("WalletAlterRequest")) {
		node = converttoJson(&request, "WalletAlterRequest", "");
	}
	
	char *jsonStr =  request.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/users/{user_id}/wallets/{currency_code}/balance");
	int pos;

	string s_userId("{");
	s_userId.append("user_id");
	s_userId.append("}");
	pos = url.find(s_userId);
	url.erase(pos, s_userId.length());
	url.insert(pos, stringify(&userId, "int"));
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
	string myhttpmethod("PUT");

	if(strcmp("PUT", "PUT") == 0){
		if(strcmp("", mBody.c_str()) == 0){
			mBody.append("{}");
		}
	}

	if(!isAsync){
		NetClient::easycurl(Payments_WalletsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = updateWalletBalanceProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (Payments_WalletsManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), updateWalletBalanceProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __Payments_WalletsManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool Payments_WalletsManager::updateWalletBalanceAsync(char * accessToken,
	int userId, std::string currencyCode, WalletAlterRequest request, 
	void(* handler)(WalletTransactionResource, Error, void* )
	, void* userData)
{
	return updateWalletBalanceHelper(accessToken,
	userId, currencyCode, request, 
	handler, userData, true);
}

bool Payments_WalletsManager::updateWalletBalanceSync(char * accessToken,
	int userId, std::string currencyCode, WalletAlterRequest request, 
	void(* handler)(WalletTransactionResource, Error, void* )
	, void* userData)
{
	return updateWalletBalanceHelper(accessToken,
	userId, currencyCode, request, 
	handler, userData, false);
}

