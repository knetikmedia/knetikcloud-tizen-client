#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "TokenDetailsResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

TokenDetailsResource::TokenDetailsResource()
{
	//__init();
}

TokenDetailsResource::~TokenDetailsResource()
{
	//__cleanup();
}

void
TokenDetailsResource::__init()
{
	//
	//
	//client_id = std::string();
	//
	//new std::list()std::list> roles;
	//
	//
	//
	//user_id = int(0);
	//
}

void
TokenDetailsResource::__cleanup()
{
	//if(client_id != NULL) {
	//
	//delete client_id;
	//client_id = NULL;
	//}
	//if(roles != NULL) {
	//roles.RemoveAll(true);
	//delete roles;
	//roles = NULL;
	//}
	//if(user_id != NULL) {
	//
	//delete user_id;
	//user_id = NULL;
	//}
	//
}

void
TokenDetailsResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *client_idKey = "client_id";
	node = json_object_get_member(pJsonObject, client_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&client_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *rolesKey = "roles";
	node = json_object_get_member(pJsonObject, rolesKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<std::string> new_list;
			std::string inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("std::string")) {
					jsonToValue(&inst, temp_json, "std::string", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			roles = new_list;
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

TokenDetailsResource::TokenDetailsResource(char* json)
{
	this->fromJson(json);
}

char*
TokenDetailsResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getClientId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *client_idKey = "client_id";
	json_object_set_member(pJsonObject, client_idKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getRoles());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getRoles());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *rolesKey = "roles";
	json_object_set_member(pJsonObject, rolesKey, node);
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

std::string
TokenDetailsResource::getClientId()
{
	return client_id;
}

void
TokenDetailsResource::setClientId(std::string  client_id)
{
	this->client_id = client_id;
}

std::list<std::string>
TokenDetailsResource::getRoles()
{
	return roles;
}

void
TokenDetailsResource::setRoles(std::list <std::string> roles)
{
	this->roles = roles;
}

int
TokenDetailsResource::getUserId()
{
	return user_id;
}

void
TokenDetailsResource::setUserId(int  user_id)
{
	this->user_id = user_id;
}


