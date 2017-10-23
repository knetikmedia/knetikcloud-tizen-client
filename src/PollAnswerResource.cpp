#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PollAnswerResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

PollAnswerResource::PollAnswerResource()
{
	//__init();
}

PollAnswerResource::~PollAnswerResource()
{
	//__cleanup();
}

void
PollAnswerResource::__init()
{
	//
	//
	//count = int(0);
	//
	//
	//key = std::string();
	//
	//
	//text = std::string();
	//
}

void
PollAnswerResource::__cleanup()
{
	//if(count != NULL) {
	//
	//delete count;
	//count = NULL;
	//}
	//if(key != NULL) {
	//
	//delete key;
	//key = NULL;
	//}
	//if(text != NULL) {
	//
	//delete text;
	//text = NULL;
	//}
	//
}

void
PollAnswerResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *countKey = "count";
	node = json_object_get_member(pJsonObject, countKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&count, node, "int", "");
		} else {
			
		}
	}
	const gchar *keyKey = "key";
	node = json_object_get_member(pJsonObject, keyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&key, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *textKey = "text";
	node = json_object_get_member(pJsonObject, textKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&text, node, "std::string", "");
		} else {
			
		}
	}
}

PollAnswerResource::PollAnswerResource(char* json)
{
	this->fromJson(json);
}

char*
PollAnswerResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getCount();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *countKey = "count";
	json_object_set_member(pJsonObject, countKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getKey();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *keyKey = "key";
	json_object_set_member(pJsonObject, keyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getText();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *textKey = "text";
	json_object_set_member(pJsonObject, textKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
PollAnswerResource::getCount()
{
	return count;
}

void
PollAnswerResource::setCount(int  count)
{
	this->count = count;
}

std::string
PollAnswerResource::getKey()
{
	return key;
}

void
PollAnswerResource::setKey(std::string  key)
{
	this->key = key;
}

std::string
PollAnswerResource::getText()
{
	return text;
}

void
PollAnswerResource::setText(std::string  text)
{
	this->text = text;
}


