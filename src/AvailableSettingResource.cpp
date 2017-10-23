#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "AvailableSettingResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

AvailableSettingResource::AvailableSettingResource()
{
	//__init();
}

AvailableSettingResource::~AvailableSettingResource()
{
	//__cleanup();
}

void
AvailableSettingResource::__init()
{
	//
	//
	//advanced_option = bool(false);
	//
	//
	//default_value = std::string();
	//
	//
	//description = std::string();
	//
	//
	//key = std::string();
	//
	//
	//name = std::string();
	//
	//new std::list()std::list> options;
	//
	//
	//
	//type = std::string();
	//
}

void
AvailableSettingResource::__cleanup()
{
	//if(advanced_option != NULL) {
	//
	//delete advanced_option;
	//advanced_option = NULL;
	//}
	//if(default_value != NULL) {
	//
	//delete default_value;
	//default_value = NULL;
	//}
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
	//}
	//if(key != NULL) {
	//
	//delete key;
	//key = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(options != NULL) {
	//options.RemoveAll(true);
	//delete options;
	//options = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//
}

void
AvailableSettingResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *advanced_optionKey = "advanced_option";
	node = json_object_get_member(pJsonObject, advanced_optionKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&advanced_option, node, "bool", "");
		} else {
			
		}
	}
	const gchar *default_valueKey = "default_value";
	node = json_object_get_member(pJsonObject, default_valueKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&default_value, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *descriptionKey = "description";
	node = json_object_get_member(pJsonObject, descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *keyKey = "key";
	node = json_object_get_member(pJsonObject, keyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&key, node, "std::string", "");
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
	const gchar *optionsKey = "options";
	node = json_object_get_member(pJsonObject, optionsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<SettingOption> new_list;
			SettingOption inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("SettingOption")) {
					jsonToValue(&inst, temp_json, "SettingOption", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			options = new_list;
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

AvailableSettingResource::AvailableSettingResource(char* json)
{
	this->fromJson(json);
}

char*
AvailableSettingResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getAdvancedOption();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *advanced_optionKey = "advanced_option";
	json_object_set_member(pJsonObject, advanced_optionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDefaultValue();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *default_valueKey = "default_value";
	json_object_set_member(pJsonObject, default_valueKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *descriptionKey = "description";
	json_object_set_member(pJsonObject, descriptionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getKey();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *keyKey = "key";
	json_object_set_member(pJsonObject, keyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("SettingOption")) {
		list<SettingOption> new_list = static_cast<list <SettingOption> > (getOptions());
		node = converttoJson(&new_list, "SettingOption", "array");
	} else {
		node = json_node_alloc();
		list<SettingOption> new_list = static_cast<list <SettingOption> > (getOptions());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<SettingOption>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			SettingOption obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *optionsKey = "options";
	json_object_set_member(pJsonObject, optionsKey, node);
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
AvailableSettingResource::getAdvancedOption()
{
	return advanced_option;
}

void
AvailableSettingResource::setAdvancedOption(bool  advanced_option)
{
	this->advanced_option = advanced_option;
}

std::string
AvailableSettingResource::getDefaultValue()
{
	return default_value;
}

void
AvailableSettingResource::setDefaultValue(std::string  default_value)
{
	this->default_value = default_value;
}

std::string
AvailableSettingResource::getDescription()
{
	return description;
}

void
AvailableSettingResource::setDescription(std::string  description)
{
	this->description = description;
}

std::string
AvailableSettingResource::getKey()
{
	return key;
}

void
AvailableSettingResource::setKey(std::string  key)
{
	this->key = key;
}

std::string
AvailableSettingResource::getName()
{
	return name;
}

void
AvailableSettingResource::setName(std::string  name)
{
	this->name = name;
}

std::list<SettingOption>
AvailableSettingResource::getOptions()
{
	return options;
}

void
AvailableSettingResource::setOptions(std::list <SettingOption> options)
{
	this->options = options;
}

std::string
AvailableSettingResource::getType()
{
	return type;
}

void
AvailableSettingResource::setType(std::string  type)
{
	this->type = type;
}


