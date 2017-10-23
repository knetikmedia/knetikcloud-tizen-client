#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "RewardSetResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

RewardSetResource::RewardSetResource()
{
	//__init();
}

RewardSetResource::~RewardSetResource()
{
	//__cleanup();
}

void
RewardSetResource::__init()
{
	//
	//
	//created_date = long(0);
	//
	//new std::list()std::list> currency_rewards;
	//
	//
	//
	//id = int(0);
	//
	//new std::list()std::list> item_rewards;
	//
	//
	//
	//long_description = std::string();
	//
	//
	//max_placing = int(0);
	//
	//
	//name = std::string();
	//
	//
	//short_description = std::string();
	//
	//
	//unique_key = std::string();
	//
	//
	//updated_date = long(0);
	//
}

void
RewardSetResource::__cleanup()
{
	//if(created_date != NULL) {
	//
	//delete created_date;
	//created_date = NULL;
	//}
	//if(currency_rewards != NULL) {
	//currency_rewards.RemoveAll(true);
	//delete currency_rewards;
	//currency_rewards = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(item_rewards != NULL) {
	//item_rewards.RemoveAll(true);
	//delete item_rewards;
	//item_rewards = NULL;
	//}
	//if(long_description != NULL) {
	//
	//delete long_description;
	//long_description = NULL;
	//}
	//if(max_placing != NULL) {
	//
	//delete max_placing;
	//max_placing = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(short_description != NULL) {
	//
	//delete short_description;
	//short_description = NULL;
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
RewardSetResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *created_dateKey = "created_date";
	node = json_object_get_member(pJsonObject, created_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&created_date, node, "long long", "");
		} else {
			
		}
	}
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
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&id, node, "int", "");
		} else {
			
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
	const gchar *long_descriptionKey = "long_description";
	node = json_object_get_member(pJsonObject, long_descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&long_description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *max_placingKey = "max_placing";
	node = json_object_get_member(pJsonObject, max_placingKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&max_placing, node, "int", "");
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
	const gchar *short_descriptionKey = "short_description";
	node = json_object_get_member(pJsonObject, short_descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&short_description, node, "std::string", "");
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

RewardSetResource::RewardSetResource(char* json)
{
	this->fromJson(json);
}

char*
RewardSetResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getCreatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *created_dateKey = "created_date";
	json_object_set_member(pJsonObject, created_dateKey, node);
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
	if (isprimitive("int")) {
		int obj = getId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
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
	if (isprimitive("std::string")) {
		std::string obj = getLongDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *long_descriptionKey = "long_description";
	json_object_set_member(pJsonObject, long_descriptionKey, node);
	if (isprimitive("int")) {
		int obj = getMaxPlacing();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *max_placingKey = "max_placing";
	json_object_set_member(pJsonObject, max_placingKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getShortDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *short_descriptionKey = "short_description";
	json_object_set_member(pJsonObject, short_descriptionKey, node);
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

long long
RewardSetResource::getCreatedDate()
{
	return created_date;
}

void
RewardSetResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

std::list<RewardCurrencyResource>
RewardSetResource::getCurrencyRewards()
{
	return currency_rewards;
}

void
RewardSetResource::setCurrencyRewards(std::list <RewardCurrencyResource> currency_rewards)
{
	this->currency_rewards = currency_rewards;
}

int
RewardSetResource::getId()
{
	return id;
}

void
RewardSetResource::setId(int  id)
{
	this->id = id;
}

std::list<RewardItemResource>
RewardSetResource::getItemRewards()
{
	return item_rewards;
}

void
RewardSetResource::setItemRewards(std::list <RewardItemResource> item_rewards)
{
	this->item_rewards = item_rewards;
}

std::string
RewardSetResource::getLongDescription()
{
	return long_description;
}

void
RewardSetResource::setLongDescription(std::string  long_description)
{
	this->long_description = long_description;
}

int
RewardSetResource::getMaxPlacing()
{
	return max_placing;
}

void
RewardSetResource::setMaxPlacing(int  max_placing)
{
	this->max_placing = max_placing;
}

std::string
RewardSetResource::getName()
{
	return name;
}

void
RewardSetResource::setName(std::string  name)
{
	this->name = name;
}

std::string
RewardSetResource::getShortDescription()
{
	return short_description;
}

void
RewardSetResource::setShortDescription(std::string  short_description)
{
	this->short_description = short_description;
}

std::string
RewardSetResource::getUniqueKey()
{
	return unique_key;
}

void
RewardSetResource::setUniqueKey(std::string  unique_key)
{
	this->unique_key = unique_key;
}

long long
RewardSetResource::getUpdatedDate()
{
	return updated_date;
}

void
RewardSetResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}


