#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CartItemRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CartItemRequest::CartItemRequest()
{
	//__init();
}

CartItemRequest::~CartItemRequest()
{
	//__cleanup();
}

void
CartItemRequest::__init()
{
	//
	//
	//affiliate_key = std::string();
	//
	//
	//catalog_sku = std::string();
	//
	//
	//price_override = double(0);
	//
	//
	//quantity = int(0);
	//
}

void
CartItemRequest::__cleanup()
{
	//if(affiliate_key != NULL) {
	//
	//delete affiliate_key;
	//affiliate_key = NULL;
	//}
	//if(catalog_sku != NULL) {
	//
	//delete catalog_sku;
	//catalog_sku = NULL;
	//}
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
	//
}

void
CartItemRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *affiliate_keyKey = "affiliate_key";
	node = json_object_get_member(pJsonObject, affiliate_keyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&affiliate_key, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *catalog_skuKey = "catalog_sku";
	node = json_object_get_member(pJsonObject, catalog_skuKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&catalog_sku, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *price_overrideKey = "price_override";
	node = json_object_get_member(pJsonObject, price_overrideKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&price_override, node, "double", "");
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
}

CartItemRequest::CartItemRequest(char* json)
{
	this->fromJson(json);
}

char*
CartItemRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getAffiliateKey();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *affiliate_keyKey = "affiliate_key";
	json_object_set_member(pJsonObject, affiliate_keyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCatalogSku();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *catalog_skuKey = "catalog_sku";
	json_object_set_member(pJsonObject, catalog_skuKey, node);
	if (isprimitive("double")) {
		double obj = getPriceOverride();
		node = converttoJson(&obj, "double", "");
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
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
CartItemRequest::getAffiliateKey()
{
	return affiliate_key;
}

void
CartItemRequest::setAffiliateKey(std::string  affiliate_key)
{
	this->affiliate_key = affiliate_key;
}

std::string
CartItemRequest::getCatalogSku()
{
	return catalog_sku;
}

void
CartItemRequest::setCatalogSku(std::string  catalog_sku)
{
	this->catalog_sku = catalog_sku;
}

double
CartItemRequest::getPriceOverride()
{
	return price_override;
}

void
CartItemRequest::setPriceOverride(double  price_override)
{
	this->price_override = price_override;
}

int
CartItemRequest::getQuantity()
{
	return quantity;
}

void
CartItemRequest::setQuantity(int  quantity)
{
	this->quantity = quantity;
}


