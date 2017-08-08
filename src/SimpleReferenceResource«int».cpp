#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "SimpleReferenceResource«int».h"

using namespace std;
using namespace Tizen::ArtikCloud;

SimpleReferenceResource«int»::SimpleReferenceResource«int»()
{
	//__init();
}

SimpleReferenceResource«int»::~SimpleReferenceResource«int»()
{
	//__cleanup();
}

void
SimpleReferenceResource«int»::__init()
{
	//
	//
	//id = int(0);
	//
	//
	//name = std::string();
	//
}

void
SimpleReferenceResource«int»::__cleanup()
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
SimpleReferenceResource«int»::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
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

SimpleReferenceResource«int»::SimpleReferenceResource«int»(char* json)
{
	this->fromJson(json);
}

char*
SimpleReferenceResource«int»::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
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

int
SimpleReferenceResource«int»::getId()
{
	return id;
}

void
SimpleReferenceResource«int»::setId(int  id)
{
	this->id = id;
}

std::string
SimpleReferenceResource«int»::getName()
{
	return name;
}

void
SimpleReferenceResource«int»::setName(std::string  name)
{
	this->name = name;
}


