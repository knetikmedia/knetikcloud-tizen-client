#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "UserRelationshipResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

UserRelationshipResource::UserRelationshipResource()
{
	//__init();
}

UserRelationshipResource::~UserRelationshipResource()
{
	//__cleanup();
}

void
UserRelationshipResource::__init()
{
	//
	//
	//child = new SimpleUserResource();
	//
	//
	//context = std::string();
	//
	//
	//id = long(0);
	//
	//
	//parent = new SimpleUserResource();
	//
}

void
UserRelationshipResource::__cleanup()
{
	//if(child != NULL) {
	//
	//delete child;
	//child = NULL;
	//}
	//if(context != NULL) {
	//
	//delete context;
	//context = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(parent != NULL) {
	//
	//delete parent;
	//parent = NULL;
	//}
	//
}

void
UserRelationshipResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *childKey = "child";
	node = json_object_get_member(pJsonObject, childKey);
	if (node !=NULL) {
	

		if (isprimitive("SimpleUserResource")) {
			jsonToValue(&child, node, "SimpleUserResource", "SimpleUserResource");
		} else {
			
			SimpleUserResource* obj = static_cast<SimpleUserResource*> (&child);
			obj->fromJson(json_to_string(node, false));
			
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
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&id, node, "long long", "");
		} else {
			
		}
	}
	const gchar *parentKey = "parent";
	node = json_object_get_member(pJsonObject, parentKey);
	if (node !=NULL) {
	

		if (isprimitive("SimpleUserResource")) {
			jsonToValue(&parent, node, "SimpleUserResource", "SimpleUserResource");
		} else {
			
			SimpleUserResource* obj = static_cast<SimpleUserResource*> (&parent);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

UserRelationshipResource::UserRelationshipResource(char* json)
{
	this->fromJson(json);
}

char*
UserRelationshipResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("SimpleUserResource")) {
		SimpleUserResource obj = getChild();
		node = converttoJson(&obj, "SimpleUserResource", "");
	}
	else {
		
		SimpleUserResource obj = static_cast<SimpleUserResource> (getChild());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *childKey = "child";
	json_object_set_member(pJsonObject, childKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getContext();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *contextKey = "context";
	json_object_set_member(pJsonObject, contextKey, node);
	if (isprimitive("long long")) {
		long long obj = getId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("SimpleUserResource")) {
		SimpleUserResource obj = getParent();
		node = converttoJson(&obj, "SimpleUserResource", "");
	}
	else {
		
		SimpleUserResource obj = static_cast<SimpleUserResource> (getParent());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *parentKey = "parent";
	json_object_set_member(pJsonObject, parentKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

SimpleUserResource
UserRelationshipResource::getChild()
{
	return child;
}

void
UserRelationshipResource::setChild(SimpleUserResource  child)
{
	this->child = child;
}

std::string
UserRelationshipResource::getContext()
{
	return context;
}

void
UserRelationshipResource::setContext(std::string  context)
{
	this->context = context;
}

long long
UserRelationshipResource::getId()
{
	return id;
}

void
UserRelationshipResource::setId(long long  id)
{
	this->id = id;
}

SimpleUserResource
UserRelationshipResource::getParent()
{
	return parent;
}

void
UserRelationshipResource::setParent(SimpleUserResource  parent)
{
	this->parent = parent;
}


