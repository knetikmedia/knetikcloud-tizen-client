#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Topic.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Topic::Topic()
{
	//__init();
}

Topic::~Topic()
{
	//__cleanup();
}

void
Topic::__init()
{
	//
	//
	//created_date = long(0);
	//
	//
	//display_name = std::string();
	//
	//
	//id = std::string();
	//
	//
	//locked = bool(false);
	//
	//new std::list()std::list> tags;
	//
	//
	//
	//topic_map = null;
	//
	//
	//updated_date = long(0);
	//
	//
	//user_count = int(0);
	//
}

void
Topic::__cleanup()
{
	//if(created_date != NULL) {
	//
	//delete created_date;
	//created_date = NULL;
	//}
	//if(display_name != NULL) {
	//
	//delete display_name;
	//display_name = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(locked != NULL) {
	//
	//delete locked;
	//locked = NULL;
	//}
	//if(tags != NULL) {
	//tags.RemoveAll(true);
	//delete tags;
	//tags = NULL;
	//}
	//if(topic_map != NULL) {
	//
	//delete topic_map;
	//topic_map = NULL;
	//}
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//if(user_count != NULL) {
	//
	//delete user_count;
	//user_count = NULL;
	//}
	//
}

void
Topic::fromJson(char* jsonStr)
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
	const gchar *display_nameKey = "display_name";
	node = json_object_get_member(pJsonObject, display_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&display_name, node, "std::string", "");
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
	const gchar *lockedKey = "locked";
	node = json_object_get_member(pJsonObject, lockedKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&locked, node, "bool", "");
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
	const gchar *topic_mapKey = "topic_map";
	node = json_object_get_member(pJsonObject, topic_mapKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&topic_map, node, "std::string", "");
		} else {
			
			std::string* obj = static_cast<std::string*> (&topic_map);
			obj->fromJson(json_to_string(node, false));
			
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
	const gchar *user_countKey = "user_count";
	node = json_object_get_member(pJsonObject, user_countKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&user_count, node, "int", "");
		} else {
			
		}
	}
}

Topic::Topic(char* json)
{
	this->fromJson(json);
}

char*
Topic::toJson()
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
	if (isprimitive("std::string")) {
		std::string obj = getDisplayName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *display_nameKey = "display_name";
	json_object_set_member(pJsonObject, display_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("bool")) {
		bool obj = getLocked();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *lockedKey = "locked";
	json_object_set_member(pJsonObject, lockedKey, node);
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
	if (isprimitive("std::string")) {
		std::string obj = getTopicMap();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
		std::string obj = static_cast<std::string> (getTopicMap());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *topic_mapKey = "topic_map";
	json_object_set_member(pJsonObject, topic_mapKey, node);
	if (isprimitive("long long")) {
		long long obj = getUpdatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *updated_dateKey = "updated_date";
	json_object_set_member(pJsonObject, updated_dateKey, node);
	if (isprimitive("int")) {
		int obj = getUserCount();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *user_countKey = "user_count";
	json_object_set_member(pJsonObject, user_countKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
Topic::getCreatedDate()
{
	return created_date;
}

void
Topic::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

std::string
Topic::getDisplayName()
{
	return display_name;
}

void
Topic::setDisplayName(std::string  display_name)
{
	this->display_name = display_name;
}

std::string
Topic::getId()
{
	return id;
}

void
Topic::setId(std::string  id)
{
	this->id = id;
}

bool
Topic::getLocked()
{
	return locked;
}

void
Topic::setLocked(bool  locked)
{
	this->locked = locked;
}

std::list<std::string>
Topic::getTags()
{
	return tags;
}

void
Topic::setTags(std::list <std::string> tags)
{
	this->tags = tags;
}

std::string
Topic::getTopicMap()
{
	return topic_map;
}

void
Topic::setTopicMap(std::string  topic_map)
{
	this->topic_map = topic_map;
}

long long
Topic::getUpdatedDate()
{
	return updated_date;
}

void
Topic::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}

int
Topic::getUserCount()
{
	return user_count;
}

void
Topic::setUserCount(int  user_count)
{
	this->user_count = user_count;
}


