#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MessageTemplateBulkRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MessageTemplateBulkRequest::MessageTemplateBulkRequest()
{
	//__init();
}

MessageTemplateBulkRequest::~MessageTemplateBulkRequest()
{
	//__cleanup();
}

void
MessageTemplateBulkRequest::__init()
{
	//
	//
	//data = null;
	//
	//new std::list()std::list> ids;
	//
	//
}

void
MessageTemplateBulkRequest::__cleanup()
{
	//if(data != NULL) {
	//
	//delete data;
	//data = NULL;
	//}
	//if(ids != NULL) {
	//ids.RemoveAll(true);
	//delete ids;
	//ids = NULL;
	//}
	//
}

void
MessageTemplateBulkRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *dataKey = "data";
	node = json_object_get_member(pJsonObject, dataKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&data, node, "std::string", "");
		} else {
			
			std::string* obj = static_cast<std::string*> (&data);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *idsKey = "ids";
	node = json_object_get_member(pJsonObject, idsKey);
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
			ids = new_list;
		}
		
	}
}

MessageTemplateBulkRequest::MessageTemplateBulkRequest(char* json)
{
	this->fromJson(json);
}

char*
MessageTemplateBulkRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getData();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
		std::string obj = static_cast<std::string> (getData());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *dataKey = "data";
	json_object_set_member(pJsonObject, dataKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getIds());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getIds());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *idsKey = "ids";
	json_object_set_member(pJsonObject, idsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
MessageTemplateBulkRequest::getData()
{
	return data;
}

void
MessageTemplateBulkRequest::setData(std::string  data)
{
	this->data = data;
}

std::list<std::string>
MessageTemplateBulkRequest::getIds()
{
	return ids;
}

void
MessageTemplateBulkRequest::setIds(std::list <std::string> ids)
{
	this->ids = ids;
}


