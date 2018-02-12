#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MessageResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MessageResource::MessageResource()
{
	//__init();
}

MessageResource::~MessageResource()
{
	//__cleanup();
}

void
MessageResource::__init()
{
	//
	//
	//content = new MessageContentResource();
	//
	//
	//recipient = std::string();
	//
	//
	//recipient_type = std::string();
	//
	//
	//subject = std::string();
	//
	//
	//type = std::string();
	//
}

void
MessageResource::__cleanup()
{
	//if(content != NULL) {
	//
	//delete content;
	//content = NULL;
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
	//if(subject != NULL) {
	//
	//delete subject;
	//subject = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//
}

void
MessageResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *contentKey = "content";
	node = json_object_get_member(pJsonObject, contentKey);
	if (node !=NULL) {
	

		if (isprimitive("MessageContentResource")) {
			jsonToValue(&content, node, "MessageContentResource", "MessageContentResource");
		} else {
			
			MessageContentResource* obj = static_cast<MessageContentResource*> (&content);
			obj->fromJson(json_to_string(node, false));
			
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
	const gchar *subjectKey = "subject";
	node = json_object_get_member(pJsonObject, subjectKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&subject, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *typeKey = "type";
	node = json_object_get_member(pJsonObject, typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type, node, "std::string", "");
		} else {
			
		}
	}
}

MessageResource::MessageResource(char* json)
{
	this->fromJson(json);
}

char*
MessageResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("MessageContentResource")) {
		MessageContentResource obj = getContent();
		node = converttoJson(&obj, "MessageContentResource", "");
	}
	else {
		
		MessageContentResource obj = static_cast<MessageContentResource> (getContent());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *contentKey = "content";
	json_object_set_member(pJsonObject, contentKey, node);
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
	if (isprimitive("std::string")) {
		std::string obj = getSubject();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *subjectKey = "subject";
	json_object_set_member(pJsonObject, subjectKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

MessageContentResource
MessageResource::getContent()
{
	return content;
}

void
MessageResource::setContent(MessageContentResource  content)
{
	this->content = content;
}

std::string
MessageResource::getRecipient()
{
	return recipient;
}

void
MessageResource::setRecipient(std::string  recipient)
{
	this->recipient = recipient;
}

std::string
MessageResource::getRecipientType()
{
	return recipient_type;
}

void
MessageResource::setRecipientType(std::string  recipient_type)
{
	this->recipient_type = recipient_type;
}

std::string
MessageResource::getSubject()
{
	return subject;
}

void
MessageResource::setSubject(std::string  subject)
{
	this->subject = subject;
}

std::string
MessageResource::getType()
{
	return type;
}

void
MessageResource::setType(std::string  type)
{
	this->type = type;
}


