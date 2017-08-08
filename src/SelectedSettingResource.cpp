#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "SelectedSettingResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

SelectedSettingResource::SelectedSettingResource()
{
	//__init();
}

SelectedSettingResource::~SelectedSettingResource()
{
	//__cleanup();
}

void
SelectedSettingResource::__init()
{
	//
	//
	//key = std::string();
	//
	//
	//key_name = std::string();
	//
	//
	//value = std::string();
	//
	//
	//value_name = std::string();
	//
}

void
SelectedSettingResource::__cleanup()
{
	//if(key != NULL) {
	//
	//delete key;
	//key = NULL;
	//}
	//if(key_name != NULL) {
	//
	//delete key_name;
	//key_name = NULL;
	//}
	//if(value != NULL) {
	//
	//delete value;
	//value = NULL;
	//}
	//if(value_name != NULL) {
	//
	//delete value_name;
	//value_name = NULL;
	//}
	//
}

void
SelectedSettingResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *keyKey = "key";
	node = json_object_get_member(pJsonObject, keyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&key, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *key_nameKey = "key_name";
	node = json_object_get_member(pJsonObject, key_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&key_name, node, "std::string", "");
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
	const gchar *value_nameKey = "value_name";
	node = json_object_get_member(pJsonObject, value_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&value_name, node, "std::string", "");
		} else {
			
		}
	}
}

SelectedSettingResource::SelectedSettingResource(char* json)
{
	this->fromJson(json);
}

char*
SelectedSettingResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getKey();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *keyKey = "key";
	json_object_set_member(pJsonObject, keyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getKeyName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *key_nameKey = "key_name";
	json_object_set_member(pJsonObject, key_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getValue();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *valueKey = "value";
	json_object_set_member(pJsonObject, valueKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getValueName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *value_nameKey = "value_name";
	json_object_set_member(pJsonObject, value_nameKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
SelectedSettingResource::getKey()
{
	return key;
}

void
SelectedSettingResource::setKey(std::string  key)
{
	this->key = key;
}

std::string
SelectedSettingResource::getKeyName()
{
	return key_name;
}

void
SelectedSettingResource::setKeyName(std::string  key_name)
{
	this->key_name = key_name;
}

std::string
SelectedSettingResource::getValue()
{
	return value;
}

void
SelectedSettingResource::setValue(std::string  value)
{
	this->value = value;
}

std::string
SelectedSettingResource::getValueName()
{
	return value_name;
}

void
SelectedSettingResource::setValueName(std::string  value_name)
{
	this->value_name = value_name;
}


