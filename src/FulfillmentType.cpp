#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "FulfillmentType.h"

using namespace std;
using namespace Tizen::ArtikCloud;

FulfillmentType::FulfillmentType()
{
	//__init();
}

FulfillmentType::~FulfillmentType()
{
	//__cleanup();
}

void
FulfillmentType::__init()
{
	//
	//
	//core = bool(false);
	//
	//
	//description = std::string();
	//
	//
	//id = int(0);
	//
	//
	//name = std::string();
	//
}

void
FulfillmentType::__cleanup()
{
	//if(core != NULL) {
	//
	//delete core;
	//core = NULL;
	//}
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
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
FulfillmentType::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *coreKey = "core";
	node = json_object_get_member(pJsonObject, coreKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&core, node, "bool", "");
		} else {
			
		}
	}
	const gchar *descriptionKey = "description";
	node = json_object_get_member(pJsonObject, descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&id, node, "int", "");
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

FulfillmentType::FulfillmentType(char* json)
{
	this->fromJson(json);
}

char*
FulfillmentType::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getCore();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *coreKey = "core";
	json_object_set_member(pJsonObject, coreKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *descriptionKey = "description";
	json_object_set_member(pJsonObject, descriptionKey, node);
	if (isprimitive("int")) {
		int obj = getId();
		node = converttoJson(&obj, "int", "");
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
FulfillmentType::getCore()
{
	return core;
}

void
FulfillmentType::setCore(bool  core)
{
	this->core = core;
}

std::string
FulfillmentType::getDescription()
{
	return description;
}

void
FulfillmentType::setDescription(std::string  description)
{
	this->description = description;
}

int
FulfillmentType::getId()
{
	return id;
}

void
FulfillmentType::setId(int  id)
{
	this->id = id;
}

std::string
FulfillmentType::getName()
{
	return name;
}

void
FulfillmentType::setName(std::string  name)
{
	this->name = name;
}


