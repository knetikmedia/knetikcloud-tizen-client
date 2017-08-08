#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ActivityOccurrenceCreationFailure.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ActivityOccurrenceCreationFailure::ActivityOccurrenceCreationFailure()
{
	//__init();
}

ActivityOccurrenceCreationFailure::~ActivityOccurrenceCreationFailure()
{
	//__cleanup();
}

void
ActivityOccurrenceCreationFailure::__init()
{
	//
	//new std::list()std::list> user_results;
	//
	//
}

void
ActivityOccurrenceCreationFailure::__cleanup()
{
	//if(user_results != NULL) {
	//user_results.RemoveAll(true);
	//delete user_results;
	//user_results = NULL;
	//}
	//
}

void
ActivityOccurrenceCreationFailure::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *user_resultsKey = "user_results";
	node = json_object_get_member(pJsonObject, user_resultsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<ActivityOccurrenceJoinResult> new_list;
			ActivityOccurrenceJoinResult inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("ActivityOccurrenceJoinResult")) {
					jsonToValue(&inst, temp_json, "ActivityOccurrenceJoinResult", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			user_results = new_list;
		}
		
	}
}

ActivityOccurrenceCreationFailure::ActivityOccurrenceCreationFailure(char* json)
{
	this->fromJson(json);
}

char*
ActivityOccurrenceCreationFailure::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("ActivityOccurrenceJoinResult")) {
		list<ActivityOccurrenceJoinResult> new_list = static_cast<list <ActivityOccurrenceJoinResult> > (getUserResults());
		node = converttoJson(&new_list, "ActivityOccurrenceJoinResult", "array");
	} else {
		node = json_node_alloc();
		list<ActivityOccurrenceJoinResult> new_list = static_cast<list <ActivityOccurrenceJoinResult> > (getUserResults());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<ActivityOccurrenceJoinResult>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			ActivityOccurrenceJoinResult obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *user_resultsKey = "user_results";
	json_object_set_member(pJsonObject, user_resultsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::list<ActivityOccurrenceJoinResult>
ActivityOccurrenceCreationFailure::getUserResults()
{
	return user_results;
}

void
ActivityOccurrenceCreationFailure::setUserResults(std::list <ActivityOccurrenceJoinResult> user_results)
{
	this->user_results = user_results;
}


