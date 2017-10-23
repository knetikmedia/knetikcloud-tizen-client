#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "LevelingResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

LevelingResource::LevelingResource()
{
	//__init();
}

LevelingResource::~LevelingResource()
{
	//__cleanup();
}

void
LevelingResource::__init()
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
	//name = std::string();
	//
	//new std::list()std::list> tiers;
	//
	//
	//
	//trigger_event_name = std::string();
	//
	//
	//updated_date = long(0);
	//
}

void
LevelingResource::__cleanup()
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
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(tiers != NULL) {
	//tiers.RemoveAll(true);
	//delete tiers;
	//tiers = NULL;
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
LevelingResource::fromJson(char* jsonStr)
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
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *tiersKey = "tiers";
	node = json_object_get_member(pJsonObject, tiersKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<TierResource> new_list;
			TierResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("TierResource")) {
					jsonToValue(&inst, temp_json, "TierResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			tiers = new_list;
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

LevelingResource::LevelingResource(char* json)
{
	this->fromJson(json);
}

char*
LevelingResource::toJson()
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
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("TierResource")) {
		list<TierResource> new_list = static_cast<list <TierResource> > (getTiers());
		node = converttoJson(&new_list, "TierResource", "array");
	} else {
		node = json_node_alloc();
		list<TierResource> new_list = static_cast<list <TierResource> > (getTiers());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<TierResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			TierResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *tiersKey = "tiers";
	json_object_set_member(pJsonObject, tiersKey, node);
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
LevelingResource::getAdditionalProperties()
{
	return additional_properties;
}

void
LevelingResource::setAdditionalProperties(std::map <string, string> additional_properties)
{
	this->additional_properties = additional_properties;
}

long long
LevelingResource::getCreatedDate()
{
	return created_date;
}

void
LevelingResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

std::string
LevelingResource::getDescription()
{
	return description;
}

void
LevelingResource::setDescription(std::string  description)
{
	this->description = description;
}

std::string
LevelingResource::getName()
{
	return name;
}

void
LevelingResource::setName(std::string  name)
{
	this->name = name;
}

std::list<TierResource>
LevelingResource::getTiers()
{
	return tiers;
}

void
LevelingResource::setTiers(std::list <TierResource> tiers)
{
	this->tiers = tiers;
}

std::string
LevelingResource::getTriggerEventName()
{
	return trigger_event_name;
}

void
LevelingResource::setTriggerEventName(std::string  trigger_event_name)
{
	this->trigger_event_name = trigger_event_name;
}

long long
LevelingResource::getUpdatedDate()
{
	return updated_date;
}

void
LevelingResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}


