#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CommentSearch.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CommentSearch::CommentSearch()
{
	//__init();
}

CommentSearch::~CommentSearch()
{
	//__cleanup();
}

void
CommentSearch::__init()
{
	//
	//
	//content = std::string();
	//
	//
	//context = std::string();
	//
	//
	//context_id = int(0);
	//
	//
	//id = long(0);
	//
	//
	//owner_id = int(0);
	//
	//
	//owner_username = std::string();
	//
}

void
CommentSearch::__cleanup()
{
	//if(content != NULL) {
	//
	//delete content;
	//content = NULL;
	//}
	//if(context != NULL) {
	//
	//delete context;
	//context = NULL;
	//}
	//if(context_id != NULL) {
	//
	//delete context_id;
	//context_id = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(owner_id != NULL) {
	//
	//delete owner_id;
	//owner_id = NULL;
	//}
	//if(owner_username != NULL) {
	//
	//delete owner_username;
	//owner_username = NULL;
	//}
	//
}

void
CommentSearch::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *contentKey = "content";
	node = json_object_get_member(pJsonObject, contentKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&content, node, "std::string", "");
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
	const gchar *context_idKey = "context_id";
	node = json_object_get_member(pJsonObject, context_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&context_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&id, node, "long long", "");
		} else {
			
		}
	}
	const gchar *owner_idKey = "owner_id";
	node = json_object_get_member(pJsonObject, owner_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&owner_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *owner_usernameKey = "owner_username";
	node = json_object_get_member(pJsonObject, owner_usernameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&owner_username, node, "std::string", "");
		} else {
			
		}
	}
}

CommentSearch::CommentSearch(char* json)
{
	this->fromJson(json);
}

char*
CommentSearch::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getContent();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *contentKey = "content";
	json_object_set_member(pJsonObject, contentKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getContext();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *contextKey = "context";
	json_object_set_member(pJsonObject, contextKey, node);
	if (isprimitive("int")) {
		int obj = getContextId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *context_idKey = "context_id";
	json_object_set_member(pJsonObject, context_idKey, node);
	if (isprimitive("long long")) {
		long long obj = getId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("int")) {
		int obj = getOwnerId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *owner_idKey = "owner_id";
	json_object_set_member(pJsonObject, owner_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getOwnerUsername();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *owner_usernameKey = "owner_username";
	json_object_set_member(pJsonObject, owner_usernameKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
CommentSearch::getContent()
{
	return content;
}

void
CommentSearch::setContent(std::string  content)
{
	this->content = content;
}

std::string
CommentSearch::getContext()
{
	return context;
}

void
CommentSearch::setContext(std::string  context)
{
	this->context = context;
}

int
CommentSearch::getContextId()
{
	return context_id;
}

void
CommentSearch::setContextId(int  context_id)
{
	this->context_id = context_id;
}

long long
CommentSearch::getId()
{
	return id;
}

void
CommentSearch::setId(long long  id)
{
	this->id = id;
}

int
CommentSearch::getOwnerId()
{
	return owner_id;
}

void
CommentSearch::setOwnerId(int  owner_id)
{
	this->owner_id = owner_id;
}

std::string
CommentSearch::getOwnerUsername()
{
	return owner_username;
}

void
CommentSearch::setOwnerUsername(std::string  owner_username)
{
	this->owner_username = owner_username;
}


