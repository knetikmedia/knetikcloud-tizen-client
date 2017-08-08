#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "AchievementDefinitionResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

AchievementDefinitionResource::AchievementDefinitionResource()
{
	//__init();
}

AchievementDefinitionResource::~AchievementDefinitionResource()
{
	//__cleanup();
}

void
AchievementDefinitionResource::__init()
{
	//
	//new std::map()std::map> additional_properties;
	//
	//
	//
	//created_date = long(0);
	//
	//
	//description = std::string();
	//
	//
	//hidden = bool(false);
	//
	//
	//name = std::string();
	//
	//
	//required_progress = int(0);
	//
	//
	//rule_id = std::string();
	//
	//new std::list()std::list> tags;
	//
	//
	//
	//_template = std::string();
	//
	//
	//trigger_event_name = std::string();
	//
	//
	//updated_date = long(0);
	//
}

void
AchievementDefinitionResource::__cleanup()
{
	//if(additional_properties != NULL) {
	//additional_properties.RemoveAll(true);
	//delete additional_properties;
	//additional_properties = NULL;
	//}
	//if(created_date != NULL) {
	//
	//delete created_date;
	//created_date = NULL;
	//}
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
	//}
	//if(hidden != NULL) {
	//
	//delete hidden;
	//hidden = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(required_progress != NULL) {
	//
	//delete required_progress;
	//required_progress = NULL;
	//}
	//if(rule_id != NULL) {
	//
	//delete rule_id;
	//rule_id = NULL;
	//}
	//if(tags != NULL) {
	//tags.RemoveAll(true);
	//delete tags;
	//tags = NULL;
	//}
	//if(_template != NULL) {
	//
	//delete _template;
	//_template = NULL;
	//}
	//if(trigger_event_name != NULL) {
	//
	//delete trigger_event_name;
	//trigger_event_name = NULL;
	//}
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//
}

void
AchievementDefinitionResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *additional_propertiesKey = "additional_properties";
	node = json_object_get_member(pJsonObject, additional_propertiesKey);
	if (node !=NULL) {
	
		{
			JsonObject* json_obj = json_node_get_object(node);
			map<string,string> new_map;
			json_object_foreach_member(json_obj,helper_func,&new_map);
			additional_properties = new_map;
		}
		
	}
	const gchar *created_dateKey = "created_date";
	node = json_object_get_member(pJsonObject, created_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&created_date, node, "long long", "");
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
	const gchar *hiddenKey = "hidden";
	node = json_object_get_member(pJsonObject, hiddenKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&hidden, node, "bool", "");
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
	const gchar *required_progressKey = "required_progress";
	node = json_object_get_member(pJsonObject, required_progressKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&required_progress, node, "int", "");
		} else {
			
		}
	}
	const gchar *rule_idKey = "rule_id";
	node = json_object_get_member(pJsonObject, rule_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&rule_id, node, "std::string", "");
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
	const gchar *_templateKey = "template";
	node = json_object_get_member(pJsonObject, _templateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&_template, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *trigger_event_nameKey = "trigger_event_name";
	node = json_object_get_member(pJsonObject, trigger_event_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&trigger_event_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *updated_dateKey = "updated_date";
	node = json_object_get_member(pJsonObject, updated_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&updated_date, node, "long long", "");
		} else {
			
		}
	}
}

AchievementDefinitionResource::AchievementDefinitionResource(char* json)
{
	this->fromJson(json);
}

char*
AchievementDefinitionResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;


	{
		JsonObject* json_obj;
		map<string, string> new_list = static_cast<map <string, string> > (getAdditionalProperties());
		json_obj = json_object_new();
		for (map<string, string>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			string obj = (*it).first;
			string obj2 = (*it).second;
			JsonNode* tempnode = json_from_string(obj2.c_str(),NULL);
			json_object_set_member(json_obj, obj.c_str(), tempnode);
		}
	node = json_node_alloc();
	json_node_init_object(node, json_obj);
	json_object_unref(json_obj);
	}

	const gchar *additional_propertiesKey = "additional_properties";
	json_object_set_member(pJsonObject, additional_propertiesKey, node);
	if (isprimitive("long long")) {
		long long obj = getCreatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *created_dateKey = "created_date";
	json_object_set_member(pJsonObject, created_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *descriptionKey = "description";
	json_object_set_member(pJsonObject, descriptionKey, node);
	if (isprimitive("bool")) {
		bool obj = getHidden();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *hiddenKey = "hidden";
	json_object_set_member(pJsonObject, hiddenKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("int")) {
		int obj = getRequiredProgress();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *required_progressKey = "required_progress";
	json_object_set_member(pJsonObject, required_progressKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRuleId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *rule_idKey = "rule_id";
	json_object_set_member(pJsonObject, rule_idKey, node);
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
		std::string obj = getTemplate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *_templateKey = "template";
	json_object_set_member(pJsonObject, _templateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTriggerEventName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *trigger_event_nameKey = "trigger_event_name";
	json_object_set_member(pJsonObject, trigger_event_nameKey, node);
	if (isprimitive("long long")) {
		long long obj = getUpdatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *updated_dateKey = "updated_date";
	json_object_set_member(pJsonObject, updated_dateKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::map<string, string>
AchievementDefinitionResource::getAdditionalProperties()
{
	return additional_properties;
}

void
AchievementDefinitionResource::setAdditionalProperties(std::map <string, string> additional_properties)
{
	this->additional_properties = additional_properties;
}

long long
AchievementDefinitionResource::getCreatedDate()
{
	return created_date;
}

void
AchievementDefinitionResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

std::string
AchievementDefinitionResource::getDescription()
{
	return description;
}

void
AchievementDefinitionResource::setDescription(std::string  description)
{
	this->description = description;
}

bool
AchievementDefinitionResource::getHidden()
{
	return hidden;
}

void
AchievementDefinitionResource::setHidden(bool  hidden)
{
	this->hidden = hidden;
}

std::string
AchievementDefinitionResource::getName()
{
	return name;
}

void
AchievementDefinitionResource::setName(std::string  name)
{
	this->name = name;
}

int
AchievementDefinitionResource::getRequiredProgress()
{
	return required_progress;
}

void
AchievementDefinitionResource::setRequiredProgress(int  required_progress)
{
	this->required_progress = required_progress;
}

std::string
AchievementDefinitionResource::getRuleId()
{
	return rule_id;
}

void
AchievementDefinitionResource::setRuleId(std::string  rule_id)
{
	this->rule_id = rule_id;
}

std::list<std::string>
AchievementDefinitionResource::getTags()
{
	return tags;
}

void
AchievementDefinitionResource::setTags(std::list <std::string> tags)
{
	this->tags = tags;
}

std::string
AchievementDefinitionResource::getTemplate()
{
	return _template;
}

void
AchievementDefinitionResource::setTemplate(std::string  _template)
{
	this->_template = _template;
}

std::string
AchievementDefinitionResource::getTriggerEventName()
{
	return trigger_event_name;
}

void
AchievementDefinitionResource::setTriggerEventName(std::string  trigger_event_name)
{
	this->trigger_event_name = trigger_event_name;
}

long long
AchievementDefinitionResource::getUpdatedDate()
{
	return updated_date;
}

void
AchievementDefinitionResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}


