#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ActivityEntitlementResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ActivityEntitlementResource::ActivityEntitlementResource()
{
	//__init();
}

ActivityEntitlementResource::~ActivityEntitlementResource()
{
	//__cleanup();
}

void
ActivityEntitlementResource::__init()
{
	//
	//
	//currency_code = std::string();
	//
	//
	//item_id = int(0);
	//
	//
	//name = std::string();
	//
	//
	//price = long(0);
	//
	//
	//sku = std::string();
	//
}

void
ActivityEntitlementResource::__cleanup()
{
	//if(currency_code != NULL) {
	//
	//delete currency_code;
	//currency_code = NULL;
	//}
	//if(item_id != NULL) {
	//
	//delete item_id;
	//item_id = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(price != NULL) {
	//
	//delete price;
	//price = NULL;
	//}
	//if(sku != NULL) {
	//
	//delete sku;
	//sku = NULL;
	//}
	//
}

void
ActivityEntitlementResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *currency_codeKey = "currency_code";
	node = json_object_get_member(pJsonObject, currency_codeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&currency_code, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *item_idKey = "item_id";
	node = json_object_get_member(pJsonObject, item_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&item_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *priceKey = "price";
	node = json_object_get_member(pJsonObject, priceKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&price, node, "long long", "");
		} else {
			
		}
	}
	const gchar *skuKey = "sku";
	node = json_object_get_member(pJsonObject, skuKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&sku, node, "std::string", "");
		} else {
			
		}
	}
}

ActivityEntitlementResource::ActivityEntitlementResource(char* json)
{
	this->fromJson(json);
}

char*
ActivityEntitlementResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getCurrencyCode();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *currency_codeKey = "currency_code";
	json_object_set_member(pJsonObject, currency_codeKey, node);
	if (isprimitive("int")) {
		int obj = getItemId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *item_idKey = "item_id";
	json_object_set_member(pJsonObject, item_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("long long")) {
		long long obj = getPrice();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *priceKey = "price";
	json_object_set_member(pJsonObject, priceKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSku();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *skuKey = "sku";
	json_object_set_member(pJsonObject, skuKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
ActivityEntitlementResource::getCurrencyCode()
{
	return currency_code;
}

void
ActivityEntitlementResource::setCurrencyCode(std::string  currency_code)
{
	this->currency_code = currency_code;
}

int
ActivityEntitlementResource::getItemId()
{
	return item_id;
}

void
ActivityEntitlementResource::setItemId(int  item_id)
{
	this->item_id = item_id;
}

std::string
ActivityEntitlementResource::getName()
{
	return name;
}

void
ActivityEntitlementResource::setName(std::string  name)
{
	this->name = name;
}

long long
ActivityEntitlementResource::getPrice()
{
	return price;
}

void
ActivityEntitlementResource::setPrice(long long  price)
{
	this->price = price;
}

std::string
ActivityEntitlementResource::getSku()
{
	return sku;
}

void
ActivityEntitlementResource::setSku(std::string  sku)
{
	this->sku = sku;
}


