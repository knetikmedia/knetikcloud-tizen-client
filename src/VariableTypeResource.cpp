#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VariableTypeResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VariableTypeResource::VariableTypeResource()
{
	//__init();
}

VariableTypeResource::~VariableTypeResource()
{
	//__cleanup();
}

void
VariableTypeResource::__init()
{
	//
	//
	//base = std::string();
	//
	//
	//enumerable = bool(false);
	//
	//
	//name = std::string();
	//
}

void
VariableTypeResource::__cleanup()
{
	//if(base != NULL) {
	//
	//delete base;
	//base = NULL;
	//}
	//if(enumerable != NULL) {
	//
	//delete enumerable;
	//enumerable = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//
}

void
VariableTypeResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *baseKey = "base";
	node = json_object_get_member(pJsonObject, baseKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&base, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *enumerableKey = "enumerable";
	node = json_object_get_member(pJsonObject, enumerableKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&enumerable, node, "bool", "");
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
}

VariableTypeResource::VariableTypeResource(char* json)
{
	this->fromJson(json);
}

char*
VariableTypeResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getBase();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *baseKey = "base";
	json_object_set_member(pJsonObject, baseKey, node);
	if (isprimitive("bool")) {
		bool obj = getEnumerable();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *enumerableKey = "enumerable";
	json_object_set_member(pJsonObject, enumerableKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
VariableTypeResource::getBase()
{
	return base;
}

void
VariableTypeResource::setBase(std::string  base)
{
	this->base = base;
}

bool
VariableTypeResource::getEnumerable()
{
	return enumerable;
}

void
VariableTypeResource::setEnumerable(bool  enumerable)
{
	this->enumerable = enumerable;
}

std::string
VariableTypeResource::getName()
{
	return name;
}

void
VariableTypeResource::setName(std::string  name)
{
	this->name = name;
}


