#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "SimpleReferenceResource«long».h"

using namespace std;
using namespace Tizen::ArtikCloud;

SimpleReferenceResource«long»::SimpleReferenceResource«long»()
{
	//__init();
}

SimpleReferenceResource«long»::~SimpleReferenceResource«long»()
{
	//__cleanup();
}

void
SimpleReferenceResource«long»::__init()
{
	//
	//
	//id = long(0);
	//
	//
	//name = std::string();
	//
}

void
SimpleReferenceResource«long»::__cleanup()
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
SimpleReferenceResource«long»::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&id, node, "long long", "");
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

SimpleReferenceResource«long»::SimpleReferenceResource«long»(char* json)
{
	this->fromJson(json);
}

char*
SimpleReferenceResource«long»::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getId();
		node = converttoJson(&obj, "long long", "");
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

long long
SimpleReferenceResource«long»::getId()
{
	return id;
}

void
SimpleReferenceResource«long»::setId(long long  id)
{
	this->id = id;
}

std::string
SimpleReferenceResource«long»::getName()
{
	return name;
}

void
SimpleReferenceResource«long»::setName(std::string  name)
{
	this->name = name;
}


