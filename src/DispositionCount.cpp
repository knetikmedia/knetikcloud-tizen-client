#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DispositionCount.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DispositionCount::DispositionCount()
{
	//__init();
}

DispositionCount::~DispositionCount()
{
	//__cleanup();
}

void
DispositionCount::__init()
{
	//
	//
	//count = long(0);
	//
	//
	//name = std::string();
	//
}

void
DispositionCount::__cleanup()
{
	//if(count != NULL) {
	//
	//delete count;
	//count = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//
}

void
DispositionCount::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *countKey = "count";
	node = json_object_get_member(pJsonObject, countKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&count, node, "long long", "");
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

DispositionCount::DispositionCount(char* json)
{
	this->fromJson(json);
}

char*
DispositionCount::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getCount();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *countKey = "count";
	json_object_set_member(pJsonObject, countKey, node);
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
DispositionCount::getCount()
{
	return count;
}

void
DispositionCount::setCount(long long  count)
{
	this->count = count;
}

std::string
DispositionCount::getName()
{
	return name;
}

void
DispositionCount::setName(std::string  name)
{
	this->name = name;
}


