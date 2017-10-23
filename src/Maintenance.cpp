#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Maintenance.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Maintenance::Maintenance()
{
	//__init();
}

Maintenance::~Maintenance()
{
	//__cleanup();
}

void
Maintenance::__init()
{
	//
	//
	//access_locked = bool(false);
	//
	//
	//details = null;
	//
	//
	//message = std::string();
	//
}

void
Maintenance::__cleanup()
{
	//if(access_locked != NULL) {
	//
	//delete access_locked;
	//access_locked = NULL;
	//}
	//if(details != NULL) {
	//
	//delete details;
	//details = NULL;
	//}
	//if(message != NULL) {
	//
	//delete message;
	//message = NULL;
	//}
	//
}

void
Maintenance::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *access_lockedKey = "access_locked";
	node = json_object_get_member(pJsonObject, access_lockedKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&access_locked, node, "bool", "");
		} else {
			
		}
	}
	const gchar *detailsKey = "details";
	node = json_object_get_member(pJsonObject, detailsKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&details, node, "std::string", "");
		} else {
			
			std::string* obj = static_cast<std::string*> (&details);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *messageKey = "message";
	node = json_object_get_member(pJsonObject, messageKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&message, node, "std::string", "");
		} else {
			
		}
	}
}

Maintenance::Maintenance(char* json)
{
	this->fromJson(json);
}

char*
Maintenance::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getAccessLocked();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *access_lockedKey = "access_locked";
	json_object_set_member(pJsonObject, access_lockedKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDetails();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
		std::string obj = static_cast<std::string> (getDetails());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *detailsKey = "details";
	json_object_set_member(pJsonObject, detailsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMessage();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *messageKey = "message";
	json_object_set_member(pJsonObject, messageKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
Maintenance::getAccessLocked()
{
	return access_locked;
}

void
Maintenance::setAccessLocked(bool  access_locked)
{
	this->access_locked = access_locked;
}

std::string
Maintenance::getDetails()
{
	return details;
}

void
Maintenance::setDetails(std::string  details)
{
	this->details = details;
}

std::string
Maintenance::getMessage()
{
	return message;
}

void
Maintenance::setMessage(std::string  message)
{
	this->message = message;
}


