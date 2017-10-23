#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BillingReport.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BillingReport::BillingReport()
{
	//__init();
}

BillingReport::~BillingReport()
{
	//__cleanup();
}

void
BillingReport::__init()
{
	//
	//
	//created = long(0);
	//
	//
	//id = std::string();
	//
	//new std::list()std::list> last_known_failures;
	//
	//
	//new std::map()std::map> statistics;
	//
	//
}

void
BillingReport::__cleanup()
{
	//if(created != NULL) {
	//
	//delete created;
	//created = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(last_known_failures != NULL) {
	//last_known_failures.RemoveAll(true);
	//delete last_known_failures;
	//last_known_failures = NULL;
	//}
	//if(statistics != NULL) {
	//statistics.RemoveAll(true);
	//delete statistics;
	//statistics = NULL;
	//}
	//
}

void
BillingReport::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *createdKey = "created";
	node = json_object_get_member(pJsonObject, createdKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&created, node, "long long", "");
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
	const gchar *last_known_failuresKey = "last_known_failures";
	node = json_object_get_member(pJsonObject, last_known_failuresKey);
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
			last_known_failures = new_list;
		}
		
	}
	const gchar *statisticsKey = "statistics";
	node = json_object_get_member(pJsonObject, statisticsKey);
	if (node !=NULL) {
	
		{
			JsonObject* json_obj = json_node_get_object(node);
			map<string,string> new_map;
			json_object_foreach_member(json_obj,helper_func,&new_map);
			statistics = new_map;
		}
		
	}
}

BillingReport::BillingReport(char* json)
{
	this->fromJson(json);
}

char*
BillingReport::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getCreated();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *createdKey = "created";
	json_object_set_member(pJsonObject, createdKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getLastKnownFailures());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getLastKnownFailures());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *last_known_failuresKey = "last_known_failures";
	json_object_set_member(pJsonObject, last_known_failuresKey, node);


	{
		JsonObject* json_obj;
		map<string, string> new_list = static_cast<map <string, string> > (getStatistics());
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

	const gchar *statisticsKey = "statistics";
	json_object_set_member(pJsonObject, statisticsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
BillingReport::getCreated()
{
	return created;
}

void
BillingReport::setCreated(long long  created)
{
	this->created = created;
}

std::string
BillingReport::getId()
{
	return id;
}

void
BillingReport::setId(std::string  id)
{
	this->id = id;
}

std::list<std::string>
BillingReport::getLastKnownFailures()
{
	return last_known_failures;
}

void
BillingReport::setLastKnownFailures(std::list <std::string> last_known_failures)
{
	this->last_known_failures = last_known_failures;
}

std::map<string, string>
BillingReport::getStatistics()
{
	return statistics;
}

void
BillingReport::setStatistics(std::map <string, string> statistics)
{
	this->statistics = statistics;
}


