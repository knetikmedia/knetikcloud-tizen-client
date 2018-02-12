#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ChallengeActivityResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ChallengeActivityResource::ChallengeActivityResource()
{
	//__init();
}

ChallengeActivityResource::~ChallengeActivityResource()
{
	//__cleanup();
}

void
ChallengeActivityResource::__init()
{
	//
	//
	//activity_id = long(0);
	//
	//new std::map()std::map> additional_properties;
	//
	//
	//
	//challenge_id = long(0);
	//
	//
	//core_settings = new CoreChallengeActivitySettings();
	//
	//
	//entitlement = new ActivityEntitlementResource();
	//
	//
	//id = long(0);
	//
	//
	//reward_set = new RewardSetResource();
	//
	//new std::list()std::list> settings;
	//
	//
	//
	//_template = std::string();
	//
}

void
ChallengeActivityResource::__cleanup()
{
	//if(activity_id != NULL) {
	//
	//delete activity_id;
	//activity_id = NULL;
	//}
	//if(additional_properties != NULL) {
	//additional_properties.RemoveAll(true);
	//delete additional_properties;
	//additional_properties = NULL;
	//}
	//if(challenge_id != NULL) {
	//
	//delete challenge_id;
	//challenge_id = NULL;
	//}
	//if(core_settings != NULL) {
	//
	//delete core_settings;
	//core_settings = NULL;
	//}
	//if(entitlement != NULL) {
	//
	//delete entitlement;
	//entitlement = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
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
	//if(_template != NULL) {
	//
	//delete _template;
	//_template = NULL;
	//}
	//
}

void
ChallengeActivityResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *activity_idKey = "activity_id";
	node = json_object_get_member(pJsonObject, activity_idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&activity_id, node, "long long", "");
		} else {
			
		}
	}
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
	const gchar *challenge_idKey = "challenge_id";
	node = json_object_get_member(pJsonObject, challenge_idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&challenge_id, node, "long long", "");
		} else {
			
		}
	}
	const gchar *core_settingsKey = "core_settings";
	node = json_object_get_member(pJsonObject, core_settingsKey);
	if (node !=NULL) {
	

		if (isprimitive("CoreChallengeActivitySettings")) {
			jsonToValue(&core_settings, node, "CoreChallengeActivitySettings", "CoreChallengeActivitySettings");
		} else {
			
			CoreChallengeActivitySettings* obj = static_cast<CoreChallengeActivitySettings*> (&core_settings);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *entitlementKey = "entitlement";
	node = json_object_get_member(pJsonObject, entitlementKey);
	if (node !=NULL) {
	

		if (isprimitive("ActivityEntitlementResource")) {
			jsonToValue(&entitlement, node, "ActivityEntitlementResource", "ActivityEntitlementResource");
		} else {
			
			ActivityEntitlementResource* obj = static_cast<ActivityEntitlementResource*> (&entitlement);
			obj->fromJson(json_to_string(node, false));
			
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
			list<SelectedSettingResource> new_list;
			SelectedSettingResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("SelectedSettingResource")) {
					jsonToValue(&inst, temp_json, "SelectedSettingResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			settings = new_list;
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
}

ChallengeActivityResource::ChallengeActivityResource(char* json)
{
	this->fromJson(json);
}

char*
ChallengeActivityResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getActivityId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *activity_idKey = "activity_id";
	json_object_set_member(pJsonObject, activity_idKey, node);


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
		long long obj = getChallengeId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *challenge_idKey = "challenge_id";
	json_object_set_member(pJsonObject, challenge_idKey, node);
	if (isprimitive("CoreChallengeActivitySettings")) {
		CoreChallengeActivitySettings obj = getCoreSettings();
		node = converttoJson(&obj, "CoreChallengeActivitySettings", "");
	}
	else {
		
		CoreChallengeActivitySettings obj = static_cast<CoreChallengeActivitySettings> (getCoreSettings());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *core_settingsKey = "core_settings";
	json_object_set_member(pJsonObject, core_settingsKey, node);
	if (isprimitive("ActivityEntitlementResource")) {
		ActivityEntitlementResource obj = getEntitlement();
		node = converttoJson(&obj, "ActivityEntitlementResource", "");
	}
	else {
		
		ActivityEntitlementResource obj = static_cast<ActivityEntitlementResource> (getEntitlement());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *entitlementKey = "entitlement";
	json_object_set_member(pJsonObject, entitlementKey, node);
	if (isprimitive("long long")) {
		long long obj = getId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
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
	if (isprimitive("SelectedSettingResource")) {
		list<SelectedSettingResource> new_list = static_cast<list <SelectedSettingResource> > (getSettings());
		node = converttoJson(&new_list, "SelectedSettingResource", "array");
	} else {
		node = json_node_alloc();
		list<SelectedSettingResource> new_list = static_cast<list <SelectedSettingResource> > (getSettings());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<SelectedSettingResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			SelectedSettingResource obj = *it;
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
		std::string obj = getTemplate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *_templateKey = "template";
	json_object_set_member(pJsonObject, _templateKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
ChallengeActivityResource::getActivityId()
{
	return activity_id;
}

void
ChallengeActivityResource::setActivityId(long long  activity_id)
{
	this->activity_id = activity_id;
}

std::map<string, string>
ChallengeActivityResource::getAdditionalProperties()
{
	return additional_properties;
}

void
ChallengeActivityResource::setAdditionalProperties(std::map <string, string> additional_properties)
{
	this->additional_properties = additional_properties;
}

long long
ChallengeActivityResource::getChallengeId()
{
	return challenge_id;
}

void
ChallengeActivityResource::setChallengeId(long long  challenge_id)
{
	this->challenge_id = challenge_id;
}

CoreChallengeActivitySettings
ChallengeActivityResource::getCoreSettings()
{
	return core_settings;
}

void
ChallengeActivityResource::setCoreSettings(CoreChallengeActivitySettings  core_settings)
{
	this->core_settings = core_settings;
}

ActivityEntitlementResource
ChallengeActivityResource::getEntitlement()
{
	return entitlement;
}

void
ChallengeActivityResource::setEntitlement(ActivityEntitlementResource  entitlement)
{
	this->entitlement = entitlement;
}

long long
ChallengeActivityResource::getId()
{
	return id;
}

void
ChallengeActivityResource::setId(long long  id)
{
	this->id = id;
}

RewardSetResource
ChallengeActivityResource::getRewardSet()
{
	return reward_set;
}

void
ChallengeActivityResource::setRewardSet(RewardSetResource  reward_set)
{
	this->reward_set = reward_set;
}

std::list<SelectedSettingResource>
ChallengeActivityResource::getSettings()
{
	return settings;
}

void
ChallengeActivityResource::setSettings(std::list <SelectedSettingResource> settings)
{
	this->settings = settings;
}

std::string
ChallengeActivityResource::getTemplate()
{
	return _template;
}

void
ChallengeActivityResource::setTemplate(std::string  _template)
{
	this->_template = _template;
}


