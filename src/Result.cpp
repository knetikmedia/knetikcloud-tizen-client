#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Result.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Result::Result()
{
	//__init();
}

Result::~Result()
{
	//__cleanup();
}

void
Result::__init()
{
	//
	//
	//code = int(0);
	//
	//
	//request_id = std::string();
	//
	//new std::list()std::list> result;
	//
	//
}

void
Result::__cleanup()
{
	//if(code != NULL) {
	//
	//delete code;
	//code = NULL;
	//}
	//if(request_id != NULL) {
	//
	//delete request_id;
	//request_id = NULL;
	//}
	//if(result != NULL) {
	//result.RemoveAll(true);
	//delete result;
	//result = NULL;
	//}
	//
}

void
Result::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *codeKey = "code";
	node = json_object_get_member(pJsonObject, codeKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&code, node, "int", "");
		} else {
			
		}
	}
	const gchar *request_idKey = "request_id";
	node = json_object_get_member(pJsonObject, request_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&request_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *resultKey = "result";
	node = json_object_get_member(pJsonObject, resultKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<ErrorResource> new_list;
			ErrorResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("ErrorResource")) {
					jsonToValue(&inst, temp_json, "ErrorResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			result = new_list;
		}
		
	}
}

Result::Result(char* json)
{
	this->fromJson(json);
}

char*
Result::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getCode();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *codeKey = "code";
	json_object_set_member(pJsonObject, codeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRequestId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *request_idKey = "request_id";
	json_object_set_member(pJsonObject, request_idKey, node);
	if (isprimitive("ErrorResource")) {
		list<ErrorResource> new_list = static_cast<list <ErrorResource> > (getResult());
		node = converttoJson(&new_list, "ErrorResource", "array");
	} else {
		node = json_node_alloc();
		list<ErrorResource> new_list = static_cast<list <ErrorResource> > (getResult());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<ErrorResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			ErrorResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *resultKey = "result";
	json_object_set_member(pJsonObject, resultKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
Result::getCode()
{
	return code;
}

void
Result::setCode(int  code)
{
	this->code = code;
}

std::string
Result::getRequestId()
{
	return request_id;
}

void
Result::setRequestId(std::string  request_id)
{
	this->request_id = request_id;
}

std::list<ErrorResource>
Result::getResult()
{
	return result;
}

void
Result::setResult(std::list <ErrorResource> result)
{
	this->result = result;
}


