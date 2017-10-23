#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BatchReturn.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BatchReturn::BatchReturn()
{
	//__init();
}

BatchReturn::~BatchReturn()
{
	//__cleanup();
}

void
BatchReturn::__init()
{
	//
	//
	//body = null;
	//
	//
	//code = int(0);
	//
	//
	//uri = std::string();
	//
}

void
BatchReturn::__cleanup()
{
	//if(body != NULL) {
	//
	//delete body;
	//body = NULL;
	//}
	//if(code != NULL) {
	//
	//delete code;
	//code = NULL;
	//}
	//if(uri != NULL) {
	//
	//delete uri;
	//uri = NULL;
	//}
	//
}

void
BatchReturn::fromJson(char* jsonStr)
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
	const gchar *codeKey = "code";
	node = json_object_get_member(pJsonObject, codeKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&code, node, "int", "");
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

BatchReturn::BatchReturn(char* json)
{
	this->fromJson(json);
}

char*
BatchReturn::toJson()
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
	if (isprimitive("int")) {
		int obj = getCode();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *codeKey = "code";
	json_object_set_member(pJsonObject, codeKey, node);
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
BatchReturn::getBody()
{
	return body;
}

void
BatchReturn::setBody(std::string  body)
{
	this->body = body;
}

int
BatchReturn::getCode()
{
	return code;
}

void
BatchReturn::setCode(int  code)
{
	this->code = code;
}

std::string
BatchReturn::getUri()
{
	return uri;
}

void
BatchReturn::setUri(std::string  uri)
{
	this->uri = uri;
}


