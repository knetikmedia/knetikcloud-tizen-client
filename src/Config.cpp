#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Config.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Config::Config()
{
	//__init();
}

Config::~Config()
{
	//__cleanup();
}

void
Config::__init()
{
	//
	//
	//description = std::string();
	//
	//
	//name = std::string();
	//
	//
	//public_read = bool(false);
	//
	//
	//value = std::string();
	//
}

void
Config::__cleanup()
{
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(public_read != NULL) {
	//
	//delete public_read;
	//public_read = NULL;
	//}
	//if(value != NULL) {
	//
	//delete value;
	//value = NULL;
	//}
	//
}

void
Config::fromJson(char* jsonStr)
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
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *public_readKey = "public_read";
	node = json_object_get_member(pJsonObject, public_readKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&public_read, node, "bool", "");
		} else {
			
		}
	}
	const gchar *valueKey = "value";
	node = json_object_get_member(pJsonObject, valueKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&value, node, "std::string", "");
		} else {
			
		}
	}
}

Config::Config(char* json)
{
	this->fromJson(json);
}

char*
Config::toJson()
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
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("bool")) {
		bool obj = getPublicRead();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *public_readKey = "public_read";
	json_object_set_member(pJsonObject, public_readKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getValue();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
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
Config::getDescription()
{
	return description;
}

void
Config::setDescription(std::string  description)
{
	this->description = description;
}

std::string
Config::getName()
{
	return name;
}

void
Config::setName(std::string  name)
{
	this->name = name;
}

bool
Config::getPublicRead()
{
	return public_read;
}

void
Config::setPublicRead(bool  public_read)
{
	this->public_read = public_read;
}

std::string
Config::getValue()
{
	return value;
}

void
Config::setValue(std::string  value)
{
	this->value = value;
}


