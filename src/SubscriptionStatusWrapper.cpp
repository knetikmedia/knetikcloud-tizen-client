#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "SubscriptionStatusWrapper.h"

using namespace std;
using namespace Tizen::ArtikCloud;

SubscriptionStatusWrapper::SubscriptionStatusWrapper()
{
	//__init();
}

SubscriptionStatusWrapper::~SubscriptionStatusWrapper()
{
	//__cleanup();
}

void
SubscriptionStatusWrapper::__init()
{
	//
	//
	//value = std::string();
	//
}

void
SubscriptionStatusWrapper::__cleanup()
{
	//if(value != NULL) {
	//
	//delete value;
	//value = NULL;
	//}
	//
}

void
SubscriptionStatusWrapper::fromJson(char* jsonStr)
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

SubscriptionStatusWrapper::SubscriptionStatusWrapper(char* json)
{
	this->fromJson(json);
}

char*
SubscriptionStatusWrapper::toJson()
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
SubscriptionStatusWrapper::getValue()
{
	return value;
}

void
SubscriptionStatusWrapper::setValue(std::string  value)
{
	this->value = value;
}


