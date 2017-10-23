#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ActionContext«object».h"

using namespace std;
using namespace Tizen::ArtikCloud;

ActionContext«object»::ActionContext«object»()
{
	//__init();
}

ActionContext«object»::~ActionContext«object»()
{
	//__cleanup();
}

void
ActionContext«object»::__init()
{
	//
	//
	//mapping = null;
	//
	//
	//type = std::string();
	//
}

void
ActionContext«object»::__cleanup()
{
	//if(mapping != NULL) {
	//
	//delete mapping;
	//mapping = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//
}

void
ActionContext«object»::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *mappingKey = "mapping";
	node = json_object_get_member(pJsonObject, mappingKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&mapping, node, "std::string", "");
		} else {
			
			std::string* obj = static_cast<std::string*> (&mapping);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *typeKey = "type";
	node = json_object_get_member(pJsonObject, typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type, node, "std::string", "");
		} else {
			
		}
	}
}

ActionContext«object»::ActionContext«object»(char* json)
{
	this->fromJson(json);
}

char*
ActionContext«object»::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getMapping();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
		std::string obj = static_cast<std::string> (getMapping());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *mappingKey = "mapping";
	json_object_set_member(pJsonObject, mappingKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
ActionContext«object»::getMapping()
{
	return mapping;
}

void
ActionContext«object»::setMapping(std::string  mapping)
{
	this->mapping = mapping;
}

std::string
ActionContext«object»::getType()
{
	return type;
}

void
ActionContext«object»::setType(std::string  type)
{
	this->type = type;
}


