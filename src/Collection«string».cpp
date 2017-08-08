#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Collection«string».h"

using namespace std;
using namespace Tizen::ArtikCloud;

Collection«string»::Collection«string»()
{
	//__init();
}

Collection«string»::~Collection«string»()
{
	//__cleanup();
}

void
Collection«string»::__init()
{
	//
}

void
Collection«string»::__cleanup()
{
	//
}

void
Collection«string»::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
}

Collection«string»::Collection«string»(char* json)
{
	this->fromJson(json);
}

char*
Collection«string»::toJson()
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


