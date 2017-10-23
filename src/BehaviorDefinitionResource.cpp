#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BehaviorDefinitionResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BehaviorDefinitionResource::BehaviorDefinitionResource()
{
	//__init();
}

BehaviorDefinitionResource::~BehaviorDefinitionResource()
{
	//__cleanup();
}

void
BehaviorDefinitionResource::__init()
{
	//
	//
	//description = std::string();
	//
	//new std::list()std::list> prerequisite_behaviors;
	//
	//
	//new std::list()std::list> properties;
	//
	//
	//
	//type_hint = std::string();
	//
}

void
BehaviorDefinitionResource::__cleanup()
{
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
	//}
	//if(prerequisite_behaviors != NULL) {
	//prerequisite_behaviors.RemoveAll(true);
	//delete prerequisite_behaviors;
	//prerequisite_behaviors = NULL;
	//}
	//if(properties != NULL) {
	//properties.RemoveAll(true);
	//delete properties;
	//properties = NULL;
	//}
	//if(type_hint != NULL) {
	//
	//delete type_hint;
	//type_hint = NULL;
	//}
	//
}

void
BehaviorDefinitionResource::fromJson(char* jsonStr)
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
	const gchar *prerequisite_behaviorsKey = "prerequisite_behaviors";
	node = json_object_get_member(pJsonObject, prerequisite_behaviorsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<Behavior> new_list;
			Behavior inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("Behavior")) {
					jsonToValue(&inst, temp_json, "Behavior", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			prerequisite_behaviors = new_list;
		}
		
	}
	const gchar *propertiesKey = "properties";
	node = json_object_get_member(pJsonObject, propertiesKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<PropertyFieldResource> new_list;
			PropertyFieldResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("PropertyFieldResource")) {
					jsonToValue(&inst, temp_json, "PropertyFieldResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			properties = new_list;
		}
		
	}
	const gchar *type_hintKey = "type_hint";
	node = json_object_get_member(pJsonObject, type_hintKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type_hint, node, "std::string", "");
		} else {
			
		}
	}
}

BehaviorDefinitionResource::BehaviorDefinitionResource(char* json)
{
	this->fromJson(json);
}

char*
BehaviorDefinitionResource::toJson()
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
	if (isprimitive("Behavior")) {
		list<Behavior> new_list = static_cast<list <Behavior> > (getPrerequisiteBehaviors());
		node = converttoJson(&new_list, "Behavior", "array");
	} else {
		node = json_node_alloc();
		list<Behavior> new_list = static_cast<list <Behavior> > (getPrerequisiteBehaviors());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<Behavior>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			Behavior obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *prerequisite_behaviorsKey = "prerequisite_behaviors";
	json_object_set_member(pJsonObject, prerequisite_behaviorsKey, node);
	if (isprimitive("PropertyFieldResource")) {
		list<PropertyFieldResource> new_list = static_cast<list <PropertyFieldResource> > (getProperties());
		node = converttoJson(&new_list, "PropertyFieldResource", "array");
	} else {
		node = json_node_alloc();
		list<PropertyFieldResource> new_list = static_cast<list <PropertyFieldResource> > (getProperties());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<PropertyFieldResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			PropertyFieldResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *propertiesKey = "properties";
	json_object_set_member(pJsonObject, propertiesKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTypeHint();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *type_hintKey = "type_hint";
	json_object_set_member(pJsonObject, type_hintKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
BehaviorDefinitionResource::getDescription()
{
	return description;
}

void
BehaviorDefinitionResource::setDescription(std::string  description)
{
	this->description = description;
}

std::list<Behavior>
BehaviorDefinitionResource::getPrerequisiteBehaviors()
{
	return prerequisite_behaviors;
}

void
BehaviorDefinitionResource::setPrerequisiteBehaviors(std::list <Behavior> prerequisite_behaviors)
{
	this->prerequisite_behaviors = prerequisite_behaviors;
}

std::list<PropertyFieldResource>
BehaviorDefinitionResource::getProperties()
{
	return properties;
}

void
BehaviorDefinitionResource::setProperties(std::list <PropertyFieldResource> properties)
{
	this->properties = properties;
}

std::string
BehaviorDefinitionResource::getTypeHint()
{
	return type_hint;
}

void
BehaviorDefinitionResource::setTypeHint(std::string  type_hint)
{
	this->type_hint = type_hint;
}


