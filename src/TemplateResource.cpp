#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "TemplateResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

TemplateResource::TemplateResource()
{
	//__init();
}

TemplateResource::~TemplateResource()
{
	//__cleanup();
}

void
TemplateResource::__init()
{
	//
	//
	//allow_additional = bool(false);
	//
	//
	//created_date = long(0);
	//
	//
	//id = std::string();
	//
	//
	//name = std::string();
	//
	//new std::list()std::list> properties;
	//
	//
	//
	//updated_date = long(0);
	//
}

void
TemplateResource::__cleanup()
{
	//if(allow_additional != NULL) {
	//
	//delete allow_additional;
	//allow_additional = NULL;
	//}
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
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(properties != NULL) {
	//properties.RemoveAll(true);
	//delete properties;
	//properties = NULL;
	//}
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//
}

void
TemplateResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *allow_additionalKey = "allow_additional";
	node = json_object_get_member(pJsonObject, allow_additionalKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&allow_additional, node, "bool", "");
		} else {
			
		}
	}
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
	

		if (isprimitive("std::string")) {
			jsonToValue(&id, node, "std::string", "");
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
	const gchar *propertiesKey = "properties";
	node = json_object_get_member(pJsonObject, propertiesKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<PropertyDefinitionResource> new_list;
			PropertyDefinitionResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("PropertyDefinitionResource")) {
					jsonToValue(&inst, temp_json, "PropertyDefinitionResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			properties = new_list;
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

TemplateResource::TemplateResource(char* json)
{
	this->fromJson(json);
}

char*
TemplateResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getAllowAdditional();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *allow_additionalKey = "allow_additional";
	json_object_set_member(pJsonObject, allow_additionalKey, node);
	if (isprimitive("long long")) {
		long long obj = getCreatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *created_dateKey = "created_date";
	json_object_set_member(pJsonObject, created_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("PropertyDefinitionResource")) {
		list<PropertyDefinitionResource> new_list = static_cast<list <PropertyDefinitionResource> > (getProperties());
		node = converttoJson(&new_list, "PropertyDefinitionResource", "array");
	} else {
		node = json_node_alloc();
		list<PropertyDefinitionResource> new_list = static_cast<list <PropertyDefinitionResource> > (getProperties());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<PropertyDefinitionResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			PropertyDefinitionResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *propertiesKey = "properties";
	json_object_set_member(pJsonObject, propertiesKey, node);
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

bool
TemplateResource::getAllowAdditional()
{
	return allow_additional;
}

void
TemplateResource::setAllowAdditional(bool  allow_additional)
{
	this->allow_additional = allow_additional;
}

long long
TemplateResource::getCreatedDate()
{
	return created_date;
}

void
TemplateResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

std::string
TemplateResource::getId()
{
	return id;
}

void
TemplateResource::setId(std::string  id)
{
	this->id = id;
}

std::string
TemplateResource::getName()
{
	return name;
}

void
TemplateResource::setName(std::string  name)
{
	this->name = name;
}

std::list<PropertyDefinitionResource>
TemplateResource::getProperties()
{
	return properties;
}

void
TemplateResource::setProperties(std::list <PropertyDefinitionResource> properties)
{
	this->properties = properties;
}

long long
TemplateResource::getUpdatedDate()
{
	return updated_date;
}

void
TemplateResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}


