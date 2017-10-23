#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CreateActivityOccurrenceRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CreateActivityOccurrenceRequest::CreateActivityOccurrenceRequest()
{
	//__init();
}

CreateActivityOccurrenceRequest::~CreateActivityOccurrenceRequest()
{
	//__cleanup();
}

void
CreateActivityOccurrenceRequest::__init()
{
	//
	//
	//activity_id = long(0);
	//
	//
	//challenge_activity_id = long(0);
	//
	//
	//entitlement = new ItemIdRequest();
	//
	//
	//event_id = long(0);
	//
	//new std::list()std::list> settings;
	//
	//
	//
	//simulated = bool(false);
	//
	//
	//status = std::string();
	//
	//new std::list()std::list> users;
	//
	//
}

void
CreateActivityOccurrenceRequest::__cleanup()
{
	//if(activity_id != NULL) {
	//
	//delete activity_id;
	//activity_id = NULL;
	//}
	//if(challenge_activity_id != NULL) {
	//
	//delete challenge_activity_id;
	//challenge_activity_id = NULL;
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
	//if(status != NULL) {
	//
	//delete status;
	//status = NULL;
	//}
	//if(users != NULL) {
	//users.RemoveAll(true);
	//delete users;
	//users = NULL;
	//}
	//
}

void
CreateActivityOccurrenceRequest::fromJson(char* jsonStr)
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
	const gchar *challenge_activity_idKey = "challenge_activity_id";
	node = json_object_get_member(pJsonObject, challenge_activity_idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&challenge_activity_id, node, "long long", "");
		} else {
			
		}
	}
	const gchar *entitlementKey = "entitlement";
	node = json_object_get_member(pJsonObject, entitlementKey);
	if (node !=NULL) {
	

		if (isprimitive("ItemIdRequest")) {
			jsonToValue(&entitlement, node, "ItemIdRequest", "ItemIdRequest");
		} else {
			
			ItemIdRequest* obj = static_cast<ItemIdRequest*> (&entitlement);
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
	const gchar *settingsKey = "settings";
	node = json_object_get_member(pJsonObject, settingsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<SelectedSettingRequest> new_list;
			SelectedSettingRequest inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("SelectedSettingRequest")) {
					jsonToValue(&inst, temp_json, "SelectedSettingRequest", "");
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
	const gchar *statusKey = "status";
	node = json_object_get_member(pJsonObject, statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *usersKey = "users";
	node = json_object_get_member(pJsonObject, usersKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<Participant> new_list;
			Participant inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("Participant")) {
					jsonToValue(&inst, temp_json, "Participant", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			users = new_list;
		}
		
	}
}

CreateActivityOccurrenceRequest::CreateActivityOccurrenceRequest(char* json)
{
	this->fromJson(json);
}

char*
CreateActivityOccurrenceRequest::toJson()
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
	if (isprimitive("long long")) {
		long long obj = getChallengeActivityId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *challenge_activity_idKey = "challenge_activity_id";
	json_object_set_member(pJsonObject, challenge_activity_idKey, node);
	if (isprimitive("ItemIdRequest")) {
		ItemIdRequest obj = getEntitlement();
		node = converttoJson(&obj, "ItemIdRequest", "");
	}
	else {
		
		ItemIdRequest obj = static_cast<ItemIdRequest> (getEntitlement());
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
	if (isprimitive("SelectedSettingRequest")) {
		list<SelectedSettingRequest> new_list = static_cast<list <SelectedSettingRequest> > (getSettings());
		node = converttoJson(&new_list, "SelectedSettingRequest", "array");
	} else {
		node = json_node_alloc();
		list<SelectedSettingRequest> new_list = static_cast<list <SelectedSettingRequest> > (getSettings());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<SelectedSettingRequest>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			SelectedSettingRequest obj = *it;
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
	if (isprimitive("std::string")) {
		std::string obj = getStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *statusKey = "status";
	json_object_set_member(pJsonObject, statusKey, node);
	if (isprimitive("Participant")) {
		list<Participant> new_list = static_cast<list <Participant> > (getUsers());
		node = converttoJson(&new_list, "Participant", "array");
	} else {
		node = json_node_alloc();
		list<Participant> new_list = static_cast<list <Participant> > (getUsers());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<Participant>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			Participant obj = *it;
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
CreateActivityOccurrenceRequest::getActivityId()
{
	return activity_id;
}

void
CreateActivityOccurrenceRequest::setActivityId(long long  activity_id)
{
	this->activity_id = activity_id;
}

long long
CreateActivityOccurrenceRequest::getChallengeActivityId()
{
	return challenge_activity_id;
}

void
CreateActivityOccurrenceRequest::setChallengeActivityId(long long  challenge_activity_id)
{
	this->challenge_activity_id = challenge_activity_id;
}

ItemIdRequest
CreateActivityOccurrenceRequest::getEntitlement()
{
	return entitlement;
}

void
CreateActivityOccurrenceRequest::setEntitlement(ItemIdRequest  entitlement)
{
	this->entitlement = entitlement;
}

long long
CreateActivityOccurrenceRequest::getEventId()
{
	return event_id;
}

void
CreateActivityOccurrenceRequest::setEventId(long long  event_id)
{
	this->event_id = event_id;
}

std::list<SelectedSettingRequest>
CreateActivityOccurrenceRequest::getSettings()
{
	return settings;
}

void
CreateActivityOccurrenceRequest::setSettings(std::list <SelectedSettingRequest> settings)
{
	this->settings = settings;
}

bool
CreateActivityOccurrenceRequest::getSimulated()
{
	return simulated;
}

void
CreateActivityOccurrenceRequest::setSimulated(bool  simulated)
{
	this->simulated = simulated;
}

std::string
CreateActivityOccurrenceRequest::getStatus()
{
	return status;
}

void
CreateActivityOccurrenceRequest::setStatus(std::string  status)
{
	this->status = status;
}

std::list<Participant>
CreateActivityOccurrenceRequest::getUsers()
{
	return users;
}

void
CreateActivityOccurrenceRequest::setUsers(std::list <Participant> users)
{
	this->users = users;
}


