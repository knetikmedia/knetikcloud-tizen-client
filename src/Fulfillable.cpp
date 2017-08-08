#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Fulfillable.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Fulfillable::Fulfillable()
{
	//__init();
}

Fulfillable::~Fulfillable()
{
	//__cleanup();
}

void
Fulfillable::__init()
{
	//
	//
	//description = std::string();
	//
	//
	//type_hint = std::string();
	//
	//
	//type_name = std::string();
	//
}

void
Fulfillable::__cleanup()
{
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
	//}
	//if(type_hint != NULL) {
	//
	//delete type_hint;
	//type_hint = NULL;
	//}
	//if(type_name != NULL) {
	//
	//delete type_name;
	//type_name = NULL;
	//}
	//
}

void
Fulfillable::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *descriptionKey = "description";
	node = json_object_get_member(pJsonObject, descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *type_hintKey = "type_hint";
	node = json_object_get_member(pJsonObject, type_hintKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type_hint, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *type_nameKey = "type_name";
	node = json_object_get_member(pJsonObject, type_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type_name, node, "std::string", "");
		} else {
			
		}
	}
}

Fulfillable::Fulfillable(char* json)
{
	this->fromJson(json);
}

char*
Fulfillable::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *descriptionKey = "description";
	json_object_set_member(pJsonObject, descriptionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTypeHint();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *type_hintKey = "type_hint";
	json_object_set_member(pJsonObject, type_hintKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTypeName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *type_nameKey = "type_name";
	json_object_set_member(pJsonObject, type_nameKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
Fulfillable::getDescription()
{
	return description;
}

void
Fulfillable::setDescription(std::string  description)
{
	this->description = description;
}

std::string
Fulfillable::getTypeHint()
{
	return type_hint;
}

void
Fulfillable::setTypeHint(std::string  type_hint)
{
	this->type_hint = type_hint;
}

std::string
Fulfillable::getTypeName()
{
	return type_name;
}

void
Fulfillable::setTypeName(std::string  type_name)
{
	this->type_name = type_name;
}


