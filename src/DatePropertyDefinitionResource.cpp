#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DatePropertyDefinitionResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DatePropertyDefinitionResource::DatePropertyDefinitionResource()
{
	//__init();
}

DatePropertyDefinitionResource::~DatePropertyDefinitionResource()
{
	//__cleanup();
}

void
DatePropertyDefinitionResource::__init()
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
	//max = long(0);
	//
	//
	//min = long(0);
	//
}

void
DatePropertyDefinitionResource::__cleanup()
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
	//if(max != NULL) {
	//
	//delete max;
	//max = NULL;
	//}
	//if(min != NULL) {
	//
	//delete min;
	//min = NULL;
	//}
	//
}

void
DatePropertyDefinitionResource::fromJson(char* jsonStr)
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
	const gchar *maxKey = "max";
	node = json_object_get_member(pJsonObject, maxKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&max, node, "long long", "");
		} else {
			
		}
	}
	const gchar *minKey = "min";
	node = json_object_get_member(pJsonObject, minKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&min, node, "long long", "");
		} else {
			
		}
	}
}

DatePropertyDefinitionResource::DatePropertyDefinitionResource(char* json)
{
	this->fromJson(json);
}

char*
DatePropertyDefinitionResource::toJson()
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
	if (isprimitive("long long")) {
		long long obj = getMax();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *maxKey = "max";
	json_object_set_member(pJsonObject, maxKey, node);
	if (isprimitive("long long")) {
		long long obj = getMin();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *minKey = "min";
	json_object_set_member(pJsonObject, minKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
DatePropertyDefinitionResource::getDescription()
{
	return description;
}

void
DatePropertyDefinitionResource::setDescription(std::string  description)
{
	this->description = description;
}

PropertyFieldListResource
DatePropertyDefinitionResource::getFieldList()
{
	return field_list;
}

void
DatePropertyDefinitionResource::setFieldList(PropertyFieldListResource  field_list)
{
	this->field_list = field_list;
}

std::string
DatePropertyDefinitionResource::getFriendlyName()
{
	return friendly_name;
}

void
DatePropertyDefinitionResource::setFriendlyName(std::string  friendly_name)
{
	this->friendly_name = friendly_name;
}

std::string
DatePropertyDefinitionResource::getName()
{
	return name;
}

void
DatePropertyDefinitionResource::setName(std::string  name)
{
	this->name = name;
}

std::string
DatePropertyDefinitionResource::getOptionLabelPath()
{
	return option_label_path;
}

void
DatePropertyDefinitionResource::setOptionLabelPath(std::string  option_label_path)
{
	this->option_label_path = option_label_path;
}

std::string
DatePropertyDefinitionResource::getOptionValuePath()
{
	return option_value_path;
}

void
DatePropertyDefinitionResource::setOptionValuePath(std::string  option_value_path)
{
	this->option_value_path = option_value_path;
}

std::string
DatePropertyDefinitionResource::getOptionsUrl()
{
	return options_url;
}

void
DatePropertyDefinitionResource::setOptionsUrl(std::string  options_url)
{
	this->options_url = options_url;
}

bool
DatePropertyDefinitionResource::getRequired()
{
	return required;
}

void
DatePropertyDefinitionResource::setRequired(bool  required)
{
	this->required = required;
}

std::string
DatePropertyDefinitionResource::getType()
{
	return type;
}

void
DatePropertyDefinitionResource::setType(std::string  type)
{
	this->type = type;
}

long long
DatePropertyDefinitionResource::getMax()
{
	return max;
}

void
DatePropertyDefinitionResource::setMax(long long  max)
{
	this->max = max;
}

long long
DatePropertyDefinitionResource::getMin()
{
	return min;
}

void
DatePropertyDefinitionResource::setMin(long long  min)
{
	this->min = min;
}


