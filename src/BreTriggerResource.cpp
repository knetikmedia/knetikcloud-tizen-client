#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BreTriggerResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BreTriggerResource::BreTriggerResource()
{
	//__init();
}

BreTriggerResource::~BreTriggerResource()
{
	//__cleanup();
}

void
BreTriggerResource::__init()
{
	//
	//
	//category = std::string();
	//
	//
	//event_name = std::string();
	//
	//new std::list()std::list> parameters;
	//
	//
	//
	//system_trigger = bool(false);
	//
	//new std::list()std::list> tags;
	//
	//
	//
	//trigger_description = std::string();
	//
	//
	//trigger_name = std::string();
	//
}

void
BreTriggerResource::__cleanup()
{
	//if(category != NULL) {
	//
	//delete category;
	//category = NULL;
	//}
	//if(event_name != NULL) {
	//
	//delete event_name;
	//event_name = NULL;
	//}
	//if(parameters != NULL) {
	//parameters.RemoveAll(true);
	//delete parameters;
	//parameters = NULL;
	//}
	//if(system_trigger != NULL) {
	//
	//delete system_trigger;
	//system_trigger = NULL;
	//}
	//if(tags != NULL) {
	//tags.RemoveAll(true);
	//delete tags;
	//tags = NULL;
	//}
	//if(trigger_description != NULL) {
	//
	//delete trigger_description;
	//trigger_description = NULL;
	//}
	//if(trigger_name != NULL) {
	//
	//delete trigger_name;
	//trigger_name = NULL;
	//}
	//
}

void
BreTriggerResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *categoryKey = "category";
	node = json_object_get_member(pJsonObject, categoryKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&category, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *event_nameKey = "event_name";
	node = json_object_get_member(pJsonObject, event_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&event_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *parametersKey = "parameters";
	node = json_object_get_member(pJsonObject, parametersKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<BreTriggerParameterDefinition> new_list;
			BreTriggerParameterDefinition inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("BreTriggerParameterDefinition")) {
					jsonToValue(&inst, temp_json, "BreTriggerParameterDefinition", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			parameters = new_list;
		}
		
	}
	const gchar *system_triggerKey = "system_trigger";
	node = json_object_get_member(pJsonObject, system_triggerKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&system_trigger, node, "bool", "");
		} else {
			
		}
	}
	const gchar *tagsKey = "tags";
	node = json_object_get_member(pJsonObject, tagsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<std::string> new_list;
			std::string inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("std::string")) {
					jsonToValue(&inst, temp_json, "std::string", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			tags = new_list;
		}
		
	}
	const gchar *trigger_descriptionKey = "trigger_description";
	node = json_object_get_member(pJsonObject, trigger_descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&trigger_description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *trigger_nameKey = "trigger_name";
	node = json_object_get_member(pJsonObject, trigger_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&trigger_name, node, "std::string", "");
		} else {
			
		}
	}
}

BreTriggerResource::BreTriggerResource(char* json)
{
	this->fromJson(json);
}

char*
BreTriggerResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getCategory();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *categoryKey = "category";
	json_object_set_member(pJsonObject, categoryKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getEventName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *event_nameKey = "event_name";
	json_object_set_member(pJsonObject, event_nameKey, node);
	if (isprimitive("BreTriggerParameterDefinition")) {
		list<BreTriggerParameterDefinition> new_list = static_cast<list <BreTriggerParameterDefinition> > (getParameters());
		node = converttoJson(&new_list, "BreTriggerParameterDefinition", "array");
	} else {
		node = json_node_alloc();
		list<BreTriggerParameterDefinition> new_list = static_cast<list <BreTriggerParameterDefinition> > (getParameters());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<BreTriggerParameterDefinition>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			BreTriggerParameterDefinition obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *parametersKey = "parameters";
	json_object_set_member(pJsonObject, parametersKey, node);
	if (isprimitive("bool")) {
		bool obj = getSystemTrigger();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *system_triggerKey = "system_trigger";
	json_object_set_member(pJsonObject, system_triggerKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getTags());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getTags());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *tagsKey = "tags";
	json_object_set_member(pJsonObject, tagsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTriggerDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *trigger_descriptionKey = "trigger_description";
	json_object_set_member(pJsonObject, trigger_descriptionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTriggerName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *trigger_nameKey = "trigger_name";
	json_object_set_member(pJsonObject, trigger_nameKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
BreTriggerResource::getCategory()
{
	return category;
}

void
BreTriggerResource::setCategory(std::string  category)
{
	this->category = category;
}

std::string
BreTriggerResource::getEventName()
{
	return event_name;
}

void
BreTriggerResource::setEventName(std::string  event_name)
{
	this->event_name = event_name;
}

std::list<BreTriggerParameterDefinition>
BreTriggerResource::getParameters()
{
	return parameters;
}

void
BreTriggerResource::setParameters(std::list <BreTriggerParameterDefinition> parameters)
{
	this->parameters = parameters;
}

bool
BreTriggerResource::getSystemTrigger()
{
	return system_trigger;
}

void
BreTriggerResource::setSystemTrigger(bool  system_trigger)
{
	this->system_trigger = system_trigger;
}

std::list<std::string>
BreTriggerResource::getTags()
{
	return tags;
}

void
BreTriggerResource::setTags(std::list <std::string> tags)
{
	this->tags = tags;
}

std::string
BreTriggerResource::getTriggerDescription()
{
	return trigger_description;
}

void
BreTriggerResource::setTriggerDescription(std::string  trigger_description)
{
	this->trigger_description = trigger_description;
}

std::string
BreTriggerResource::getTriggerName()
{
	return trigger_name;
}

void
BreTriggerResource::setTriggerName(std::string  trigger_name)
{
	this->trigger_name = trigger_name;
}


