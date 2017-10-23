#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "StoreItemTemplateResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

StoreItemTemplateResource::StoreItemTemplateResource()
{
	//__init();
}

StoreItemTemplateResource::~StoreItemTemplateResource()
{
	//__cleanup();
}

void
StoreItemTemplateResource::__init()
{
	//
	//
	//allow_additional = bool(false);
	//
	//new std::list()std::list> behaviors;
	//
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
	//sku_template = new TemplateResource();
	//
	//
	//updated_date = long(0);
	//
}

void
StoreItemTemplateResource::__cleanup()
{
	//if(allow_additional != NULL) {
	//
	//delete allow_additional;
	//allow_additional = NULL;
	//}
	//if(behaviors != NULL) {
	//behaviors.RemoveAll(true);
	//delete behaviors;
	//behaviors = NULL;
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
	//if(sku_template != NULL) {
	//
	//delete sku_template;
	//sku_template = NULL;
	//}
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//
}

void
StoreItemTemplateResource::fromJson(char* jsonStr)
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
	const gchar *behaviorsKey = "behaviors";
	node = json_object_get_member(pJsonObject, behaviorsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<ItemBehaviorDefinitionResource> new_list;
			ItemBehaviorDefinitionResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("ItemBehaviorDefinitionResource")) {
					jsonToValue(&inst, temp_json, "ItemBehaviorDefinitionResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			behaviors = new_list;
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
	const gchar *sku_templateKey = "sku_template";
	node = json_object_get_member(pJsonObject, sku_templateKey);
	if (node !=NULL) {
	

		if (isprimitive("TemplateResource")) {
			jsonToValue(&sku_template, node, "TemplateResource", "TemplateResource");
		} else {
			
			TemplateResource* obj = static_cast<TemplateResource*> (&sku_template);
			obj->fromJson(json_to_string(node, false));
			
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

StoreItemTemplateResource::StoreItemTemplateResource(char* json)
{
	this->fromJson(json);
}

char*
StoreItemTemplateResource::toJson()
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
	if (isprimitive("ItemBehaviorDefinitionResource")) {
		list<ItemBehaviorDefinitionResource> new_list = static_cast<list <ItemBehaviorDefinitionResource> > (getBehaviors());
		node = converttoJson(&new_list, "ItemBehaviorDefinitionResource", "array");
	} else {
		node = json_node_alloc();
		list<ItemBehaviorDefinitionResource> new_list = static_cast<list <ItemBehaviorDefinitionResource> > (getBehaviors());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<ItemBehaviorDefinitionResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			ItemBehaviorDefinitionResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *behaviorsKey = "behaviors";
	json_object_set_member(pJsonObject, behaviorsKey, node);
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
	if (isprimitive("TemplateResource")) {
		TemplateResource obj = getSkuTemplate();
		node = converttoJson(&obj, "TemplateResource", "");
	}
	else {
		
		TemplateResource obj = static_cast<TemplateResource> (getSkuTemplate());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *sku_templateKey = "sku_template";
	json_object_set_member(pJsonObject, sku_templateKey, node);
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
StoreItemTemplateResource::getAllowAdditional()
{
	return allow_additional;
}

void
StoreItemTemplateResource::setAllowAdditional(bool  allow_additional)
{
	this->allow_additional = allow_additional;
}

std::list<ItemBehaviorDefinitionResource>
StoreItemTemplateResource::getBehaviors()
{
	return behaviors;
}

void
StoreItemTemplateResource::setBehaviors(std::list <ItemBehaviorDefinitionResource> behaviors)
{
	this->behaviors = behaviors;
}

long long
StoreItemTemplateResource::getCreatedDate()
{
	return created_date;
}

void
StoreItemTemplateResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

std::string
StoreItemTemplateResource::getId()
{
	return id;
}

void
StoreItemTemplateResource::setId(std::string  id)
{
	this->id = id;
}

std::string
StoreItemTemplateResource::getName()
{
	return name;
}

void
StoreItemTemplateResource::setName(std::string  name)
{
	this->name = name;
}

std::list<PropertyDefinitionResource>
StoreItemTemplateResource::getProperties()
{
	return properties;
}

void
StoreItemTemplateResource::setProperties(std::list <PropertyDefinitionResource> properties)
{
	this->properties = properties;
}

TemplateResource
StoreItemTemplateResource::getSkuTemplate()
{
	return sku_template;
}

void
StoreItemTemplateResource::setSkuTemplate(TemplateResource  sku_template)
{
	this->sku_template = sku_template;
}

long long
StoreItemTemplateResource::getUpdatedDate()
{
	return updated_date;
}

void
StoreItemTemplateResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}


