#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "TopicSubscriberResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

TopicSubscriberResource::TopicSubscriberResource()
{
	//__init();
}

TopicSubscriberResource::~TopicSubscriberResource()
{
	//__cleanup();
}

void
TopicSubscriberResource::__init()
{
	//
	//
	//disabled = bool(false);
	//
	//
	//topic_id = std::string();
	//
	//
	//user_id = int(0);
	//
	//
	//username = std::string();
	//
}

void
TopicSubscriberResource::__cleanup()
{
	//if(disabled != NULL) {
	//
	//delete disabled;
	//disabled = NULL;
	//}
	//if(topic_id != NULL) {
	//
	//delete topic_id;
	//topic_id = NULL;
	//}
	//if(user_id != NULL) {
	//
	//delete user_id;
	//user_id = NULL;
	//}
	//if(username != NULL) {
	//
	//delete username;
	//username = NULL;
	//}
	//
}

void
TopicSubscriberResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *disabledKey = "disabled";
	node = json_object_get_member(pJsonObject, disabledKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&disabled, node, "bool", "");
		} else {
			
		}
	}
	const gchar *topic_idKey = "topic_id";
	node = json_object_get_member(pJsonObject, topic_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&topic_id, node, "std::string", "");
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
	const gchar *usernameKey = "username";
	node = json_object_get_member(pJsonObject, usernameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&username, node, "std::string", "");
		} else {
			
		}
	}
}

TopicSubscriberResource::TopicSubscriberResource(char* json)
{
	this->fromJson(json);
}

char*
TopicSubscriberResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getDisabled();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *disabledKey = "disabled";
	json_object_set_member(pJsonObject, disabledKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTopicId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *topic_idKey = "topic_id";
	json_object_set_member(pJsonObject, topic_idKey, node);
	if (isprimitive("int")) {
		int obj = getUserId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *user_idKey = "user_id";
	json_object_set_member(pJsonObject, user_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUsername();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *usernameKey = "username";
	json_object_set_member(pJsonObject, usernameKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
TopicSubscriberResource::getDisabled()
{
	return disabled;
}

void
TopicSubscriberResource::setDisabled(bool  disabled)
{
	this->disabled = disabled;
}

std::string
TopicSubscriberResource::getTopicId()
{
	return topic_id;
}

void
TopicSubscriberResource::setTopicId(std::string  topic_id)
{
	this->topic_id = topic_id;
}

int
TopicSubscriberResource::getUserId()
{
	return user_id;
}

void
TopicSubscriberResource::setUserId(int  user_id)
{
	this->user_id = user_id;
}

std::string
TopicSubscriberResource::getUsername()
{
	return username;
}

void
TopicSubscriberResource::setUsername(std::string  username)
{
	this->username = username;
}


