#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "NotificationResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

NotificationResource::NotificationResource()
{
	//__init();
}

NotificationResource::~NotificationResource()
{
	//__cleanup();
}

void
NotificationResource::__init()
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
	//send_date = long(0);
	//
}

void
NotificationResource::__cleanup()
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
	//if(send_date != NULL) {
	//
	//delete send_date;
	//send_date = NULL;
	//}
	//
}

void
NotificationResource::fromJson(char* jsonStr)
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
	const gchar *send_dateKey = "send_date";
	node = json_object_get_member(pJsonObject, send_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&send_date, node, "long long", "");
		} else {
			
		}
	}
}

NotificationResource::NotificationResource(char* json)
{
	this->fromJson(json);
}

char*
NotificationResource::toJson()
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
		long long obj = getSendDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *send_dateKey = "send_date";
	json_object_set_member(pJsonObject, send_dateKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
NotificationResource::getData()
{
	return data;
}

void
NotificationResource::setData(std::string  data)
{
	this->data = data;
}

std::string
NotificationResource::getNotificationId()
{
	return notification_id;
}

void
NotificationResource::setNotificationId(std::string  notification_id)
{
	this->notification_id = notification_id;
}

std::string
NotificationResource::getNotificationTypeId()
{
	return notification_type_id;
}

void
NotificationResource::setNotificationTypeId(std::string  notification_type_id)
{
	this->notification_type_id = notification_type_id;
}

std::string
NotificationResource::getRecipient()
{
	return recipient;
}

void
NotificationResource::setRecipient(std::string  recipient)
{
	this->recipient = recipient;
}

std::string
NotificationResource::getRecipientType()
{
	return recipient_type;
}

void
NotificationResource::setRecipientType(std::string  recipient_type)
{
	this->recipient_type = recipient_type;
}

long long
NotificationResource::getSendDate()
{
	return send_date;
}

void
NotificationResource::setSendDate(long long  send_date)
{
	this->send_date = send_date;
}


