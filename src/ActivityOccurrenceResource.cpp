#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ActivityOccurrenceResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ActivityOccurrenceResource::ActivityOccurrenceResource()
{
	//__init();
}

ActivityOccurrenceResource::~ActivityOccurrenceResource()
{
	//__cleanup();
}

void
ActivityOccurrenceResource::__init()
{
	//
	//
	//activity_id = long(0);
	//
	//new std::list()std::list> bans;
	//
	//
	//
	//challenge_activity_id = long(0);
	//
	//
	//core_settings = new CoreActivityOccurrenceSettings();
	//
	//
	//created_date = long(0);
	//
	//
	//entitlement = new ActivityEntitlementResource();
	//
	//
	//event_id = long(0);
	//
	//
	//host = new SimpleUserResource();
	//
	//
	//id = long(0);
	//
	//
	//reward_status = std::string();
	//
	//new std::list()std::list> settings;
	//
	//
	//
	//simulated = bool(false);
	//
	//
	//start_date = long(0);
	//
	//
	//status = std::string();
	//
	//
	//updated_date = long(0);
	//
	//new std::list()std::list> users;
	//
	//
}

void
ActivityOccurrenceResource::__cleanup()
{
	//if(activity_id != NULL) {
	//
	//delete activity_id;
	//activity_id = NULL;
	//}
	//if(bans != NULL) {
	//bans.RemoveAll(true);
	//delete bans;
	//bans = NULL;
	//}
	//if(challenge_activity_id != NULL) {
	//
	//delete challenge_activity_id;
	//challenge_activity_id = NULL;
	//}
	//if(core_settings != NULL) {
	//
	//delete core_settings;
	//core_settings = NULL;
	//}
	//if(created_date != NULL) {
	//
	//delete created_date;
	//created_date = NULL;
	//}
	//if(entitlement != NULL) {
	//
	//delete entitlement;
	//entitlement = NULL;
	//}
	//if(event_id != NULL) {
	//
	//delete event_id;
	//event_id = NULL;
	//}
	//if(host != NULL) {
	//
	//delete host;
	//host = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(reward_status != NULL) {
	//
	//delete reward_status;
	//reward_status = NULL;
	//}
	//if(settings != NULL) {
	//settings.RemoveAll(true);
	//delete settings;
	//settings = NULL;
	//}
	//if(simulated != NULL) {
	//
	//delete simulated;
	//simulated = NULL;
	//}
	//if(start_date != NULL) {
	//
	//delete start_date;
	//start_date = NULL;
	//}
	//if(status != NULL) {
	//
	//delete status;
	//status = NULL;
	//}
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//if(users != NULL) {
	//users.RemoveAll(true);
	//delete users;
	//users = NULL;
	//}
	//
}

void
ActivityOccurrenceResource::fromJson(char* jsonStr)
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
	const gchar *bansKey = "bans";
	node = json_object_get_member(pJsonObject, bansKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<int> new_list;
			int inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("int")) {
					jsonToValue(&inst, temp_json, "int", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			bans = new_list;
		}
		
	}
	const gchar *challenge_activity_idKey = "challenge_activity_id";
	node = json_object_get_member(pJsonObject, challenge_activity_idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&challenge_activity_id, node, "long long", "");
		} else {
			
		}
	}
	const gchar *core_settingsKey = "core_settings";
	node = json_object_get_member(pJsonObject, core_settingsKey);
	if (node !=NULL) {
	

		if (isprimitive("CoreActivityOccurrenceSettings")) {
			jsonToValue(&core_settings, node, "CoreActivityOccurrenceSettings", "CoreActivityOccurrenceSettings");
		} else {
			
			CoreActivityOccurrenceSettings* obj = static_cast<CoreActivityOccurrenceSettings*> (&core_settings);
			obj->fromJson(json_to_string(node, false));
			
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
	const gchar *event_idKey = "event_id";
	node = json_object_get_member(pJsonObject, event_idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&event_id, node, "long long", "");
		} else {
			
		}
	}
	const gchar *hostKey = "host";
	node = json_object_get_member(pJsonObject, hostKey);
	if (node !=NULL) {
	

		if (isprimitive("SimpleUserResource")) {
			jsonToValue(&host, node, "SimpleUserResource", "SimpleUserResource");
		} else {
			
			SimpleUserResource* obj = static_cast<SimpleUserResource*> (&host);
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
	const gchar *reward_statusKey = "reward_status";
	node = json_object_get_member(pJsonObject, reward_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&reward_status, node, "std::string", "");
		} else {
			
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
	const gchar *simulatedKey = "simulated";
	node = json_object_get_member(pJsonObject, simulatedKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&simulated, node, "bool", "");
		} else {
			
		}
	}
	const gchar *start_dateKey = "start_date";
	node = json_object_get_member(pJsonObject, start_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&start_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *statusKey = "status";
	node = json_object_get_member(pJsonObject, statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&status, node, "std::string", "");
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
	const gchar *usersKey = "users";
	node = json_object_get_member(pJsonObject, usersKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<ActivityUserResource> new_list;
			ActivityUserResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("ActivityUserResource")) {
					jsonToValue(&inst, temp_json, "ActivityUserResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			users = new_list;
		}
		
	}
}

ActivityOccurrenceResource::ActivityOccurrenceResource(char* json)
{
	this->fromJson(json);
}

char*
ActivityOccurrenceResource::toJson()
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
	if (isprimitive("int")) {
		list<int> new_list = static_cast<list <int> > (getBans());
		node = converttoJson(&new_list, "int", "array");
	} else {
		node = json_node_alloc();
		list<int> new_list = static_cast<list <int> > (getBans());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *bansKey = "bans";
	json_object_set_member(pJsonObject, bansKey, node);
	if (isprimitive("long long")) {
		long long obj = getChallengeActivityId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *challenge_activity_idKey = "challenge_activity_id";
	json_object_set_member(pJsonObject, challenge_activity_idKey, node);
	if (isprimitive("CoreActivityOccurrenceSettings")) {
		CoreActivityOccurrenceSettings obj = getCoreSettings();
		node = converttoJson(&obj, "CoreActivityOccurrenceSettings", "");
	}
	else {
		
		CoreActivityOccurrenceSettings obj = static_cast<CoreActivityOccurrenceSettings> (getCoreSettings());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *core_settingsKey = "core_settings";
	json_object_set_member(pJsonObject, core_settingsKey, node);
	if (isprimitive("long long")) {
		long long obj = getCreatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *created_dateKey = "created_date";
	json_object_set_member(pJsonObject, created_dateKey, node);
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
		long long obj = getEventId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *event_idKey = "event_id";
	json_object_set_member(pJsonObject, event_idKey, node);
	if (isprimitive("SimpleUserResource")) {
		SimpleUserResource obj = getHost();
		node = converttoJson(&obj, "SimpleUserResource", "");
	}
	else {
		
		SimpleUserResource obj = static_cast<SimpleUserResource> (getHost());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *hostKey = "host";
	json_object_set_member(pJsonObject, hostKey, node);
	if (isprimitive("long long")) {
		long long obj = getId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRewardStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *reward_statusKey = "reward_status";
	json_object_set_member(pJsonObject, reward_statusKey, node);
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
	if (isprimitive("bool")) {
		bool obj = getSimulated();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *simulatedKey = "simulated";
	json_object_set_member(pJsonObject, simulatedKey, node);
	if (isprimitive("long long")) {
		long long obj = getStartDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *start_dateKey = "start_date";
	json_object_set_member(pJsonObject, start_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *statusKey = "status";
	json_object_set_member(pJsonObject, statusKey, node);
	if (isprimitive("long long")) {
		long long obj = getUpdatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *updated_dateKey = "updated_date";
	json_object_set_member(pJsonObject, updated_dateKey, node);
	if (isprimitive("ActivityUserResource")) {
		list<ActivityUserResource> new_list = static_cast<list <ActivityUserResource> > (getUsers());
		node = converttoJson(&new_list, "ActivityUserResource", "array");
	} else {
		node = json_node_alloc();
		list<ActivityUserResource> new_list = static_cast<list <ActivityUserResource> > (getUsers());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<ActivityUserResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			ActivityUserResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *usersKey = "users";
	json_object_set_member(pJsonObject, usersKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
ActivityOccurrenceResource::getActivityId()
{
	return activity_id;
}

void
ActivityOccurrenceResource::setActivityId(long long  activity_id)
{
	this->activity_id = activity_id;
}

std::list<int>
ActivityOccurrenceResource::getBans()
{
	return bans;
}

void
ActivityOccurrenceResource::setBans(std::list <int> bans)
{
	this->bans = bans;
}

long long
ActivityOccurrenceResource::getChallengeActivityId()
{
	return challenge_activity_id;
}

void
ActivityOccurrenceResource::setChallengeActivityId(long long  challenge_activity_id)
{
	this->challenge_activity_id = challenge_activity_id;
}

CoreActivityOccurrenceSettings
ActivityOccurrenceResource::getCoreSettings()
{
	return core_settings;
}

void
ActivityOccurrenceResource::setCoreSettings(CoreActivityOccurrenceSettings  core_settings)
{
	this->core_settings = core_settings;
}

long long
ActivityOccurrenceResource::getCreatedDate()
{
	return created_date;
}

void
ActivityOccurrenceResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

ActivityEntitlementResource
ActivityOccurrenceResource::getEntitlement()
{
	return entitlement;
}

void
ActivityOccurrenceResource::setEntitlement(ActivityEntitlementResource  entitlement)
{
	this->entitlement = entitlement;
}

long long
ActivityOccurrenceResource::getEventId()
{
	return event_id;
}

void
ActivityOccurrenceResource::setEventId(long long  event_id)
{
	this->event_id = event_id;
}

SimpleUserResource
ActivityOccurrenceResource::getHost()
{
	return host;
}

void
ActivityOccurrenceResource::setHost(SimpleUserResource  host)
{
	this->host = host;
}

long long
ActivityOccurrenceResource::getId()
{
	return id;
}

void
ActivityOccurrenceResource::setId(long long  id)
{
	this->id = id;
}

std::string
ActivityOccurrenceResource::getRewardStatus()
{
	return reward_status;
}

void
ActivityOccurrenceResource::setRewardStatus(std::string  reward_status)
{
	this->reward_status = reward_status;
}

std::list<SelectedSettingResource>
ActivityOccurrenceResource::getSettings()
{
	return settings;
}

void
ActivityOccurrenceResource::setSettings(std::list <SelectedSettingResource> settings)
{
	this->settings = settings;
}

bool
ActivityOccurrenceResource::getSimulated()
{
	return simulated;
}

void
ActivityOccurrenceResource::setSimulated(bool  simulated)
{
	this->simulated = simulated;
}

long long
ActivityOccurrenceResource::getStartDate()
{
	return start_date;
}

void
ActivityOccurrenceResource::setStartDate(long long  start_date)
{
	this->start_date = start_date;
}

std::string
ActivityOccurrenceResource::getStatus()
{
	return status;
}

void
ActivityOccurrenceResource::setStatus(std::string  status)
{
	this->status = status;
}

long long
ActivityOccurrenceResource::getUpdatedDate()
{
	return updated_date;
}

void
ActivityOccurrenceResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}

std::list<ActivityUserResource>
ActivityOccurrenceResource::getUsers()
{
	return users;
}

void
ActivityOccurrenceResource::setUsers(std::list <ActivityUserResource> users)
{
	this->users = users;
}


