#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Batch.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Batch::Batch()
{
	//__init();
}

Batch::~Batch()
{
	//__cleanup();
}

void
Batch::__init()
{
	//
	//new std::list()std::list> batch;
	//
	//
	//
	//timeout = int(0);
	//
}

void
Batch::__cleanup()
{
	//if(batch != NULL) {
	//batch.RemoveAll(true);
	//delete batch;
	//batch = NULL;
	//}
	//if(timeout != NULL) {
	//
	//delete timeout;
	//timeout = NULL;
	//}
	//
}

void
Batch::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *batchKey = "batch";
	node = json_object_get_member(pJsonObject, batchKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<BatchRequest> new_list;
			BatchRequest inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("BatchRequest")) {
					jsonToValue(&inst, temp_json, "BatchRequest", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			batch = new_list;
		}
		
	}
	const gchar *timeoutKey = "timeout";
	node = json_object_get_member(pJsonObject, timeoutKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&timeout, node, "int", "");
		} else {
			
		}
	}
}

Batch::Batch(char* json)
{
	this->fromJson(json);
}

char*
Batch::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("BatchRequest")) {
		list<BatchRequest> new_list = static_cast<list <BatchRequest> > (getBatch());
		node = converttoJson(&new_list, "BatchRequest", "array");
	} else {
		node = json_node_alloc();
		list<BatchRequest> new_list = static_cast<list <BatchRequest> > (getBatch());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<BatchRequest>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			BatchRequest obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *batchKey = "batch";
	json_object_set_member(pJsonObject, batchKey, node);
	if (isprimitive("int")) {
		int obj = getTimeout();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *timeoutKey = "timeout";
	json_object_set_member(pJsonObject, timeoutKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::list<BatchRequest>
Batch::getBatch()
{
	return batch;
}

void
Batch::setBatch(std::list <BatchRequest> batch)
{
	this->batch = batch;
}

int
Batch::getTimeout()
{
	return timeout;
}

void
Batch::setTimeout(int  timeout)
{
	this->timeout = timeout;
}


