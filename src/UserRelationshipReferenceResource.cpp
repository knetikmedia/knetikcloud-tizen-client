#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "UserRelationshipReferenceResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

UserRelationshipReferenceResource::UserRelationshipReferenceResource()
{
	//__init();
}

UserRelationshipReferenceResource::~UserRelationshipReferenceResource()
{
	//__cleanup();
}

void
UserRelationshipReferenceResource::__init()
{
	//
	//
	//avatar_url = std::string();
	//
	//
	//context = std::string();
	//
	//
	//display_name = std::string();
	//
	//
	//id = int(0);
	//
	//
	//relationship_id = long(0);
	//
	//
	//username = std::string();
	//
}

void
UserRelationshipReferenceResource::__cleanup()
{
	//if(avatar_url != NULL) {
	//
	//delete avatar_url;
	//avatar_url = NULL;
	//}
	//if(context != NULL) {
	//
	//delete context;
	//context = NULL;
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
	//if(relationship_id != NULL) {
	//
	//delete relationship_id;
	//relationship_id = NULL;
	//}
	//if(username != NULL) {
	//
	//delete username;
	//username = NULL;
	//}
	//
}

void
UserRelationshipReferenceResource::fromJson(char* jsonStr)
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
	const gchar *contextKey = "context";
	node = json_object_get_member(pJsonObject, contextKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&context, node, "std::string", "");
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
	

		if (isprimitive("int")) {
			jsonToValue(&id, node, "int", "");
		} else {
			
		}
	}
	const gchar *relationship_idKey = "relationship_id";
	node = json_object_get_member(pJsonObject, relationship_idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&relationship_id, node, "long long", "");
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

UserRelationshipReferenceResource::UserRelationshipReferenceResource(char* json)
{
	this->fromJson(json);
}

char*
UserRelationshipReferenceResource::toJson()
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
		std::string obj = getContext();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *contextKey = "context";
	json_object_set_member(pJsonObject, contextKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDisplayName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *display_nameKey = "display_name";
	json_object_set_member(pJsonObject, display_nameKey, node);
	if (isprimitive("int")) {
		int obj = getId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("long long")) {
		long long obj = getRelationshipId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *relationship_idKey = "relationship_id";
	json_object_set_member(pJsonObject, relationship_idKey, node);
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
UserRelationshipReferenceResource::getAvatarUrl()
{
	return avatar_url;
}

void
UserRelationshipReferenceResource::setAvatarUrl(std::string  avatar_url)
{
	this->avatar_url = avatar_url;
}

std::string
UserRelationshipReferenceResource::getContext()
{
	return context;
}

void
UserRelationshipReferenceResource::setContext(std::string  context)
{
	this->context = context;
}

std::string
UserRelationshipReferenceResource::getDisplayName()
{
	return display_name;
}

void
UserRelationshipReferenceResource::setDisplayName(std::string  display_name)
{
	this->display_name = display_name;
}

int
UserRelationshipReferenceResource::getId()
{
	return id;
}

void
UserRelationshipReferenceResource::setId(int  id)
{
	this->id = id;
}

long long
UserRelationshipReferenceResource::getRelationshipId()
{
	return relationship_id;
}

void
UserRelationshipReferenceResource::setRelationshipId(long long  relationship_id)
{
	this->relationship_id = relationship_id;
}

std::string
UserRelationshipReferenceResource::getUsername()
{
	return username;
}

void
UserRelationshipReferenceResource::setUsername(std::string  username)
{
	this->username = username;
}


