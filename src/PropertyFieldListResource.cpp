#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PropertyFieldListResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

PropertyFieldListResource::PropertyFieldListResource()
{
	//__init();
}

PropertyFieldListResource::~PropertyFieldListResource()
{
	//__cleanup();
}

void
PropertyFieldListResource::__init()
{
	//
	//new std::list()std::list> property_definition_fields;
	//
	//
	//new std::list()std::list> property_fields;
	//
	//
	//
	//property_type = std::string();
	//
}

void
PropertyFieldListResource::__cleanup()
{
	//if(property_definition_fields != NULL) {
	//property_definition_fields.RemoveAll(true);
	//delete property_definition_fields;
	//property_definition_fields = NULL;
	//}
	//if(property_fields != NULL) {
	//property_fields.RemoveAll(true);
	//delete property_fields;
	//property_fields = NULL;
	//}
	//if(property_type != NULL) {
	//
	//delete property_type;
	//property_type = NULL;
	//}
	//
}

void
PropertyFieldListResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *property_definition_fieldsKey = "property_definition_fields";
	node = json_object_get_member(pJsonObject, property_definition_fieldsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<PropertyFieldResource> new_list;
			PropertyFieldResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("PropertyFieldResource")) {
					jsonToValue(&inst, temp_json, "PropertyFieldResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			property_definition_fields = new_list;
		}
		
	}
	const gchar *property_fieldsKey = "property_fields";
	node = json_object_get_member(pJsonObject, property_fieldsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<PropertyFieldResource> new_list;
			PropertyFieldResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("PropertyFieldResource")) {
					jsonToValue(&inst, temp_json, "PropertyFieldResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			property_fields = new_list;
		}
		
	}
	const gchar *property_typeKey = "property_type";
	node = json_object_get_member(pJsonObject, property_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&property_type, node, "std::string", "");
		} else {
			
		}
	}
}

PropertyFieldListResource::PropertyFieldListResource(char* json)
{
	this->fromJson(json);
}

char*
PropertyFieldListResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("PropertyFieldResource")) {
		list<PropertyFieldResource> new_list = static_cast<list <PropertyFieldResource> > (getPropertyDefinitionFields());
		node = converttoJson(&new_list, "PropertyFieldResource", "array");
	} else {
		node = json_node_alloc();
		list<PropertyFieldResource> new_list = static_cast<list <PropertyFieldResource> > (getPropertyDefinitionFields());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<PropertyFieldResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			PropertyFieldResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *property_definition_fieldsKey = "property_definition_fields";
	json_object_set_member(pJsonObject, property_definition_fieldsKey, node);
	if (isprimitive("PropertyFieldResource")) {
		list<PropertyFieldResource> new_list = static_cast<list <PropertyFieldResource> > (getPropertyFields());
		node = converttoJson(&new_list, "PropertyFieldResource", "array");
	} else {
		node = json_node_alloc();
		list<PropertyFieldResource> new_list = static_cast<list <PropertyFieldResource> > (getPropertyFields());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<PropertyFieldResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			PropertyFieldResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *property_fieldsKey = "property_fields";
	json_object_set_member(pJsonObject, property_fieldsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPropertyType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *property_typeKey = "property_type";
	json_object_set_member(pJsonObject, property_typeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::list<PropertyFieldResource>
PropertyFieldListResource::getPropertyDefinitionFields()
{
	return property_definition_fields;
}

void
PropertyFieldListResource::setPropertyDefinitionFields(std::list <PropertyFieldResource> property_definition_fields)
{
	this->property_definition_fields = property_definition_fields;
}

std::list<PropertyFieldResource>
PropertyFieldListResource::getPropertyFields()
{
	return property_fields;
}

void
PropertyFieldListResource::setPropertyFields(std::list <PropertyFieldResource> property_fields)
{
	this->property_fields = property_fields;
}

std::string
PropertyFieldListResource::getPropertyType()
{
	return property_type;
}

void
PropertyFieldListResource::setPropertyType(std::string  property_type)
{
	this->property_type = property_type;
}


