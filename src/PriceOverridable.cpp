#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PriceOverridable.h"

using namespace std;
using namespace Tizen::ArtikCloud;

PriceOverridable::PriceOverridable()
{
	//__init();
}

PriceOverridable::~PriceOverridable()
{
	//__cleanup();
}

void
PriceOverridable::__init()
{
	//
	//
	//description = std::string();
	//
	//
	//type_hint = std::string();
	//
	//
	//max_price = long(0);
	//
	//
	//min_price = long(0);
	//
}

void
PriceOverridable::__cleanup()
{
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
	//}
	//if(type_hint != NULL) {
	//
	//delete type_hint;
	//type_hint = NULL;
	//}
	//if(max_price != NULL) {
	//
	//delete max_price;
	//max_price = NULL;
	//}
	//if(min_price != NULL) {
	//
	//delete min_price;
	//min_price = NULL;
	//}
	//
}

void
PriceOverridable::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *descriptionKey = "description";
	node = json_object_get_member(pJsonObject, descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *type_hintKey = "type_hint";
	node = json_object_get_member(pJsonObject, type_hintKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type_hint, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *max_priceKey = "max_price";
	node = json_object_get_member(pJsonObject, max_priceKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&max_price, node, "long long", "");
		} else {
			
		}
	}
	const gchar *min_priceKey = "min_price";
	node = json_object_get_member(pJsonObject, min_priceKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&min_price, node, "long long", "");
		} else {
			
		}
	}
}

PriceOverridable::PriceOverridable(char* json)
{
	this->fromJson(json);
}

char*
PriceOverridable::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *descriptionKey = "description";
	json_object_set_member(pJsonObject, descriptionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTypeHint();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *type_hintKey = "type_hint";
	json_object_set_member(pJsonObject, type_hintKey, node);
	if (isprimitive("long long")) {
		long long obj = getMaxPrice();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *max_priceKey = "max_price";
	json_object_set_member(pJsonObject, max_priceKey, node);
	if (isprimitive("long long")) {
		long long obj = getMinPrice();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *min_priceKey = "min_price";
	json_object_set_member(pJsonObject, min_priceKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
PriceOverridable::getDescription()
{
	return description;
}

void
PriceOverridable::setDescription(std::string  description)
{
	this->description = description;
}

std::string
PriceOverridable::getTypeHint()
{
	return type_hint;
}

void
PriceOverridable::setTypeHint(std::string  type_hint)
{
	this->type_hint = type_hint;
}

long long
PriceOverridable::getMaxPrice()
{
	return max_price;
}

void
PriceOverridable::setMaxPrice(long long  max_price)
{
	this->max_price = max_price;
}

long long
PriceOverridable::getMinPrice()
{
	return min_price;
}

void
PriceOverridable::setMinPrice(long long  min_price)
{
	this->min_price = min_price;
}


