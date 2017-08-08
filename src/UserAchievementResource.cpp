#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "UserAchievementResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

UserAchievementResource::UserAchievementResource()
{
	//__init();
}

UserAchievementResource::~UserAchievementResource()
{
	//__cleanup();
}

void
UserAchievementResource::__init()
{
	//
	//
	//achieved = bool(false);
	//
	//
	//achievement_name = std::string();
	//
	//
	//created_date = long(0);
	//
	//
	//earned_date = long(0);
	//
	//
	//updated_date = long(0);
	//
}

void
UserAchievementResource::__cleanup()
{
	//if(achieved != NULL) {
	//
	//delete achieved;
	//achieved = NULL;
	//}
	//if(achievement_name != NULL) {
	//
	//delete achievement_name;
	//achievement_name = NULL;
	//}
	//if(created_date != NULL) {
	//
	//delete created_date;
	//created_date = NULL;
	//}
	//if(earned_date != NULL) {
	//
	//delete earned_date;
	//earned_date = NULL;
	//}
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//
}

void
UserAchievementResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *achievedKey = "achieved";
	node = json_object_get_member(pJsonObject, achievedKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&achieved, node, "bool", "");
		} else {
			
		}
	}
	const gchar *achievement_nameKey = "achievement_name";
	node = json_object_get_member(pJsonObject, achievement_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&achievement_name, node, "std::string", "");
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
	const gchar *earned_dateKey = "earned_date";
	node = json_object_get_member(pJsonObject, earned_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&earned_date, node, "long long", "");
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

UserAchievementResource::UserAchievementResource(char* json)
{
	this->fromJson(json);
}

char*
UserAchievementResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getAchieved();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *achievedKey = "achieved";
	json_object_set_member(pJsonObject, achievedKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAchievementName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *achievement_nameKey = "achievement_name";
	json_object_set_member(pJsonObject, achievement_nameKey, node);
	if (isprimitive("long long")) {
		long long obj = getCreatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *created_dateKey = "created_date";
	json_object_set_member(pJsonObject, created_dateKey, node);
	if (isprimitive("long long")) {
		long long obj = getEarnedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *earned_dateKey = "earned_date";
	json_object_set_member(pJsonObject, earned_dateKey, node);
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
UserAchievementResource::getAchieved()
{
	return achieved;
}

void
UserAchievementResource::setAchieved(bool  achieved)
{
	this->achieved = achieved;
}

std::string
UserAchievementResource::getAchievementName()
{
	return achievement_name;
}

void
UserAchievementResource::setAchievementName(std::string  achievement_name)
{
	this->achievement_name = achievement_name;
}

long long
UserAchievementResource::getCreatedDate()
{
	return created_date;
}

void
UserAchievementResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

long long
UserAchievementResource::getEarnedDate()
{
	return earned_date;
}

void
UserAchievementResource::setEarnedDate(long long  earned_date)
{
	this->earned_date = earned_date;
}

long long
UserAchievementResource::getUpdatedDate()
{
	return updated_date;
}

void
UserAchievementResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}


