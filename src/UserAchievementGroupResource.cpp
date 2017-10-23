#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "UserAchievementGroupResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

UserAchievementGroupResource::UserAchievementGroupResource()
{
	//__init();
}

UserAchievementGroupResource::~UserAchievementGroupResource()
{
	//__cleanup();
}

void
UserAchievementGroupResource::__init()
{
	//
	//new std::list()std::list> achievements;
	//
	//
	//
	//group_name = std::string();
	//
	//
	//id = std::string();
	//
	//
	//progress = int(0);
	//
	//
	//user_id = int(0);
	//
}

void
UserAchievementGroupResource::__cleanup()
{
	//if(achievements != NULL) {
	//achievements.RemoveAll(true);
	//delete achievements;
	//achievements = NULL;
	//}
	//if(group_name != NULL) {
	//
	//delete group_name;
	//group_name = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(progress != NULL) {
	//
	//delete progress;
	//progress = NULL;
	//}
	//if(user_id != NULL) {
	//
	//delete user_id;
	//user_id = NULL;
	//}
	//
}

void
UserAchievementGroupResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *achievementsKey = "achievements";
	node = json_object_get_member(pJsonObject, achievementsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<UserAchievementResource> new_list;
			UserAchievementResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("UserAchievementResource")) {
					jsonToValue(&inst, temp_json, "UserAchievementResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			achievements = new_list;
		}
		
	}
	const gchar *group_nameKey = "group_name";
	node = json_object_get_member(pJsonObject, group_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&group_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&id, node, "std::string", "");
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
	const gchar *user_idKey = "user_id";
	node = json_object_get_member(pJsonObject, user_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&user_id, node, "int", "");
		} else {
			
		}
	}
}

UserAchievementGroupResource::UserAchievementGroupResource(char* json)
{
	this->fromJson(json);
}

char*
UserAchievementGroupResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("UserAchievementResource")) {
		list<UserAchievementResource> new_list = static_cast<list <UserAchievementResource> > (getAchievements());
		node = converttoJson(&new_list, "UserAchievementResource", "array");
	} else {
		node = json_node_alloc();
		list<UserAchievementResource> new_list = static_cast<list <UserAchievementResource> > (getAchievements());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<UserAchievementResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			UserAchievementResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *achievementsKey = "achievements";
	json_object_set_member(pJsonObject, achievementsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getGroupName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *group_nameKey = "group_name";
	json_object_set_member(pJsonObject, group_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("int")) {
		int obj = getProgress();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *progressKey = "progress";
	json_object_set_member(pJsonObject, progressKey, node);
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

std::list<UserAchievementResource>
UserAchievementGroupResource::getAchievements()
{
	return achievements;
}

void
UserAchievementGroupResource::setAchievements(std::list <UserAchievementResource> achievements)
{
	this->achievements = achievements;
}

std::string
UserAchievementGroupResource::getGroupName()
{
	return group_name;
}

void
UserAchievementGroupResource::setGroupName(std::string  group_name)
{
	this->group_name = group_name;
}

std::string
UserAchievementGroupResource::getId()
{
	return id;
}

void
UserAchievementGroupResource::setId(std::string  id)
{
	this->id = id;
}

int
UserAchievementGroupResource::getProgress()
{
	return progress;
}

void
UserAchievementGroupResource::setProgress(int  progress)
{
	this->progress = progress;
}

int
UserAchievementGroupResource::getUserId()
{
	return user_id;
}

void
UserAchievementGroupResource::setUserId(int  user_id)
{
	this->user_id = user_id;
}


