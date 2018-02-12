#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MessageContentResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MessageContentResource::MessageContentResource()
{
	//__init();
}

MessageContentResource::~MessageContentResource()
{
	//__cleanup();
}

void
MessageContentResource::__init()
{
	//
	//
	//email = std::string();
	//
	//
	//push = std::string();
	//
	//
	//sms = std::string();
	//
	//
	//templated_email = new TemplatedEmail();
	//
	//
	//websocket = null;
	//
}

void
MessageContentResource::__cleanup()
{
	//if(email != NULL) {
	//
	//delete email;
	//email = NULL;
	//}
	//if(push != NULL) {
	//
	//delete push;
	//push = NULL;
	//}
	//if(sms != NULL) {
	//
	//delete sms;
	//sms = NULL;
	//}
	//if(templated_email != NULL) {
	//
	//delete templated_email;
	//templated_email = NULL;
	//}
	//if(websocket != NULL) {
	//
	//delete websocket;
	//websocket = NULL;
	//}
	//
}

void
MessageContentResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *emailKey = "email";
	node = json_object_get_member(pJsonObject, emailKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&email, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *pushKey = "push";
	node = json_object_get_member(pJsonObject, pushKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&push, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *smsKey = "sms";
	node = json_object_get_member(pJsonObject, smsKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&sms, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *templated_emailKey = "templated_email";
	node = json_object_get_member(pJsonObject, templated_emailKey);
	if (node !=NULL) {
	

		if (isprimitive("TemplatedEmail")) {
			jsonToValue(&templated_email, node, "TemplatedEmail", "TemplatedEmail");
		} else {
			
			TemplatedEmail* obj = static_cast<TemplatedEmail*> (&templated_email);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *websocketKey = "websocket";
	node = json_object_get_member(pJsonObject, websocketKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&websocket, node, "std::string", "");
		} else {
			
			std::string* obj = static_cast<std::string*> (&websocket);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

MessageContentResource::MessageContentResource(char* json)
{
	this->fromJson(json);
}

char*
MessageContentResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getEmail();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *emailKey = "email";
	json_object_set_member(pJsonObject, emailKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPush();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *pushKey = "push";
	json_object_set_member(pJsonObject, pushKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSms();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *smsKey = "sms";
	json_object_set_member(pJsonObject, smsKey, node);
	if (isprimitive("TemplatedEmail")) {
		TemplatedEmail obj = getTemplatedEmail();
		node = converttoJson(&obj, "TemplatedEmail", "");
	}
	else {
		
		TemplatedEmail obj = static_cast<TemplatedEmail> (getTemplatedEmail());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *templated_emailKey = "templated_email";
	json_object_set_member(pJsonObject, templated_emailKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsocket();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
		std::string obj = static_cast<std::string> (getWebsocket());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *websocketKey = "websocket";
	json_object_set_member(pJsonObject, websocketKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
MessageContentResource::getEmail()
{
	return email;
}

void
MessageContentResource::setEmail(std::string  email)
{
	this->email = email;
}

std::string
MessageContentResource::getPush()
{
	return push;
}

void
MessageContentResource::setPush(std::string  push)
{
	this->push = push;
}

std::string
MessageContentResource::getSms()
{
	return sms;
}

void
MessageContentResource::setSms(std::string  sms)
{
	this->sms = sms;
}

TemplatedEmail
MessageContentResource::getTemplatedEmail()
{
	return templated_email;
}

void
MessageContentResource::setTemplatedEmail(TemplatedEmail  templated_email)
{
	this->templated_email = templated_email;
}

std::string
MessageContentResource::getWebsocket()
{
	return websocket;
}

void
MessageContentResource::setWebsocket(std::string  websocket)
{
	this->websocket = websocket;
}


