#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "AudioGroupPropertyDefinitionResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

AudioGroupPropertyDefinitionResource::AudioGroupPropertyDefinitionResource()
{
	//__init();
}

AudioGroupPropertyDefinitionResource::~AudioGroupPropertyDefinitionResource()
{
	//__cleanup();
}

void
AudioGroupPropertyDefinitionResource::__init()
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
	//max_count = int(0);
	//
	//
	//max_file_size = long(0);
	//
	//
	//min_count = int(0);
	//
	//
	//max_length = int(0);
	//
	//
	//min_length = int(0);
	//
}

void
AudioGroupPropertyDefinitionResource::__cleanup()
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
AudioGroupPropertyDefinitionResource::fromJson(char* jsonStr)
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

AudioGroupPropertyDefinitionResource::AudioGroupPropertyDefinitionResource(char* json)
{
	this->fromJson(json);
}

char*
AudioGroupPropertyDefinitionResource::toJson()
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
AudioGroupPropertyDefinitionResource::getFieldList()
{
	return field_list;
}

void
AudioGroupPropertyDefinitionResource::setFieldList(PropertyFieldListResource  field_list)
{
	this->field_list = field_list;
}

std::string
AudioGroupPropertyDefinitionResource::getName()
{
	return name;
}

void
AudioGroupPropertyDefinitionResource::setName(std::string  name)
{
	this->name = name;
}

bool
AudioGroupPropertyDefinitionResource::getRequired()
{
	return required;
}

void
AudioGroupPropertyDefinitionResource::setRequired(bool  required)
{
	this->required = required;
}

std::string
AudioGroupPropertyDefinitionResource::getType()
{
	return type;
}

void
AudioGroupPropertyDefinitionResource::setType(std::string  type)
{
	this->type = type;
}

std::string
AudioGroupPropertyDefinitionResource::getFileType()
{
	return file_type;
}

void
AudioGroupPropertyDefinitionResource::setFileType(std::string  file_type)
{
	this->file_type = file_type;
}

int
AudioGroupPropertyDefinitionResource::getMaxCount()
{
	return max_count;
}

void
AudioGroupPropertyDefinitionResource::setMaxCount(int  max_count)
{
	this->max_count = max_count;
}

long long
AudioGroupPropertyDefinitionResource::getMaxFileSize()
{
	return max_file_size;
}

void
AudioGroupPropertyDefinitionResource::setMaxFileSize(long long  max_file_size)
{
	this->max_file_size = max_file_size;
}

int
AudioGroupPropertyDefinitionResource::getMinCount()
{
	return min_count;
}

void
AudioGroupPropertyDefinitionResource::setMinCount(int  min_count)
{
	this->min_count = min_count;
}

int
AudioGroupPropertyDefinitionResource::getMaxLength()
{
	return max_length;
}

void
AudioGroupPropertyDefinitionResource::setMaxLength(int  max_length)
{
	this->max_length = max_length;
}

int
AudioGroupPropertyDefinitionResource::getMinLength()
{
	return min_length;
}

void
AudioGroupPropertyDefinitionResource::setMinLength(int  min_length)
{
	this->min_length = min_length;
}


