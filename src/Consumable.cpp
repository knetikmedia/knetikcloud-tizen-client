#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Consumable.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Consumable::Consumable()
{
	//__init();
}

Consumable::~Consumable()
{
	//__cleanup();
}

void
Consumable::__init()
{
	//
	//
	//description = std::string();
	//
	//
	//type_hint = std::string();
	//
	//
	//max_use = int(0);
	//
}

void
Consumable::__cleanup()
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
	//if(max_use != NULL) {
	//
	//delete max_use;
	//max_use = NULL;
	//}
	//
}

void
Consumable::fromJson(char* jsonStr)
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
	const gchar *max_useKey = "max_use";
	node = json_object_get_member(pJsonObject, max_useKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&max_use, node, "int", "");
		} else {
			
		}
	}
}

Consumable::Consumable(char* json)
{
	this->fromJson(json);
}

char*
Consumable::toJson()
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
	if (isprimitive("int")) {
		int obj = getMaxUse();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *max_useKey = "max_use";
	json_object_set_member(pJsonObject, max_useKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
Consumable::getDescription()
{
	return description;
}

void
Consumable::setDescription(std::string  description)
{
	this->description = description;
}

std::string
Consumable::getTypeHint()
{
	return type_hint;
}

void
Consumable::setTypeHint(std::string  type_hint)
{
	this->type_hint = type_hint;
}

int
Consumable::getMaxUse()
{
	return max_use;
}

void
Consumable::setMaxUse(int  max_use)
{
	this->max_use = max_use;
}


