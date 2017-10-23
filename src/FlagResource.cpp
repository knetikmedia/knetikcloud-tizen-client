#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "FlagResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

FlagResource::FlagResource()
{
	//__init();
}

FlagResource::~FlagResource()
{
	//__cleanup();
}

void
FlagResource::__init()
{
	//
	//
	//context = std::string();
	//
	//
	//context_id = std::string();
	//
	//
	//created_date = long(0);
	//
	//
	//id = long(0);
	//
	//
	//reason = std::string();
	//
	//
	//updated_date = long(0);
	//
	//
	//user = new SimpleUserResource();
	//
}

void
FlagResource::__cleanup()
{
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
	//if(reason != NULL) {
	//
	//delete reason;
	//reason = NULL;
	//}
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//if(user != NULL) {
	//
	//delete user;
	//user = NULL;
	//}
	//
}

void
FlagResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
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
	

		if (isprimitive("std::string")) {
			jsonToValue(&context_id, node, "std::string", "");
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
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&id, node, "long long", "");
		} else {
			
		}
	}
	const gchar *reasonKey = "reason";
	node = json_object_get_member(pJsonObject, reasonKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&reason, node, "std::string", "");
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
	const gchar *userKey = "user";
	node = json_object_get_member(pJsonObject, userKey);
	if (node !=NULL) {
	

		if (isprimitive("SimpleUserResource")) {
			jsonToValue(&user, node, "SimpleUserResource", "SimpleUserResource");
		} else {
			
			SimpleUserResource* obj = static_cast<SimpleUserResource*> (&user);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

FlagResource::FlagResource(char* json)
{
	this->fromJson(json);
}

char*
FlagResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getContext();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *contextKey = "context";
	json_object_set_member(pJsonObject, contextKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getContextId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *context_idKey = "context_id";
	json_object_set_member(pJsonObject, context_idKey, node);
	if (isprimitive("long long")) {
		long long obj = getCreatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *created_dateKey = "created_date";
	json_object_set_member(pJsonObject, created_dateKey, node);
	if (isprimitive("long long")) {
		long long obj = getId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getReason();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *reasonKey = "reason";
	json_object_set_member(pJsonObject, reasonKey, node);
	if (isprimitive("long long")) {
		long long obj = getUpdatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *updated_dateKey = "updated_date";
	json_object_set_member(pJsonObject, updated_dateKey, node);
	if (isprimitive("SimpleUserResource")) {
		SimpleUserResource obj = getUser();
		node = converttoJson(&obj, "SimpleUserResource", "");
	}
	else {
		
		SimpleUserResource obj = static_cast<SimpleUserResource> (getUser());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *userKey = "user";
	json_object_set_member(pJsonObject, userKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
FlagResource::getContext()
{
	return context;
}

void
FlagResource::setContext(std::string  context)
{
	this->context = context;
}

std::string
FlagResource::getContextId()
{
	return context_id;
}

void
FlagResource::setContextId(std::string  context_id)
{
	this->context_id = context_id;
}

long long
FlagResource::getCreatedDate()
{
	return created_date;
}

void
FlagResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

long long
FlagResource::getId()
{
	return id;
}

void
FlagResource::setId(long long  id)
{
	this->id = id;
}

std::string
FlagResource::getReason()
{
	return reason;
}

void
FlagResource::setReason(std::string  reason)
{
	this->reason = reason;
}

long long
FlagResource::getUpdatedDate()
{
	return updated_date;
}

void
FlagResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}

SimpleUserResource
FlagResource::getUser()
{
	return user;
}

void
FlagResource::setUser(SimpleUserResource  user)
{
	this->user = user;
}


