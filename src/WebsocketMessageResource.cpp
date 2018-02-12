#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "WebsocketMessageResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

WebsocketMessageResource::WebsocketMessageResource()
{
	//__init();
}

WebsocketMessageResource::~WebsocketMessageResource()
{
	//__cleanup();
}

void
WebsocketMessageResource::__init()
{
	//
	//
	//content = null;
	//
	//
	//message_type = std::string();
	//
	//new std::list()std::list> recipients;
	//
	//
}

void
WebsocketMessageResource::__cleanup()
{
	//if(content != NULL) {
	//
	//delete content;
	//content = NULL;
	//}
	//if(message_type != NULL) {
	//
	//delete message_type;
	//message_type = NULL;
	//}
	//if(recipients != NULL) {
	//recipients.RemoveAll(true);
	//delete recipients;
	//recipients = NULL;
	//}
	//
}

void
WebsocketMessageResource::fromJson(char* jsonStr)
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
	const gchar *message_typeKey = "message_type";
	node = json_object_get_member(pJsonObject, message_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&message_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *recipientsKey = "recipients";
	node = json_object_get_member(pJsonObject, recipientsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<int> new_list;
			int inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("int")) {
					jsonToValue(&inst, temp_json, "int", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			recipients = new_list;
		}
		
	}
}

WebsocketMessageResource::WebsocketMessageResource(char* json)
{
	this->fromJson(json);
}

char*
WebsocketMessageResource::toJson()
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
	if (isprimitive("std::string")) {
		std::string obj = getMessageType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *message_typeKey = "message_type";
	json_object_set_member(pJsonObject, message_typeKey, node);
	if (isprimitive("int")) {
		list<int> new_list = static_cast<list <int> > (getRecipients());
		node = converttoJson(&new_list, "int", "array");
	} else {
		node = json_node_alloc();
		list<int> new_list = static_cast<list <int> > (getRecipients());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *recipientsKey = "recipients";
	json_object_set_member(pJsonObject, recipientsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
WebsocketMessageResource::getContent()
{
	return content;
}

void
WebsocketMessageResource::setContent(std::string  content)
{
	this->content = content;
}

std::string
WebsocketMessageResource::getMessageType()
{
	return message_type;
}

void
WebsocketMessageResource::setMessageType(std::string  message_type)
{
	this->message_type = message_type;
}

std::list<int>
WebsocketMessageResource::getRecipients()
{
	return recipients;
}

void
WebsocketMessageResource::setRecipients(std::list <int> recipients)
{
	this->recipients = recipients;
}


