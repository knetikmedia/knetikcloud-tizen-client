#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ChatBlacklistResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ChatBlacklistResource::ChatBlacklistResource()
{
	//__init();
}

ChatBlacklistResource::~ChatBlacklistResource()
{
	//__cleanup();
}

void
ChatBlacklistResource::__init()
{
	//
	//
	//blacklisted_user = new SimpleUserResource();
	//
	//
	//created_date = long(0);
	//
	//
	//id = std::string();
	//
	//
	//user_id = int(0);
	//
}

void
ChatBlacklistResource::__cleanup()
{
	//if(blacklisted_user != NULL) {
	//
	//delete blacklisted_user;
	//blacklisted_user = NULL;
	//}
	//if(created_date != NULL) {
	//
	//delete created_date;
	//created_date = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(user_id != NULL) {
	//
	//delete user_id;
	//user_id = NULL;
	//}
	//
}

void
ChatBlacklistResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *blacklisted_userKey = "blacklisted_user";
	node = json_object_get_member(pJsonObject, blacklisted_userKey);
	if (node !=NULL) {
	

		if (isprimitive("SimpleUserResource")) {
			jsonToValue(&blacklisted_user, node, "SimpleUserResource", "SimpleUserResource");
		} else {
			
			SimpleUserResource* obj = static_cast<SimpleUserResource*> (&blacklisted_user);
			obj->fromJson(json_to_string(node, false));
			
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
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&id, node, "std::string", "");
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

ChatBlacklistResource::ChatBlacklistResource(char* json)
{
	this->fromJson(json);
}

char*
ChatBlacklistResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("SimpleUserResource")) {
		SimpleUserResource obj = getBlacklistedUser();
		node = converttoJson(&obj, "SimpleUserResource", "");
	}
	else {
		
		SimpleUserResource obj = static_cast<SimpleUserResource> (getBlacklistedUser());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *blacklisted_userKey = "blacklisted_user";
	json_object_set_member(pJsonObject, blacklisted_userKey, node);
	if (isprimitive("long long")) {
		long long obj = getCreatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *created_dateKey = "created_date";
	json_object_set_member(pJsonObject, created_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
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

SimpleUserResource
ChatBlacklistResource::getBlacklistedUser()
{
	return blacklisted_user;
}

void
ChatBlacklistResource::setBlacklistedUser(SimpleUserResource  blacklisted_user)
{
	this->blacklisted_user = blacklisted_user;
}

long long
ChatBlacklistResource::getCreatedDate()
{
	return created_date;
}

void
ChatBlacklistResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

std::string
ChatBlacklistResource::getId()
{
	return id;
}

void
ChatBlacklistResource::setId(std::string  id)
{
	this->id = id;
}

int
ChatBlacklistResource::getUserId()
{
	return user_id;
}

void
ChatBlacklistResource::setUserId(int  user_id)
{
	this->user_id = user_id;
}


