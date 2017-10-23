#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "FileProperty.h"

using namespace std;
using namespace Tizen::ArtikCloud;

FileProperty::FileProperty()
{
	//__init();
}

FileProperty::~FileProperty()
{
	//__cleanup();
}

void
FileProperty::__init()
{
	//
	//
	//type = std::string();
	//
	//
	//crc = std::string();
	//
	//
	//description = std::string();
	//
	//
	//file_type = std::string();
	//
	//
	//url = std::string();
	//
}

void
FileProperty::__cleanup()
{
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(crc != NULL) {
	//
	//delete crc;
	//crc = NULL;
	//}
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
	//}
	//if(file_type != NULL) {
	//
	//delete file_type;
	//file_type = NULL;
	//}
	//if(url != NULL) {
	//
	//delete url;
	//url = NULL;
	//}
	//
}

void
FileProperty::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *typeKey = "type";
	node = json_object_get_member(pJsonObject, typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *crcKey = "crc";
	node = json_object_get_member(pJsonObject, crcKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&crc, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *descriptionKey = "description";
	node = json_object_get_member(pJsonObject, descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&description, node, "std::string", "");
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
	const gchar *urlKey = "url";
	node = json_object_get_member(pJsonObject, urlKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&url, node, "std::string", "");
		} else {
			
		}
	}
}

FileProperty::FileProperty(char* json)
{
	this->fromJson(json);
}

char*
FileProperty::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCrc();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *crcKey = "crc";
	json_object_set_member(pJsonObject, crcKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *descriptionKey = "description";
	json_object_set_member(pJsonObject, descriptionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getFileType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *file_typeKey = "file_type";
	json_object_set_member(pJsonObject, file_typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUrl();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *urlKey = "url";
	json_object_set_member(pJsonObject, urlKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
FileProperty::getType()
{
	return type;
}

void
FileProperty::setType(std::string  type)
{
	this->type = type;
}

std::string
FileProperty::getCrc()
{
	return crc;
}

void
FileProperty::setCrc(std::string  crc)
{
	this->crc = crc;
}

std::string
FileProperty::getDescription()
{
	return description;
}

void
FileProperty::setDescription(std::string  description)
{
	this->description = description;
}

std::string
FileProperty::getFileType()
{
	return file_type;
}

void
FileProperty::setFileType(std::string  file_type)
{
	this->file_type = file_type;
}

std::string
FileProperty::getUrl()
{
	return url;
}

void
FileProperty::setUrl(std::string  url)
{
	this->url = url;
}


