#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "UserLevelingResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

UserLevelingResource::UserLevelingResource()
{
	//__init();
}

UserLevelingResource::~UserLevelingResource()
{
	//__cleanup();
}

void
UserLevelingResource::__init()
{
	//
	//
	//last_tier_name = std::string();
	//
	//
	//last_tier_progress = int(0);
	//
	//
	//level_name = std::string();
	//
	//
	//next_tier_name = std::string();
	//
	//
	//next_tier_progress = int(0);
	//
	//
	//progress = int(0);
	//
	//new std::list()std::list> tier_names;
	//
	//
	//
	//user_id = int(0);
	//
}

void
UserLevelingResource::__cleanup()
{
	//if(last_tier_name != NULL) {
	//
	//delete last_tier_name;
	//last_tier_name = NULL;
	//}
	//if(last_tier_progress != NULL) {
	//
	//delete last_tier_progress;
	//last_tier_progress = NULL;
	//}
	//if(level_name != NULL) {
	//
	//delete level_name;
	//level_name = NULL;
	//}
	//if(next_tier_name != NULL) {
	//
	//delete next_tier_name;
	//next_tier_name = NULL;
	//}
	//if(next_tier_progress != NULL) {
	//
	//delete next_tier_progress;
	//next_tier_progress = NULL;
	//}
	//if(progress != NULL) {
	//
	//delete progress;
	//progress = NULL;
	//}
	//if(tier_names != NULL) {
	//tier_names.RemoveAll(true);
	//delete tier_names;
	//tier_names = NULL;
	//}
	//if(user_id != NULL) {
	//
	//delete user_id;
	//user_id = NULL;
	//}
	//
}

void
UserLevelingResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *last_tier_nameKey = "last_tier_name";
	node = json_object_get_member(pJsonObject, last_tier_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&last_tier_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *last_tier_progressKey = "last_tier_progress";
	node = json_object_get_member(pJsonObject, last_tier_progressKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&last_tier_progress, node, "int", "");
		} else {
			
		}
	}
	const gchar *level_nameKey = "level_name";
	node = json_object_get_member(pJsonObject, level_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&level_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *next_tier_nameKey = "next_tier_name";
	node = json_object_get_member(pJsonObject, next_tier_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&next_tier_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *next_tier_progressKey = "next_tier_progress";
	node = json_object_get_member(pJsonObject, next_tier_progressKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&next_tier_progress, node, "int", "");
		} else {
			
		}
	}
	const gchar *progressKey = "progress";
	node = json_object_get_member(pJsonObject, progressKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&progress, node, "int", "");
		} else {
			
		}
	}
	const gchar *tier_namesKey = "tier_names";
	node = json_object_get_member(pJsonObject, tier_namesKey);
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
			tier_names = new_list;
		}
		
	}
	const gchar *user_idKey = "user_id";
	node = json_object_get_member(pJsonObject, user_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&user_id, node, "int", "");
		} else {
			
		}
	}
}

UserLevelingResource::UserLevelingResource(char* json)
{
	this->fromJson(json);
}

char*
UserLevelingResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getLastTierName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *last_tier_nameKey = "last_tier_name";
	json_object_set_member(pJsonObject, last_tier_nameKey, node);
	if (isprimitive("int")) {
		int obj = getLastTierProgress();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *last_tier_progressKey = "last_tier_progress";
	json_object_set_member(pJsonObject, last_tier_progressKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLevelName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *level_nameKey = "level_name";
	json_object_set_member(pJsonObject, level_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getNextTierName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *next_tier_nameKey = "next_tier_name";
	json_object_set_member(pJsonObject, next_tier_nameKey, node);
	if (isprimitive("int")) {
		int obj = getNextTierProgress();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *next_tier_progressKey = "next_tier_progress";
	json_object_set_member(pJsonObject, next_tier_progressKey, node);
	if (isprimitive("int")) {
		int obj = getProgress();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *progressKey = "progress";
	json_object_set_member(pJsonObject, progressKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getTierNames());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getTierNames());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *tier_namesKey = "tier_names";
	json_object_set_member(pJsonObject, tier_namesKey, node);
	if (isprimitive("int")) {
		int obj = getUserId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *user_idKey = "user_id";
	json_object_set_member(pJsonObject, user_idKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
UserLevelingResource::getLastTierName()
{
	return last_tier_name;
}

void
UserLevelingResource::setLastTierName(std::string  last_tier_name)
{
	this->last_tier_name = last_tier_name;
}

int
UserLevelingResource::getLastTierProgress()
{
	return last_tier_progress;
}

void
UserLevelingResource::setLastTierProgress(int  last_tier_progress)
{
	this->last_tier_progress = last_tier_progress;
}

std::string
UserLevelingResource::getLevelName()
{
	return level_name;
}

void
UserLevelingResource::setLevelName(std::string  level_name)
{
	this->level_name = level_name;
}

std::string
UserLevelingResource::getNextTierName()
{
	return next_tier_name;
}

void
UserLevelingResource::setNextTierName(std::string  next_tier_name)
{
	this->next_tier_name = next_tier_name;
}

int
UserLevelingResource::getNextTierProgress()
{
	return next_tier_progress;
}

void
UserLevelingResource::setNextTierProgress(int  next_tier_progress)
{
	this->next_tier_progress = next_tier_progress;
}

int
UserLevelingResource::getProgress()
{
	return progress;
}

void
UserLevelingResource::setProgress(int  progress)
{
	this->progress = progress;
}

std::list<std::string>
UserLevelingResource::getTierNames()
{
	return tier_names;
}

void
UserLevelingResource::setTierNames(std::list <std::string> tier_names)
{
	this->tier_names = tier_names;
}

int
UserLevelingResource::getUserId()
{
	return user_id;
}

void
UserLevelingResource::setUserId(int  user_id)
{
	this->user_id = user_id;
}


