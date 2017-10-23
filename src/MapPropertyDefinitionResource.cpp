#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MapPropertyDefinitionResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MapPropertyDefinitionResource::MapPropertyDefinitionResource()
{
	//__init();
}

MapPropertyDefinitionResource::~MapPropertyDefinitionResource()
{
	//__cleanup();
}

void
MapPropertyDefinitionResource::__init()
{
	//
	//
	//field_list = new PropertyFieldListResource();
	//
	//
	//name = std::string();
	//
	//
	//required = bool(false);
	//
	//
	//type = std::string();
	//
	//
	//allow_additional = bool(false);
	//
	//new std::list()std::list> properties;
	//
	//
}

void
MapPropertyDefinitionResource::__cleanup()
{
	//if(field_list != NULL) {
	//
	//delete field_list;
	//field_list = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(required != NULL) {
	//
	//delete required;
	//required = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(allow_additional != NULL) {
	//
	//delete allow_additional;
	//allow_additional = NULL;
	//}
	//if(properties != NULL) {
	//properties.RemoveAll(true);
	//delete properties;
	//properties = NULL;
	//}
	//
}

void
MapPropertyDefinitionResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *field_listKey = "field_list";
	node = json_object_get_member(pJsonObject, field_listKey);
	if (node !=NULL) {
	

		if (isprimitive("PropertyFieldListResource")) {
			jsonToValue(&field_list, node, "PropertyFieldListResource", "PropertyFieldListResource");
		} else {
			
			PropertyFieldListResource* obj = static_cast<PropertyFieldListResource*> (&field_list);
			obj->fromJson(json_to_string(node, false));
			
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
	const gchar *requiredKey = "required";
	node = json_object_get_member(pJsonObject, requiredKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&required, node, "bool", "");
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
	const gchar *allow_additionalKey = "allow_additional";
	node = json_object_get_member(pJsonObject, allow_additionalKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&allow_additional, node, "bool", "");
		} else {
			
		}
	}
	const gchar *propertiesKey = "properties";
	node = json_object_get_member(pJsonObject, propertiesKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<PropertyDefinitionResource> new_list;
			PropertyDefinitionResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("PropertyDefinitionResource")) {
					jsonToValue(&inst, temp_json, "PropertyDefinitionResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			properties = new_list;
		}
		
	}
}

MapPropertyDefinitionResource::MapPropertyDefinitionResource(char* json)
{
	this->fromJson(json);
}

char*
MapPropertyDefinitionResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("PropertyFieldListResource")) {
		PropertyFieldListResource obj = getFieldList();
		node = converttoJson(&obj, "PropertyFieldListResource", "");
	}
	else {
		
		PropertyFieldListResource obj = static_cast<PropertyFieldListResource> (getFieldList());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *field_listKey = "field_list";
	json_object_set_member(pJsonObject, field_listKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("bool")) {
		bool obj = getRequired();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *requiredKey = "required";
	json_object_set_member(pJsonObject, requiredKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	if (isprimitive("bool")) {
		bool obj = getAllowAdditional();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *allow_additionalKey = "allow_additional";
	json_object_set_member(pJsonObject, allow_additionalKey, node);
	if (isprimitive("PropertyDefinitionResource")) {
		list<PropertyDefinitionResource> new_list = static_cast<list <PropertyDefinitionResource> > (getProperties());
		node = converttoJson(&new_list, "PropertyDefinitionResource", "array");
	} else {
		node = json_node_alloc();
		list<PropertyDefinitionResource> new_list = static_cast<list <PropertyDefinitionResource> > (getProperties());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<PropertyDefinitionResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			PropertyDefinitionResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *propertiesKey = "properties";
	json_object_set_member(pJsonObject, propertiesKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

PropertyFieldListResource
MapPropertyDefinitionResource::getFieldList()
{
	return field_list;
}

void
MapPropertyDefinitionResource::setFieldList(PropertyFieldListResource  field_list)
{
	this->field_list = field_list;
}

std::string
MapPropertyDefinitionResource::getName()
{
	return name;
}

void
MapPropertyDefinitionResource::setName(std::string  name)
{
	this->name = name;
}

bool
MapPropertyDefinitionResource::getRequired()
{
	return required;
}

void
MapPropertyDefinitionResource::setRequired(bool  required)
{
	this->required = required;
}

std::string
MapPropertyDefinitionResource::getType()
{
	return type;
}

void
MapPropertyDefinitionResource::setType(std::string  type)
{
	this->type = type;
}

bool
MapPropertyDefinitionResource::getAllowAdditional()
{
	return allow_additional;
}

void
MapPropertyDefinitionResource::setAllowAdditional(bool  allow_additional)
{
	this->allow_additional = allow_additional;
}

std::list<PropertyDefinitionResource>
MapPropertyDefinitionResource::getProperties()
{
	return properties;
}

void
MapPropertyDefinitionResource::setProperties(std::list <PropertyDefinitionResource> properties)
{
	this->properties = properties;
}


