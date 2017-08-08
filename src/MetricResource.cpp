#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MetricResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MetricResource::MetricResource()
{
	//__init();
}

MetricResource::~MetricResource()
{
	//__cleanup();
}

void
MetricResource::__init()
{
	//
	//
	//activity_occurence_id = long(0);
	//
	//new std::list()std::list> tags;
	//
	//
	//
	//value = long(0);
	//
}

void
MetricResource::__cleanup()
{
	//if(activity_occurence_id != NULL) {
	//
	//delete activity_occurence_id;
	//activity_occurence_id = NULL;
	//}
	//if(tags != NULL) {
	//tags.RemoveAll(true);
	//delete tags;
	//tags = NULL;
	//}
	//if(value != NULL) {
	//
	//delete value;
	//value = NULL;
	//}
	//
}

void
MetricResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *activity_occurence_idKey = "activity_occurence_id";
	node = json_object_get_member(pJsonObject, activity_occurence_idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&activity_occurence_id, node, "long long", "");
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
	const gchar *valueKey = "value";
	node = json_object_get_member(pJsonObject, valueKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&value, node, "long long", "");
		} else {
			
		}
	}
}

MetricResource::MetricResource(char* json)
{
	this->fromJson(json);
}

char*
MetricResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getActivityOccurenceId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *activity_occurence_idKey = "activity_occurence_id";
	json_object_set_member(pJsonObject, activity_occurence_idKey, node);
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
	if (isprimitive("long long")) {
		long long obj = getValue();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *valueKey = "value";
	json_object_set_member(pJsonObject, valueKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
MetricResource::getActivityOccurenceId()
{
	return activity_occurence_id;
}

void
MetricResource::setActivityOccurenceId(long long  activity_occurence_id)
{
	this->activity_occurence_id = activity_occurence_id;
}

std::list<std::string>
MetricResource::getTags()
{
	return tags;
}

void
MetricResource::setTags(std::list <std::string> tags)
{
	this->tags = tags;
}

long long
MetricResource::getValue()
{
	return value;
}

void
MetricResource::setValue(long long  value)
{
	this->value = value;
}


