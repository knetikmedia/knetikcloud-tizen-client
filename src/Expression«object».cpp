#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Expression«object».h"

using namespace std;
using namespace Tizen::ArtikCloud;

Expression«object»::Expression«object»()
{
	//__init();
}

Expression«object»::~Expression«object»()
{
	//__cleanup();
}

void
Expression«object»::__init()
{
	//
}

void
Expression«object»::__cleanup()
{
	//
}

void
Expression«object»::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
}

Expression«object»::Expression«object»(char* json)
{
	this->fromJson(json);
}

char*
Expression«object»::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}


