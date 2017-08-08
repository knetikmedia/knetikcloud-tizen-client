#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BatchResult.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BatchResult::BatchResult()
{
	//__init();
}

BatchResult::~BatchResult()
{
	//__cleanup();
}

void
BatchResult::__init()
{
	//
	//new std::list()std::list> batch_return;
	//
	//
	//
	//created_date = long(0);
	//
	//
	//id = std::string();
	//
	//
	//updated_date = long(0);
	//
}

void
BatchResult::__cleanup()
{
	//if(batch_return != NULL) {
	//batch_return.RemoveAll(true);
	//delete batch_return;
	//batch_return = NULL;
	//}
	//if(created_date != NULL) {
	//
	//delete created_date;
	//created_date = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//
}

void
BatchResult::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *batch_returnKey = "batch_return";
	node = json_object_get_member(pJsonObject, batch_returnKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<BatchReturn> new_list;
			BatchReturn inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("BatchReturn")) {
					jsonToValue(&inst, temp_json, "BatchReturn", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			batch_return = new_list;
		}
		
	}
	const gchar *created_dateKey = "created_date";
	node = json_object_get_member(pJsonObject, created_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&created_date, node, "long long", "");
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
	const gchar *updated_dateKey = "updated_date";
	node = json_object_get_member(pJsonObject, updated_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&updated_date, node, "long long", "");
		} else {
			
		}
	}
}

BatchResult::BatchResult(char* json)
{
	this->fromJson(json);
}

char*
BatchResult::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("BatchReturn")) {
		list<BatchReturn> new_list = static_cast<list <BatchReturn> > (getBatchReturn());
		node = converttoJson(&new_list, "BatchReturn", "array");
	} else {
		node = json_node_alloc();
		list<BatchReturn> new_list = static_cast<list <BatchReturn> > (getBatchReturn());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<BatchReturn>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			BatchReturn obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *batch_returnKey = "batch_return";
	json_object_set_member(pJsonObject, batch_returnKey, node);
	if (isprimitive("long long")) {
		long long obj = getCreatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *created_dateKey = "created_date";
	json_object_set_member(pJsonObject, created_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("long long")) {
		long long obj = getUpdatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *updated_dateKey = "updated_date";
	json_object_set_member(pJsonObject, updated_dateKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::list<BatchReturn>
BatchResult::getBatchReturn()
{
	return batch_return;
}

void
BatchResult::setBatchReturn(std::list <BatchReturn> batch_return)
{
	this->batch_return = batch_return;
}

long long
BatchResult::getCreatedDate()
{
	return created_date;
}

void
BatchResult::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

std::string
BatchResult::getId()
{
	return id;
}

void
BatchResult::setId(std::string  id)
{
	this->id = id;
}

long long
BatchResult::getUpdatedDate()
{
	return updated_date;
}

void
BatchResult::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}


