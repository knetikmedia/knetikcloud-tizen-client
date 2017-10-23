#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ActionResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ActionResource::ActionResource()
{
	//__init();
}

ActionResource::~ActionResource()
{
	//__cleanup();
}

void
ActionResource::__init()
{
	//
	//
	//category = std::string();
	//
	//
	//description = std::string();
	//
	//
	//name = std::string();
	//
	//new std::list()std::list> tags;
	//
	//
	//new std::list()std::list> variables;
	//
	//
}

void
ActionResource::__cleanup()
{
	//if(category != NULL) {
	//
	//delete category;
	//category = NULL;
	//}
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(tags != NULL) {
	//tags.RemoveAll(true);
	//delete tags;
	//tags = NULL;
	//}
	//if(variables != NULL) {
	//variables.RemoveAll(true);
	//delete variables;
	//variables = NULL;
	//}
	//
}

void
ActionResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *categoryKey = "category";
	node = json_object_get_member(pJsonObject, categoryKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&category, node, "std::string", "");
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
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *tagsKey = "tags";
	node = json_object_get_member(pJsonObject, tagsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<std::string> new_list;
			std::string inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("std::string")) {
					jsonToValue(&inst, temp_json, "std::string", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			tags = new_list;
		}
		
	}
	const gchar *variablesKey = "variables";
	node = json_object_get_member(pJsonObject, variablesKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<ActionVariableResource> new_list;
			ActionVariableResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("ActionVariableResource")) {
					jsonToValue(&inst, temp_json, "ActionVariableResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			variables = new_list;
		}
		
	}
}

ActionResource::ActionResource(char* json)
{
	this->fromJson(json);
}

char*
ActionResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getCategory();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *categoryKey = "category";
	json_object_set_member(pJsonObject, categoryKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *descriptionKey = "description";
	json_object_set_member(pJsonObject, descriptionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getTags());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getTags());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *tagsKey = "tags";
	json_object_set_member(pJsonObject, tagsKey, node);
	if (isprimitive("ActionVariableResource")) {
		list<ActionVariableResource> new_list = static_cast<list <ActionVariableResource> > (getVariables());
		node = converttoJson(&new_list, "ActionVariableResource", "array");
	} else {
		node = json_node_alloc();
		list<ActionVariableResource> new_list = static_cast<list <ActionVariableResource> > (getVariables());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<ActionVariableResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			ActionVariableResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *variablesKey = "variables";
	json_object_set_member(pJsonObject, variablesKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
ActionResource::getCategory()
{
	return category;
}

void
ActionResource::setCategory(std::string  category)
{
	this->category = category;
}

std::string
ActionResource::getDescription()
{
	return description;
}

void
ActionResource::setDescription(std::string  description)
{
	this->description = description;
}

std::string
ActionResource::getName()
{
	return name;
}

void
ActionResource::setName(std::string  name)
{
	this->name = name;
}

std::list<std::string>
ActionResource::getTags()
{
	return tags;
}

void
ActionResource::setTags(std::list <std::string> tags)
{
	this->tags = tags;
}

std::list<ActionVariableResource>
ActionResource::getVariables()
{
	return variables;
}

void
ActionResource::setVariables(std::list <ActionVariableResource> variables)
{
	this->variables = variables;
}


