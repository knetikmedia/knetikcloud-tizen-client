#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CartShippingOption.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CartShippingOption::CartShippingOption()
{
	//__init();
}

CartShippingOption::~CartShippingOption()
{
	//__cleanup();
}

void
CartShippingOption::__init()
{
	//
	//
	//currency_code = std::string();
	//
	//
	//description = std::string();
	//
	//
	//name = std::string();
	//
	//
	//original_price = double(0);
	//
	//
	//price = double(0);
	//
	//
	//shipping_item_id = int(0);
	//
	//
	//sku = std::string();
	//
	//
	//taxable = bool(false);
	//
	//
	//vendor_id = int(0);
	//
	//
	//vendor_name = std::string();
	//
}

void
CartShippingOption::__cleanup()
{
	//if(currency_code != NULL) {
	//
	//delete currency_code;
	//currency_code = NULL;
	//}
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(original_price != NULL) {
	//
	//delete original_price;
	//original_price = NULL;
	//}
	//if(price != NULL) {
	//
	//delete price;
	//price = NULL;
	//}
	//if(shipping_item_id != NULL) {
	//
	//delete shipping_item_id;
	//shipping_item_id = NULL;
	//}
	//if(sku != NULL) {
	//
	//delete sku;
	//sku = NULL;
	//}
	//if(taxable != NULL) {
	//
	//delete taxable;
	//taxable = NULL;
	//}
	//if(vendor_id != NULL) {
	//
	//delete vendor_id;
	//vendor_id = NULL;
	//}
	//if(vendor_name != NULL) {
	//
	//delete vendor_name;
	//vendor_name = NULL;
	//}
	//
}

void
CartShippingOption::fromJson(char* jsonStr)
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
	const gchar *descriptionKey = "description";
	node = json_object_get_member(pJsonObject, descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&description, node, "std::string", "");
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
	const gchar *original_priceKey = "original_price";
	node = json_object_get_member(pJsonObject, original_priceKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&original_price, node, "double", "");
		} else {
			
		}
	}
	const gchar *priceKey = "price";
	node = json_object_get_member(pJsonObject, priceKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&price, node, "double", "");
		} else {
			
		}
	}
	const gchar *shipping_item_idKey = "shipping_item_id";
	node = json_object_get_member(pJsonObject, shipping_item_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&shipping_item_id, node, "int", "");
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
	const gchar *taxableKey = "taxable";
	node = json_object_get_member(pJsonObject, taxableKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&taxable, node, "bool", "");
		} else {
			
		}
	}
	const gchar *vendor_idKey = "vendor_id";
	node = json_object_get_member(pJsonObject, vendor_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&vendor_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *vendor_nameKey = "vendor_name";
	node = json_object_get_member(pJsonObject, vendor_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vendor_name, node, "std::string", "");
		} else {
			
		}
	}
}

CartShippingOption::CartShippingOption(char* json)
{
	this->fromJson(json);
}

char*
CartShippingOption::toJson()
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
	if (isprimitive("std::string")) {
		std::string obj = getDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *descriptionKey = "description";
	json_object_set_member(pJsonObject, descriptionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("double")) {
		double obj = getOriginalPrice();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *original_priceKey = "original_price";
	json_object_set_member(pJsonObject, original_priceKey, node);
	if (isprimitive("double")) {
		double obj = getPrice();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *priceKey = "price";
	json_object_set_member(pJsonObject, priceKey, node);
	if (isprimitive("int")) {
		int obj = getShippingItemId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *shipping_item_idKey = "shipping_item_id";
	json_object_set_member(pJsonObject, shipping_item_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSku();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *skuKey = "sku";
	json_object_set_member(pJsonObject, skuKey, node);
	if (isprimitive("bool")) {
		bool obj = getTaxable();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *taxableKey = "taxable";
	json_object_set_member(pJsonObject, taxableKey, node);
	if (isprimitive("int")) {
		int obj = getVendorId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *vendor_idKey = "vendor_id";
	json_object_set_member(pJsonObject, vendor_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVendorName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vendor_nameKey = "vendor_name";
	json_object_set_member(pJsonObject, vendor_nameKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
CartShippingOption::getCurrencyCode()
{
	return currency_code;
}

void
CartShippingOption::setCurrencyCode(std::string  currency_code)
{
	this->currency_code = currency_code;
}

std::string
CartShippingOption::getDescription()
{
	return description;
}

void
CartShippingOption::setDescription(std::string  description)
{
	this->description = description;
}

std::string
CartShippingOption::getName()
{
	return name;
}

void
CartShippingOption::setName(std::string  name)
{
	this->name = name;
}

double
CartShippingOption::getOriginalPrice()
{
	return original_price;
}

void
CartShippingOption::setOriginalPrice(double  original_price)
{
	this->original_price = original_price;
}

double
CartShippingOption::getPrice()
{
	return price;
}

void
CartShippingOption::setPrice(double  price)
{
	this->price = price;
}

int
CartShippingOption::getShippingItemId()
{
	return shipping_item_id;
}

void
CartShippingOption::setShippingItemId(int  shipping_item_id)
{
	this->shipping_item_id = shipping_item_id;
}

std::string
CartShippingOption::getSku()
{
	return sku;
}

void
CartShippingOption::setSku(std::string  sku)
{
	this->sku = sku;
}

bool
CartShippingOption::getTaxable()
{
	return taxable;
}

void
CartShippingOption::setTaxable(bool  taxable)
{
	this->taxable = taxable;
}

int
CartShippingOption::getVendorId()
{
	return vendor_id;
}

void
CartShippingOption::setVendorId(int  vendor_id)
{
	this->vendor_id = vendor_id;
}

std::string
CartShippingOption::getVendorName()
{
	return vendor_name;
}

void
CartShippingOption::setVendorName(std::string  vendor_name)
{
	this->vendor_name = vendor_name;
}


