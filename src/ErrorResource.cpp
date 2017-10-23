#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ErrorResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ErrorResource::ErrorResource()
{
	//__init();
}

ErrorResource::~ErrorResource()
{
	//__cleanup();
}

void
ErrorResource::__init()
{
	//
	//
	//details = null;
	//
	//
	//field = null;
	//
	//
	//message = std::string();
	//
}

void
ErrorResource::__cleanup()
{
	//if(details != NULL) {
	//
	//delete details;
	//details = NULL;
	//}
	//if(field != NULL) {
	//
	//delete field;
	//field = NULL;
	//}
	//if(message != NULL) {
	//
	//delete message;
	//message = NULL;
	//}
	//
}

void
ErrorResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *detailsKey = "details";
	node = json_object_get_member(pJsonObject, detailsKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&details, node, "std::string", "");
		} else {
			
			std::string* obj = static_cast<std::string*> (&details);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *fieldKey = "field";
	node = json_object_get_member(pJsonObject, fieldKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&field, node, "std::string", "");
		} else {
			
			std::string* obj = static_cast<std::string*> (&field);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *messageKey = "message";
	node = json_object_get_member(pJsonObject, messageKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&message, node, "std::string", "");
		} else {
			
		}
	}
}

ErrorResource::ErrorResource(char* json)
{
	this->fromJson(json);
}

char*
ErrorResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getDetails();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
		std::string obj = static_cast<std::string> (getDetails());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *detailsKey = "details";
	json_object_set_member(pJsonObject, detailsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getField();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
		std::string obj = static_cast<std::string> (getField());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *fieldKey = "field";
	json_object_set_member(pJsonObject, fieldKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMessage();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *messageKey = "message";
	json_object_set_member(pJsonObject, messageKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
ErrorResource::getDetails()
{
	return details;
}

void
ErrorResource::setDetails(std::string  details)
{
	this->details = details;
}

std::string
ErrorResource::getField()
{
	return field;
}

void
ErrorResource::setField(std::string  field)
{
	this->field = field;
}

std::string
ErrorResource::getMessage()
{
	return message;
}

void
ErrorResource::setMessage(std::string  message)
{
	this->message = message;
}


