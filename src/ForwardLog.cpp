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
	//event_id = std::string();
	//
	//
	//headers = std::string();
	//
	//
	//http_status_code = int(0);
	//
	//
	//id = std::string();
	//
	//
	//method = std::string();
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
	//retryable = bool(false);
	//
	//
	//rule_id = std::string();
	//
	//
	//start_date = long(0);
	//
	//
	//success = bool(false);
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
	//if(event_id != NULL) {
	//
	//delete event_id;
	//event_id = NULL;
	//}
	//if(headers != NULL) {
	//
	//delete headers;
	//headers = NULL;
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
	//if(method != NULL) {
	//
	//delete method;
	//method = NULL;
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
	//if(retryable != NULL) {
	//
	//delete retryable;
	//retryable = NULL;
	//}
	//if(rule_id != NULL) {
	//
	//delete rule_id;
	//rule_id = NULL;
	//}
	//if(start_date != NULL) {
	//
	//delete start_date;
	//start_date = NULL;
	//}
	//if(success != NULL) {
	//
	//delete success;
	//success = NULL;
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
	const gchar *event_idKey = "event_id";
	node = json_object_get_member(pJsonObject, event_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&event_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *headersKey = "headers";
	node = json_object_get_member(pJsonObject, headersKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&headers, node, "std::string", "");
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
	const gchar *methodKey = "method";
	node = json_object_get_member(pJsonObject, methodKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&method, node, "std::string", "");
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
	const gchar *retryableKey = "retryable";
	node = json_object_get_member(pJsonObject, retryableKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&retryable, node, "bool", "");
		} else {
			
		}
	}
	const gchar *rule_idKey = "rule_id";
	node = json_object_get_member(pJsonObject, rule_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&rule_id, node, "std::string", "");
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
	const gchar *successKey = "success";
	node = json_object_get_member(pJsonObject, successKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&success, node, "bool", "");
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
	if (isprimitive("std::string")) {
		std::string obj = getEventId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *event_idKey = "event_id";
	json_object_set_member(pJsonObject, event_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getHeaders();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *headersKey = "headers";
	json_object_set_member(pJsonObject, headersKey, node);
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
		std::string obj = getMethod();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *methodKey = "method";
	json_object_set_member(pJsonObject, methodKey, node);
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
	if (isprimitive("bool")) {
		bool obj = getRetryable();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *retryableKey = "retryable";
	json_object_set_member(pJsonObject, retryableKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRuleId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *rule_idKey = "rule_id";
	json_object_set_member(pJsonObject, rule_idKey, node);
	if (isprimitive("long long")) {
		long long obj = getStartDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *start_dateKey = "start_date";
	json_object_set_member(pJsonObject, start_dateKey, node);
	if (isprimitive("bool")) {
		bool obj = getSuccess();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *successKey = "success";
	json_object_set_member(pJsonObject, successKey, node);
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

std::string
ForwardLog::getEventId()
{
	return event_id;
}

void
ForwardLog::setEventId(std::string  event_id)
{
	this->event_id = event_id;
}

std::string
ForwardLog::getHeaders()
{
	return headers;
}

void
ForwardLog::setHeaders(std::string  headers)
{
	this->headers = headers;
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
ForwardLog::getMethod()
{
	return method;
}

void
ForwardLog::setMethod(std::string  method)
{
	this->method = method;
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

bool
ForwardLog::getRetryable()
{
	return retryable;
}

void
ForwardLog::setRetryable(bool  retryable)
{
	this->retryable = retryable;
}

std::string
ForwardLog::getRuleId()
{
	return rule_id;
}

void
ForwardLog::setRuleId(std::string  rule_id)
{
	this->rule_id = rule_id;
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

bool
ForwardLog::getSuccess()
{
	return success;
}

void
ForwardLog::setSuccess(bool  success)
{
	this->success = success;
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


