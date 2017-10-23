#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BooleanResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BooleanResource::BooleanResource()
{
	//__init();
}

BooleanResource::~BooleanResource()
{
	//__cleanup();
}

void
BooleanResource::__init()
{
	//
	//
	//value = bool(false);
	//
}

void
BooleanResource::__cleanup()
{
	//if(value != NULL) {
	//
	//delete value;
	//value = NULL;
	//}
	//
}

void
BooleanResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *valueKey = "value";
	node = json_object_get_member(pJsonObject, valueKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&value, node, "bool", "");
		} else {
			
		}
	}
}

BooleanResource::BooleanResource(char* json)
{
	this->fromJson(json);
}

char*
BooleanResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getValue();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *valueKey = "value";
	json_object_set_member(pJsonObject, valueKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
BooleanResource::getValue()
{
	return value;
}

void
BooleanResource::setValue(bool  value)
{
	this->value = value;
}


