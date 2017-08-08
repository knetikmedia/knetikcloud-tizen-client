#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ParameterResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ParameterResource::ParameterResource()
{
	//__init();
}

ParameterResource::~ParameterResource()
{
	//__cleanup();
}

void
ParameterResource::__init()
{
	//
	//
	//of = std::string();
	//
	//
	//type = std::string();
	//
	//
	//value = null;
	//
}

void
ParameterResource::__cleanup()
{
	//if(of != NULL) {
	//
	//delete of;
	//of = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(value != NULL) {
	//
	//delete value;
	//value = NULL;
	//}
	//
}

void
ParameterResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *ofKey = "of";
	node = json_object_get_member(pJsonObject, ofKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&of, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *typeKey = "type";
	node = json_object_get_member(pJsonObject, typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *valueKey = "value";
	node = json_object_get_member(pJsonObject, valueKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&value, node, "std::string", "");
		} else {
			
			std::string* obj = static_cast<std::string*> (&value);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

ParameterResource::ParameterResource(char* json)
{
	this->fromJson(json);
}

char*
ParameterResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getOf();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ofKey = "of";
	json_object_set_member(pJsonObject, ofKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getValue();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
		std::string obj = static_cast<std::string> (getValue());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *valueKey = "value";
	json_object_set_member(pJsonObject, valueKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
ParameterResource::getOf()
{
	return of;
}

void
ParameterResource::setOf(std::string  of)
{
	this->of = of;
}

std::string
ParameterResource::getType()
{
	return type;
}

void
ParameterResource::setType(std::string  type)
{
	this->type = type;
}

std::string
ParameterResource::getValue()
{
	return value;
}

void
ParameterResource::setValue(std::string  value)
{
	this->value = value;
}


