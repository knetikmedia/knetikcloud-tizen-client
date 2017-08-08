#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ConstantResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ConstantResource::ConstantResource()
{
	//__init();
}

ConstantResource::~ConstantResource()
{
	//__cleanup();
}

void
ConstantResource::__init()
{
	//
	//
	//type = std::string();
	//
	//
	//value = null;
	//
	//
	//value_type = std::string();
	//
}

void
ConstantResource::__cleanup()
{
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
	//if(value_type != NULL) {
	//
	//delete value_type;
	//value_type = NULL;
	//}
	//
}

void
ConstantResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
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
	const gchar *value_typeKey = "value_type";
	node = json_object_get_member(pJsonObject, value_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&value_type, node, "std::string", "");
		} else {
			
		}
	}
}

ConstantResource::ConstantResource(char* json)
{
	this->fromJson(json);
}

char*
ConstantResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
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
	if (isprimitive("std::string")) {
		std::string obj = getValueType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *value_typeKey = "value_type";
	json_object_set_member(pJsonObject, value_typeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
ConstantResource::getType()
{
	return type;
}

void
ConstantResource::setType(std::string  type)
{
	this->type = type;
}

std::string
ConstantResource::getValue()
{
	return value;
}

void
ConstantResource::setValue(std::string  value)
{
	this->value = value;
}

std::string
ConstantResource::getValueType()
{
	return value_type;
}

void
ConstantResource::setValueType(std::string  value_type)
{
	this->value_type = value_type;
}


