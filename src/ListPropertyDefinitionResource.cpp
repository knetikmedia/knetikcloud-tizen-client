#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ListPropertyDefinitionResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ListPropertyDefinitionResource::ListPropertyDefinitionResource()
{
	//__init();
}

ListPropertyDefinitionResource::~ListPropertyDefinitionResource()
{
	//__cleanup();
}

void
ListPropertyDefinitionResource::__init()
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
	//max_count = int(0);
	//
	//
	//min_count = int(0);
	//
	//
	//value_definition = new PropertyDefinitionResource();
	//
}

void
ListPropertyDefinitionResource::__cleanup()
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
	//if(max_count != NULL) {
	//
	//delete max_count;
	//max_count = NULL;
	//}
	//if(min_count != NULL) {
	//
	//delete min_count;
	//min_count = NULL;
	//}
	//if(value_definition != NULL) {
	//
	//delete value_definition;
	//value_definition = NULL;
	//}
	//
}

void
ListPropertyDefinitionResource::fromJson(char* jsonStr)
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
	const gchar *max_countKey = "max_count";
	node = json_object_get_member(pJsonObject, max_countKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&max_count, node, "int", "");
		} else {
			
		}
	}
	const gchar *min_countKey = "min_count";
	node = json_object_get_member(pJsonObject, min_countKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&min_count, node, "int", "");
		} else {
			
		}
	}
	const gchar *value_definitionKey = "value_definition";
	node = json_object_get_member(pJsonObject, value_definitionKey);
	if (node !=NULL) {
	

		if (isprimitive("PropertyDefinitionResource")) {
			jsonToValue(&value_definition, node, "PropertyDefinitionResource", "PropertyDefinitionResource");
		} else {
			
			PropertyDefinitionResource* obj = static_cast<PropertyDefinitionResource*> (&value_definition);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

ListPropertyDefinitionResource::ListPropertyDefinitionResource(char* json)
{
	this->fromJson(json);
}

char*
ListPropertyDefinitionResource::toJson()
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
	if (isprimitive("int")) {
		int obj = getMaxCount();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *max_countKey = "max_count";
	json_object_set_member(pJsonObject, max_countKey, node);
	if (isprimitive("int")) {
		int obj = getMinCount();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *min_countKey = "min_count";
	json_object_set_member(pJsonObject, min_countKey, node);
	if (isprimitive("PropertyDefinitionResource")) {
		PropertyDefinitionResource obj = getValueDefinition();
		node = converttoJson(&obj, "PropertyDefinitionResource", "");
	}
	else {
		
		PropertyDefinitionResource obj = static_cast<PropertyDefinitionResource> (getValueDefinition());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *value_definitionKey = "value_definition";
	json_object_set_member(pJsonObject, value_definitionKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

PropertyFieldListResource
ListPropertyDefinitionResource::getFieldList()
{
	return field_list;
}

void
ListPropertyDefinitionResource::setFieldList(PropertyFieldListResource  field_list)
{
	this->field_list = field_list;
}

std::string
ListPropertyDefinitionResource::getName()
{
	return name;
}

void
ListPropertyDefinitionResource::setName(std::string  name)
{
	this->name = name;
}

bool
ListPropertyDefinitionResource::getRequired()
{
	return required;
}

void
ListPropertyDefinitionResource::setRequired(bool  required)
{
	this->required = required;
}

std::string
ListPropertyDefinitionResource::getType()
{
	return type;
}

void
ListPropertyDefinitionResource::setType(std::string  type)
{
	this->type = type;
}

int
ListPropertyDefinitionResource::getMaxCount()
{
	return max_count;
}

void
ListPropertyDefinitionResource::setMaxCount(int  max_count)
{
	this->max_count = max_count;
}

int
ListPropertyDefinitionResource::getMinCount()
{
	return min_count;
}

void
ListPropertyDefinitionResource::setMinCount(int  min_count)
{
	this->min_count = min_count;
}

PropertyDefinitionResource
ListPropertyDefinitionResource::getValueDefinition()
{
	return value_definition;
}

void
ListPropertyDefinitionResource::setValueDefinition(PropertyDefinitionResource  value_definition)
{
	this->value_definition = value_definition;
}


