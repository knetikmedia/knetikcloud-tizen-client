#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "NestedCategory.h"

using namespace std;
using namespace Tizen::ArtikCloud;

NestedCategory::NestedCategory()
{
	//__init();
}

NestedCategory::~NestedCategory()
{
	//__cleanup();
}

void
NestedCategory::__init()
{
	//
	//
	//active = bool(false);
	//
	//
	//id = std::string();
	//
	//
	//name = std::string();
	//
}

void
NestedCategory::__cleanup()
{
	//if(active != NULL) {
	//
	//delete active;
	//active = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//
}

void
NestedCategory::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *activeKey = "active";
	node = json_object_get_member(pJsonObject, activeKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&active, node, "bool", "");
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
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
		} else {
			
		}
	}
}

NestedCategory::NestedCategory(char* json)
{
	this->fromJson(json);
}

char*
NestedCategory::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getActive();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *activeKey = "active";
	json_object_set_member(pJsonObject, activeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
NestedCategory::getActive()
{
	return active;
}

void
NestedCategory::setActive(bool  active)
{
	this->active = active;
}

std::string
NestedCategory::getId()
{
	return id;
}

void
NestedCategory::setId(std::string  id)
{
	this->id = id;
}

std::string
NestedCategory::getName()
{
	return name;
}

void
NestedCategory::setName(std::string  name)
{
	this->name = name;
}


