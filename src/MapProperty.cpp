#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MapProperty.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MapProperty::MapProperty()
{
	//__init();
}

MapProperty::~MapProperty()
{
	//__cleanup();
}

void
MapProperty::__init()
{
	//
	//
	//type = std::string();
	//
	//new std::map()std::map> map;
	//
	//
}

void
MapProperty::__cleanup()
{
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(map != NULL) {
	//map.RemoveAll(true);
	//delete map;
	//map = NULL;
	//}
	//
}

void
MapProperty::fromJson(char* jsonStr)
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
}

MapProperty::MapProperty(char* json)
{
	this->fromJson(json);
}

char*
MapProperty::toJson()
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
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
MapProperty::getType()
{
	return type;
}

void
MapProperty::setType(std::string  type)
{
	this->type = type;
}

std::map<string, string>
MapProperty::getMap()
{
	return map;
}

void
MapProperty::setMap(std::map <string, string> map)
{
	this->map = map;
}


