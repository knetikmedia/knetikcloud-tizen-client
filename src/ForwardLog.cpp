#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ForwardLog.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ForwardLog::ForwardLog()
{
	//__init();
}

ForwardLog::~ForwardLog()
{
	//__cleanup();
}

void
ForwardLog::__init()
{
	//
	//
	//end_date = long(0);
	//
	//
	//error_msg = std::string();
	//
	//
	//http_status_code = int(0);
	//
	//
	//id = std::string();
	//
	//
	//payload = null;
	//
	//
	//response = std::string();
	//
	//
	//retry_count = int(0);
	//
	//
	//start_date = long(0);
	//
	//
	//url = std::string();
	//
}

void
ForwardLog::__cleanup()
{
	//if(end_date != NULL) {
	//
	//delete end_date;
	//end_date = NULL;
	//}
	//if(error_msg != NULL) {
	//
	//delete error_msg;
	//error_msg = NULL;
	//}
	//if(http_status_code != NULL) {
	//
	//delete http_status_code;
	//http_status_code = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(payload != NULL) {
	//
	//delete payload;
	//payload = NULL;
	//}
	//if(response != NULL) {
	//
	//delete response;
	//response = NULL;
	//}
	//if(retry_count != NULL) {
	//
	//delete retry_count;
	//retry_count = NULL;
	//}
	//if(start_date != NULL) {
	//
	//delete start_date;
	//start_date = NULL;
	//}
	//if(url != NULL) {
	//
	//delete url;
	//url = NULL;
	//}
	//
}

void
ForwardLog::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *end_dateKey = "end_date";
	node = json_object_get_member(pJsonObject, end_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&end_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *error_msgKey = "error_msg";
	node = json_object_get_member(pJsonObject, error_msgKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&error_msg, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *http_status_codeKey = "http_status_code";
	node = json_object_get_member(pJsonObject, http_status_codeKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&http_status_code, node, "int", "");
		} else {
			
		}
	}
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *payloadKey = "payload";
	node = json_object_get_member(pJsonObject, payloadKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&payload, node, "std::string", "");
		} else {
			
			std::string* obj = static_cast<std::string*> (&payload);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *responseKey = "response";
	node = json_object_get_member(pJsonObject, responseKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&response, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *retry_countKey = "retry_count";
	node = json_object_get_member(pJsonObject, retry_countKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&retry_count, node, "int", "");
		} else {
			
		}
	}
	const gchar *start_dateKey = "start_date";
	node = json_object_get_member(pJsonObject, start_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&start_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *urlKey = "url";
	node = json_object_get_member(pJsonObject, urlKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&url, node, "std::string", "");
		} else {
			
		}
	}
}

ForwardLog::ForwardLog(char* json)
{
	this->fromJson(json);
}

char*
ForwardLog::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getEndDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *end_dateKey = "end_date";
	json_object_set_member(pJsonObject, end_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getErrorMsg();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *error_msgKey = "error_msg";
	json_object_set_member(pJsonObject, error_msgKey, node);
	if (isprimitive("int")) {
		int obj = getHttpStatusCode();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *http_status_codeKey = "http_status_code";
	json_object_set_member(pJsonObject, http_status_codeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPayload();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
		std::string obj = static_cast<std::string> (getPayload());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *payloadKey = "payload";
	json_object_set_member(pJsonObject, payloadKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getResponse();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *responseKey = "response";
	json_object_set_member(pJsonObject, responseKey, node);
	if (isprimitive("int")) {
		int obj = getRetryCount();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *retry_countKey = "retry_count";
	json_object_set_member(pJsonObject, retry_countKey, node);
	if (isprimitive("long long")) {
		long long obj = getStartDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *start_dateKey = "start_date";
	json_object_set_member(pJsonObject, start_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUrl();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *urlKey = "url";
	json_object_set_member(pJsonObject, urlKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
ForwardLog::getEndDate()
{
	return end_date;
}

void
ForwardLog::setEndDate(long long  end_date)
{
	this->end_date = end_date;
}

std::string
ForwardLog::getErrorMsg()
{
	return error_msg;
}

void
ForwardLog::setErrorMsg(std::string  error_msg)
{
	this->error_msg = error_msg;
}

int
ForwardLog::getHttpStatusCode()
{
	return http_status_code;
}

void
ForwardLog::setHttpStatusCode(int  http_status_code)
{
	this->http_status_code = http_status_code;
}

std::string
ForwardLog::getId()
{
	return id;
}

void
ForwardLog::setId(std::string  id)
{
	this->id = id;
}

std::string
ForwardLog::getPayload()
{
	return payload;
}

void
ForwardLog::setPayload(std::string  payload)
{
	this->payload = payload;
}

std::string
ForwardLog::getResponse()
{
	return response;
}

void
ForwardLog::setResponse(std::string  response)
{
	this->response = response;
}

int
ForwardLog::getRetryCount()
{
	return retry_count;
}

void
ForwardLog::setRetryCount(int  retry_count)
{
	this->retry_count = retry_count;
}

long long
ForwardLog::getStartDate()
{
	return start_date;
}

void
ForwardLog::setStartDate(long long  start_date)
{
	this->start_date = start_date;
}

std::string
ForwardLog::getUrl()
{
	return url;
}

void
ForwardLog::setUrl(std::string  url)
{
	this->url = url;
}


