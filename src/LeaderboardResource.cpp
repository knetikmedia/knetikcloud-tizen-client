#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "LeaderboardResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

LeaderboardResource::LeaderboardResource()
{
	//__init();
}

LeaderboardResource::~LeaderboardResource()
{
	//__cleanup();
}

void
LeaderboardResource::__init()
{
	//
	//new std::list()std::list> entries;
	//
	//
	//
	//id = long(0);
	//
	//
	//strategy = std::string();
	//
}

void
LeaderboardResource::__cleanup()
{
	//if(entries != NULL) {
	//entries.RemoveAll(true);
	//delete entries;
	//entries = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(strategy != NULL) {
	//
	//delete strategy;
	//strategy = NULL;
	//}
	//
}

void
LeaderboardResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *entriesKey = "entries";
	node = json_object_get_member(pJsonObject, entriesKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<LeaderboardEntryResource> new_list;
			LeaderboardEntryResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("LeaderboardEntryResource")) {
					jsonToValue(&inst, temp_json, "LeaderboardEntryResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			entries = new_list;
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
	const gchar *strategyKey = "strategy";
	node = json_object_get_member(pJsonObject, strategyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&strategy, node, "std::string", "");
		} else {
			
		}
	}
}

LeaderboardResource::LeaderboardResource(char* json)
{
	this->fromJson(json);
}

char*
LeaderboardResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("LeaderboardEntryResource")) {
		list<LeaderboardEntryResource> new_list = static_cast<list <LeaderboardEntryResource> > (getEntries());
		node = converttoJson(&new_list, "LeaderboardEntryResource", "array");
	} else {
		node = json_node_alloc();
		list<LeaderboardEntryResource> new_list = static_cast<list <LeaderboardEntryResource> > (getEntries());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<LeaderboardEntryResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			LeaderboardEntryResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *entriesKey = "entries";
	json_object_set_member(pJsonObject, entriesKey, node);
	if (isprimitive("long long")) {
		long long obj = getId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getStrategy();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *strategyKey = "strategy";
	json_object_set_member(pJsonObject, strategyKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::list<LeaderboardEntryResource>
LeaderboardResource::getEntries()
{
	return entries;
}

void
LeaderboardResource::setEntries(std::list <LeaderboardEntryResource> entries)
{
	this->entries = entries;
}

long long
LeaderboardResource::getId()
{
	return id;
}

void
LeaderboardResource::setId(long long  id)
{
	this->id = id;
}

std::string
LeaderboardResource::getStrategy()
{
	return strategy;
}

void
LeaderboardResource::setStrategy(std::string  strategy)
{
	this->strategy = strategy;
}


