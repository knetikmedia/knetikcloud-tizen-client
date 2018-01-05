#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VideoGroupPropertyDefinitionResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VideoGroupPropertyDefinitionResource::VideoGroupPropertyDefinitionResource()
{
	//__init();
}

VideoGroupPropertyDefinitionResource::~VideoGroupPropertyDefinitionResource()
{
	//__cleanup();
}

void
VideoGroupPropertyDefinitionResource::__init()
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
	//file_type = std::string();
	//
	//
	//max_count = int(0);
	//
	//
	//max_file_size = long(0);
	//
	//
	//min_count = int(0);
	//
	//
	//max_height = int(0);
	//
	//
	//max_length = int(0);
	//
	//
	//max_width = int(0);
	//
	//
	//min_height = int(0);
	//
	//
	//min_length = int(0);
	//
	//
	//min_width = int(0);
	//
}

void
VideoGroupPropertyDefinitionResource::__cleanup()
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
	//if(file_type != NULL) {
	//
	//delete file_type;
	//file_type = NULL;
	//}
	//if(max_count != NULL) {
	//
	//delete max_count;
	//max_count = NULL;
	//}
	//if(max_file_size != NULL) {
	//
	//delete max_file_size;
	//max_file_size = NULL;
	//}
	//if(min_count != NULL) {
	//
	//delete min_count;
	//min_count = NULL;
	//}
	//if(max_height != NULL) {
	//
	//delete max_height;
	//max_height = NULL;
	//}
	//if(max_length != NULL) {
	//
	//delete max_length;
	//max_length = NULL;
	//}
	//if(max_width != NULL) {
	//
	//delete max_width;
	//max_width = NULL;
	//}
	//if(min_height != NULL) {
	//
	//delete min_height;
	//min_height = NULL;
	//}
	//if(min_length != NULL) {
	//
	//delete min_length;
	//min_length = NULL;
	//}
	//if(min_width != NULL) {
	//
	//delete min_width;
	//min_width = NULL;
	//}
	//
}

void
VideoGroupPropertyDefinitionResource::fromJson(char* jsonStr)
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
	const gchar *file_typeKey = "file_type";
	node = json_object_get_member(pJsonObject, file_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&file_type, node, "std::string", "");
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
	const gchar *max_file_sizeKey = "max_file_size";
	node = json_object_get_member(pJsonObject, max_file_sizeKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&max_file_size, node, "long long", "");
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
	const gchar *max_heightKey = "max_height";
	node = json_object_get_member(pJsonObject, max_heightKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&max_height, node, "int", "");
		} else {
			
		}
	}
	const gchar *max_lengthKey = "max_length";
	node = json_object_get_member(pJsonObject, max_lengthKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&max_length, node, "int", "");
		} else {
			
		}
	}
	const gchar *max_widthKey = "max_width";
	node = json_object_get_member(pJsonObject, max_widthKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&max_width, node, "int", "");
		} else {
			
		}
	}
	const gchar *min_heightKey = "min_height";
	node = json_object_get_member(pJsonObject, min_heightKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&min_height, node, "int", "");
		} else {
			
		}
	}
	const gchar *min_lengthKey = "min_length";
	node = json_object_get_member(pJsonObject, min_lengthKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&min_length, node, "int", "");
		} else {
			
		}
	}
	const gchar *min_widthKey = "min_width";
	node = json_object_get_member(pJsonObject, min_widthKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&min_width, node, "int", "");
		} else {
			
		}
	}
}

VideoGroupPropertyDefinitionResource::VideoGroupPropertyDefinitionResource(char* json)
{
	this->fromJson(json);
}

char*
VideoGroupPropertyDefinitionResource::toJson()
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
	if (isprimitive("std::string")) {
		std::string obj = getFileType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *file_typeKey = "file_type";
	json_object_set_member(pJsonObject, file_typeKey, node);
	if (isprimitive("int")) {
		int obj = getMaxCount();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *max_countKey = "max_count";
	json_object_set_member(pJsonObject, max_countKey, node);
	if (isprimitive("long long")) {
		long long obj = getMaxFileSize();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *max_file_sizeKey = "max_file_size";
	json_object_set_member(pJsonObject, max_file_sizeKey, node);
	if (isprimitive("int")) {
		int obj = getMinCount();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *min_countKey = "min_count";
	json_object_set_member(pJsonObject, min_countKey, node);
	if (isprimitive("int")) {
		int obj = getMaxHeight();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *max_heightKey = "max_height";
	json_object_set_member(pJsonObject, max_heightKey, node);
	if (isprimitive("int")) {
		int obj = getMaxLength();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *max_lengthKey = "max_length";
	json_object_set_member(pJsonObject, max_lengthKey, node);
	if (isprimitive("int")) {
		int obj = getMaxWidth();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *max_widthKey = "max_width";
	json_object_set_member(pJsonObject, max_widthKey, node);
	if (isprimitive("int")) {
		int obj = getMinHeight();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *min_heightKey = "min_height";
	json_object_set_member(pJsonObject, min_heightKey, node);
	if (isprimitive("int")) {
		int obj = getMinLength();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *min_lengthKey = "min_length";
	json_object_set_member(pJsonObject, min_lengthKey, node);
	if (isprimitive("int")) {
		int obj = getMinWidth();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *min_widthKey = "min_width";
	json_object_set_member(pJsonObject, min_widthKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
VideoGroupPropertyDefinitionResource::getDescription()
{
	return description;
}

void
VideoGroupPropertyDefinitionResource::setDescription(std::string  description)
{
	this->description = description;
}

PropertyFieldListResource
VideoGroupPropertyDefinitionResource::getFieldList()
{
	return field_list;
}

void
VideoGroupPropertyDefinitionResource::setFieldList(PropertyFieldListResource  field_list)
{
	this->field_list = field_list;
}

std::string
VideoGroupPropertyDefinitionResource::getFriendlyName()
{
	return friendly_name;
}

void
VideoGroupPropertyDefinitionResource::setFriendlyName(std::string  friendly_name)
{
	this->friendly_name = friendly_name;
}

std::string
VideoGroupPropertyDefinitionResource::getName()
{
	return name;
}

void
VideoGroupPropertyDefinitionResource::setName(std::string  name)
{
	this->name = name;
}

std::string
VideoGroupPropertyDefinitionResource::getOptionLabelPath()
{
	return option_label_path;
}

void
VideoGroupPropertyDefinitionResource::setOptionLabelPath(std::string  option_label_path)
{
	this->option_label_path = option_label_path;
}

std::string
VideoGroupPropertyDefinitionResource::getOptionValuePath()
{
	return option_value_path;
}

void
VideoGroupPropertyDefinitionResource::setOptionValuePath(std::string  option_value_path)
{
	this->option_value_path = option_value_path;
}

std::string
VideoGroupPropertyDefinitionResource::getOptionsUrl()
{
	return options_url;
}

void
VideoGroupPropertyDefinitionResource::setOptionsUrl(std::string  options_url)
{
	this->options_url = options_url;
}

bool
VideoGroupPropertyDefinitionResource::getRequired()
{
	return required;
}

void
VideoGroupPropertyDefinitionResource::setRequired(bool  required)
{
	this->required = required;
}

std::string
VideoGroupPropertyDefinitionResource::getType()
{
	return type;
}

void
VideoGroupPropertyDefinitionResource::setType(std::string  type)
{
	this->type = type;
}

std::string
VideoGroupPropertyDefinitionResource::getFileType()
{
	return file_type;
}

void
VideoGroupPropertyDefinitionResource::setFileType(std::string  file_type)
{
	this->file_type = file_type;
}

int
VideoGroupPropertyDefinitionResource::getMaxCount()
{
	return max_count;
}

void
VideoGroupPropertyDefinitionResource::setMaxCount(int  max_count)
{
	this->max_count = max_count;
}

long long
VideoGroupPropertyDefinitionResource::getMaxFileSize()
{
	return max_file_size;
}

void
VideoGroupPropertyDefinitionResource::setMaxFileSize(long long  max_file_size)
{
	this->max_file_size = max_file_size;
}

int
VideoGroupPropertyDefinitionResource::getMinCount()
{
	return min_count;
}

void
VideoGroupPropertyDefinitionResource::setMinCount(int  min_count)
{
	this->min_count = min_count;
}

int
VideoGroupPropertyDefinitionResource::getMaxHeight()
{
	return max_height;
}

void
VideoGroupPropertyDefinitionResource::setMaxHeight(int  max_height)
{
	this->max_height = max_height;
}

int
VideoGroupPropertyDefinitionResource::getMaxLength()
{
	return max_length;
}

void
VideoGroupPropertyDefinitionResource::setMaxLength(int  max_length)
{
	this->max_length = max_length;
}

int
VideoGroupPropertyDefinitionResource::getMaxWidth()
{
	return max_width;
}

void
VideoGroupPropertyDefinitionResource::setMaxWidth(int  max_width)
{
	this->max_width = max_width;
}

int
VideoGroupPropertyDefinitionResource::getMinHeight()
{
	return min_height;
}

void
VideoGroupPropertyDefinitionResource::setMinHeight(int  min_height)
{
	this->min_height = min_height;
}

int
VideoGroupPropertyDefinitionResource::getMinLength()
{
	return min_length;
}

void
VideoGroupPropertyDefinitionResource::setMinLength(int  min_length)
{
	this->min_length = min_length;
}

int
VideoGroupPropertyDefinitionResource::getMinWidth()
{
	return min_width;
}

void
VideoGroupPropertyDefinitionResource::setMinWidth(int  min_width)
{
	this->min_width = min_width;
}


