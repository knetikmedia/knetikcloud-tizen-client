#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BareActivityResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BareActivityResource::BareActivityResource()
{
	//__init();
}

BareActivityResource::~BareActivityResource()
{
	//__cleanup();
}

void
BareActivityResource::__init()
{
	//
	//
	//created_date = long(0);
	//
	//
	//id = long(0);
	//
	//
	//launch = std::string();
	//
	//
	//long_description = std::string();
	//
	//
	//name = std::string();
	//
	//
	//short_description = std::string();
	//
	//
	//_template = bool(false);
	//
	//
	//type = std::string();
	//
	//
	//unique_key = std::string();
	//
	//
	//updated_date = long(0);
	//
}

void
BareActivityResource::__cleanup()
{
	//if(created_date != NULL) {
	//
	//delete created_date;
	//created_date = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(launch != NULL) {
	//
	//delete launch;
	//launch = NULL;
	//}
	//if(long_description != NULL) {
	//
	//delete long_description;
	//long_description = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(short_description != NULL) {
	//
	//delete short_description;
	//short_description = NULL;
	//}
	//if(_template != NULL) {
	//
	//delete _template;
	//_template = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(unique_key != NULL) {
	//
	//delete unique_key;
	//unique_key = NULL;
	//}
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//
}

void
BareActivityResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *created_dateKey = "created_date";
	node = json_object_get_member(pJsonObject, created_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&created_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&id, node, "long long", "");
		} else {
			
		}
	}
	const gchar *launchKey = "launch";
	node = json_object_get_member(pJsonObject, launchKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&launch, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *long_descriptionKey = "long_description";
	node = json_object_get_member(pJsonObject, long_descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&long_description, node, "std::string", "");
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
	const gchar *short_descriptionKey = "short_description";
	node = json_object_get_member(pJsonObject, short_descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&short_description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *_templateKey = "template";
	node = json_object_get_member(pJsonObject, _templateKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&_template, node, "bool", "");
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
	const gchar *unique_keyKey = "unique_key";
	node = json_object_get_member(pJsonObject, unique_keyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&unique_key, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *updated_dateKey = "updated_date";
	node = json_object_get_member(pJsonObject, updated_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&updated_date, node, "long long", "");
		} else {
			
		}
	}
}

BareActivityResource::BareActivityResource(char* json)
{
	this->fromJson(json);
}

char*
BareActivityResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getCreatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *created_dateKey = "created_date";
	json_object_set_member(pJsonObject, created_dateKey, node);
	if (isprimitive("long long")) {
		long long obj = getId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLaunch();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *launchKey = "launch";
	json_object_set_member(pJsonObject, launchKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLongDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *long_descriptionKey = "long_description";
	json_object_set_member(pJsonObject, long_descriptionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getShortDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *short_descriptionKey = "short_description";
	json_object_set_member(pJsonObject, short_descriptionKey, node);
	if (isprimitive("bool")) {
		bool obj = getTemplate();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *_templateKey = "template";
	json_object_set_member(pJsonObject, _templateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUniqueKey();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *unique_keyKey = "unique_key";
	json_object_set_member(pJsonObject, unique_keyKey, node);
	if (isprimitive("long long")) {
		long long obj = getUpdatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *updated_dateKey = "updated_date";
	json_object_set_member(pJsonObject, updated_dateKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
BareActivityResource::getCreatedDate()
{
	return created_date;
}

void
BareActivityResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

long long
BareActivityResource::getId()
{
	return id;
}

void
BareActivityResource::setId(long long  id)
{
	this->id = id;
}

std::string
BareActivityResource::getLaunch()
{
	return launch;
}

void
BareActivityResource::setLaunch(std::string  launch)
{
	this->launch = launch;
}

std::string
BareActivityResource::getLongDescription()
{
	return long_description;
}

void
BareActivityResource::setLongDescription(std::string  long_description)
{
	this->long_description = long_description;
}

std::string
BareActivityResource::getName()
{
	return name;
}

void
BareActivityResource::setName(std::string  name)
{
	this->name = name;
}

std::string
BareActivityResource::getShortDescription()
{
	return short_description;
}

void
BareActivityResource::setShortDescription(std::string  short_description)
{
	this->short_description = short_description;
}

bool
BareActivityResource::getTemplate()
{
	return _template;
}

void
BareActivityResource::setTemplate(bool  _template)
{
	this->_template = _template;
}

std::string
BareActivityResource::getType()
{
	return type;
}

void
BareActivityResource::setType(std::string  type)
{
	this->type = type;
}

std::string
BareActivityResource::getUniqueKey()
{
	return unique_key;
}

void
BareActivityResource::setUniqueKey(std::string  unique_key)
{
	this->unique_key = unique_key;
}

long long
BareActivityResource::getUpdatedDate()
{
	return updated_date;
}

void
BareActivityResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}


