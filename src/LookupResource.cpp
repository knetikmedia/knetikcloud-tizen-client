#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "LookupResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

LookupResource::LookupResource()
{
	//__init();
}

LookupResource::~LookupResource()
{
	//__cleanup();
}

void
LookupResource::__init()
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
LookupResource::__cleanup()
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
LookupResource::fromJson(char* jsonStr)
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

LookupResource::LookupResource(char* json)
{
	this->fromJson(json);
}

char*
LookupResource::toJson()
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
LookupResource::getDefinition()
{
	return definition;
}

void
LookupResource::setDefinition(std::string  definition)
{
	this->definition = definition;
}

ExpressionResource
LookupResource::getLookupKey()
{
	return lookup_key;
}

void
LookupResource::setLookupKey(ExpressionResource  lookup_key)
{
	this->lookup_key = lookup_key;
}

std::string
LookupResource::getRequiredKeyType()
{
	return required_key_type;
}

void
LookupResource::setRequiredKeyType(std::string  required_key_type)
{
	this->required_key_type = required_key_type;
}

std::string
LookupResource::getType()
{
	return type;
}

void
LookupResource::setType(std::string  type)
{
	this->type = type;
}

std::string
LookupResource::getValueType()
{
	return value_type;
}

void
LookupResource::setValueType(std::string  value_type)
{
	this->value_type = value_type;
}


