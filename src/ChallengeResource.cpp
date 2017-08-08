#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ChallengeResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ChallengeResource::ChallengeResource()
{
	//__init();
}

ChallengeResource::~ChallengeResource()
{
	//__cleanup();
}

void
ChallengeResource::__init()
{
	//
	//
	//activities = int(0);
	//
	//new std::map()std::map> additional_properties;
	//
	//
	//
	//campaign_id = long(0);
	//
	//
	//copy_of = long(0);
	//
	//
	//created_date = long(0);
	//
	//
	//end_date = long(0);
	//
	//
	//id = long(0);
	//
	//
	//leaderboard_strategy = std::string();
	//
	//
	//long_description = std::string();
	//
	//
	//name = std::string();
	//
	//
	//next_event_date = long(0);
	//
	//
	//reward_lag_minutes = int(0);
	//
	//
	//reward_set = new RewardSetResource();
	//
	//
	//schedule = new Schedule();
	//
	//
	//short_description = std::string();
	//
	//
	//start_date = long(0);
	//
	//
	//_template = std::string();
	//
	//
	//updated_date = long(0);
	//
}

void
ChallengeResource::__cleanup()
{
	//if(activities != NULL) {
	//
	//delete activities;
	//activities = NULL;
	//}
	//if(additional_properties != NULL) {
	//additional_properties.RemoveAll(true);
	//delete additional_properties;
	//additional_properties = NULL;
	//}
	//if(campaign_id != NULL) {
	//
	//delete campaign_id;
	//campaign_id = NULL;
	//}
	//if(copy_of != NULL) {
	//
	//delete copy_of;
	//copy_of = NULL;
	//}
	//if(created_date != NULL) {
	//
	//delete created_date;
	//created_date = NULL;
	//}
	//if(end_date != NULL) {
	//
	//delete end_date;
	//end_date = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(leaderboard_strategy != NULL) {
	//
	//delete leaderboard_strategy;
	//leaderboard_strategy = NULL;
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
	//if(next_event_date != NULL) {
	//
	//delete next_event_date;
	//next_event_date = NULL;
	//}
	//if(reward_lag_minutes != NULL) {
	//
	//delete reward_lag_minutes;
	//reward_lag_minutes = NULL;
	//}
	//if(reward_set != NULL) {
	//
	//delete reward_set;
	//reward_set = NULL;
	//}
	//if(schedule != NULL) {
	//
	//delete schedule;
	//schedule = NULL;
	//}
	//if(short_description != NULL) {
	//
	//delete short_description;
	//short_description = NULL;
	//}
	//if(start_date != NULL) {
	//
	//delete start_date;
	//start_date = NULL;
	//}
	//if(_template != NULL) {
	//
	//delete _template;
	//_template = NULL;
	//}
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//
}

void
ChallengeResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *activitiesKey = "activities";
	node = json_object_get_member(pJsonObject, activitiesKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&activities, node, "int", "");
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
	const gchar *campaign_idKey = "campaign_id";
	node = json_object_get_member(pJsonObject, campaign_idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&campaign_id, node, "long long", "");
		} else {
			
		}
	}
	const gchar *copy_ofKey = "copy_of";
	node = json_object_get_member(pJsonObject, copy_ofKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&copy_of, node, "long long", "");
		} else {
			
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
	const gchar *end_dateKey = "end_date";
	node = json_object_get_member(pJsonObject, end_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&end_date, node, "long long", "");
		} else {
			
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
	const gchar *leaderboard_strategyKey = "leaderboard_strategy";
	node = json_object_get_member(pJsonObject, leaderboard_strategyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&leaderboard_strategy, node, "std::string", "");
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
	const gchar *next_event_dateKey = "next_event_date";
	node = json_object_get_member(pJsonObject, next_event_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&next_event_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *reward_lag_minutesKey = "reward_lag_minutes";
	node = json_object_get_member(pJsonObject, reward_lag_minutesKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&reward_lag_minutes, node, "int", "");
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
	const gchar *scheduleKey = "schedule";
	node = json_object_get_member(pJsonObject, scheduleKey);
	if (node !=NULL) {
	

		if (isprimitive("Schedule")) {
			jsonToValue(&schedule, node, "Schedule", "Schedule");
		} else {
			
			Schedule* obj = static_cast<Schedule*> (&schedule);
			obj->fromJson(json_to_string(node, false));
			
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
	const gchar *start_dateKey = "start_date";
	node = json_object_get_member(pJsonObject, start_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&start_date, node, "long long", "");
		} else {
			
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
	const gchar *updated_dateKey = "updated_date";
	node = json_object_get_member(pJsonObject, updated_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&updated_date, node, "long long", "");
		} else {
			
		}
	}
}

ChallengeResource::ChallengeResource(char* json)
{
	this->fromJson(json);
}

char*
ChallengeResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getActivities();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *activitiesKey = "activities";
	json_object_set_member(pJsonObject, activitiesKey, node);


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
		long long obj = getCampaignId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *campaign_idKey = "campaign_id";
	json_object_set_member(pJsonObject, campaign_idKey, node);
	if (isprimitive("long long")) {
		long long obj = getCopyOf();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *copy_ofKey = "copy_of";
	json_object_set_member(pJsonObject, copy_ofKey, node);
	if (isprimitive("long long")) {
		long long obj = getCreatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *created_dateKey = "created_date";
	json_object_set_member(pJsonObject, created_dateKey, node);
	if (isprimitive("long long")) {
		long long obj = getEndDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *end_dateKey = "end_date";
	json_object_set_member(pJsonObject, end_dateKey, node);
	if (isprimitive("long long")) {
		long long obj = getId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLeaderboardStrategy();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *leaderboard_strategyKey = "leaderboard_strategy";
	json_object_set_member(pJsonObject, leaderboard_strategyKey, node);
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
	if (isprimitive("long long")) {
		long long obj = getNextEventDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *next_event_dateKey = "next_event_date";
	json_object_set_member(pJsonObject, next_event_dateKey, node);
	if (isprimitive("int")) {
		int obj = getRewardLagMinutes();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *reward_lag_minutesKey = "reward_lag_minutes";
	json_object_set_member(pJsonObject, reward_lag_minutesKey, node);
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
	if (isprimitive("Schedule")) {
		Schedule obj = getSchedule();
		node = converttoJson(&obj, "Schedule", "");
	}
	else {
		
		Schedule obj = static_cast<Schedule> (getSchedule());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *scheduleKey = "schedule";
	json_object_set_member(pJsonObject, scheduleKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getShortDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *short_descriptionKey = "short_description";
	json_object_set_member(pJsonObject, short_descriptionKey, node);
	if (isprimitive("long long")) {
		long long obj = getStartDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *start_dateKey = "start_date";
	json_object_set_member(pJsonObject, start_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTemplate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *_templateKey = "template";
	json_object_set_member(pJsonObject, _templateKey, node);
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

int
ChallengeResource::getActivities()
{
	return activities;
}

void
ChallengeResource::setActivities(int  activities)
{
	this->activities = activities;
}

std::map<string, string>
ChallengeResource::getAdditionalProperties()
{
	return additional_properties;
}

void
ChallengeResource::setAdditionalProperties(std::map <string, string> additional_properties)
{
	this->additional_properties = additional_properties;
}

long long
ChallengeResource::getCampaignId()
{
	return campaign_id;
}

void
ChallengeResource::setCampaignId(long long  campaign_id)
{
	this->campaign_id = campaign_id;
}

long long
ChallengeResource::getCopyOf()
{
	return copy_of;
}

void
ChallengeResource::setCopyOf(long long  copy_of)
{
	this->copy_of = copy_of;
}

long long
ChallengeResource::getCreatedDate()
{
	return created_date;
}

void
ChallengeResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

long long
ChallengeResource::getEndDate()
{
	return end_date;
}

void
ChallengeResource::setEndDate(long long  end_date)
{
	this->end_date = end_date;
}

long long
ChallengeResource::getId()
{
	return id;
}

void
ChallengeResource::setId(long long  id)
{
	this->id = id;
}

std::string
ChallengeResource::getLeaderboardStrategy()
{
	return leaderboard_strategy;
}

void
ChallengeResource::setLeaderboardStrategy(std::string  leaderboard_strategy)
{
	this->leaderboard_strategy = leaderboard_strategy;
}

std::string
ChallengeResource::getLongDescription()
{
	return long_description;
}

void
ChallengeResource::setLongDescription(std::string  long_description)
{
	this->long_description = long_description;
}

std::string
ChallengeResource::getName()
{
	return name;
}

void
ChallengeResource::setName(std::string  name)
{
	this->name = name;
}

long long
ChallengeResource::getNextEventDate()
{
	return next_event_date;
}

void
ChallengeResource::setNextEventDate(long long  next_event_date)
{
	this->next_event_date = next_event_date;
}

int
ChallengeResource::getRewardLagMinutes()
{
	return reward_lag_minutes;
}

void
ChallengeResource::setRewardLagMinutes(int  reward_lag_minutes)
{
	this->reward_lag_minutes = reward_lag_minutes;
}

RewardSetResource
ChallengeResource::getRewardSet()
{
	return reward_set;
}

void
ChallengeResource::setRewardSet(RewardSetResource  reward_set)
{
	this->reward_set = reward_set;
}

Schedule
ChallengeResource::getSchedule()
{
	return schedule;
}

void
ChallengeResource::setSchedule(Schedule  schedule)
{
	this->schedule = schedule;
}

std::string
ChallengeResource::getShortDescription()
{
	return short_description;
}

void
ChallengeResource::setShortDescription(std::string  short_description)
{
	this->short_description = short_description;
}

long long
ChallengeResource::getStartDate()
{
	return start_date;
}

void
ChallengeResource::setStartDate(long long  start_date)
{
	this->start_date = start_date;
}

std::string
ChallengeResource::getTemplate()
{
	return _template;
}

void
ChallengeResource::setTemplate(std::string  _template)
{
	this->_template = _template;
}

long long
ChallengeResource::getUpdatedDate()
{
	return updated_date;
}

void
ChallengeResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}


