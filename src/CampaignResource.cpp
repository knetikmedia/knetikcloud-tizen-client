#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CampaignResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CampaignResource::CampaignResource()
{
	//__init();
}

CampaignResource::~CampaignResource()
{
	//__cleanup();
}

void
CampaignResource::__init()
{
	//
	//
	//active = bool(false);
	//
	//new std::map()std::map> additional_properties;
	//
	//
	//
	//created_date = long(0);
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
	//next_challenge = std::string();
	//
	//
	//next_challenge_date = long(0);
	//
	//
	//reward_set = new RewardSetResource();
	//
	//
	//reward_status = std::string();
	//
	//
	//short_description = std::string();
	//
	//
	//_template = std::string();
	//
	//
	//updated_date = long(0);
	//
}

void
CampaignResource::__cleanup()
{
	//if(active != NULL) {
	//
	//delete active;
	//active = NULL;
	//}
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
	//if(next_challenge != NULL) {
	//
	//delete next_challenge;
	//next_challenge = NULL;
	//}
	//if(next_challenge_date != NULL) {
	//
	//delete next_challenge_date;
	//next_challenge_date = NULL;
	//}
	//if(reward_set != NULL) {
	//
	//delete reward_set;
	//reward_set = NULL;
	//}
	//if(reward_status != NULL) {
	//
	//delete reward_status;
	//reward_status = NULL;
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
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//
}

void
CampaignResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *activeKey = "active";
	node = json_object_get_member(pJsonObject, activeKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&active, node, "bool", "");
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
	const gchar *created_dateKey = "created_date";
	node = json_object_get_member(pJsonObject, created_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&created_date, node, "long long", "");
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
	const gchar *next_challengeKey = "next_challenge";
	node = json_object_get_member(pJsonObject, next_challengeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&next_challenge, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *next_challenge_dateKey = "next_challenge_date";
	node = json_object_get_member(pJsonObject, next_challenge_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&next_challenge_date, node, "long long", "");
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
	const gchar *reward_statusKey = "reward_status";
	node = json_object_get_member(pJsonObject, reward_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&reward_status, node, "std::string", "");
		} else {
			
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

CampaignResource::CampaignResource(char* json)
{
	this->fromJson(json);
}

char*
CampaignResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getActive();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *activeKey = "active";
	json_object_set_member(pJsonObject, activeKey, node);


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
	if (isprimitive("std::string")) {
		std::string obj = getNextChallenge();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *next_challengeKey = "next_challenge";
	json_object_set_member(pJsonObject, next_challengeKey, node);
	if (isprimitive("long long")) {
		long long obj = getNextChallengeDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *next_challenge_dateKey = "next_challenge_date";
	json_object_set_member(pJsonObject, next_challenge_dateKey, node);
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
	if (isprimitive("std::string")) {
		std::string obj = getRewardStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *reward_statusKey = "reward_status";
	json_object_set_member(pJsonObject, reward_statusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getShortDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *short_descriptionKey = "short_description";
	json_object_set_member(pJsonObject, short_descriptionKey, node);
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

bool
CampaignResource::getActive()
{
	return active;
}

void
CampaignResource::setActive(bool  active)
{
	this->active = active;
}

std::map<string, string>
CampaignResource::getAdditionalProperties()
{
	return additional_properties;
}

void
CampaignResource::setAdditionalProperties(std::map <string, string> additional_properties)
{
	this->additional_properties = additional_properties;
}

long long
CampaignResource::getCreatedDate()
{
	return created_date;
}

void
CampaignResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

long long
CampaignResource::getId()
{
	return id;
}

void
CampaignResource::setId(long long  id)
{
	this->id = id;
}

std::string
CampaignResource::getLeaderboardStrategy()
{
	return leaderboard_strategy;
}

void
CampaignResource::setLeaderboardStrategy(std::string  leaderboard_strategy)
{
	this->leaderboard_strategy = leaderboard_strategy;
}

std::string
CampaignResource::getLongDescription()
{
	return long_description;
}

void
CampaignResource::setLongDescription(std::string  long_description)
{
	this->long_description = long_description;
}

std::string
CampaignResource::getName()
{
	return name;
}

void
CampaignResource::setName(std::string  name)
{
	this->name = name;
}

std::string
CampaignResource::getNextChallenge()
{
	return next_challenge;
}

void
CampaignResource::setNextChallenge(std::string  next_challenge)
{
	this->next_challenge = next_challenge;
}

long long
CampaignResource::getNextChallengeDate()
{
	return next_challenge_date;
}

void
CampaignResource::setNextChallengeDate(long long  next_challenge_date)
{
	this->next_challenge_date = next_challenge_date;
}

RewardSetResource
CampaignResource::getRewardSet()
{
	return reward_set;
}

void
CampaignResource::setRewardSet(RewardSetResource  reward_set)
{
	this->reward_set = reward_set;
}

std::string
CampaignResource::getRewardStatus()
{
	return reward_status;
}

void
CampaignResource::setRewardStatus(std::string  reward_status)
{
	this->reward_status = reward_status;
}

std::string
CampaignResource::getShortDescription()
{
	return short_description;
}

void
CampaignResource::setShortDescription(std::string  short_description)
{
	this->short_description = short_description;
}

std::string
CampaignResource::getTemplate()
{
	return _template;
}

void
CampaignResource::setTemplate(std::string  _template)
{
	this->_template = _template;
}

long long
CampaignResource::getUpdatedDate()
{
	return updated_date;
}

void
CampaignResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}


