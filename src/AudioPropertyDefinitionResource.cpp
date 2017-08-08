#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "AudioPropertyDefinitionResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

AudioPropertyDefinitionResource::AudioPropertyDefinitionResource()
{
	//__init();
}

AudioPropertyDefinitionResource::~AudioPropertyDefinitionResource()
{
	//__cleanup();
}

void
AudioPropertyDefinitionResource::__init()
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
	//max_length = int(0);
	//
	//
	//min_length = int(0);
	//
}

void
AudioPropertyDefinitionResource::__cleanup()
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
	//if(max_length != NULL) {
	//
	//delete max_length;
	//max_length = NULL;
	//}
	//if(min_length != NULL) {
	//
	//delete min_length;
	//min_length = NULL;
	//}
	//
}

void
AudioPropertyDefinitionResource::fromJson(char* jsonStr)
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
	const gchar *max_lengthKey = "max_length";
	node = json_object_get_member(pJsonObject, max_lengthKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&max_length, node, "int", "");
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
}

AudioPropertyDefinitionResource::AudioPropertyDefinitionResource(char* json)
{
	this->fromJson(json);
}

char*
AudioPropertyDefinitionResource::toJson()
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
		int obj = getMaxLength();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *max_lengthKey = "max_length";
	json_object_set_member(pJsonObject, max_lengthKey, node);
	if (isprimitive("int")) {
		int obj = getMinLength();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *min_lengthKey = "min_length";
	json_object_set_member(pJsonObject, min_lengthKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

PropertyFieldListResource
AudioPropertyDefinitionResource::getFieldList()
{
	return field_list;
}

void
AudioPropertyDefinitionResource::setFieldList(PropertyFieldListResource  field_list)
{
	this->field_list = field_list;
}

std::string
AudioPropertyDefinitionResource::getName()
{
	return name;
}

void
AudioPropertyDefinitionResource::setName(std::string  name)
{
	this->name = name;
}

bool
AudioPropertyDefinitionResource::getRequired()
{
	return required;
}

void
AudioPropertyDefinitionResource::setRequired(bool  required)
{
	this->required = required;
}

std::string
AudioPropertyDefinitionResource::getType()
{
	return type;
}

void
AudioPropertyDefinitionResource::setType(std::string  type)
{
	this->type = type;
}

std::string
AudioPropertyDefinitionResource::getFileType()
{
	return file_type;
}

void
AudioPropertyDefinitionResource::setFileType(std::string  file_type)
{
	this->file_type = file_type;
}

int
AudioPropertyDefinitionResource::getMaxLength()
{
	return max_length;
}

void
AudioPropertyDefinitionResource::setMaxLength(int  max_length)
{
	this->max_length = max_length;
}

int
AudioPropertyDefinitionResource::getMinLength()
{
	return min_length;
}

void
AudioPropertyDefinitionResource::setMinLength(int  min_length)
{
	this->min_length = min_length;
}


