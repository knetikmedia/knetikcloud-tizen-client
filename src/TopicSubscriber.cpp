#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "TopicSubscriber.h"

using namespace std;
using namespace Tizen::ArtikCloud;

TopicSubscriber::TopicSubscriber()
{
	//__init();
}

TopicSubscriber::~TopicSubscriber()
{
	//__cleanup();
}

void
TopicSubscriber::__init()
{
	//
	//
	//disabled = bool(false);
	//
	//
	//email = std::string();
	//
	//
	//join_date = long(0);
	//
	//
	//mobile_number = std::string();
	//
	//
	//topic_id = std::string();
	//
	//
	//topic_subscriber_map = null;
	//
	//
	//user_id = int(0);
	//
	//
	//username = std::string();
	//
}

void
TopicSubscriber::__cleanup()
{
	//if(disabled != NULL) {
	//
	//delete disabled;
	//disabled = NULL;
	//}
	//if(email != NULL) {
	//
	//delete email;
	//email = NULL;
	//}
	//if(join_date != NULL) {
	//
	//delete join_date;
	//join_date = NULL;
	//}
	//if(mobile_number != NULL) {
	//
	//delete mobile_number;
	//mobile_number = NULL;
	//}
	//if(topic_id != NULL) {
	//
	//delete topic_id;
	//topic_id = NULL;
	//}
	//if(topic_subscriber_map != NULL) {
	//
	//delete topic_subscriber_map;
	//topic_subscriber_map = NULL;
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
TopicSubscriber::fromJson(char* jsonStr)
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
	const gchar *emailKey = "email";
	node = json_object_get_member(pJsonObject, emailKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&email, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *join_dateKey = "join_date";
	node = json_object_get_member(pJsonObject, join_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&join_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *mobile_numberKey = "mobile_number";
	node = json_object_get_member(pJsonObject, mobile_numberKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&mobile_number, node, "std::string", "");
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
	const gchar *topic_subscriber_mapKey = "topic_subscriber_map";
	node = json_object_get_member(pJsonObject, topic_subscriber_mapKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&topic_subscriber_map, node, "std::string", "");
		} else {
			
			std::string* obj = static_cast<std::string*> (&topic_subscriber_map);
			obj->fromJson(json_to_string(node, false));
			
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

TopicSubscriber::TopicSubscriber(char* json)
{
	this->fromJson(json);
}

char*
TopicSubscriber::toJson()
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
		std::string obj = getEmail();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *emailKey = "email";
	json_object_set_member(pJsonObject, emailKey, node);
	if (isprimitive("long long")) {
		long long obj = getJoinDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *join_dateKey = "join_date";
	json_object_set_member(pJsonObject, join_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMobileNumber();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *mobile_numberKey = "mobile_number";
	json_object_set_member(pJsonObject, mobile_numberKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTopicId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *topic_idKey = "topic_id";
	json_object_set_member(pJsonObject, topic_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTopicSubscriberMap();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
		std::string obj = static_cast<std::string> (getTopicSubscriberMap());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *topic_subscriber_mapKey = "topic_subscriber_map";
	json_object_set_member(pJsonObject, topic_subscriber_mapKey, node);
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
TopicSubscriber::getDisabled()
{
	return disabled;
}

void
TopicSubscriber::setDisabled(bool  disabled)
{
	this->disabled = disabled;
}

std::string
TopicSubscriber::getEmail()
{
	return email;
}

void
TopicSubscriber::setEmail(std::string  email)
{
	this->email = email;
}

long long
TopicSubscriber::getJoinDate()
{
	return join_date;
}

void
TopicSubscriber::setJoinDate(long long  join_date)
{
	this->join_date = join_date;
}

std::string
TopicSubscriber::getMobileNumber()
{
	return mobile_number;
}

void
TopicSubscriber::setMobileNumber(std::string  mobile_number)
{
	this->mobile_number = mobile_number;
}

std::string
TopicSubscriber::getTopicId()
{
	return topic_id;
}

void
TopicSubscriber::setTopicId(std::string  topic_id)
{
	this->topic_id = topic_id;
}

std::string
TopicSubscriber::getTopicSubscriberMap()
{
	return topic_subscriber_map;
}

void
TopicSubscriber::setTopicSubscriberMap(std::string  topic_subscriber_map)
{
	this->topic_subscriber_map = topic_subscriber_map;
}

int
TopicSubscriber::getUserId()
{
	return user_id;
}

void
TopicSubscriber::setUserId(int  user_id)
{
	this->user_id = user_id;
}

std::string
TopicSubscriber::getUsername()
{
	return username;
}

void
TopicSubscriber::setUsername(std::string  username)
{
	this->username = username;
}


