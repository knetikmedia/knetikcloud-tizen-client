#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ChatMessageResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ChatMessageResource::ChatMessageResource()
{
	//__init();
}

ChatMessageResource::~ChatMessageResource()
{
	//__cleanup();
}

void
ChatMessageResource::__init()
{
	//
	//
	//content = null;
	//
	//
	//created_date = long(0);
	//
	//
	//edited = bool(false);
	//
	//
	//id = std::string();
	//
	//
	//message_type = std::string();
	//
	//
	//recipient_id = std::string();
	//
	//
	//recipient_type = std::string();
	//
	//
	//sender_id = int(0);
	//
	//
	//thread_id = std::string();
	//
	//
	//updated_date = long(0);
	//
}

void
ChatMessageResource::__cleanup()
{
	//if(content != NULL) {
	//
	//delete content;
	//content = NULL;
	//}
	//if(created_date != NULL) {
	//
	//delete created_date;
	//created_date = NULL;
	//}
	//if(edited != NULL) {
	//
	//delete edited;
	//edited = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(message_type != NULL) {
	//
	//delete message_type;
	//message_type = NULL;
	//}
	//if(recipient_id != NULL) {
	//
	//delete recipient_id;
	//recipient_id = NULL;
	//}
	//if(recipient_type != NULL) {
	//
	//delete recipient_type;
	//recipient_type = NULL;
	//}
	//if(sender_id != NULL) {
	//
	//delete sender_id;
	//sender_id = NULL;
	//}
	//if(thread_id != NULL) {
	//
	//delete thread_id;
	//thread_id = NULL;
	//}
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//
}

void
ChatMessageResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *contentKey = "content";
	node = json_object_get_member(pJsonObject, contentKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&content, node, "std::string", "");
		} else {
			
			std::string* obj = static_cast<std::string*> (&content);
			obj->fromJson(json_to_string(node, false));
			
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
	const gchar *editedKey = "edited";
	node = json_object_get_member(pJsonObject, editedKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&edited, node, "bool", "");
		} else {
			
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
	const gchar *message_typeKey = "message_type";
	node = json_object_get_member(pJsonObject, message_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&message_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *recipient_idKey = "recipient_id";
	node = json_object_get_member(pJsonObject, recipient_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&recipient_id, node, "std::string", "");
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
	const gchar *sender_idKey = "sender_id";
	node = json_object_get_member(pJsonObject, sender_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&sender_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *thread_idKey = "thread_id";
	node = json_object_get_member(pJsonObject, thread_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&thread_id, node, "std::string", "");
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

ChatMessageResource::ChatMessageResource(char* json)
{
	this->fromJson(json);
}

char*
ChatMessageResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getContent();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
		std::string obj = static_cast<std::string> (getContent());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *contentKey = "content";
	json_object_set_member(pJsonObject, contentKey, node);
	if (isprimitive("long long")) {
		long long obj = getCreatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *created_dateKey = "created_date";
	json_object_set_member(pJsonObject, created_dateKey, node);
	if (isprimitive("bool")) {
		bool obj = getEdited();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *editedKey = "edited";
	json_object_set_member(pJsonObject, editedKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMessageType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *message_typeKey = "message_type";
	json_object_set_member(pJsonObject, message_typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRecipientId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *recipient_idKey = "recipient_id";
	json_object_set_member(pJsonObject, recipient_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRecipientType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *recipient_typeKey = "recipient_type";
	json_object_set_member(pJsonObject, recipient_typeKey, node);
	if (isprimitive("int")) {
		int obj = getSenderId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *sender_idKey = "sender_id";
	json_object_set_member(pJsonObject, sender_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getThreadId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *thread_idKey = "thread_id";
	json_object_set_member(pJsonObject, thread_idKey, node);
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

std::string
ChatMessageResource::getContent()
{
	return content;
}

void
ChatMessageResource::setContent(std::string  content)
{
	this->content = content;
}

long long
ChatMessageResource::getCreatedDate()
{
	return created_date;
}

void
ChatMessageResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

bool
ChatMessageResource::getEdited()
{
	return edited;
}

void
ChatMessageResource::setEdited(bool  edited)
{
	this->edited = edited;
}

std::string
ChatMessageResource::getId()
{
	return id;
}

void
ChatMessageResource::setId(std::string  id)
{
	this->id = id;
}

std::string
ChatMessageResource::getMessageType()
{
	return message_type;
}

void
ChatMessageResource::setMessageType(std::string  message_type)
{
	this->message_type = message_type;
}

std::string
ChatMessageResource::getRecipientId()
{
	return recipient_id;
}

void
ChatMessageResource::setRecipientId(std::string  recipient_id)
{
	this->recipient_id = recipient_id;
}

std::string
ChatMessageResource::getRecipientType()
{
	return recipient_type;
}

void
ChatMessageResource::setRecipientType(std::string  recipient_type)
{
	this->recipient_type = recipient_type;
}

int
ChatMessageResource::getSenderId()
{
	return sender_id;
}

void
ChatMessageResource::setSenderId(int  sender_id)
{
	this->sender_id = sender_id;
}

std::string
ChatMessageResource::getThreadId()
{
	return thread_id;
}

void
ChatMessageResource::setThreadId(std::string  thread_id)
{
	this->thread_id = thread_id;
}

long long
ChatMessageResource::getUpdatedDate()
{
	return updated_date;
}

void
ChatMessageResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}


