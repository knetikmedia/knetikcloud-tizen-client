#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "LimitedGettable.h"

using namespace std;
using namespace Tizen::ArtikCloud;

LimitedGettable::LimitedGettable()
{
	//__init();
}

LimitedGettable::~LimitedGettable()
{
	//__cleanup();
}

void
LimitedGettable::__init()
{
	//
	//
	//description = std::string();
	//
	//
	//type_hint = std::string();
	//
	//
	//group = new LimitedGettableGroup();
	//
}

void
LimitedGettable::__cleanup()
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
	//if(group != NULL) {
	//
	//delete group;
	//group = NULL;
	//}
	//
}

void
LimitedGettable::fromJson(char* jsonStr)
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
	const gchar *groupKey = "group";
	node = json_object_get_member(pJsonObject, groupKey);
	if (node !=NULL) {
	

		if (isprimitive("LimitedGettableGroup")) {
			jsonToValue(&group, node, "LimitedGettableGroup", "LimitedGettableGroup");
		} else {
			
			LimitedGettableGroup* obj = static_cast<LimitedGettableGroup*> (&group);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

LimitedGettable::LimitedGettable(char* json)
{
	this->fromJson(json);
}

char*
LimitedGettable::toJson()
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
	if (isprimitive("LimitedGettableGroup")) {
		LimitedGettableGroup obj = getGroup();
		node = converttoJson(&obj, "LimitedGettableGroup", "");
	}
	else {
		
		LimitedGettableGroup obj = static_cast<LimitedGettableGroup> (getGroup());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *groupKey = "group";
	json_object_set_member(pJsonObject, groupKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
LimitedGettable::getDescription()
{
	return description;
}

void
LimitedGettable::setDescription(std::string  description)
{
	this->description = description;
}

std::string
LimitedGettable::getTypeHint()
{
	return type_hint;
}

void
LimitedGettable::setTypeHint(std::string  type_hint)
{
	this->type_hint = type_hint;
}

LimitedGettableGroup
LimitedGettable::getGroup()
{
	return group;
}

void
LimitedGettable::setGroup(LimitedGettableGroup  group)
{
	this->group = group;
}


