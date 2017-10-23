#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "LongProperty.h"

using namespace std;
using namespace Tizen::ArtikCloud;

LongProperty::LongProperty()
{
	//__init();
}

LongProperty::~LongProperty()
{
	//__cleanup();
}

void
LongProperty::__init()
{
	//
	//
	//type = std::string();
	//
	//
	//value = long(0);
	//
}

void
LongProperty::__cleanup()
{
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(value != NULL) {
	//
	//delete value;
	//value = NULL;
	//}
	//
}

void
LongProperty::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *typeKey = "type";
	node = json_object_get_member(pJsonObject, typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *valueKey = "value";
	node = json_object_get_member(pJsonObject, valueKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&value, node, "long long", "");
		} else {
			
		}
	}
}

LongProperty::LongProperty(char* json)
{
	this->fromJson(json);
}

char*
LongProperty::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	if (isprimitive("long long")) {
		long long obj = getValue();
		node = converttoJson(&obj, "long long", "");
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

std::string
LongProperty::getType()
{
	return type;
}

void
LongProperty::setType(std::string  type)
{
	this->type = type;
}

long long
LongProperty::getValue()
{
	return value;
}

void
LongProperty::setValue(long long  value)
{
	this->value = value;
}


