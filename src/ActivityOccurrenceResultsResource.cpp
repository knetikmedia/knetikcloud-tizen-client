#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ActivityOccurrenceResultsResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ActivityOccurrenceResultsResource::ActivityOccurrenceResultsResource()
{
	//__init();
}

ActivityOccurrenceResultsResource::~ActivityOccurrenceResultsResource()
{
	//__cleanup();
}

void
ActivityOccurrenceResultsResource::__init()
{
	//
	//new std::list()std::list> users;
	//
	//
}

void
ActivityOccurrenceResultsResource::__cleanup()
{
	//if(users != NULL) {
	//users.RemoveAll(true);
	//delete users;
	//users = NULL;
	//}
	//
}

void
ActivityOccurrenceResultsResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *usersKey = "users";
	node = json_object_get_member(pJsonObject, usersKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<UserActivityResultsResource> new_list;
			UserActivityResultsResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("UserActivityResultsResource")) {
					jsonToValue(&inst, temp_json, "UserActivityResultsResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			users = new_list;
		}
		
	}
}

ActivityOccurrenceResultsResource::ActivityOccurrenceResultsResource(char* json)
{
	this->fromJson(json);
}

char*
ActivityOccurrenceResultsResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("UserActivityResultsResource")) {
		list<UserActivityResultsResource> new_list = static_cast<list <UserActivityResultsResource> > (getUsers());
		node = converttoJson(&new_list, "UserActivityResultsResource", "array");
	} else {
		node = json_node_alloc();
		list<UserActivityResultsResource> new_list = static_cast<list <UserActivityResultsResource> > (getUsers());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<UserActivityResultsResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			UserActivityResultsResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *usersKey = "users";
	json_object_set_member(pJsonObject, usersKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::list<UserActivityResultsResource>
ActivityOccurrenceResultsResource::getUsers()
{
	return users;
}

void
ActivityOccurrenceResultsResource::setUsers(std::list <UserActivityResultsResource> users)
{
	this->users = users;
}


