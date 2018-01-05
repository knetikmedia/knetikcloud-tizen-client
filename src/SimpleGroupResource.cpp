#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "SimpleGroupResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

SimpleGroupResource::SimpleGroupResource()
{
	//__init();
}

SimpleGroupResource::~SimpleGroupResource()
{
	//__cleanup();
}

void
SimpleGroupResource::__init()
{
	//
	//
	//name = std::string();
	//
	//
	//unique_name = std::string();
	//
}

void
SimpleGroupResource::__cleanup()
{
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(unique_name != NULL) {
	//
	//delete unique_name;
	//unique_name = NULL;
	//}
	//
}

void
SimpleGroupResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *unique_nameKey = "unique_name";
	node = json_object_get_member(pJsonObject, unique_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&unique_name, node, "std::string", "");
		} else {
			
		}
	}
}

SimpleGroupResource::SimpleGroupResource(char* json)
{
	this->fromJson(json);
}

char*
SimpleGroupResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUniqueName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *unique_nameKey = "unique_name";
	json_object_set_member(pJsonObject, unique_nameKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
SimpleGroupResource::getName()
{
	return name;
}

void
SimpleGroupResource::setName(std::string  name)
{
	this->name = name;
}

std::string
SimpleGroupResource::getUniqueName()
{
	return unique_name;
}

void
SimpleGroupResource::setUniqueName(std::string  unique_name)
{
	this->unique_name = unique_name;
}


