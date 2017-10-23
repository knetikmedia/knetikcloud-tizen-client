#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "RoleResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

RoleResource::RoleResource()
{
	//__init();
}

RoleResource::~RoleResource()
{
	//__cleanup();
}

void
RoleResource::__init()
{
	//
	//
	//client_count = int(0);
	//
	//
	//created_date = long(0);
	//
	//
	//locked = bool(false);
	//
	//
	//name = std::string();
	//
	//
	//role = std::string();
	//
	//new std::list()std::list> role_permission;
	//
	//
	//
	//user_count = int(0);
	//
}

void
RoleResource::__cleanup()
{
	//if(client_count != NULL) {
	//
	//delete client_count;
	//client_count = NULL;
	//}
	//if(created_date != NULL) {
	//
	//delete created_date;
	//created_date = NULL;
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
	//if(role != NULL) {
	//
	//delete role;
	//role = NULL;
	//}
	//if(role_permission != NULL) {
	//role_permission.RemoveAll(true);
	//delete role_permission;
	//role_permission = NULL;
	//}
	//if(user_count != NULL) {
	//
	//delete user_count;
	//user_count = NULL;
	//}
	//
}

void
RoleResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *client_countKey = "client_count";
	node = json_object_get_member(pJsonObject, client_countKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&client_count, node, "int", "");
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
	const gchar *roleKey = "role";
	node = json_object_get_member(pJsonObject, roleKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&role, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *role_permissionKey = "role_permission";
	node = json_object_get_member(pJsonObject, role_permissionKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<PermissionResource> new_list;
			PermissionResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("PermissionResource")) {
					jsonToValue(&inst, temp_json, "PermissionResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			role_permission = new_list;
		}
		
	}
	const gchar *user_countKey = "user_count";
	node = json_object_get_member(pJsonObject, user_countKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&user_count, node, "int", "");
		} else {
			
		}
	}
}

RoleResource::RoleResource(char* json)
{
	this->fromJson(json);
}

char*
RoleResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getClientCount();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *client_countKey = "client_count";
	json_object_set_member(pJsonObject, client_countKey, node);
	if (isprimitive("long long")) {
		long long obj = getCreatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *created_dateKey = "created_date";
	json_object_set_member(pJsonObject, created_dateKey, node);
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
		std::string obj = getRole();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *roleKey = "role";
	json_object_set_member(pJsonObject, roleKey, node);
	if (isprimitive("PermissionResource")) {
		list<PermissionResource> new_list = static_cast<list <PermissionResource> > (getRolePermission());
		node = converttoJson(&new_list, "PermissionResource", "array");
	} else {
		node = json_node_alloc();
		list<PermissionResource> new_list = static_cast<list <PermissionResource> > (getRolePermission());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<PermissionResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			PermissionResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *role_permissionKey = "role_permission";
	json_object_set_member(pJsonObject, role_permissionKey, node);
	if (isprimitive("int")) {
		int obj = getUserCount();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *user_countKey = "user_count";
	json_object_set_member(pJsonObject, user_countKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
RoleResource::getClientCount()
{
	return client_count;
}

void
RoleResource::setClientCount(int  client_count)
{
	this->client_count = client_count;
}

long long
RoleResource::getCreatedDate()
{
	return created_date;
}

void
RoleResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

bool
RoleResource::getLocked()
{
	return locked;
}

void
RoleResource::setLocked(bool  locked)
{
	this->locked = locked;
}

std::string
RoleResource::getName()
{
	return name;
}

void
RoleResource::setName(std::string  name)
{
	this->name = name;
}

std::string
RoleResource::getRole()
{
	return role;
}

void
RoleResource::setRole(std::string  role)
{
	this->role = role;
}

std::list<PermissionResource>
RoleResource::getRolePermission()
{
	return role_permission;
}

void
RoleResource::setRolePermission(std::list <PermissionResource> role_permission)
{
	this->role_permission = role_permission;
}

int
RoleResource::getUserCount()
{
	return user_count;
}

void
RoleResource::setUserCount(int  user_count)
{
	this->user_count = user_count;
}


