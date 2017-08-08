#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ActivityResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ActivityResource::ActivityResource()
{
	//__init();
}

ActivityResource::~ActivityResource()
{
	//__cleanup();
}

void
ActivityResource::__init()
{
	//
	//new std::map()std::map> additional_properties;
	//
	//
	//
	//created_date = long(0);
	//
	//new std::list()std::list> entitlements;
	//
	//
	//
	//id = long(0);
	//
	//
	//launch = std::string();
	//
	//
	//long_description = std::string();
	//
	//
	//name = std::string();
	//
	//
	//reward_set = new RewardSetResource();
	//
	//new std::list()std::list> settings;
	//
	//
	//
	//short_description = std::string();
	//
	//
	//_template = bool(false);
	//
	//
	//template_id = std::string();
	//
	//
	//type = std::string();
	//
	//
	//unique_key = std::string();
	//
	//
	//updated_date = long(0);
	//
}

void
ActivityResource::__cleanup()
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
	//if(entitlements != NULL) {
	//entitlements.RemoveAll(true);
	//delete entitlements;
	//entitlements = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(launch != NULL) {
	//
	//delete launch;
	//launch = NULL;
	//}
	//if(long_description != NULL) {
	//
	//delete long_description;
	//long_description = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(reward_set != NULL) {
	//
	//delete reward_set;
	//reward_set = NULL;
	//}
	//if(settings != NULL) {
	//settings.RemoveAll(true);
	//delete settings;
	//settings = NULL;
	//}
	//if(short_description != NULL) {
	//
	//delete short_description;
	//short_description = NULL;
	//}
	//if(_template != NULL) {
	//
	//delete _template;
	//_template = NULL;
	//}
	//if(template_id != NULL) {
	//
	//delete template_id;
	//template_id = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(unique_key != NULL) {
	//
	//delete unique_key;
	//unique_key = NULL;
	//}
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//
}

void
ActivityResource::fromJson(char* jsonStr)
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
	const gchar *entitlementsKey = "entitlements";
	node = json_object_get_member(pJsonObject, entitlementsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<ActivityEntitlementResource> new_list;
			ActivityEntitlementResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("ActivityEntitlementResource")) {
					jsonToValue(&inst, temp_json, "ActivityEntitlementResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			entitlements = new_list;
		}
		
	}
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&id, node, "long long", "");
		} else {
			
		}
	}
	const gchar *launchKey = "launch";
	node = json_object_get_member(pJsonObject, launchKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&launch, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *long_descriptionKey = "long_description";
	node = json_object_get_member(pJsonObject, long_descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&long_description, node, "std::string", "");
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
	const gchar *reward_setKey = "reward_set";
	node = json_object_get_member(pJsonObject, reward_setKey);
	if (node !=NULL) {
	

		if (isprimitive("RewardSetResource")) {
			jsonToValue(&reward_set, node, "RewardSetResource", "RewardSetResource");
		} else {
			
			RewardSetResource* obj = static_cast<RewardSetResource*> (&reward_set);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *settingsKey = "settings";
	node = json_object_get_member(pJsonObject, settingsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<AvailableSettingResource> new_list;
			AvailableSettingResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("AvailableSettingResource")) {
					jsonToValue(&inst, temp_json, "AvailableSettingResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			settings = new_list;
		}
		
	}
	const gchar *short_descriptionKey = "short_description";
	node = json_object_get_member(pJsonObject, short_descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&short_description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *_templateKey = "template";
	node = json_object_get_member(pJsonObject, _templateKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&_template, node, "bool", "");
		} else {
			
		}
	}
	const gchar *template_idKey = "template_id";
	node = json_object_get_member(pJsonObject, template_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&template_id, node, "std::string", "");
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
	const gchar *unique_keyKey = "unique_key";
	node = json_object_get_member(pJsonObject, unique_keyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&unique_key, node, "std::string", "");
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

ActivityResource::ActivityResource(char* json)
{
	this->fromJson(json);
}

char*
ActivityResource::toJson()
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
	if (isprimitive("ActivityEntitlementResource")) {
		list<ActivityEntitlementResource> new_list = static_cast<list <ActivityEntitlementResource> > (getEntitlements());
		node = converttoJson(&new_list, "ActivityEntitlementResource", "array");
	} else {
		node = json_node_alloc();
		list<ActivityEntitlementResource> new_list = static_cast<list <ActivityEntitlementResource> > (getEntitlements());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<ActivityEntitlementResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			ActivityEntitlementResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *entitlementsKey = "entitlements";
	json_object_set_member(pJsonObject, entitlementsKey, node);
	if (isprimitive("long long")) {
		long long obj = getId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLaunch();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *launchKey = "launch";
	json_object_set_member(pJsonObject, launchKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLongDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *long_descriptionKey = "long_description";
	json_object_set_member(pJsonObject, long_descriptionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("RewardSetResource")) {
		RewardSetResource obj = getRewardSet();
		node = converttoJson(&obj, "RewardSetResource", "");
	}
	else {
		
		RewardSetResource obj = static_cast<RewardSetResource> (getRewardSet());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *reward_setKey = "reward_set";
	json_object_set_member(pJsonObject, reward_setKey, node);
	if (isprimitive("AvailableSettingResource")) {
		list<AvailableSettingResource> new_list = static_cast<list <AvailableSettingResource> > (getSettings());
		node = converttoJson(&new_list, "AvailableSettingResource", "array");
	} else {
		node = json_node_alloc();
		list<AvailableSettingResource> new_list = static_cast<list <AvailableSettingResource> > (getSettings());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<AvailableSettingResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			AvailableSettingResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *settingsKey = "settings";
	json_object_set_member(pJsonObject, settingsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getShortDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *short_descriptionKey = "short_description";
	json_object_set_member(pJsonObject, short_descriptionKey, node);
	if (isprimitive("bool")) {
		bool obj = getTemplate();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *_templateKey = "template";
	json_object_set_member(pJsonObject, _templateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTemplateId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *template_idKey = "template_id";
	json_object_set_member(pJsonObject, template_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUniqueKey();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *unique_keyKey = "unique_key";
	json_object_set_member(pJsonObject, unique_keyKey, node);
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
ActivityResource::getAdditionalProperties()
{
	return additional_properties;
}

void
ActivityResource::setAdditionalProperties(std::map <string, string> additional_properties)
{
	this->additional_properties = additional_properties;
}

long long
ActivityResource::getCreatedDate()
{
	return created_date;
}

void
ActivityResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

std::list<ActivityEntitlementResource>
ActivityResource::getEntitlements()
{
	return entitlements;
}

void
ActivityResource::setEntitlements(std::list <ActivityEntitlementResource> entitlements)
{
	this->entitlements = entitlements;
}

long long
ActivityResource::getId()
{
	return id;
}

void
ActivityResource::setId(long long  id)
{
	this->id = id;
}

std::string
ActivityResource::getLaunch()
{
	return launch;
}

void
ActivityResource::setLaunch(std::string  launch)
{
	this->launch = launch;
}

std::string
ActivityResource::getLongDescription()
{
	return long_description;
}

void
ActivityResource::setLongDescription(std::string  long_description)
{
	this->long_description = long_description;
}

std::string
ActivityResource::getName()
{
	return name;
}

void
ActivityResource::setName(std::string  name)
{
	this->name = name;
}

RewardSetResource
ActivityResource::getRewardSet()
{
	return reward_set;
}

void
ActivityResource::setRewardSet(RewardSetResource  reward_set)
{
	this->reward_set = reward_set;
}

std::list<AvailableSettingResource>
ActivityResource::getSettings()
{
	return settings;
}

void
ActivityResource::setSettings(std::list <AvailableSettingResource> settings)
{
	this->settings = settings;
}

std::string
ActivityResource::getShortDescription()
{
	return short_description;
}

void
ActivityResource::setShortDescription(std::string  short_description)
{
	this->short_description = short_description;
}

bool
ActivityResource::getTemplate()
{
	return _template;
}

void
ActivityResource::setTemplate(bool  _template)
{
	this->_template = _template;
}

std::string
ActivityResource::getTemplateId()
{
	return template_id;
}

void
ActivityResource::setTemplateId(std::string  template_id)
{
	this->template_id = template_id;
}

std::string
ActivityResource::getType()
{
	return type;
}

void
ActivityResource::setType(std::string  type)
{
	this->type = type;
}

std::string
ActivityResource::getUniqueKey()
{
	return unique_key;
}

void
ActivityResource::setUniqueKey(std::string  unique_key)
{
	this->unique_key = unique_key;
}

long long
ActivityResource::getUpdatedDate()
{
	return updated_date;
}

void
ActivityResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}


