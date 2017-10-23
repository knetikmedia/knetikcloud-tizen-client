#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DispositionResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DispositionResource::DispositionResource()
{
	//__init();
}

DispositionResource::~DispositionResource()
{
	//__cleanup();
}

void
DispositionResource::__init()
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
	//name = std::string();
	//
	//
	//user = new SimpleUserResource();
	//
}

void
DispositionResource::__cleanup()
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
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(user != NULL) {
	//
	//delete user;
	//user = NULL;
	//}
	//
}

void
DispositionResource::fromJson(char* jsonStr)
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
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
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

DispositionResource::DispositionResource(char* json)
{
	this->fromJson(json);
}

char*
DispositionResource::toJson()
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
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
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
DispositionResource::getContext()
{
	return context;
}

void
DispositionResource::setContext(std::string  context)
{
	this->context = context;
}

std::string
DispositionResource::getContextId()
{
	return context_id;
}

void
DispositionResource::setContextId(std::string  context_id)
{
	this->context_id = context_id;
}

long long
DispositionResource::getCreatedDate()
{
	return created_date;
}

void
DispositionResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

long long
DispositionResource::getId()
{
	return id;
}

void
DispositionResource::setId(long long  id)
{
	this->id = id;
}

std::string
DispositionResource::getName()
{
	return name;
}

void
DispositionResource::setName(std::string  name)
{
	this->name = name;
}

SimpleUserResource
DispositionResource::getUser()
{
	return user;
}

void
DispositionResource::setUser(SimpleUserResource  user)
{
	this->user = user;
}


