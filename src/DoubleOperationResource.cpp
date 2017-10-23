#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DoubleOperationResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DoubleOperationResource::DoubleOperationResource()
{
	//__init();
}

DoubleOperationResource::~DoubleOperationResource()
{
	//__cleanup();
}

void
DoubleOperationResource::__init()
{
	//
	//new std::list()std::list> args;
	//
	//
	//
	//definition = std::string();
	//
	//
	//op = std::string();
	//
	//
	//return_type = std::string();
	//
	//new std::list()std::list> supported_operators;
	//
	//
	//
	//type = std::string();
	//
}

void
DoubleOperationResource::__cleanup()
{
	//if(args != NULL) {
	//args.RemoveAll(true);
	//delete args;
	//args = NULL;
	//}
	//if(definition != NULL) {
	//
	//delete definition;
	//definition = NULL;
	//}
	//if(op != NULL) {
	//
	//delete op;
	//op = NULL;
	//}
	//if(return_type != NULL) {
	//
	//delete return_type;
	//return_type = NULL;
	//}
	//if(supported_operators != NULL) {
	//supported_operators.RemoveAll(true);
	//delete supported_operators;
	//supported_operators = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//
}

void
DoubleOperationResource::fromJson(char* jsonStr)
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
	const gchar *definitionKey = "definition";
	node = json_object_get_member(pJsonObject, definitionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&definition, node, "std::string", "");
		} else {
			
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
	const gchar *return_typeKey = "return_type";
	node = json_object_get_member(pJsonObject, return_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&return_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *supported_operatorsKey = "supported_operators";
	node = json_object_get_member(pJsonObject, supported_operatorsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<OperationDefinitionResource> new_list;
			OperationDefinitionResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("OperationDefinitionResource")) {
					jsonToValue(&inst, temp_json, "OperationDefinitionResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			supported_operators = new_list;
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

DoubleOperationResource::DoubleOperationResource(char* json)
{
	this->fromJson(json);
}

char*
DoubleOperationResource::toJson()
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
		std::string obj = getDefinition();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *definitionKey = "definition";
	json_object_set_member(pJsonObject, definitionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getOp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *opKey = "op";
	json_object_set_member(pJsonObject, opKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getReturnType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *return_typeKey = "return_type";
	json_object_set_member(pJsonObject, return_typeKey, node);
	if (isprimitive("OperationDefinitionResource")) {
		list<OperationDefinitionResource> new_list = static_cast<list <OperationDefinitionResource> > (getSupportedOperators());
		node = converttoJson(&new_list, "OperationDefinitionResource", "array");
	} else {
		node = json_node_alloc();
		list<OperationDefinitionResource> new_list = static_cast<list <OperationDefinitionResource> > (getSupportedOperators());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<OperationDefinitionResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			OperationDefinitionResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *supported_operatorsKey = "supported_operators";
	json_object_set_member(pJsonObject, supported_operatorsKey, node);
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
DoubleOperationResource::getArgs()
{
	return args;
}

void
DoubleOperationResource::setArgs(std::list <ExpressionResource> args)
{
	this->args = args;
}

std::string
DoubleOperationResource::getDefinition()
{
	return definition;
}

void
DoubleOperationResource::setDefinition(std::string  definition)
{
	this->definition = definition;
}

std::string
DoubleOperationResource::getOp()
{
	return op;
}

void
DoubleOperationResource::setOp(std::string  op)
{
	this->op = op;
}

std::string
DoubleOperationResource::getReturnType()
{
	return return_type;
}

void
DoubleOperationResource::setReturnType(std::string  return_type)
{
	this->return_type = return_type;
}

std::list<OperationDefinitionResource>
DoubleOperationResource::getSupportedOperators()
{
	return supported_operators;
}

void
DoubleOperationResource::setSupportedOperators(std::list <OperationDefinitionResource> supported_operators)
{
	this->supported_operators = supported_operators;
}

std::string
DoubleOperationResource::getType()
{
	return type;
}

void
DoubleOperationResource::setType(std::string  type)
{
	this->type = type;
}


