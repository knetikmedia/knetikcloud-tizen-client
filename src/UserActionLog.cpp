#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "UserActionLog.h"

using namespace std;
using namespace Tizen::ArtikCloud;

UserActionLog::UserActionLog()
{
	//__init();
}

UserActionLog::~UserActionLog()
{
	//__cleanup();
}

void
UserActionLog::__init()
{
	//
	//
	//action_description = std::string();
	//
	//
	//action_name = std::string();
	//
	//
	//created_date = long(0);
	//
	//new std::map()std::map> details;
	//
	//
	//
	//id = std::string();
	//
	//
	//request_id = std::string();
	//
	//
	//user_id = int(0);
	//
}

void
UserActionLog::__cleanup()
{
	//if(action_description != NULL) {
	//
	//delete action_description;
	//action_description = NULL;
	//}
	//if(action_name != NULL) {
	//
	//delete action_name;
	//action_name = NULL;
	//}
	//if(created_date != NULL) {
	//
	//delete created_date;
	//created_date = NULL;
	//}
	//if(details != NULL) {
	//details.RemoveAll(true);
	//delete details;
	//details = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(request_id != NULL) {
	//
	//delete request_id;
	//request_id = NULL;
	//}
	//if(user_id != NULL) {
	//
	//delete user_id;
	//user_id = NULL;
	//}
	//
}

void
UserActionLog::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *action_descriptionKey = "action_description";
	node = json_object_get_member(pJsonObject, action_descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&action_description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *action_nameKey = "action_name";
	node = json_object_get_member(pJsonObject, action_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&action_name, node, "std::string", "");
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
	const gchar *detailsKey = "details";
	node = json_object_get_member(pJsonObject, detailsKey);
	if (node !=NULL) {
	
		{
			JsonObject* json_obj = json_node_get_object(node);
			map<string,string> new_map;
			json_object_foreach_member(json_obj,helper_func,&new_map);
			details = new_map;
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
	const gchar *request_idKey = "request_id";
	node = json_object_get_member(pJsonObject, request_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&request_id, node, "std::string", "");
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

UserActionLog::UserActionLog(char* json)
{
	this->fromJson(json);
}

char*
UserActionLog::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getActionDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *action_descriptionKey = "action_description";
	json_object_set_member(pJsonObject, action_descriptionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getActionName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *action_nameKey = "action_name";
	json_object_set_member(pJsonObject, action_nameKey, node);
	if (isprimitive("long long")) {
		long long obj = getCreatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *created_dateKey = "created_date";
	json_object_set_member(pJsonObject, created_dateKey, node);


	{
		JsonObject* json_obj;
		map<string, string> new_list = static_cast<map <string, string> > (getDetails());
		json_obj = json_object_new();
		for (map<string, string>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			string obj = (*it).first;
			string obj2 = (*it).second;
			JsonNode* tempnode = json_from_string(obj2.c_str(),NULL);
			json_object_set_member(json_obj, obj.c_str(), tempnode);
		}
	node = json_node_alloc();
	json_node_init_object(node, json_obj);
	json_object_unref(json_obj);
	}

	const gchar *detailsKey = "details";
	json_object_set_member(pJsonObject, detailsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRequestId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *request_idKey = "request_id";
	json_object_set_member(pJsonObject, request_idKey, node);
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
UserActionLog::getActionDescription()
{
	return action_description;
}

void
UserActionLog::setActionDescription(std::string  action_description)
{
	this->action_description = action_description;
}

std::string
UserActionLog::getActionName()
{
	return action_name;
}

void
UserActionLog::setActionName(std::string  action_name)
{
	this->action_name = action_name;
}

long long
UserActionLog::getCreatedDate()
{
	return created_date;
}

void
UserActionLog::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

std::map<string, string>
UserActionLog::getDetails()
{
	return details;
}

void
UserActionLog::setDetails(std::map <string, string> details)
{
	this->details = details;
}

std::string
UserActionLog::getId()
{
	return id;
}

void
UserActionLog::setId(std::string  id)
{
	this->id = id;
}

std::string
UserActionLog::getRequestId()
{
	return request_id;
}

void
UserActionLog::setRequestId(std::string  request_id)
{
	this->request_id = request_id;
}

int
UserActionLog::getUserId()
{
	return user_id;
}

void
UserActionLog::setUserId(int  user_id)
{
	this->user_id = user_id;
}


