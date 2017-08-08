#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "UsernameLookupResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

UsernameLookupResource::UsernameLookupResource()
{
	//__init();
}

UsernameLookupResource::~UsernameLookupResource()
{
	//__cleanup();
}

void
UsernameLookupResource::__init()
{
	//
	//
	//lookup_key = new ExpressionResource();
	//
	//
	//type = std::string();
	//
	//
	//value_type = std::string();
	//
}

void
UsernameLookupResource::__cleanup()
{
	//if(lookup_key != NULL) {
	//
	//delete lookup_key;
	//lookup_key = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(value_type != NULL) {
	//
	//delete value_type;
	//value_type = NULL;
	//}
	//
}

void
UsernameLookupResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *lookup_keyKey = "lookup_key";
	node = json_object_get_member(pJsonObject, lookup_keyKey);
	if (node !=NULL) {
	

		if (isprimitive("ExpressionResource")) {
			jsonToValue(&lookup_key, node, "ExpressionResource", "ExpressionResource");
		} else {
			
			ExpressionResource* obj = static_cast<ExpressionResource*> (&lookup_key);
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
	const gchar *value_typeKey = "value_type";
	node = json_object_get_member(pJsonObject, value_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&value_type, node, "std::string", "");
		} else {
			
		}
	}
}

UsernameLookupResource::UsernameLookupResource(char* json)
{
	this->fromJson(json);
}

char*
UsernameLookupResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("ExpressionResource")) {
		ExpressionResource obj = getLookupKey();
		node = converttoJson(&obj, "ExpressionResource", "");
	}
	else {
		
		ExpressionResource obj = static_cast<ExpressionResource> (getLookupKey());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *lookup_keyKey = "lookup_key";
	json_object_set_member(pJsonObject, lookup_keyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getValueType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *value_typeKey = "value_type";
	json_object_set_member(pJsonObject, value_typeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

ExpressionResource
UsernameLookupResource::getLookupKey()
{
	return lookup_key;
}

void
UsernameLookupResource::setLookupKey(ExpressionResource  lookup_key)
{
	this->lookup_key = lookup_key;
}

std::string
UsernameLookupResource::getType()
{
	return type;
}

void
UsernameLookupResource::setType(std::string  type)
{
	this->type = type;
}

std::string
UsernameLookupResource::getValueType()
{
	return value_type;
}

void
UsernameLookupResource::setValueType(std::string  value_type)
{
	this->value_type = value_type;
}


