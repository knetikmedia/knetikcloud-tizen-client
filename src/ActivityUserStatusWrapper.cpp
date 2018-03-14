#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ActivityUserStatusWrapper.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ActivityUserStatusWrapper::ActivityUserStatusWrapper()
{
	//__init();
}

ActivityUserStatusWrapper::~ActivityUserStatusWrapper()
{
	//__cleanup();
}

void
ActivityUserStatusWrapper::__init()
{
	//
	//
	//value = std::string();
	//
}

void
ActivityUserStatusWrapper::__cleanup()
{
	//if(value != NULL) {
	//
	//delete value;
	//value = NULL;
	//}
	//
}

void
ActivityUserStatusWrapper::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *valueKey = "value";
	node = json_object_get_member(pJsonObject, valueKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&value, node, "std::string", "");
		} else {
			
		}
	}
}

ActivityUserStatusWrapper::ActivityUserStatusWrapper(char* json)
{
	this->fromJson(json);
}

char*
ActivityUserStatusWrapper::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getValue();
		node = converttoJson(&obj, "std::string", "");
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
ActivityUserStatusWrapper::getValue()
{
	return value;
}

void
ActivityUserStatusWrapper::setValue(std::string  value)
{
	this->value = value;
}


