#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "UserBaseResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

UserBaseResource::UserBaseResource()
{
	//__init();
}

UserBaseResource::~UserBaseResource()
{
	//__cleanup();
}

void
UserBaseResource::__init()
{
	//
	//
	//avatar_url = std::string();
	//
	//
	//display_name = std::string();
	//
	//
	//email = std::string();
	//
	//
	//fullname = std::string();
	//
	//
	//id = int(0);
	//
	//
	//last_activity = long(0);
	//
	//
	//last_updated = long(0);
	//
	//
	//member_since = long(0);
	//
	//
	//username = std::string();
	//
}

void
UserBaseResource::__cleanup()
{
	//if(avatar_url != NULL) {
	//
	//delete avatar_url;
	//avatar_url = NULL;
	//}
	//if(display_name != NULL) {
	//
	//delete display_name;
	//display_name = NULL;
	//}
	//if(email != NULL) {
	//
	//delete email;
	//email = NULL;
	//}
	//if(fullname != NULL) {
	//
	//delete fullname;
	//fullname = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(last_activity != NULL) {
	//
	//delete last_activity;
	//last_activity = NULL;
	//}
	//if(last_updated != NULL) {
	//
	//delete last_updated;
	//last_updated = NULL;
	//}
	//if(member_since != NULL) {
	//
	//delete member_since;
	//member_since = NULL;
	//}
	//if(username != NULL) {
	//
	//delete username;
	//username = NULL;
	//}
	//
}

void
UserBaseResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *avatar_urlKey = "avatar_url";
	node = json_object_get_member(pJsonObject, avatar_urlKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&avatar_url, node, "std::string", "");
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
	const gchar *emailKey = "email";
	node = json_object_get_member(pJsonObject, emailKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&email, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *fullnameKey = "fullname";
	node = json_object_get_member(pJsonObject, fullnameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&fullname, node, "std::string", "");
		} else {
			
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
	const gchar *last_activityKey = "last_activity";
	node = json_object_get_member(pJsonObject, last_activityKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&last_activity, node, "long long", "");
		} else {
			
		}
	}
	const gchar *last_updatedKey = "last_updated";
	node = json_object_get_member(pJsonObject, last_updatedKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&last_updated, node, "long long", "");
		} else {
			
		}
	}
	const gchar *member_sinceKey = "member_since";
	node = json_object_get_member(pJsonObject, member_sinceKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&member_since, node, "long long", "");
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

UserBaseResource::UserBaseResource(char* json)
{
	this->fromJson(json);
}

char*
UserBaseResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getAvatarUrl();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *avatar_urlKey = "avatar_url";
	json_object_set_member(pJsonObject, avatar_urlKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDisplayName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *display_nameKey = "display_name";
	json_object_set_member(pJsonObject, display_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getEmail();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *emailKey = "email";
	json_object_set_member(pJsonObject, emailKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getFullname();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *fullnameKey = "fullname";
	json_object_set_member(pJsonObject, fullnameKey, node);
	if (isprimitive("int")) {
		int obj = getId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("long long")) {
		long long obj = getLastActivity();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *last_activityKey = "last_activity";
	json_object_set_member(pJsonObject, last_activityKey, node);
	if (isprimitive("long long")) {
		long long obj = getLastUpdated();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *last_updatedKey = "last_updated";
	json_object_set_member(pJsonObject, last_updatedKey, node);
	if (isprimitive("long long")) {
		long long obj = getMemberSince();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *member_sinceKey = "member_since";
	json_object_set_member(pJsonObject, member_sinceKey, node);
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

std::string
UserBaseResource::getAvatarUrl()
{
	return avatar_url;
}

void
UserBaseResource::setAvatarUrl(std::string  avatar_url)
{
	this->avatar_url = avatar_url;
}

std::string
UserBaseResource::getDisplayName()
{
	return display_name;
}

void
UserBaseResource::setDisplayName(std::string  display_name)
{
	this->display_name = display_name;
}

std::string
UserBaseResource::getEmail()
{
	return email;
}

void
UserBaseResource::setEmail(std::string  email)
{
	this->email = email;
}

std::string
UserBaseResource::getFullname()
{
	return fullname;
}

void
UserBaseResource::setFullname(std::string  fullname)
{
	this->fullname = fullname;
}

int
UserBaseResource::getId()
{
	return id;
}

void
UserBaseResource::setId(int  id)
{
	this->id = id;
}

long long
UserBaseResource::getLastActivity()
{
	return last_activity;
}

void
UserBaseResource::setLastActivity(long long  last_activity)
{
	this->last_activity = last_activity;
}

long long
UserBaseResource::getLastUpdated()
{
	return last_updated;
}

void
UserBaseResource::setLastUpdated(long long  last_updated)
{
	this->last_updated = last_updated;
}

long long
UserBaseResource::getMemberSince()
{
	return member_since;
}

void
UserBaseResource::setMemberSince(long long  member_since)
{
	this->member_since = member_since;
}

std::string
UserBaseResource::getUsername()
{
	return username;
}

void
UserBaseResource::setUsername(std::string  username)
{
	this->username = username;
}


