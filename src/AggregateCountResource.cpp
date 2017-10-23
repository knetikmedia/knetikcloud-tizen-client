#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "AggregateCountResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

AggregateCountResource::AggregateCountResource()
{
	//__init();
}

AggregateCountResource::~AggregateCountResource()
{
	//__cleanup();
}

void
AggregateCountResource::__init()
{
	//
	//
	//count = long(0);
	//
	//
	//date = std::string();
	//
}

void
AggregateCountResource::__cleanup()
{
	//if(count != NULL) {
	//
	//delete count;
	//count = NULL;
	//}
	//if(date != NULL) {
	//
	//delete date;
	//date = NULL;
	//}
	//
}

void
AggregateCountResource::fromJson(char* jsonStr)
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
	const gchar *dateKey = "date";
	node = json_object_get_member(pJsonObject, dateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&date, node, "std::string", "");
		} else {
			
		}
	}
}

AggregateCountResource::AggregateCountResource(char* json)
{
	this->fromJson(json);
}

char*
AggregateCountResource::toJson()
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
		std::string obj = getDate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *dateKey = "date";
	json_object_set_member(pJsonObject, dateKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
AggregateCountResource::getCount()
{
	return count;
}

void
AggregateCountResource::setCount(long long  count)
{
	this->count = count;
}

std::string
AggregateCountResource::getDate()
{
	return date;
}

void
AggregateCountResource::setDate(std::string  date)
{
	this->date = date;
}


