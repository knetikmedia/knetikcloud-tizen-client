#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Order.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Order::Order()
{
	//__init();
}

Order::~Order()
{
	//__cleanup();
}

void
Order::__init()
{
	//
	//
	//ascending = bool(false);
	//
	//
	//descending = bool(false);
	//
	//
	//direction = std::string();
	//
	//
	//ignore_case = bool(false);
	//
	//
	//null_handling = std::string();
	//
	//
	//property = std::string();
	//
}

void
Order::__cleanup()
{
	//if(ascending != NULL) {
	//
	//delete ascending;
	//ascending = NULL;
	//}
	//if(descending != NULL) {
	//
	//delete descending;
	//descending = NULL;
	//}
	//if(direction != NULL) {
	//
	//delete direction;
	//direction = NULL;
	//}
	//if(ignore_case != NULL) {
	//
	//delete ignore_case;
	//ignore_case = NULL;
	//}
	//if(null_handling != NULL) {
	//
	//delete null_handling;
	//null_handling = NULL;
	//}
	//if(property != NULL) {
	//
	//delete property;
	//property = NULL;
	//}
	//
}

void
Order::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *ascendingKey = "ascending";
	node = json_object_get_member(pJsonObject, ascendingKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&ascending, node, "bool", "");
		} else {
			
		}
	}
	const gchar *descendingKey = "descending";
	node = json_object_get_member(pJsonObject, descendingKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&descending, node, "bool", "");
		} else {
			
		}
	}
	const gchar *directionKey = "direction";
	node = json_object_get_member(pJsonObject, directionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&direction, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *ignore_caseKey = "ignore_case";
	node = json_object_get_member(pJsonObject, ignore_caseKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&ignore_case, node, "bool", "");
		} else {
			
		}
	}
	const gchar *null_handlingKey = "null_handling";
	node = json_object_get_member(pJsonObject, null_handlingKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&null_handling, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *propertyKey = "property";
	node = json_object_get_member(pJsonObject, propertyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&property, node, "std::string", "");
		} else {
			
		}
	}
}

Order::Order(char* json)
{
	this->fromJson(json);
}

char*
Order::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getAscending();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *ascendingKey = "ascending";
	json_object_set_member(pJsonObject, ascendingKey, node);
	if (isprimitive("bool")) {
		bool obj = getDescending();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *descendingKey = "descending";
	json_object_set_member(pJsonObject, descendingKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDirection();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *directionKey = "direction";
	json_object_set_member(pJsonObject, directionKey, node);
	if (isprimitive("bool")) {
		bool obj = getIgnoreCase();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *ignore_caseKey = "ignore_case";
	json_object_set_member(pJsonObject, ignore_caseKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getNullHandling();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *null_handlingKey = "null_handling";
	json_object_set_member(pJsonObject, null_handlingKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getProperty();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *propertyKey = "property";
	json_object_set_member(pJsonObject, propertyKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
Order::getAscending()
{
	return ascending;
}

void
Order::setAscending(bool  ascending)
{
	this->ascending = ascending;
}

bool
Order::getDescending()
{
	return descending;
}

void
Order::setDescending(bool  descending)
{
	this->descending = descending;
}

std::string
Order::getDirection()
{
	return direction;
}

void
Order::setDirection(std::string  direction)
{
	this->direction = direction;
}

bool
Order::getIgnoreCase()
{
	return ignore_case;
}

void
Order::setIgnoreCase(bool  ignore_case)
{
	this->ignore_case = ignore_case;
}

std::string
Order::getNullHandling()
{
	return null_handling;
}

void
Order::setNullHandling(std::string  null_handling)
{
	this->null_handling = null_handling;
}

std::string
Order::getProperty()
{
	return property;
}

void
Order::setProperty(std::string  property)
{
	this->property = property;
}


