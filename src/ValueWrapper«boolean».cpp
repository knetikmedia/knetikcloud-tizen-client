#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ValueWrapper«boolean».h"

using namespace std;
using namespace Tizen::ArtikCloud;

ValueWrapper«boolean»::ValueWrapper«boolean»()
{
	//__init();
}

ValueWrapper«boolean»::~ValueWrapper«boolean»()
{
	//__cleanup();
}

void
ValueWrapper«boolean»::__init()
{
	//
	//
	//value = bool(false);
	//
}

void
ValueWrapper«boolean»::__cleanup()
{
	//if(value != NULL) {
	//
	//delete value;
	//value = NULL;
	//}
	//
}

void
ValueWrapper«boolean»::fromJson(char* jsonStr)
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

ValueWrapper«boolean»::ValueWrapper«boolean»(char* json)
{
	this->fromJson(json);
}

char*
ValueWrapper«boolean»::toJson()
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
ValueWrapper«boolean»::getValue()
{
	return value;
}

void
ValueWrapper«boolean»::setValue(bool  value)
{
	this->value = value;
}


