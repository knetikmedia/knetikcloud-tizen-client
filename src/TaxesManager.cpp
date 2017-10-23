#include <glib-object.h>
#include <json-glib/json-glib.h>

#include "TaxesManager.h"
#include "NetClient.h"
#include "Helpers.h"
#include "Error.h"
#include "RequestInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;


TaxesManager::TaxesManager()
{

}

TaxesManager::~TaxesManager()
{

}

static gboolean __TaxesManagerresponseHandler(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);
	g_thread_join(request->thread);

	// invoke the callback function
	bool retval = request->processor(*(request->p_chunk), *(request->code), request->errormsg, request->userData, request->handler);

	delete request;
	return FALSE;
}

static gpointer __TaxesManagerthreadFunc(gpointer data)
{
	RequestInfo *request = static_cast<RequestInfo*>(data);

	// handle the request
	NetClient::easycurl(request->host, request->path, request->method, request->queryParams,
	request->mBody, request->headerList, request->p_chunk, request->code, request->errormsg);

	request->thread = g_thread_self();
	g_idle_add(__TaxesManagerresponseHandler, static_cast<gpointer>(request));

	return NULL;
}


static bool createCountryTaxProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(CountryTaxResource, Error, void* )
	= reinterpret_cast<void(*)(CountryTaxResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	CountryTaxResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("CountryTaxResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "CountryTaxResource", "CountryTaxResource");
			json_node_free(pJson);

			if ("CountryTaxResource" == "std::string") {
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

static bool createCountryTaxHelper(char * accessToken,
	CountryTaxResource taxResource, 
	void(* handler)(CountryTaxResource, Error, void* )
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

	if (isprimitive("CountryTaxResource")) {
		node = converttoJson(&taxResource, "CountryTaxResource", "");
	}
	
	char *jsonStr =  taxResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/tax/countries");
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
		NetClient::easycurl(TaxesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = createCountryTaxProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (TaxesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), createCountryTaxProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __TaxesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool TaxesManager::createCountryTaxAsync(char * accessToken,
	CountryTaxResource taxResource, 
	void(* handler)(CountryTaxResource, Error, void* )
	, void* userData)
{
	return createCountryTaxHelper(accessToken,
	taxResource, 
	handler, userData, true);
}

bool TaxesManager::createCountryTaxSync(char * accessToken,
	CountryTaxResource taxResource, 
	void(* handler)(CountryTaxResource, Error, void* )
	, void* userData)
{
	return createCountryTaxHelper(accessToken,
	taxResource, 
	handler, userData, false);
}

static bool createStateTaxProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(StateTaxResource, Error, void* )
	= reinterpret_cast<void(*)(StateTaxResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	StateTaxResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("StateTaxResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "StateTaxResource", "StateTaxResource");
			json_node_free(pJson);

			if ("StateTaxResource" == "std::string") {
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

static bool createStateTaxHelper(char * accessToken,
	std::string countryCodeIso3, StateTaxResource taxResource, 
	void(* handler)(StateTaxResource, Error, void* )
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

	if (isprimitive("StateTaxResource")) {
		node = converttoJson(&taxResource, "StateTaxResource", "");
	}
	
	char *jsonStr =  taxResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/tax/countries/{country_code_iso3}/states");
	int pos;

	string s_countryCodeIso3("{");
	s_countryCodeIso3.append("country_code_iso3");
	s_countryCodeIso3.append("}");
	pos = url.find(s_countryCodeIso3);
	url.erase(pos, s_countryCodeIso3.length());
	url.insert(pos, stringify(&countryCodeIso3, "std::string"));

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
		NetClient::easycurl(TaxesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = createStateTaxProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (TaxesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), createStateTaxProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __TaxesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool TaxesManager::createStateTaxAsync(char * accessToken,
	std::string countryCodeIso3, StateTaxResource taxResource, 
	void(* handler)(StateTaxResource, Error, void* )
	, void* userData)
{
	return createStateTaxHelper(accessToken,
	countryCodeIso3, taxResource, 
	handler, userData, true);
}

bool TaxesManager::createStateTaxSync(char * accessToken,
	std::string countryCodeIso3, StateTaxResource taxResource, 
	void(* handler)(StateTaxResource, Error, void* )
	, void* userData)
{
	return createStateTaxHelper(accessToken,
	countryCodeIso3, taxResource, 
	handler, userData, false);
}

static bool deleteCountryTaxProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool deleteCountryTaxHelper(char * accessToken,
	std::string countryCodeIso3, 
	
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

	string url("/tax/countries/{country_code_iso3}");
	int pos;

	string s_countryCodeIso3("{");
	s_countryCodeIso3.append("country_code_iso3");
	s_countryCodeIso3.append("}");
	pos = url.find(s_countryCodeIso3);
	url.erase(pos, s_countryCodeIso3.length());
	url.insert(pos, stringify(&countryCodeIso3, "std::string"));

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
		NetClient::easycurl(TaxesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = deleteCountryTaxProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (TaxesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), deleteCountryTaxProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __TaxesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool TaxesManager::deleteCountryTaxAsync(char * accessToken,
	std::string countryCodeIso3, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteCountryTaxHelper(accessToken,
	countryCodeIso3, 
	handler, userData, true);
}

bool TaxesManager::deleteCountryTaxSync(char * accessToken,
	std::string countryCodeIso3, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteCountryTaxHelper(accessToken,
	countryCodeIso3, 
	handler, userData, false);
}

static bool deleteStateTaxProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
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

static bool deleteStateTaxHelper(char * accessToken,
	std::string countryCodeIso3, std::string stateCode, 
	
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

	string url("/tax/countries/{country_code_iso3}/states/{state_code}");
	int pos;

	string s_countryCodeIso3("{");
	s_countryCodeIso3.append("country_code_iso3");
	s_countryCodeIso3.append("}");
	pos = url.find(s_countryCodeIso3);
	url.erase(pos, s_countryCodeIso3.length());
	url.insert(pos, stringify(&countryCodeIso3, "std::string"));
	string s_stateCode("{");
	s_stateCode.append("state_code");
	s_stateCode.append("}");
	pos = url.find(s_stateCode);
	url.erase(pos, s_stateCode.length());
	url.insert(pos, stringify(&stateCode, "std::string"));

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
		NetClient::easycurl(TaxesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = deleteStateTaxProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (TaxesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), deleteStateTaxProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __TaxesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool TaxesManager::deleteStateTaxAsync(char * accessToken,
	std::string countryCodeIso3, std::string stateCode, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteStateTaxHelper(accessToken,
	countryCodeIso3, stateCode, 
	handler, userData, true);
}

bool TaxesManager::deleteStateTaxSync(char * accessToken,
	std::string countryCodeIso3, std::string stateCode, 
	
	void(* handler)(Error, void* ) , void* userData)
{
	return deleteStateTaxHelper(accessToken,
	countryCodeIso3, stateCode, 
	handler, userData, false);
}

static bool getCountryTaxProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(CountryTaxResource, Error, void* )
	= reinterpret_cast<void(*)(CountryTaxResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	CountryTaxResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("CountryTaxResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "CountryTaxResource", "CountryTaxResource");
			json_node_free(pJson);

			if ("CountryTaxResource" == "std::string") {
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

static bool getCountryTaxHelper(char * accessToken,
	std::string countryCodeIso3, 
	void(* handler)(CountryTaxResource, Error, void* )
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

	string url("/tax/countries/{country_code_iso3}");
	int pos;

	string s_countryCodeIso3("{");
	s_countryCodeIso3.append("country_code_iso3");
	s_countryCodeIso3.append("}");
	pos = url.find(s_countryCodeIso3);
	url.erase(pos, s_countryCodeIso3.length());
	url.insert(pos, stringify(&countryCodeIso3, "std::string"));

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
		NetClient::easycurl(TaxesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getCountryTaxProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (TaxesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getCountryTaxProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __TaxesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool TaxesManager::getCountryTaxAsync(char * accessToken,
	std::string countryCodeIso3, 
	void(* handler)(CountryTaxResource, Error, void* )
	, void* userData)
{
	return getCountryTaxHelper(accessToken,
	countryCodeIso3, 
	handler, userData, true);
}

bool TaxesManager::getCountryTaxSync(char * accessToken,
	std::string countryCodeIso3, 
	void(* handler)(CountryTaxResource, Error, void* )
	, void* userData)
{
	return getCountryTaxHelper(accessToken,
	countryCodeIso3, 
	handler, userData, false);
}

static bool getCountryTaxesProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«CountryTaxResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«CountryTaxResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«CountryTaxResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«CountryTaxResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«CountryTaxResource»", "PageResource«CountryTaxResource»");
			json_node_free(pJson);

			if ("PageResource«CountryTaxResource»" == "std::string") {
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

static bool getCountryTaxesHelper(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«CountryTaxResource», Error, void* )
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

	string url("/tax/countries");
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
		NetClient::easycurl(TaxesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getCountryTaxesProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (TaxesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getCountryTaxesProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __TaxesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool TaxesManager::getCountryTaxesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«CountryTaxResource», Error, void* )
	, void* userData)
{
	return getCountryTaxesHelper(accessToken,
	size, page, order, 
	handler, userData, true);
}

bool TaxesManager::getCountryTaxesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«CountryTaxResource», Error, void* )
	, void* userData)
{
	return getCountryTaxesHelper(accessToken,
	size, page, order, 
	handler, userData, false);
}

static bool getStateTaxProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(StateTaxResource, Error, void* )
	= reinterpret_cast<void(*)(StateTaxResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	StateTaxResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("StateTaxResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "StateTaxResource", "StateTaxResource");
			json_node_free(pJson);

			if ("StateTaxResource" == "std::string") {
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

static bool getStateTaxHelper(char * accessToken,
	std::string countryCodeIso3, std::string stateCode, 
	void(* handler)(StateTaxResource, Error, void* )
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

	string url("/tax/countries/{country_code_iso3}/states/{state_code}");
	int pos;

	string s_countryCodeIso3("{");
	s_countryCodeIso3.append("country_code_iso3");
	s_countryCodeIso3.append("}");
	pos = url.find(s_countryCodeIso3);
	url.erase(pos, s_countryCodeIso3.length());
	url.insert(pos, stringify(&countryCodeIso3, "std::string"));
	string s_stateCode("{");
	s_stateCode.append("state_code");
	s_stateCode.append("}");
	pos = url.find(s_stateCode);
	url.erase(pos, s_stateCode.length());
	url.insert(pos, stringify(&stateCode, "std::string"));

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
		NetClient::easycurl(TaxesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getStateTaxProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (TaxesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getStateTaxProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __TaxesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool TaxesManager::getStateTaxAsync(char * accessToken,
	std::string countryCodeIso3, std::string stateCode, 
	void(* handler)(StateTaxResource, Error, void* )
	, void* userData)
{
	return getStateTaxHelper(accessToken,
	countryCodeIso3, stateCode, 
	handler, userData, true);
}

bool TaxesManager::getStateTaxSync(char * accessToken,
	std::string countryCodeIso3, std::string stateCode, 
	void(* handler)(StateTaxResource, Error, void* )
	, void* userData)
{
	return getStateTaxHelper(accessToken,
	countryCodeIso3, stateCode, 
	handler, userData, false);
}

static bool getStateTaxesForCountriesProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«StateTaxResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«StateTaxResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«StateTaxResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«StateTaxResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«StateTaxResource»", "PageResource«StateTaxResource»");
			json_node_free(pJson);

			if ("PageResource«StateTaxResource»" == "std::string") {
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

static bool getStateTaxesForCountriesHelper(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«StateTaxResource», Error, void* )
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

	string url("/tax/states");
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
		NetClient::easycurl(TaxesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getStateTaxesForCountriesProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (TaxesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getStateTaxesForCountriesProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __TaxesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool TaxesManager::getStateTaxesForCountriesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«StateTaxResource», Error, void* )
	, void* userData)
{
	return getStateTaxesForCountriesHelper(accessToken,
	size, page, order, 
	handler, userData, true);
}

bool TaxesManager::getStateTaxesForCountriesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«StateTaxResource», Error, void* )
	, void* userData)
{
	return getStateTaxesForCountriesHelper(accessToken,
	size, page, order, 
	handler, userData, false);
}

static bool getStateTaxesForCountryProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(PageResource«StateTaxResource», Error, void* )
	= reinterpret_cast<void(*)(PageResource«StateTaxResource», Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	PageResource«StateTaxResource» out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("PageResource«StateTaxResource»")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "PageResource«StateTaxResource»", "PageResource«StateTaxResource»");
			json_node_free(pJson);

			if ("PageResource«StateTaxResource»" == "std::string") {
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

static bool getStateTaxesForCountryHelper(char * accessToken,
	std::string countryCodeIso3, int size, int page, std::string order, 
	void(* handler)(PageResource«StateTaxResource», Error, void* )
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

	string url("/tax/countries/{country_code_iso3}/states");
	int pos;

	string s_countryCodeIso3("{");
	s_countryCodeIso3.append("country_code_iso3");
	s_countryCodeIso3.append("}");
	pos = url.find(s_countryCodeIso3);
	url.erase(pos, s_countryCodeIso3.length());
	url.insert(pos, stringify(&countryCodeIso3, "std::string"));

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
		NetClient::easycurl(TaxesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = getStateTaxesForCountryProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (TaxesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), getStateTaxesForCountryProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __TaxesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool TaxesManager::getStateTaxesForCountryAsync(char * accessToken,
	std::string countryCodeIso3, int size, int page, std::string order, 
	void(* handler)(PageResource«StateTaxResource», Error, void* )
	, void* userData)
{
	return getStateTaxesForCountryHelper(accessToken,
	countryCodeIso3, size, page, order, 
	handler, userData, true);
}

bool TaxesManager::getStateTaxesForCountrySync(char * accessToken,
	std::string countryCodeIso3, int size, int page, std::string order, 
	void(* handler)(PageResource«StateTaxResource», Error, void* )
	, void* userData)
{
	return getStateTaxesForCountryHelper(accessToken,
	countryCodeIso3, size, page, order, 
	handler, userData, false);
}

static bool updateCountryTaxProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(CountryTaxResource, Error, void* )
	= reinterpret_cast<void(*)(CountryTaxResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	CountryTaxResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("CountryTaxResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "CountryTaxResource", "CountryTaxResource");
			json_node_free(pJson);

			if ("CountryTaxResource" == "std::string") {
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

static bool updateCountryTaxHelper(char * accessToken,
	std::string countryCodeIso3, CountryTaxResource taxResource, 
	void(* handler)(CountryTaxResource, Error, void* )
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

	if (isprimitive("CountryTaxResource")) {
		node = converttoJson(&taxResource, "CountryTaxResource", "");
	}
	
	char *jsonStr =  taxResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/tax/countries/{country_code_iso3}");
	int pos;

	string s_countryCodeIso3("{");
	s_countryCodeIso3.append("country_code_iso3");
	s_countryCodeIso3.append("}");
	pos = url.find(s_countryCodeIso3);
	url.erase(pos, s_countryCodeIso3.length());
	url.insert(pos, stringify(&countryCodeIso3, "std::string"));

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
		NetClient::easycurl(TaxesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = updateCountryTaxProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (TaxesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), updateCountryTaxProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __TaxesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool TaxesManager::updateCountryTaxAsync(char * accessToken,
	std::string countryCodeIso3, CountryTaxResource taxResource, 
	void(* handler)(CountryTaxResource, Error, void* )
	, void* userData)
{
	return updateCountryTaxHelper(accessToken,
	countryCodeIso3, taxResource, 
	handler, userData, true);
}

bool TaxesManager::updateCountryTaxSync(char * accessToken,
	std::string countryCodeIso3, CountryTaxResource taxResource, 
	void(* handler)(CountryTaxResource, Error, void* )
	, void* userData)
{
	return updateCountryTaxHelper(accessToken,
	countryCodeIso3, taxResource, 
	handler, userData, false);
}

static bool updateStateTaxProcessor(MemoryStruct_s p_chunk, long code, char* errormsg, void* userData,
	void(* voidHandler)())
{
	void(* handler)(StateTaxResource, Error, void* )
	= reinterpret_cast<void(*)(StateTaxResource, Error, void* )> (voidHandler);
	
	JsonNode* pJson;
	char * data = p_chunk.memory;

	
	StateTaxResource out;

	if (code >= 200 && code < 300) {
		Error error(code, string("No Error"));




		if (isprimitive("StateTaxResource")) {
			pJson = json_from_string(data, NULL);
			jsonToValue(&out, pJson, "StateTaxResource", "StateTaxResource");
			json_node_free(pJson);

			if ("StateTaxResource" == "std::string") {
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

static bool updateStateTaxHelper(char * accessToken,
	std::string countryCodeIso3, std::string stateCode, StateTaxResource taxResource, 
	void(* handler)(StateTaxResource, Error, void* )
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

	if (isprimitive("StateTaxResource")) {
		node = converttoJson(&taxResource, "StateTaxResource", "");
	}
	
	char *jsonStr =  taxResource.toJson();
	node = json_from_string(jsonStr, NULL);
	g_free(static_cast<gpointer>(jsonStr));
	

	char *jsonStr1 =  json_to_string(node, false);
	mBody.append(jsonStr1);
	g_free(static_cast<gpointer>(jsonStr1));

	string url("/tax/countries/{country_code_iso3}/states/{state_code}");
	int pos;

	string s_countryCodeIso3("{");
	s_countryCodeIso3.append("country_code_iso3");
	s_countryCodeIso3.append("}");
	pos = url.find(s_countryCodeIso3);
	url.erase(pos, s_countryCodeIso3.length());
	url.insert(pos, stringify(&countryCodeIso3, "std::string"));
	string s_stateCode("{");
	s_stateCode.append("state_code");
	s_stateCode.append("}");
	pos = url.find(s_stateCode);
	url.erase(pos, s_stateCode.length());
	url.insert(pos, stringify(&stateCode, "std::string"));

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
		NetClient::easycurl(TaxesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg);
		bool retval = updateStateTaxProcessor(*p_chunk, code, errormsg, userData,reinterpret_cast<void(*)()>(handler));

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

		requestInfo = new(nothrow) RequestInfo (TaxesManager::getBasePath(), url, myhttpmethod, queryParams,
			mBody, headerList, p_chunk, &code, errormsg, userData, reinterpret_cast<void(*)()>(handler), updateStateTaxProcessor);;
		if(requestInfo == NULL)
			return false;

		thread = g_thread_new(NULL, __TaxesManagerthreadFunc, static_cast<gpointer>(requestInfo));
		return true;
	}
}




bool TaxesManager::updateStateTaxAsync(char * accessToken,
	std::string countryCodeIso3, std::string stateCode, StateTaxResource taxResource, 
	void(* handler)(StateTaxResource, Error, void* )
	, void* userData)
{
	return updateStateTaxHelper(accessToken,
	countryCodeIso3, stateCode, taxResource, 
	handler, userData, true);
}

bool TaxesManager::updateStateTaxSync(char * accessToken,
	std::string countryCodeIso3, std::string stateCode, StateTaxResource taxResource, 
	void(* handler)(StateTaxResource, Error, void* )
	, void* userData)
{
	return updateStateTaxHelper(accessToken,
	countryCodeIso3, stateCode, taxResource, 
	handler, userData, false);
}

