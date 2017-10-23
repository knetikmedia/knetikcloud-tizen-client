#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BreTriggerParameterDefinition.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BreTriggerParameterDefinition::BreTriggerParameterDefinition()
{
	//__init();
}

BreTriggerParameterDefinition::~BreTriggerParameterDefinition()
{
	//__cleanup();
}

void
BreTriggerParameterDefinition::__init()
{
	//
	//
	//implicit = bool(false);
	//
	//
	//name = std::string();
	//
	//
	//optional = bool(false);
	//
	//
	//type = std::string();
	//
}

void
BreTriggerParameterDefinition::__cleanup()
{
	//if(implicit != NULL) {
	//
	//delete implicit;
	//implicit = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(optional != NULL) {
	//
	//delete optional;
	//optional = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//
}

void
BreTriggerParameterDefinition::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *implicitKey = "implicit";
	node = json_object_get_member(pJsonObject, implicitKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&implicit, node, "bool", "");
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
	const gchar *optionalKey = "optional";
	node = json_object_get_member(pJsonObject, optionalKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&optional, node, "bool", "");
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
}

BreTriggerParameterDefinition::BreTriggerParameterDefinition(char* json)
{
	this->fromJson(json);
}

char*
BreTriggerParameterDefinition::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getImplicit();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *implicitKey = "implicit";
	json_object_set_member(pJsonObject, implicitKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("bool")) {
		bool obj = getOptional();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *optionalKey = "optional";
	json_object_set_member(pJsonObject, optionalKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
BreTriggerParameterDefinition::getImplicit()
{
	return implicit;
}

void
BreTriggerParameterDefinition::setImplicit(bool  implicit)
{
	this->implicit = implicit;
}

std::string
BreTriggerParameterDefinition::getName()
{
	return name;
}

void
BreTriggerParameterDefinition::setName(std::string  name)
{
	this->name = name;
}

bool
BreTriggerParameterDefinition::getOptional()
{
	return optional;
}

void
BreTriggerParameterDefinition::setOptional(bool  optional)
{
	this->optional = optional;
}

std::string
BreTriggerParameterDefinition::getType()
{
	return type;
}

void
BreTriggerParameterDefinition::setType(std::string  type)
{
	this->type = type;
}


