#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "UserNotificationResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

UserNotificationResource::UserNotificationResource()
{
	//__init();
}

UserNotificationResource::~UserNotificationResource()
{
	//__cleanup();
}

void
UserNotificationResource::__init()
{
	//
	//
	//data = null;
	//
	//
	//notification_id = std::string();
	//
	//
	//notification_type_id = std::string();
	//
	//
	//recipient = std::string();
	//
	//
	//recipient_type = std::string();
	//
	//
	//retrieve_date = long(0);
	//
	//
	//send_date = long(0);
	//
	//
	//status = std::string();
	//
	//
	//user_id = int(0);
	//
}

void
UserNotificationResource::__cleanup()
{
	//if(data != NULL) {
	//
	//delete data;
	//data = NULL;
	//}
	//if(notification_id != NULL) {
	//
	//delete notification_id;
	//notification_id = NULL;
	//}
	//if(notification_type_id != NULL) {
	//
	//delete notification_type_id;
	//notification_type_id = NULL;
	//}
	//if(recipient != NULL) {
	//
	//delete recipient;
	//recipient = NULL;
	//}
	//if(recipient_type != NULL) {
	//
	//delete recipient_type;
	//recipient_type = NULL;
	//}
	//if(retrieve_date != NULL) {
	//
	//delete retrieve_date;
	//retrieve_date = NULL;
	//}
	//if(send_date != NULL) {
	//
	//delete send_date;
	//send_date = NULL;
	//}
	//if(status != NULL) {
	//
	//delete status;
	//status = NULL;
	//}
	//if(user_id != NULL) {
	//
	//delete user_id;
	//user_id = NULL;
	//}
	//
}

void
UserNotificationResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *dataKey = "data";
	node = json_object_get_member(pJsonObject, dataKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&data, node, "std::string", "");
		} else {
			
			std::string* obj = static_cast<std::string*> (&data);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *notification_idKey = "notification_id";
	node = json_object_get_member(pJsonObject, notification_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&notification_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *notification_type_idKey = "notification_type_id";
	node = json_object_get_member(pJsonObject, notification_type_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&notification_type_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *recipientKey = "recipient";
	node = json_object_get_member(pJsonObject, recipientKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&recipient, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *recipient_typeKey = "recipient_type";
	node = json_object_get_member(pJsonObject, recipient_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&recipient_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *retrieve_dateKey = "retrieve_date";
	node = json_object_get_member(pJsonObject, retrieve_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&retrieve_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *send_dateKey = "send_date";
	node = json_object_get_member(pJsonObject, send_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&send_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *statusKey = "status";
	node = json_object_get_member(pJsonObject, statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&status, node, "std::string", "");
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

UserNotificationResource::UserNotificationResource(char* json)
{
	this->fromJson(json);
}

char*
UserNotificationResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getData();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
		std::string obj = static_cast<std::string> (getData());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *dataKey = "data";
	json_object_set_member(pJsonObject, dataKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getNotificationId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *notification_idKey = "notification_id";
	json_object_set_member(pJsonObject, notification_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getNotificationTypeId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *notification_type_idKey = "notification_type_id";
	json_object_set_member(pJsonObject, notification_type_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRecipient();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *recipientKey = "recipient";
	json_object_set_member(pJsonObject, recipientKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRecipientType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *recipient_typeKey = "recipient_type";
	json_object_set_member(pJsonObject, recipient_typeKey, node);
	if (isprimitive("long long")) {
		long long obj = getRetrieveDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *retrieve_dateKey = "retrieve_date";
	json_object_set_member(pJsonObject, retrieve_dateKey, node);
	if (isprimitive("long long")) {
		long long obj = getSendDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *send_dateKey = "send_date";
	json_object_set_member(pJsonObject, send_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *statusKey = "status";
	json_object_set_member(pJsonObject, statusKey, node);
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
UserNotificationResource::getData()
{
	return data;
}

void
UserNotificationResource::setData(std::string  data)
{
	this->data = data;
}

std::string
UserNotificationResource::getNotificationId()
{
	return notification_id;
}

void
UserNotificationResource::setNotificationId(std::string  notification_id)
{
	this->notification_id = notification_id;
}

std::string
UserNotificationResource::getNotificationTypeId()
{
	return notification_type_id;
}

void
UserNotificationResource::setNotificationTypeId(std::string  notification_type_id)
{
	this->notification_type_id = notification_type_id;
}

std::string
UserNotificationResource::getRecipient()
{
	return recipient;
}

void
UserNotificationResource::setRecipient(std::string  recipient)
{
	this->recipient = recipient;
}

std::string
UserNotificationResource::getRecipientType()
{
	return recipient_type;
}

void
UserNotificationResource::setRecipientType(std::string  recipient_type)
{
	this->recipient_type = recipient_type;
}

long long
UserNotificationResource::getRetrieveDate()
{
	return retrieve_date;
}

void
UserNotificationResource::setRetrieveDate(long long  retrieve_date)
{
	this->retrieve_date = retrieve_date;
}

long long
UserNotificationResource::getSendDate()
{
	return send_date;
}

void
UserNotificationResource::setSendDate(long long  send_date)
{
	this->send_date = send_date;
}

std::string
UserNotificationResource::getStatus()
{
	return status;
}

void
UserNotificationResource::setStatus(std::string  status)
{
	this->status = status;
}

int
UserNotificationResource::getUserId()
{
	return user_id;
}

void
UserNotificationResource::setUserId(int  user_id)
{
	this->user_id = user_id;
}


