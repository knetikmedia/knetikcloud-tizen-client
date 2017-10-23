#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BreGlobalResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BreGlobalResource::BreGlobalResource()
{
	//__init();
}

BreGlobalResource::~BreGlobalResource()
{
	//__cleanup();
}

void
BreGlobalResource::__init()
{
	//
	//
	//description = std::string();
	//
	//
	//id = std::string();
	//
	//
	//key = std::string();
	//
	//
	//name = std::string();
	//
	//new std::list()std::list> scopes;
	//
	//
	//
	//system_global = bool(false);
	//
	//
	//type = std::string();
	//
}

void
BreGlobalResource::__cleanup()
{
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(key != NULL) {
	//
	//delete key;
	//key = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(scopes != NULL) {
	//scopes.RemoveAll(true);
	//delete scopes;
	//scopes = NULL;
	//}
	//if(system_global != NULL) {
	//
	//delete system_global;
	//system_global = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//
}

void
BreGlobalResource::fromJson(char* jsonStr)
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
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *keyKey = "key";
	node = json_object_get_member(pJsonObject, keyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&key, node, "std::string", "");
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
	const gchar *scopesKey = "scopes";
	node = json_object_get_member(pJsonObject, scopesKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<BreGlobalScopeDefinition> new_list;
			BreGlobalScopeDefinition inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("BreGlobalScopeDefinition")) {
					jsonToValue(&inst, temp_json, "BreGlobalScopeDefinition", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			scopes = new_list;
		}
		
	}
	const gchar *system_globalKey = "system_global";
	node = json_object_get_member(pJsonObject, system_globalKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&system_global, node, "bool", "");
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
}

BreGlobalResource::BreGlobalResource(char* json)
{
	this->fromJson(json);
}

char*
BreGlobalResource::toJson()
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
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getKey();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *keyKey = "key";
	json_object_set_member(pJsonObject, keyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("BreGlobalScopeDefinition")) {
		list<BreGlobalScopeDefinition> new_list = static_cast<list <BreGlobalScopeDefinition> > (getScopes());
		node = converttoJson(&new_list, "BreGlobalScopeDefinition", "array");
	} else {
		node = json_node_alloc();
		list<BreGlobalScopeDefinition> new_list = static_cast<list <BreGlobalScopeDefinition> > (getScopes());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<BreGlobalScopeDefinition>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			BreGlobalScopeDefinition obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *scopesKey = "scopes";
	json_object_set_member(pJsonObject, scopesKey, node);
	if (isprimitive("bool")) {
		bool obj = getSystemGlobal();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *system_globalKey = "system_global";
	json_object_set_member(pJsonObject, system_globalKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
BreGlobalResource::getDescription()
{
	return description;
}

void
BreGlobalResource::setDescription(std::string  description)
{
	this->description = description;
}

std::string
BreGlobalResource::getId()
{
	return id;
}

void
BreGlobalResource::setId(std::string  id)
{
	this->id = id;
}

std::string
BreGlobalResource::getKey()
{
	return key;
}

void
BreGlobalResource::setKey(std::string  key)
{
	this->key = key;
}

std::string
BreGlobalResource::getName()
{
	return name;
}

void
BreGlobalResource::setName(std::string  name)
{
	this->name = name;
}

std::list<BreGlobalScopeDefinition>
BreGlobalResource::getScopes()
{
	return scopes;
}

void
BreGlobalResource::setScopes(std::list <BreGlobalScopeDefinition> scopes)
{
	this->scopes = scopes;
}

bool
BreGlobalResource::getSystemGlobal()
{
	return system_global;
}

void
BreGlobalResource::setSystemGlobal(bool  system_global)
{
	this->system_global = system_global;
}

std::string
BreGlobalResource::getType()
{
	return type;
}

void
BreGlobalResource::setType(std::string  type)
{
	this->type = type;
}


