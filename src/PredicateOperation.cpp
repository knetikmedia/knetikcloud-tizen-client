#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PredicateOperation.h"

using namespace std;
using namespace Tizen::ArtikCloud;

PredicateOperation::PredicateOperation()
{
	//__init();
}

PredicateOperation::~PredicateOperation()
{
	//__cleanup();
}

void
PredicateOperation::__init()
{
	//
	//new std::list()std::list> args;
	//
	//
	//
	//_operator = new Operator();
	//
}

void
PredicateOperation::__cleanup()
{
	//if(args != NULL) {
	//args.RemoveAll(true);
	//delete args;
	//args = NULL;
	//}
	//if(_operator != NULL) {
	//
	//delete _operator;
	//_operator = NULL;
	//}
	//
}

void
PredicateOperation::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *argsKey = "args";
	node = json_object_get_member(pJsonObject, argsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<Expression«object»> new_list;
			Expression«object» inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("Expression«object»")) {
					jsonToValue(&inst, temp_json, "Expression«object»", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			args = new_list;
		}
		
	}
	const gchar *_operatorKey = "operator";
	node = json_object_get_member(pJsonObject, _operatorKey);
	if (node !=NULL) {
	

		if (isprimitive("Operator")) {
			jsonToValue(&_operator, node, "Operator", "Operator");
		} else {
			
			Operator* obj = static_cast<Operator*> (&_operator);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

PredicateOperation::PredicateOperation(char* json)
{
	this->fromJson(json);
}

char*
PredicateOperation::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("Expression«object»")) {
		list<Expression«object»> new_list = static_cast<list <Expression«object»> > (getArgs());
		node = converttoJson(&new_list, "Expression«object»", "array");
	} else {
		node = json_node_alloc();
		list<Expression«object»> new_list = static_cast<list <Expression«object»> > (getArgs());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<Expression«object»>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			Expression«object» obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *argsKey = "args";
	json_object_set_member(pJsonObject, argsKey, node);
	if (isprimitive("Operator")) {
		Operator obj = getOperator();
		node = converttoJson(&obj, "Operator", "");
	}
	else {
		
		Operator obj = static_cast<Operator> (getOperator());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *_operatorKey = "operator";
	json_object_set_member(pJsonObject, _operatorKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::list<Expression«object»>
PredicateOperation::getArgs()
{
	return args;
}

void
PredicateOperation::setArgs(std::list <Expression«object»> args)
{
	this->args = args;
}

Operator
PredicateOperation::getOperator()
{
	return _operator;
}

void
PredicateOperation::setOperator(Operator  _operator)
{
	this->_operator = _operator;
}


