#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ChatMessageRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ChatMessageRequest::ChatMessageRequest()
{
	//__init();
}

ChatMessageRequest::~ChatMessageRequest()
{
	//__cleanup();
}

void
ChatMessageRequest::__init()
{
	//
	//
	//content = null;
	//
	//
	//message_type = std::string();
	//
}

void
ChatMessageRequest::__cleanup()
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
	//
}

void
ChatMessageRequest::fromJson(char* jsonStr)
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
}

ChatMessageRequest::ChatMessageRequest(char* json)
{
	this->fromJson(json);
}

char*
ChatMessageRequest::toJson()
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
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
ChatMessageRequest::getContent()
{
	return content;
}

void
ChatMessageRequest::setContent(std::string  content)
{
	this->content = content;
}

std::string
ChatMessageRequest::getMessageType()
{
	return message_type;
}

void
ChatMessageRequest::setMessageType(std::string  message_type)
{
	this->message_type = message_type;
}


