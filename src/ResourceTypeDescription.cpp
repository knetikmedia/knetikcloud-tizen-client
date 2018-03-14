#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ResourceTypeDescription.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ResourceTypeDescription::ResourceTypeDescription()
{
	//__init();
}

ResourceTypeDescription::~ResourceTypeDescription()
{
	//__cleanup();
}

void
ResourceTypeDescription::__init()
{
	//
	//
	//id_field = std::string();
	//
	//
	//name = std::string();
	//
	//
	//service_path = std::string();
	//
}

void
ResourceTypeDescription::__cleanup()
{
	//if(id_field != NULL) {
	//
	//delete id_field;
	//id_field = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(service_path != NULL) {
	//
	//delete service_path;
	//service_path = NULL;
	//}
	//
}

void
ResourceTypeDescription::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *id_fieldKey = "id_field";
	node = json_object_get_member(pJsonObject, id_fieldKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&id_field, node, "std::string", "");
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
	const gchar *service_pathKey = "service_path";
	node = json_object_get_member(pJsonObject, service_pathKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&service_path, node, "std::string", "");
		} else {
			
		}
	}
}

ResourceTypeDescription::ResourceTypeDescription(char* json)
{
	this->fromJson(json);
}

char*
ResourceTypeDescription::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getIdField();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *id_fieldKey = "id_field";
	json_object_set_member(pJsonObject, id_fieldKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServicePath();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *service_pathKey = "service_path";
	json_object_set_member(pJsonObject, service_pathKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
ResourceTypeDescription::getIdField()
{
	return id_field;
}

void
ResourceTypeDescription::setIdField(std::string  id_field)
{
	this->id_field = id_field;
}

std::string
ResourceTypeDescription::getName()
{
	return name;
}

void
ResourceTypeDescription::setName(std::string  name)
{
	this->name = name;
}

std::string
ResourceTypeDescription::getServicePath()
{
	return service_path;
}

void
ResourceTypeDescription::setServicePath(std::string  service_path)
{
	this->service_path = service_path;
}


