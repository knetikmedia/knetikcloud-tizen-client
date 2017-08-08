#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "LookupTypeResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

LookupTypeResource::LookupTypeResource()
{
	//__init();
}

LookupTypeResource::~LookupTypeResource()
{
	//__cleanup();
}

void
LookupTypeResource::__init()
{
	//
	//
	//description = std::string();
	//
	//
	//key_type = std::string();
	//
	//
	//name = std::string();
	//
	//
	//value_type = std::string();
	//
}

void
LookupTypeResource::__cleanup()
{
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
	//}
	//if(key_type != NULL) {
	//
	//delete key_type;
	//key_type = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(value_type != NULL) {
	//
	//delete value_type;
	//value_type = NULL;
	//}
	//
}

void
LookupTypeResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *descriptionKey = "description";
	node = json_object_get_member(pJsonObject, descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *key_typeKey = "key_type";
	node = json_object_get_member(pJsonObject, key_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&key_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
		} else {
			
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

LookupTypeResource::LookupTypeResource(char* json)
{
	this->fromJson(json);
}

char*
LookupTypeResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *descriptionKey = "description";
	json_object_set_member(pJsonObject, descriptionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getKeyType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *key_typeKey = "key_type";
	json_object_set_member(pJsonObject, key_typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
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
LookupTypeResource::getDescription()
{
	return description;
}

void
LookupTypeResource::setDescription(std::string  description)
{
	this->description = description;
}

std::string
LookupTypeResource::getKeyType()
{
	return key_type;
}

void
LookupTypeResource::setKeyType(std::string  key_type)
{
	this->key_type = key_type;
}

std::string
LookupTypeResource::getName()
{
	return name;
}

void
LookupTypeResource::setName(std::string  name)
{
	this->name = name;
}

std::string
LookupTypeResource::getValueType()
{
	return value_type;
}

void
LookupTypeResource::setValueType(std::string  value_type)
{
	this->value_type = value_type;
}


