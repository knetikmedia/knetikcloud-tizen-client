#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "GlobalResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

GlobalResource::GlobalResource()
{
	//__init();
}

GlobalResource::~GlobalResource()
{
	//__cleanup();
}

void
GlobalResource::__init()
{
	//
	//
	//global_def_id = std::string();
	//
	//new std::map()std::map> scopes;
	//
	//
	//
	//type = std::string();
	//
}

void
GlobalResource::__cleanup()
{
	//if(global_def_id != NULL) {
	//
	//delete global_def_id;
	//global_def_id = NULL;
	//}
	//if(scopes != NULL) {
	//scopes.RemoveAll(true);
	//delete scopes;
	//scopes = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//
}

void
GlobalResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *global_def_idKey = "global_def_id";
	node = json_object_get_member(pJsonObject, global_def_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&global_def_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *scopesKey = "scopes";
	node = json_object_get_member(pJsonObject, scopesKey);
	if (node !=NULL) {
	
		{
			JsonObject* json_obj = json_node_get_object(node);
			map<string,string> new_map;
			json_object_foreach_member(json_obj,helper_func,&new_map);
			scopes = new_map;
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

GlobalResource::GlobalResource(char* json)
{
	this->fromJson(json);
}

char*
GlobalResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getGlobalDefId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *global_def_idKey = "global_def_id";
	json_object_set_member(pJsonObject, global_def_idKey, node);


	{
		JsonObject* json_obj;
		map<string, string> new_list = static_cast<map <string, string> > (getScopes());
		json_obj = json_object_new();
		for (map<string, string>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			string obj = (*it).first;
			string obj2 = (*it).second;
			JsonNode* tempnode = json_from_string(obj2.c_str(),NULL);
			json_object_set_member(json_obj, obj.c_str(), tempnode);
		}
	node = json_node_alloc();
	json_node_init_object(node, json_obj);
	json_object_unref(json_obj);
	}

	const gchar *scopesKey = "scopes";
	json_object_set_member(pJsonObject, scopesKey, node);
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
GlobalResource::getGlobalDefId()
{
	return global_def_id;
}

void
GlobalResource::setGlobalDefId(std::string  global_def_id)
{
	this->global_def_id = global_def_id;
}

std::map<string, string>
GlobalResource::getScopes()
{
	return scopes;
}

void
GlobalResource::setScopes(std::map <string, string> scopes)
{
	this->scopes = scopes;
}

std::string
GlobalResource::getType()
{
	return type;
}

void
GlobalResource::setType(std::string  type)
{
	this->type = type;
}


