#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ConfigLookupResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ConfigLookupResource::ConfigLookupResource()
{
	//__init();
}

ConfigLookupResource::~ConfigLookupResource()
{
	//__cleanup();
}

void
ConfigLookupResource::__init()
{
	//
	//
	//definition = std::string();
	//
	//
	//lookup_key = new ExpressionResource();
	//
	//
	//required_key_type = std::string();
	//
	//
	//type = std::string();
	//
	//
	//value_type = std::string();
	//
}

void
ConfigLookupResource::__cleanup()
{
	//if(definition != NULL) {
	//
	//delete definition;
	//definition = NULL;
	//}
	//if(lookup_key != NULL) {
	//
	//delete lookup_key;
	//lookup_key = NULL;
	//}
	//if(required_key_type != NULL) {
	//
	//delete required_key_type;
	//required_key_type = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(value_type != NULL) {
	//
	//delete value_type;
	//value_type = NULL;
	//}
	//
}

void
ConfigLookupResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *definitionKey = "definition";
	node = json_object_get_member(pJsonObject, definitionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&definition, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *lookup_keyKey = "lookup_key";
	node = json_object_get_member(pJsonObject, lookup_keyKey);
	if (node !=NULL) {
	

		if (isprimitive("ExpressionResource")) {
			jsonToValue(&lookup_key, node, "ExpressionResource", "ExpressionResource");
		} else {
			
			ExpressionResource* obj = static_cast<ExpressionResource*> (&lookup_key);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *required_key_typeKey = "required_key_type";
	node = json_object_get_member(pJsonObject, required_key_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&required_key_type, node, "std::string", "");
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
	const gchar *value_typeKey = "value_type";
	node = json_object_get_member(pJsonObject, value_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&value_type, node, "std::string", "");
		} else {
			
		}
	}
}

ConfigLookupResource::ConfigLookupResource(char* json)
{
	this->fromJson(json);
}

char*
ConfigLookupResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getDefinition();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *definitionKey = "definition";
	json_object_set_member(pJsonObject, definitionKey, node);
	if (isprimitive("ExpressionResource")) {
		ExpressionResource obj = getLookupKey();
		node = converttoJson(&obj, "ExpressionResource", "");
	}
	else {
		
		ExpressionResource obj = static_cast<ExpressionResource> (getLookupKey());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *lookup_keyKey = "lookup_key";
	json_object_set_member(pJsonObject, lookup_keyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRequiredKeyType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *required_key_typeKey = "required_key_type";
	json_object_set_member(pJsonObject, required_key_typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
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
ConfigLookupResource::getDefinition()
{
	return definition;
}

void
ConfigLookupResource::setDefinition(std::string  definition)
{
	this->definition = definition;
}

ExpressionResource
ConfigLookupResource::getLookupKey()
{
	return lookup_key;
}

void
ConfigLookupResource::setLookupKey(ExpressionResource  lookup_key)
{
	this->lookup_key = lookup_key;
}

std::string
ConfigLookupResource::getRequiredKeyType()
{
	return required_key_type;
}

void
ConfigLookupResource::setRequiredKeyType(std::string  required_key_type)
{
	this->required_key_type = required_key_type;
}

std::string
ConfigLookupResource::getType()
{
	return type;
}

void
ConfigLookupResource::setType(std::string  type)
{
	this->type = type;
}

std::string
ConfigLookupResource::getValueType()
{
	return value_type;
}

void
ConfigLookupResource::setValueType(std::string  value_type)
{
	this->value_type = value_type;
}


