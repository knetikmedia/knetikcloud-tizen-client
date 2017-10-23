#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ExpressionResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ExpressionResource::ExpressionResource()
{
	//__init();
}

ExpressionResource::~ExpressionResource()
{
	//__cleanup();
}

void
ExpressionResource::__init()
{
	//
	//
	//definition = std::string();
	//
	//
	//type = std::string();
	//
}

void
ExpressionResource::__cleanup()
{
	//if(definition != NULL) {
	//
	//delete definition;
	//definition = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//
}

void
ExpressionResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *definitionKey = "definition";
	node = json_object_get_member(pJsonObject, definitionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&definition, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *typeKey = "type";
	node = json_object_get_member(pJsonObject, typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type, node, "std::string", "");
		} else {
			
		}
	}
}

ExpressionResource::ExpressionResource(char* json)
{
	this->fromJson(json);
}

char*
ExpressionResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getDefinition();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *definitionKey = "definition";
	json_object_set_member(pJsonObject, definitionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
ExpressionResource::getDefinition()
{
	return definition;
}

void
ExpressionResource::setDefinition(std::string  definition)
{
	this->definition = definition;
}

std::string
ExpressionResource::getType()
{
	return type;
}

void
ExpressionResource::setType(std::string  type)
{
	this->type = type;
}


