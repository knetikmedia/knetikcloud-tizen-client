#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VideoPropertyDefinitionResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VideoPropertyDefinitionResource::VideoPropertyDefinitionResource()
{
	//__init();
}

VideoPropertyDefinitionResource::~VideoPropertyDefinitionResource()
{
	//__cleanup();
}

void
VideoPropertyDefinitionResource::__init()
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
	//file_type = std::string();
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
VideoPropertyDefinitionResource::__cleanup()
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
	//if(file_type != NULL) {
	//
	//delete file_type;
	//file_type = NULL;
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
VideoPropertyDefinitionResource::fromJson(char* jsonStr)
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
	const gchar *file_typeKey = "file_type";
	node = json_object_get_member(pJsonObject, file_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&file_type, node, "std::string", "");
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

VideoPropertyDefinitionResource::VideoPropertyDefinitionResource(char* json)
{
	this->fromJson(json);
}

char*
VideoPropertyDefinitionResource::toJson()
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
	if (isprimitive("std::string")) {
		std::string obj = getFileType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *file_typeKey = "file_type";
	json_object_set_member(pJsonObject, file_typeKey, node);
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

PropertyFieldListResource
VideoPropertyDefinitionResource::getFieldList()
{
	return field_list;
}

void
VideoPropertyDefinitionResource::setFieldList(PropertyFieldListResource  field_list)
{
	this->field_list = field_list;
}

std::string
VideoPropertyDefinitionResource::getName()
{
	return name;
}

void
VideoPropertyDefinitionResource::setName(std::string  name)
{
	this->name = name;
}

bool
VideoPropertyDefinitionResource::getRequired()
{
	return required;
}

void
VideoPropertyDefinitionResource::setRequired(bool  required)
{
	this->required = required;
}

std::string
VideoPropertyDefinitionResource::getType()
{
	return type;
}

void
VideoPropertyDefinitionResource::setType(std::string  type)
{
	this->type = type;
}

std::string
VideoPropertyDefinitionResource::getFileType()
{
	return file_type;
}

void
VideoPropertyDefinitionResource::setFileType(std::string  file_type)
{
	this->file_type = file_type;
}

int
VideoPropertyDefinitionResource::getMaxHeight()
{
	return max_height;
}

void
VideoPropertyDefinitionResource::setMaxHeight(int  max_height)
{
	this->max_height = max_height;
}

int
VideoPropertyDefinitionResource::getMaxLength()
{
	return max_length;
}

void
VideoPropertyDefinitionResource::setMaxLength(int  max_length)
{
	this->max_length = max_length;
}

int
VideoPropertyDefinitionResource::getMaxWidth()
{
	return max_width;
}

void
VideoPropertyDefinitionResource::setMaxWidth(int  max_width)
{
	this->max_width = max_width;
}

int
VideoPropertyDefinitionResource::getMinHeight()
{
	return min_height;
}

void
VideoPropertyDefinitionResource::setMinHeight(int  min_height)
{
	this->min_height = min_height;
}

int
VideoPropertyDefinitionResource::getMinLength()
{
	return min_length;
}

void
VideoPropertyDefinitionResource::setMinLength(int  min_length)
{
	this->min_length = min_length;
}

int
VideoPropertyDefinitionResource::getMinWidth()
{
	return min_width;
}

void
VideoPropertyDefinitionResource::setMinWidth(int  min_width)
{
	this->min_width = min_width;
}


