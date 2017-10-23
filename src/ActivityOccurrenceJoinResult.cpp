#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ActivityOccurrenceJoinResult.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ActivityOccurrenceJoinResult::ActivityOccurrenceJoinResult()
{
	//__init();
}

ActivityOccurrenceJoinResult::~ActivityOccurrenceJoinResult()
{
	//__cleanup();
}

void
ActivityOccurrenceJoinResult::__init()
{
	//
	//
	//entitlement = new ActivityEntitlementResource();
	//
	//
	//error_code = int(0);
	//
	//
	//message = std::string();
	//
	//
	//user_id = long(0);
	//
}

void
ActivityOccurrenceJoinResult::__cleanup()
{
	//if(entitlement != NULL) {
	//
	//delete entitlement;
	//entitlement = NULL;
	//}
	//if(error_code != NULL) {
	//
	//delete error_code;
	//error_code = NULL;
	//}
	//if(message != NULL) {
	//
	//delete message;
	//message = NULL;
	//}
	//if(user_id != NULL) {
	//
	//delete user_id;
	//user_id = NULL;
	//}
	//
}

void
ActivityOccurrenceJoinResult::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *entitlementKey = "entitlement";
	node = json_object_get_member(pJsonObject, entitlementKey);
	if (node !=NULL) {
	

		if (isprimitive("ActivityEntitlementResource")) {
			jsonToValue(&entitlement, node, "ActivityEntitlementResource", "ActivityEntitlementResource");
		} else {
			
			ActivityEntitlementResource* obj = static_cast<ActivityEntitlementResource*> (&entitlement);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *error_codeKey = "error_code";
	node = json_object_get_member(pJsonObject, error_codeKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&error_code, node, "int", "");
		} else {
			
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
	const gchar *user_idKey = "user_id";
	node = json_object_get_member(pJsonObject, user_idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&user_id, node, "long long", "");
		} else {
			
		}
	}
}

ActivityOccurrenceJoinResult::ActivityOccurrenceJoinResult(char* json)
{
	this->fromJson(json);
}

char*
ActivityOccurrenceJoinResult::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("ActivityEntitlementResource")) {
		ActivityEntitlementResource obj = getEntitlement();
		node = converttoJson(&obj, "ActivityEntitlementResource", "");
	}
	else {
		
		ActivityEntitlementResource obj = static_cast<ActivityEntitlementResource> (getEntitlement());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *entitlementKey = "entitlement";
	json_object_set_member(pJsonObject, entitlementKey, node);
	if (isprimitive("int")) {
		int obj = getErrorCode();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *error_codeKey = "error_code";
	json_object_set_member(pJsonObject, error_codeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMessage();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *messageKey = "message";
	json_object_set_member(pJsonObject, messageKey, node);
	if (isprimitive("long long")) {
		long long obj = getUserId();
		node = converttoJson(&obj, "long long", "");
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

ActivityEntitlementResource
ActivityOccurrenceJoinResult::getEntitlement()
{
	return entitlement;
}

void
ActivityOccurrenceJoinResult::setEntitlement(ActivityEntitlementResource  entitlement)
{
	this->entitlement = entitlement;
}

int
ActivityOccurrenceJoinResult::getErrorCode()
{
	return error_code;
}

void
ActivityOccurrenceJoinResult::setErrorCode(int  error_code)
{
	this->error_code = error_code;
}

std::string
ActivityOccurrenceJoinResult::getMessage()
{
	return message;
}

void
ActivityOccurrenceJoinResult::setMessage(std::string  message)
{
	this->message = message;
}

long long
ActivityOccurrenceJoinResult::getUserId()
{
	return user_id;
}

void
ActivityOccurrenceJoinResult::setUserId(long long  user_id)
{
	this->user_id = user_id;
}


