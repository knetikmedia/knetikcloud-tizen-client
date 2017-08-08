#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PropertyFieldResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

PropertyFieldResource::PropertyFieldResource()
{
	//__init();
}

PropertyFieldResource::~PropertyFieldResource()
{
	//__cleanup();
}

void
PropertyFieldResource::__init()
{
	//
	//
	//description = std::string();
	//
	//
	//inner_type = std::string();
	//
	//new std::list()std::list> inner_type_fields;
	//
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
	//new std::list()std::list> valid_values;
	//
	//
}

void
PropertyFieldResource::__cleanup()
{
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
	//}
	//if(inner_type != NULL) {
	//
	//delete inner_type;
	//inner_type = NULL;
	//}
	//if(inner_type_fields != NULL) {
	//inner_type_fields.RemoveAll(true);
	//delete inner_type_fields;
	//inner_type_fields = NULL;
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
	//if(valid_values != NULL) {
	//valid_values.RemoveAll(true);
	//delete valid_values;
	//valid_values = NULL;
	//}
	//
}

void
PropertyFieldResource::fromJson(char* jsonStr)
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
	const gchar *inner_typeKey = "inner_type";
	node = json_object_get_member(pJsonObject, inner_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&inner_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *inner_type_fieldsKey = "inner_type_fields";
	node = json_object_get_member(pJsonObject, inner_type_fieldsKey);
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
			inner_type_fields = new_list;
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
	const gchar *valid_valuesKey = "valid_values";
	node = json_object_get_member(pJsonObject, valid_valuesKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<std::string> new_list;
			std::string inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("std::string")) {
					jsonToValue(&inst, temp_json, "std::string", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			valid_values = new_list;
		}
		
	}
}

PropertyFieldResource::PropertyFieldResource(char* json)
{
	this->fromJson(json);
}

char*
PropertyFieldResource::toJson()
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
	if (isprimitive("std::string")) {
		std::string obj = getInnerType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *inner_typeKey = "inner_type";
	json_object_set_member(pJsonObject, inner_typeKey, node);
	if (isprimitive("PropertyFieldResource")) {
		list<PropertyFieldResource> new_list = static_cast<list <PropertyFieldResource> > (getInnerTypeFields());
		node = converttoJson(&new_list, "PropertyFieldResource", "array");
	} else {
		node = json_node_alloc();
		list<PropertyFieldResource> new_list = static_cast<list <PropertyFieldResource> > (getInnerTypeFields());
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


	
	const gchar *inner_type_fieldsKey = "inner_type_fields";
	json_object_set_member(pJsonObject, inner_type_fieldsKey, node);
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
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getValidValues());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getValidValues());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *valid_valuesKey = "valid_values";
	json_object_set_member(pJsonObject, valid_valuesKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
PropertyFieldResource::getDescription()
{
	return description;
}

void
PropertyFieldResource::setDescription(std::string  description)
{
	this->description = description;
}

std::string
PropertyFieldResource::getInnerType()
{
	return inner_type;
}

void
PropertyFieldResource::setInnerType(std::string  inner_type)
{
	this->inner_type = inner_type;
}

std::list<PropertyFieldResource>
PropertyFieldResource::getInnerTypeFields()
{
	return inner_type_fields;
}

void
PropertyFieldResource::setInnerTypeFields(std::list <PropertyFieldResource> inner_type_fields)
{
	this->inner_type_fields = inner_type_fields;
}

std::string
PropertyFieldResource::getName()
{
	return name;
}

void
PropertyFieldResource::setName(std::string  name)
{
	this->name = name;
}

bool
PropertyFieldResource::getRequired()
{
	return required;
}

void
PropertyFieldResource::setRequired(bool  required)
{
	this->required = required;
}

std::string
PropertyFieldResource::getType()
{
	return type;
}

void
PropertyFieldResource::setType(std::string  type)
{
	this->type = type;
}

std::list<std::string>
PropertyFieldResource::getValidValues()
{
	return valid_values;
}

void
PropertyFieldResource::setValidValues(std::list <std::string> valid_values)
{
	this->valid_values = valid_values;
}


