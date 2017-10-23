#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "LimitedGettableGroup.h"

using namespace std;
using namespace Tizen::ArtikCloud;

LimitedGettableGroup::LimitedGettableGroup()
{
	//__init();
}

LimitedGettableGroup::~LimitedGettableGroup()
{
	//__cleanup();
}

void
LimitedGettableGroup::__init()
{
	//
	//
	//active_only = bool(false);
	//
	//
	//name = std::string();
	//
	//
	//owned_limit = int(0);
	//
}

void
LimitedGettableGroup::__cleanup()
{
	//if(active_only != NULL) {
	//
	//delete active_only;
	//active_only = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(owned_limit != NULL) {
	//
	//delete owned_limit;
	//owned_limit = NULL;
	//}
	//
}

void
LimitedGettableGroup::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *active_onlyKey = "active_only";
	node = json_object_get_member(pJsonObject, active_onlyKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&active_only, node, "bool", "");
		} else {
			
		}
	}
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *owned_limitKey = "owned_limit";
	node = json_object_get_member(pJsonObject, owned_limitKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&owned_limit, node, "int", "");
		} else {
			
		}
	}
}

LimitedGettableGroup::LimitedGettableGroup(char* json)
{
	this->fromJson(json);
}

char*
LimitedGettableGroup::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getActiveOnly();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *active_onlyKey = "active_only";
	json_object_set_member(pJsonObject, active_onlyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("int")) {
		int obj = getOwnedLimit();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *owned_limitKey = "owned_limit";
	json_object_set_member(pJsonObject, owned_limitKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
LimitedGettableGroup::getActiveOnly()
{
	return active_only;
}

void
LimitedGettableGroup::setActiveOnly(bool  active_only)
{
	this->active_only = active_only;
}

std::string
LimitedGettableGroup::getName()
{
	return name;
}

void
LimitedGettableGroup::setName(std::string  name)
{
	this->name = name;
}

int
LimitedGettableGroup::getOwnedLimit()
{
	return owned_limit;
}

void
LimitedGettableGroup::setOwnedLimit(int  owned_limit)
{
	this->owned_limit = owned_limit;
}


