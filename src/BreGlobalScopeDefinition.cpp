#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BreGlobalScopeDefinition.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BreGlobalScopeDefinition::BreGlobalScopeDefinition()
{
	//__init();
}

BreGlobalScopeDefinition::~BreGlobalScopeDefinition()
{
	//__cleanup();
}

void
BreGlobalScopeDefinition::__init()
{
	//
	//
	//name = std::string();
	//
	//
	//type = std::string();
	//
}

void
BreGlobalScopeDefinition::__cleanup()
{
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//
}

void
BreGlobalScopeDefinition::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
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

BreGlobalScopeDefinition::BreGlobalScopeDefinition(char* json)
{
	this->fromJson(json);
}

char*
BreGlobalScopeDefinition::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
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

std::string
BreGlobalScopeDefinition::getName()
{
	return name;
}

void
BreGlobalScopeDefinition::setName(std::string  name)
{
	this->name = name;
}

std::string
BreGlobalScopeDefinition::getType()
{
	return type;
}

void
BreGlobalScopeDefinition::setType(std::string  type)
{
	this->type = type;
}


