#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PermissionResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

PermissionResource::PermissionResource()
{
	//__init();
}

PermissionResource::~PermissionResource()
{
	//__cleanup();
}

void
PermissionResource::__init()
{
	//
	//
	//created_date = long(0);
	//
	//
	//description = std::string();
	//
	//
	//locked = bool(false);
	//
	//
	//name = std::string();
	//
	//
	//parent = std::string();
	//
	//
	//permission = std::string();
	//
	//
	//updated_date = long(0);
	//
}

void
PermissionResource::__cleanup()
{
	//if(created_date != NULL) {
	//
	//delete created_date;
	//created_date = NULL;
	//}
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
	//}
	//if(locked != NULL) {
	//
	//delete locked;
	//locked = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(parent != NULL) {
	//
	//delete parent;
	//parent = NULL;
	//}
	//if(permission != NULL) {
	//
	//delete permission;
	//permission = NULL;
	//}
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//
}

void
PermissionResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *created_dateKey = "created_date";
	node = json_object_get_member(pJsonObject, created_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&created_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *descriptionKey = "description";
	node = json_object_get_member(pJsonObject, descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *lockedKey = "locked";
	node = json_object_get_member(pJsonObject, lockedKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&locked, node, "bool", "");
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
	const gchar *parentKey = "parent";
	node = json_object_get_member(pJsonObject, parentKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&parent, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *permissionKey = "permission";
	node = json_object_get_member(pJsonObject, permissionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&permission, node, "std::string", "");
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
}

PermissionResource::PermissionResource(char* json)
{
	this->fromJson(json);
}

char*
PermissionResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getCreatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *created_dateKey = "created_date";
	json_object_set_member(pJsonObject, created_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *descriptionKey = "description";
	json_object_set_member(pJsonObject, descriptionKey, node);
	if (isprimitive("bool")) {
		bool obj = getLocked();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *lockedKey = "locked";
	json_object_set_member(pJsonObject, lockedKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getParent();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *parentKey = "parent";
	json_object_set_member(pJsonObject, parentKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPermission();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *permissionKey = "permission";
	json_object_set_member(pJsonObject, permissionKey, node);
	if (isprimitive("long long")) {
		long long obj = getUpdatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *updated_dateKey = "updated_date";
	json_object_set_member(pJsonObject, updated_dateKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
PermissionResource::getCreatedDate()
{
	return created_date;
}

void
PermissionResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

std::string
PermissionResource::getDescription()
{
	return description;
}

void
PermissionResource::setDescription(std::string  description)
{
	this->description = description;
}

bool
PermissionResource::getLocked()
{
	return locked;
}

void
PermissionResource::setLocked(bool  locked)
{
	this->locked = locked;
}

std::string
PermissionResource::getName()
{
	return name;
}

void
PermissionResource::setName(std::string  name)
{
	this->name = name;
}

std::string
PermissionResource::getParent()
{
	return parent;
}

void
PermissionResource::setParent(std::string  parent)
{
	this->parent = parent;
}

std::string
PermissionResource::getPermission()
{
	return permission;
}

void
PermissionResource::setPermission(std::string  permission)
{
	this->permission = permission;
}

long long
PermissionResource::getUpdatedDate()
{
	return updated_date;
}

void
PermissionResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}


