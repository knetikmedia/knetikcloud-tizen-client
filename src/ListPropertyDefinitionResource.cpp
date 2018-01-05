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
	//description = std::string();
	//
	//
	//field_list = new PropertyFieldListResource();
	//
	//
	//friendly_name = std::string();
	//
	//
	//name = std::string();
	//
	//
	//option_label_path = std::string();
	//
	//
	//option_value_path = std::string();
	//
	//
	//options_url = std::string();
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
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
	//}
	//if(field_list != NULL) {
	//
	//delete field_list;
	//field_list = NULL;
	//}
	//if(friendly_name != NULL) {
	//
	//delete friendly_name;
	//friendly_name = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(option_label_path != NULL) {
	//
	//delete option_label_path;
	//option_label_path = NULL;
	//}
	//if(option_value_path != NULL) {
	//
	//delete option_value_path;
	//option_value_path = NULL;
	//}
	//if(options_url != NULL) {
	//
	//delete options_url;
	//options_url = NULL;
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
	const gchar *descriptionKey = "description";
	node = json_object_get_member(pJsonObject, descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&description, node, "std::string", "");
		} else {
			
		}
	}
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
	const gchar *friendly_nameKey = "friendly_name";
	node = json_object_get_member(pJsonObject, friendly_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&friendly_name, node, "std::string", "");
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
	const gchar *option_label_pathKey = "option_label_path";
	node = json_object_get_member(pJsonObject, option_label_pathKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&option_label_path, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *option_value_pathKey = "option_value_path";
	node = json_object_get_member(pJsonObject, option_value_pathKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&option_value_path, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *options_urlKey = "options_url";
	node = json_object_get_member(pJsonObject, options_urlKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&options_url, node, "std::string", "");
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
	if (isprimitive("std::string")) {
		std::string obj = getDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *descriptionKey = "description";
	json_object_set_member(pJsonObject, descriptionKey, node);
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
		std::string obj = getFriendlyName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *friendly_nameKey = "friendly_name";
	json_object_set_member(pJsonObject, friendly_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getOptionLabelPath();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *option_label_pathKey = "option_label_path";
	json_object_set_member(pJsonObject, option_label_pathKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getOptionValuePath();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *option_value_pathKey = "option_value_path";
	json_object_set_member(pJsonObject, option_value_pathKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getOptionsUrl();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *options_urlKey = "options_url";
	json_object_set_member(pJsonObject, options_urlKey, node);
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

std::string
ListPropertyDefinitionResource::getDescription()
{
	return description;
}

void
ListPropertyDefinitionResource::setDescription(std::string  description)
{
	this->description = description;
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
ListPropertyDefinitionResource::getFriendlyName()
{
	return friendly_name;
}

void
ListPropertyDefinitionResource::setFriendlyName(std::string  friendly_name)
{
	this->friendly_name = friendly_name;
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

std::string
ListPropertyDefinitionResource::getOptionLabelPath()
{
	return option_label_path;
}

void
ListPropertyDefinitionResource::setOptionLabelPath(std::string  option_label_path)
{
	this->option_label_path = option_label_path;
}

std::string
ListPropertyDefinitionResource::getOptionValuePath()
{
	return option_value_path;
}

void
ListPropertyDefinitionResource::setOptionValuePath(std::string  option_value_path)
{
	this->option_value_path = option_value_path;
}

std::string
ListPropertyDefinitionResource::getOptionsUrl()
{
	return options_url;
}

void
ListPropertyDefinitionResource::setOptionsUrl(std::string  options_url)
{
	this->options_url = options_url;
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


