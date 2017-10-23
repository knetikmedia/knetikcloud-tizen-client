#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "GlobalCheckAndIncrementResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

GlobalCheckAndIncrementResource::GlobalCheckAndIncrementResource()
{
	//__init();
}

GlobalCheckAndIncrementResource::~GlobalCheckAndIncrementResource()
{
	//__cleanup();
}

void
GlobalCheckAndIncrementResource::__init()
{
	//
	//
	//check_value_resource = new ExpressionResource();
	//
	//
	//definition = std::string();
	//
	//
	//global_resource = new ExpressionResource();
	//
	//
	//type = std::string();
	//
}

void
GlobalCheckAndIncrementResource::__cleanup()
{
	//if(check_value_resource != NULL) {
	//
	//delete check_value_resource;
	//check_value_resource = NULL;
	//}
	//if(definition != NULL) {
	//
	//delete definition;
	//definition = NULL;
	//}
	//if(global_resource != NULL) {
	//
	//delete global_resource;
	//global_resource = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//
}

void
GlobalCheckAndIncrementResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *check_value_resourceKey = "check_value_resource";
	node = json_object_get_member(pJsonObject, check_value_resourceKey);
	if (node !=NULL) {
	

		if (isprimitive("ExpressionResource")) {
			jsonToValue(&check_value_resource, node, "ExpressionResource", "ExpressionResource");
		} else {
			
			ExpressionResource* obj = static_cast<ExpressionResource*> (&check_value_resource);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *definitionKey = "definition";
	node = json_object_get_member(pJsonObject, definitionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&definition, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *global_resourceKey = "global_resource";
	node = json_object_get_member(pJsonObject, global_resourceKey);
	if (node !=NULL) {
	

		if (isprimitive("ExpressionResource")) {
			jsonToValue(&global_resource, node, "ExpressionResource", "ExpressionResource");
		} else {
			
			ExpressionResource* obj = static_cast<ExpressionResource*> (&global_resource);
			obj->fromJson(json_to_string(node, false));
			
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

GlobalCheckAndIncrementResource::GlobalCheckAndIncrementResource(char* json)
{
	this->fromJson(json);
}

char*
GlobalCheckAndIncrementResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("ExpressionResource")) {
		ExpressionResource obj = getCheckValueResource();
		node = converttoJson(&obj, "ExpressionResource", "");
	}
	else {
		
		ExpressionResource obj = static_cast<ExpressionResource> (getCheckValueResource());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *check_value_resourceKey = "check_value_resource";
	json_object_set_member(pJsonObject, check_value_resourceKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDefinition();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *definitionKey = "definition";
	json_object_set_member(pJsonObject, definitionKey, node);
	if (isprimitive("ExpressionResource")) {
		ExpressionResource obj = getGlobalResource();
		node = converttoJson(&obj, "ExpressionResource", "");
	}
	else {
		
		ExpressionResource obj = static_cast<ExpressionResource> (getGlobalResource());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *global_resourceKey = "global_resource";
	json_object_set_member(pJsonObject, global_resourceKey, node);
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

ExpressionResource
GlobalCheckAndIncrementResource::getCheckValueResource()
{
	return check_value_resource;
}

void
GlobalCheckAndIncrementResource::setCheckValueResource(ExpressionResource  check_value_resource)
{
	this->check_value_resource = check_value_resource;
}

std::string
GlobalCheckAndIncrementResource::getDefinition()
{
	return definition;
}

void
GlobalCheckAndIncrementResource::setDefinition(std::string  definition)
{
	this->definition = definition;
}

ExpressionResource
GlobalCheckAndIncrementResource::getGlobalResource()
{
	return global_resource;
}

void
GlobalCheckAndIncrementResource::setGlobalResource(ExpressionResource  global_resource)
{
	this->global_resource = global_resource;
}

std::string
GlobalCheckAndIncrementResource::getType()
{
	return type;
}

void
GlobalCheckAndIncrementResource::setType(std::string  type)
{
	this->type = type;
}


