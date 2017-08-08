#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BatchRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BatchRequest::BatchRequest()
{
	//__init();
}

BatchRequest::~BatchRequest()
{
	//__cleanup();
}

void
BatchRequest::__init()
{
	//
	//
	//body = null;
	//
	//
	//content_type = std::string();
	//
	//
	//method = std::string();
	//
	//
	//timeout = int(0);
	//
	//
	//token = std::string();
	//
	//
	//uri = std::string();
	//
}

void
BatchRequest::__cleanup()
{
	//if(body != NULL) {
	//
	//delete body;
	//body = NULL;
	//}
	//if(content_type != NULL) {
	//
	//delete content_type;
	//content_type = NULL;
	//}
	//if(method != NULL) {
	//
	//delete method;
	//method = NULL;
	//}
	//if(timeout != NULL) {
	//
	//delete timeout;
	//timeout = NULL;
	//}
	//if(token != NULL) {
	//
	//delete token;
	//token = NULL;
	//}
	//if(uri != NULL) {
	//
	//delete uri;
	//uri = NULL;
	//}
	//
}

void
BatchRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *bodyKey = "body";
	node = json_object_get_member(pJsonObject, bodyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&body, node, "std::string", "");
		} else {
			
			std::string* obj = static_cast<std::string*> (&body);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *content_typeKey = "content_type";
	node = json_object_get_member(pJsonObject, content_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&content_type, node, "std::string", "");
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
	const gchar *timeoutKey = "timeout";
	node = json_object_get_member(pJsonObject, timeoutKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&timeout, node, "int", "");
		} else {
			
		}
	}
	const gchar *tokenKey = "token";
	node = json_object_get_member(pJsonObject, tokenKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&token, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *uriKey = "uri";
	node = json_object_get_member(pJsonObject, uriKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&uri, node, "std::string", "");
		} else {
			
		}
	}
}

BatchRequest::BatchRequest(char* json)
{
	this->fromJson(json);
}

char*
BatchRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getBody();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
		std::string obj = static_cast<std::string> (getBody());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *bodyKey = "body";
	json_object_set_member(pJsonObject, bodyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getContentType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *content_typeKey = "content_type";
	json_object_set_member(pJsonObject, content_typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMethod();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *methodKey = "method";
	json_object_set_member(pJsonObject, methodKey, node);
	if (isprimitive("int")) {
		int obj = getTimeout();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *timeoutKey = "timeout";
	json_object_set_member(pJsonObject, timeoutKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getToken();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *tokenKey = "token";
	json_object_set_member(pJsonObject, tokenKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUri();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *uriKey = "uri";
	json_object_set_member(pJsonObject, uriKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
BatchRequest::getBody()
{
	return body;
}

void
BatchRequest::setBody(std::string  body)
{
	this->body = body;
}

std::string
BatchRequest::getContentType()
{
	return content_type;
}

void
BatchRequest::setContentType(std::string  content_type)
{
	this->content_type = content_type;
}

std::string
BatchRequest::getMethod()
{
	return method;
}

void
BatchRequest::setMethod(std::string  method)
{
	this->method = method;
}

int
BatchRequest::getTimeout()
{
	return timeout;
}

void
BatchRequest::setTimeout(int  timeout)
{
	this->timeout = timeout;
}

std::string
BatchRequest::getToken()
{
	return token;
}

void
BatchRequest::setToken(std::string  token)
{
	this->token = token;
}

std::string
BatchRequest::getUri()
{
	return uri;
}

void
BatchRequest::setUri(std::string  uri)
{
	this->uri = uri;
}


