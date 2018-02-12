#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "NotificationUserTypeResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

NotificationUserTypeResource::NotificationUserTypeResource()
{
	//__init();
}

NotificationUserTypeResource::~NotificationUserTypeResource()
{
	//__cleanup();
}

void
NotificationUserTypeResource::__init()
{
	//
	//
	//silenced = bool(false);
	//
	//
	//type = std::string();
	//
	//
	//user_id = int(0);
	//
}

void
NotificationUserTypeResource::__cleanup()
{
	//if(silenced != NULL) {
	//
	//delete silenced;
	//silenced = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(user_id != NULL) {
	//
	//delete user_id;
	//user_id = NULL;
	//}
	//
}

void
NotificationUserTypeResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *silencedKey = "silenced";
	node = json_object_get_member(pJsonObject, silencedKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&silenced, node, "bool", "");
		} else {
			
		}
	}
	const gchar *typeKey = "type";
	node = json_object_get_member(pJsonObject, typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type, node, "std::string", "");
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

NotificationUserTypeResource::NotificationUserTypeResource(char* json)
{
	this->fromJson(json);
}

char*
NotificationUserTypeResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getSilenced();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *silencedKey = "silenced";
	json_object_set_member(pJsonObject, silencedKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
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

bool
NotificationUserTypeResource::getSilenced()
{
	return silenced;
}

void
NotificationUserTypeResource::setSilenced(bool  silenced)
{
	this->silenced = silenced;
}

std::string
NotificationUserTypeResource::getType()
{
	return type;
}

void
NotificationUserTypeResource::setType(std::string  type)
{
	this->type = type;
}

int
NotificationUserTypeResource::getUserId()
{
	return user_id;
}

void
NotificationUserTypeResource::setUserId(int  user_id)
{
	this->user_id = user_id;
}


