#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "OperationDefinitionResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

OperationDefinitionResource::OperationDefinitionResource()
{
	//__init();
}

OperationDefinitionResource::~OperationDefinitionResource()
{
	//__cleanup();
}

void
OperationDefinitionResource::__init()
{
	//
	//new std::list()std::list> arguments;
	//
	//
	//
	//description = std::string();
	//
	//
	//_operator = new Operator();
	//
	//
	//return_type = std::string();
	//
	//
	//_template = std::string();
	//
}

void
OperationDefinitionResource::__cleanup()
{
	//if(arguments != NULL) {
	//arguments.RemoveAll(true);
	//delete arguments;
	//arguments = NULL;
	//}
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
	//}
	//if(_operator != NULL) {
	//
	//delete _operator;
	//_operator = NULL;
	//}
	//if(return_type != NULL) {
	//
	//delete return_type;
	//return_type = NULL;
	//}
	//if(_template != NULL) {
	//
	//delete _template;
	//_template = NULL;
	//}
	//
}

void
OperationDefinitionResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *argumentsKey = "arguments";
	node = json_object_get_member(pJsonObject, argumentsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<ArgumentResource> new_list;
			ArgumentResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("ArgumentResource")) {
					jsonToValue(&inst, temp_json, "ArgumentResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			arguments = new_list;
		}
		
	}
	const gchar *descriptionKey = "description";
	node = json_object_get_member(pJsonObject, descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&description, node, "std::string", "");
		} else {
			
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
	const gchar *return_typeKey = "return_type";
	node = json_object_get_member(pJsonObject, return_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&return_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *_templateKey = "template";
	node = json_object_get_member(pJsonObject, _templateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&_template, node, "std::string", "");
		} else {
			
		}
	}
}

OperationDefinitionResource::OperationDefinitionResource(char* json)
{
	this->fromJson(json);
}

char*
OperationDefinitionResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("ArgumentResource")) {
		list<ArgumentResource> new_list = static_cast<list <ArgumentResource> > (getArguments());
		node = converttoJson(&new_list, "ArgumentResource", "array");
	} else {
		node = json_node_alloc();
		list<ArgumentResource> new_list = static_cast<list <ArgumentResource> > (getArguments());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<ArgumentResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			ArgumentResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *argumentsKey = "arguments";
	json_object_set_member(pJsonObject, argumentsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *descriptionKey = "description";
	json_object_set_member(pJsonObject, descriptionKey, node);
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
	if (isprimitive("std::string")) {
		std::string obj = getReturnType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *return_typeKey = "return_type";
	json_object_set_member(pJsonObject, return_typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTemplate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *_templateKey = "template";
	json_object_set_member(pJsonObject, _templateKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::list<ArgumentResource>
OperationDefinitionResource::getArguments()
{
	return arguments;
}

void
OperationDefinitionResource::setArguments(std::list <ArgumentResource> arguments)
{
	this->arguments = arguments;
}

std::string
OperationDefinitionResource::getDescription()
{
	return description;
}

void
OperationDefinitionResource::setDescription(std::string  description)
{
	this->description = description;
}

Operator
OperationDefinitionResource::getOperator()
{
	return _operator;
}

void
OperationDefinitionResource::setOperator(Operator  _operator)
{
	this->_operator = _operator;
}

std::string
OperationDefinitionResource::getReturnType()
{
	return return_type;
}

void
OperationDefinitionResource::setReturnType(std::string  return_type)
{
	this->return_type = return_type;
}

std::string
OperationDefinitionResource::getTemplate()
{
	return _template;
}

void
OperationDefinitionResource::setTemplate(std::string  _template)
{
	this->_template = _template;
}


