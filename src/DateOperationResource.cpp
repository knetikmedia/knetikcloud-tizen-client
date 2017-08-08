#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DateOperationResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DateOperationResource::DateOperationResource()
{
	//__init();
}

DateOperationResource::~DateOperationResource()
{
	//__cleanup();
}

void
DateOperationResource::__init()
{
	//
	//new std::list()std::list> args;
	//
	//
	//
	//op = std::string();
	//
	//
	//type = std::string();
	//
}

void
DateOperationResource::__cleanup()
{
	//if(args != NULL) {
	//args.RemoveAll(true);
	//delete args;
	//args = NULL;
	//}
	//if(op != NULL) {
	//
	//delete op;
	//op = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//
}

void
DateOperationResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *argsKey = "args";
	node = json_object_get_member(pJsonObject, argsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<ExpressionResource> new_list;
			ExpressionResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("ExpressionResource")) {
					jsonToValue(&inst, temp_json, "ExpressionResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			args = new_list;
		}
		
	}
	const gchar *opKey = "op";
	node = json_object_get_member(pJsonObject, opKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&op, node, "std::string", "");
		} else {
			
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

DateOperationResource::DateOperationResource(char* json)
{
	this->fromJson(json);
}

char*
DateOperationResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("ExpressionResource")) {
		list<ExpressionResource> new_list = static_cast<list <ExpressionResource> > (getArgs());
		node = converttoJson(&new_list, "ExpressionResource", "array");
	} else {
		node = json_node_alloc();
		list<ExpressionResource> new_list = static_cast<list <ExpressionResource> > (getArgs());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<ExpressionResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			ExpressionResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *argsKey = "args";
	json_object_set_member(pJsonObject, argsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getOp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *opKey = "op";
	json_object_set_member(pJsonObject, opKey, node);
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

std::list<ExpressionResource>
DateOperationResource::getArgs()
{
	return args;
}

void
DateOperationResource::setArgs(std::list <ExpressionResource> args)
{
	this->args = args;
}

std::string
DateOperationResource::getOp()
{
	return op;
}

void
DateOperationResource::setOp(std::string  op)
{
	this->op = op;
}

std::string
DateOperationResource::getType()
{
	return type;
}

void
DateOperationResource::setType(std::string  type)
{
	this->type = type;
}


