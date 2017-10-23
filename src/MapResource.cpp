#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MapResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MapResource::MapResource()
{
	//__init();
}

MapResource::~MapResource()
{
	//__cleanup();
}

void
MapResource::__init()
{
	//
	//
	//definition = std::string();
	//
	//new std::map()std::map> map;
	//
	//
	//
	//type = std::string();
	//
}

void
MapResource::__cleanup()
{
	//if(definition != NULL) {
	//
	//delete definition;
	//definition = NULL;
	//}
	//if(map != NULL) {
	//map.RemoveAll(true);
	//delete map;
	//map = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//
}

void
MapResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *definitionKey = "definition";
	node = json_object_get_member(pJsonObject, definitionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&definition, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *mapKey = "map";
	node = json_object_get_member(pJsonObject, mapKey);
	if (node !=NULL) {
	
		{
			JsonObject* json_obj = json_node_get_object(node);
			map<string,string> new_map;
			json_object_foreach_member(json_obj,helper_func,&new_map);
			map = new_map;
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

MapResource::MapResource(char* json)
{
	this->fromJson(json);
}

char*
MapResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getDefinition();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *definitionKey = "definition";
	json_object_set_member(pJsonObject, definitionKey, node);


	{
		JsonObject* json_obj;
		map<string, string> new_list = static_cast<map <string, string> > (getMap());
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

	const gchar *mapKey = "map";
	json_object_set_member(pJsonObject, mapKey, node);
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
MapResource::getDefinition()
{
	return definition;
}

void
MapResource::setDefinition(std::string  definition)
{
	this->definition = definition;
}

std::map<string, string>
MapResource::getMap()
{
	return map;
}

void
MapResource::setMap(std::map <string, string> map)
{
	this->map = map;
}

std::string
MapResource::getType()
{
	return type;
}

void
MapResource::setType(std::string  type)
{
	this->type = type;
}


