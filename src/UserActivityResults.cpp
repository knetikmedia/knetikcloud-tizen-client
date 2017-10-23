#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "UserActivityResults.h"

using namespace std;
using namespace Tizen::ArtikCloud;

UserActivityResults::UserActivityResults()
{
	//__init();
}

UserActivityResults::~UserActivityResults()
{
	//__cleanup();
}

void
UserActivityResults::__init()
{
	//
	//new std::list()std::list> currency_rewards;
	//
	//
	//new std::list()std::list> item_rewards;
	//
	//
	//
	//rank = long(0);
	//
	//
	//score = long(0);
	//
	//new std::list()std::list> tags;
	//
	//
	//
	//ties = int(0);
	//
	//
	//updated_date = long(0);
	//
	//
	//user = new SimpleUserResource();
	//
}

void
UserActivityResults::__cleanup()
{
	//if(currency_rewards != NULL) {
	//currency_rewards.RemoveAll(true);
	//delete currency_rewards;
	//currency_rewards = NULL;
	//}
	//if(item_rewards != NULL) {
	//item_rewards.RemoveAll(true);
	//delete item_rewards;
	//item_rewards = NULL;
	//}
	//if(rank != NULL) {
	//
	//delete rank;
	//rank = NULL;
	//}
	//if(score != NULL) {
	//
	//delete score;
	//score = NULL;
	//}
	//if(tags != NULL) {
	//tags.RemoveAll(true);
	//delete tags;
	//tags = NULL;
	//}
	//if(ties != NULL) {
	//
	//delete ties;
	//ties = NULL;
	//}
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//if(user != NULL) {
	//
	//delete user;
	//user = NULL;
	//}
	//
}

void
UserActivityResults::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *currency_rewardsKey = "currency_rewards";
	node = json_object_get_member(pJsonObject, currency_rewardsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<RewardCurrencyResource> new_list;
			RewardCurrencyResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("RewardCurrencyResource")) {
					jsonToValue(&inst, temp_json, "RewardCurrencyResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			currency_rewards = new_list;
		}
		
	}
	const gchar *item_rewardsKey = "item_rewards";
	node = json_object_get_member(pJsonObject, item_rewardsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<RewardItemResource> new_list;
			RewardItemResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("RewardItemResource")) {
					jsonToValue(&inst, temp_json, "RewardItemResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			item_rewards = new_list;
		}
		
	}
	const gchar *rankKey = "rank";
	node = json_object_get_member(pJsonObject, rankKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&rank, node, "long long", "");
		} else {
			
		}
	}
	const gchar *scoreKey = "score";
	node = json_object_get_member(pJsonObject, scoreKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&score, node, "long long", "");
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
	const gchar *tiesKey = "ties";
	node = json_object_get_member(pJsonObject, tiesKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&ties, node, "int", "");
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
	const gchar *userKey = "user";
	node = json_object_get_member(pJsonObject, userKey);
	if (node !=NULL) {
	

		if (isprimitive("SimpleUserResource")) {
			jsonToValue(&user, node, "SimpleUserResource", "SimpleUserResource");
		} else {
			
			SimpleUserResource* obj = static_cast<SimpleUserResource*> (&user);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

UserActivityResults::UserActivityResults(char* json)
{
	this->fromJson(json);
}

char*
UserActivityResults::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("RewardCurrencyResource")) {
		list<RewardCurrencyResource> new_list = static_cast<list <RewardCurrencyResource> > (getCurrencyRewards());
		node = converttoJson(&new_list, "RewardCurrencyResource", "array");
	} else {
		node = json_node_alloc();
		list<RewardCurrencyResource> new_list = static_cast<list <RewardCurrencyResource> > (getCurrencyRewards());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<RewardCurrencyResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			RewardCurrencyResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *currency_rewardsKey = "currency_rewards";
	json_object_set_member(pJsonObject, currency_rewardsKey, node);
	if (isprimitive("RewardItemResource")) {
		list<RewardItemResource> new_list = static_cast<list <RewardItemResource> > (getItemRewards());
		node = converttoJson(&new_list, "RewardItemResource", "array");
	} else {
		node = json_node_alloc();
		list<RewardItemResource> new_list = static_cast<list <RewardItemResource> > (getItemRewards());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<RewardItemResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			RewardItemResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *item_rewardsKey = "item_rewards";
	json_object_set_member(pJsonObject, item_rewardsKey, node);
	if (isprimitive("long long")) {
		long long obj = getRank();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *rankKey = "rank";
	json_object_set_member(pJsonObject, rankKey, node);
	if (isprimitive("long long")) {
		long long obj = getScore();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *scoreKey = "score";
	json_object_set_member(pJsonObject, scoreKey, node);
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
	if (isprimitive("int")) {
		int obj = getTies();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *tiesKey = "ties";
	json_object_set_member(pJsonObject, tiesKey, node);
	if (isprimitive("long long")) {
		long long obj = getUpdatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *updated_dateKey = "updated_date";
	json_object_set_member(pJsonObject, updated_dateKey, node);
	if (isprimitive("SimpleUserResource")) {
		SimpleUserResource obj = getUser();
		node = converttoJson(&obj, "SimpleUserResource", "");
	}
	else {
		
		SimpleUserResource obj = static_cast<SimpleUserResource> (getUser());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *userKey = "user";
	json_object_set_member(pJsonObject, userKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::list<RewardCurrencyResource>
UserActivityResults::getCurrencyRewards()
{
	return currency_rewards;
}

void
UserActivityResults::setCurrencyRewards(std::list <RewardCurrencyResource> currency_rewards)
{
	this->currency_rewards = currency_rewards;
}

std::list<RewardItemResource>
UserActivityResults::getItemRewards()
{
	return item_rewards;
}

void
UserActivityResults::setItemRewards(std::list <RewardItemResource> item_rewards)
{
	this->item_rewards = item_rewards;
}

long long
UserActivityResults::getRank()
{
	return rank;
}

void
UserActivityResults::setRank(long long  rank)
{
	this->rank = rank;
}

long long
UserActivityResults::getScore()
{
	return score;
}

void
UserActivityResults::setScore(long long  score)
{
	this->score = score;
}

std::list<std::string>
UserActivityResults::getTags()
{
	return tags;
}

void
UserActivityResults::setTags(std::list <std::string> tags)
{
	this->tags = tags;
}

int
UserActivityResults::getTies()
{
	return ties;
}

void
UserActivityResults::setTies(int  ties)
{
	this->ties = ties;
}

long long
UserActivityResults::getUpdatedDate()
{
	return updated_date;
}

void
UserActivityResults::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}

SimpleUserResource
UserActivityResults::getUser()
{
	return user;
}

void
UserActivityResults::setUser(SimpleUserResource  user)
{
	this->user = user;
}


