#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BundledSku.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BundledSku::BundledSku()
{
	//__init();
}

BundledSku::~BundledSku()
{
	//__cleanup();
}

void
BundledSku::__init()
{
	//
	//
	//price_override = long(0);
	//
	//
	//quantity = int(0);
	//
	//
	//sku = std::string();
	//
}

void
BundledSku::__cleanup()
{
	//if(price_override != NULL) {
	//
	//delete price_override;
	//price_override = NULL;
	//}
	//if(quantity != NULL) {
	//
	//delete quantity;
	//quantity = NULL;
	//}
	//if(sku != NULL) {
	//
	//delete sku;
	//sku = NULL;
	//}
	//
}

void
BundledSku::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *price_overrideKey = "price_override";
	node = json_object_get_member(pJsonObject, price_overrideKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&price_override, node, "long long", "");
		} else {
			
		}
	}
	const gchar *quantityKey = "quantity";
	node = json_object_get_member(pJsonObject, quantityKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&quantity, node, "int", "");
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

BundledSku::BundledSku(char* json)
{
	this->fromJson(json);
}

char*
BundledSku::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getPriceOverride();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *price_overrideKey = "price_override";
	json_object_set_member(pJsonObject, price_overrideKey, node);
	if (isprimitive("int")) {
		int obj = getQuantity();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *quantityKey = "quantity";
	json_object_set_member(pJsonObject, quantityKey, node);
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

long long
BundledSku::getPriceOverride()
{
	return price_override;
}

void
BundledSku::setPriceOverride(long long  price_override)
{
	this->price_override = price_override;
}

int
BundledSku::getQuantity()
{
	return quantity;
}

void
BundledSku::setQuantity(int  quantity)
{
	this->quantity = quantity;
}

std::string
BundledSku::getSku()
{
	return sku;
}

void
BundledSku::setSku(std::string  sku)
{
	this->sku = sku;
}


