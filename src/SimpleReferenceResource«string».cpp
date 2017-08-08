#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "SimpleReferenceResource«string».h"

using namespace std;
using namespace Tizen::ArtikCloud;

SimpleReferenceResource«string»::SimpleReferenceResource«string»()
{
	//__init();
}

SimpleReferenceResource«string»::~SimpleReferenceResource«string»()
{
	//__cleanup();
}

void
SimpleReferenceResource«string»::__init()
{
	//
	//
	//id = std::string();
	//
	//
	//name = std::string();
	//
}

void
SimpleReferenceResource«string»::__cleanup()
{
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
SimpleReferenceResource«string»::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
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

SimpleReferenceResource«string»::SimpleReferenceResource«string»(char* json)
{
	this->fromJson(json);
}

char*
SimpleReferenceResource«string»::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
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

std::string
SimpleReferenceResource«string»::getId()
{
	return id;
}

void
SimpleReferenceResource«string»::setId(std::string  id)
{
	this->id = id;
}

std::string
SimpleReferenceResource«string»::getName()
{
	return name;
}

void
SimpleReferenceResource«string»::setName(std::string  name)
{
	this->name = name;
}


