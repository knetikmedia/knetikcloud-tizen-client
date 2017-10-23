#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ImportJobOutputResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ImportJobOutputResource::ImportJobOutputResource()
{
	//__init();
}

ImportJobOutputResource::~ImportJobOutputResource()
{
	//__cleanup();
}

void
ImportJobOutputResource::__init()
{
	//
	//
	//description = std::string();
	//
	//
	//line_number = long(0);
	//
}

void
ImportJobOutputResource::__cleanup()
{
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
	//}
	//if(line_number != NULL) {
	//
	//delete line_number;
	//line_number = NULL;
	//}
	//
}

void
ImportJobOutputResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *descriptionKey = "description";
	node = json_object_get_member(pJsonObject, descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *line_numberKey = "line_number";
	node = json_object_get_member(pJsonObject, line_numberKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&line_number, node, "long long", "");
		} else {
			
		}
	}
}

ImportJobOutputResource::ImportJobOutputResource(char* json)
{
	this->fromJson(json);
}

char*
ImportJobOutputResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *descriptionKey = "description";
	json_object_set_member(pJsonObject, descriptionKey, node);
	if (isprimitive("long long")) {
		long long obj = getLineNumber();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *line_numberKey = "line_number";
	json_object_set_member(pJsonObject, line_numberKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
ImportJobOutputResource::getDescription()
{
	return description;
}

void
ImportJobOutputResource::setDescription(std::string  description)
{
	this->description = description;
}

long long
ImportJobOutputResource::getLineNumber()
{
	return line_number;
}

void
ImportJobOutputResource::setLineNumber(long long  line_number)
{
	this->line_number = line_number;
}


