#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "InvoiceItemResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

InvoiceItemResource::InvoiceItemResource()
{
	//__init();
}

InvoiceItemResource::~InvoiceItemResource()
{
	//__cleanup();
}

void
InvoiceItemResource::__init()
{
	//
	//
	//bundle_sku = std::string();
	//
	//
	//current_fulfillment_status = std::string();
	//
	//
	//id = int(0);
	//
	//
	//invoice_id = int(0);
	//
	//
	//item_id = int(0);
	//
	//
	//item_name = std::string();
	//
	//
	//original_total_price = long(0);
	//
	//
	//original_unit_price = long(0);
	//
	//
	//qty = int(0);
	//
	//
	//sale_name = std::string();
	//
	//
	//sku = std::string();
	//
	//
	//sku_description = std::string();
	//
	//
	//system_price = long(0);
	//
	//
	//total_price = long(0);
	//
	//
	//type_hint = std::string();
	//
	//
	//unit_price = long(0);
	//
}

void
InvoiceItemResource::__cleanup()
{
	//if(bundle_sku != NULL) {
	//
	//delete bundle_sku;
	//bundle_sku = NULL;
	//}
	//if(current_fulfillment_status != NULL) {
	//
	//delete current_fulfillment_status;
	//current_fulfillment_status = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(invoice_id != NULL) {
	//
	//delete invoice_id;
	//invoice_id = NULL;
	//}
	//if(item_id != NULL) {
	//
	//delete item_id;
	//item_id = NULL;
	//}
	//if(item_name != NULL) {
	//
	//delete item_name;
	//item_name = NULL;
	//}
	//if(original_total_price != NULL) {
	//
	//delete original_total_price;
	//original_total_price = NULL;
	//}
	//if(original_unit_price != NULL) {
	//
	//delete original_unit_price;
	//original_unit_price = NULL;
	//}
	//if(qty != NULL) {
	//
	//delete qty;
	//qty = NULL;
	//}
	//if(sale_name != NULL) {
	//
	//delete sale_name;
	//sale_name = NULL;
	//}
	//if(sku != NULL) {
	//
	//delete sku;
	//sku = NULL;
	//}
	//if(sku_description != NULL) {
	//
	//delete sku_description;
	//sku_description = NULL;
	//}
	//if(system_price != NULL) {
	//
	//delete system_price;
	//system_price = NULL;
	//}
	//if(total_price != NULL) {
	//
	//delete total_price;
	//total_price = NULL;
	//}
	//if(type_hint != NULL) {
	//
	//delete type_hint;
	//type_hint = NULL;
	//}
	//if(unit_price != NULL) {
	//
	//delete unit_price;
	//unit_price = NULL;
	//}
	//
}

void
InvoiceItemResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *bundle_skuKey = "bundle_sku";
	node = json_object_get_member(pJsonObject, bundle_skuKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&bundle_sku, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *current_fulfillment_statusKey = "current_fulfillment_status";
	node = json_object_get_member(pJsonObject, current_fulfillment_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&current_fulfillment_status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&id, node, "int", "");
		} else {
			
		}
	}
	const gchar *invoice_idKey = "invoice_id";
	node = json_object_get_member(pJsonObject, invoice_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&invoice_id, node, "int", "");
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
	const gchar *item_nameKey = "item_name";
	node = json_object_get_member(pJsonObject, item_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&item_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *original_total_priceKey = "original_total_price";
	node = json_object_get_member(pJsonObject, original_total_priceKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&original_total_price, node, "long long", "");
		} else {
			
		}
	}
	const gchar *original_unit_priceKey = "original_unit_price";
	node = json_object_get_member(pJsonObject, original_unit_priceKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&original_unit_price, node, "long long", "");
		} else {
			
		}
	}
	const gchar *qtyKey = "qty";
	node = json_object_get_member(pJsonObject, qtyKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&qty, node, "int", "");
		} else {
			
		}
	}
	const gchar *sale_nameKey = "sale_name";
	node = json_object_get_member(pJsonObject, sale_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&sale_name, node, "std::string", "");
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
	const gchar *sku_descriptionKey = "sku_description";
	node = json_object_get_member(pJsonObject, sku_descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&sku_description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *system_priceKey = "system_price";
	node = json_object_get_member(pJsonObject, system_priceKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&system_price, node, "long long", "");
		} else {
			
		}
	}
	const gchar *total_priceKey = "total_price";
	node = json_object_get_member(pJsonObject, total_priceKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&total_price, node, "long long", "");
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
	const gchar *unit_priceKey = "unit_price";
	node = json_object_get_member(pJsonObject, unit_priceKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&unit_price, node, "long long", "");
		} else {
			
		}
	}
}

InvoiceItemResource::InvoiceItemResource(char* json)
{
	this->fromJson(json);
}

char*
InvoiceItemResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getBundleSku();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *bundle_skuKey = "bundle_sku";
	json_object_set_member(pJsonObject, bundle_skuKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCurrentFulfillmentStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *current_fulfillment_statusKey = "current_fulfillment_status";
	json_object_set_member(pJsonObject, current_fulfillment_statusKey, node);
	if (isprimitive("int")) {
		int obj = getId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("int")) {
		int obj = getInvoiceId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *invoice_idKey = "invoice_id";
	json_object_set_member(pJsonObject, invoice_idKey, node);
	if (isprimitive("int")) {
		int obj = getItemId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *item_idKey = "item_id";
	json_object_set_member(pJsonObject, item_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getItemName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *item_nameKey = "item_name";
	json_object_set_member(pJsonObject, item_nameKey, node);
	if (isprimitive("long long")) {
		long long obj = getOriginalTotalPrice();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *original_total_priceKey = "original_total_price";
	json_object_set_member(pJsonObject, original_total_priceKey, node);
	if (isprimitive("long long")) {
		long long obj = getOriginalUnitPrice();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *original_unit_priceKey = "original_unit_price";
	json_object_set_member(pJsonObject, original_unit_priceKey, node);
	if (isprimitive("int")) {
		int obj = getQty();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *qtyKey = "qty";
	json_object_set_member(pJsonObject, qtyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSaleName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *sale_nameKey = "sale_name";
	json_object_set_member(pJsonObject, sale_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSku();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *skuKey = "sku";
	json_object_set_member(pJsonObject, skuKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSkuDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *sku_descriptionKey = "sku_description";
	json_object_set_member(pJsonObject, sku_descriptionKey, node);
	if (isprimitive("long long")) {
		long long obj = getSystemPrice();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *system_priceKey = "system_price";
	json_object_set_member(pJsonObject, system_priceKey, node);
	if (isprimitive("long long")) {
		long long obj = getTotalPrice();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *total_priceKey = "total_price";
	json_object_set_member(pJsonObject, total_priceKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTypeHint();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *type_hintKey = "type_hint";
	json_object_set_member(pJsonObject, type_hintKey, node);
	if (isprimitive("long long")) {
		long long obj = getUnitPrice();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *unit_priceKey = "unit_price";
	json_object_set_member(pJsonObject, unit_priceKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
InvoiceItemResource::getBundleSku()
{
	return bundle_sku;
}

void
InvoiceItemResource::setBundleSku(std::string  bundle_sku)
{
	this->bundle_sku = bundle_sku;
}

std::string
InvoiceItemResource::getCurrentFulfillmentStatus()
{
	return current_fulfillment_status;
}

void
InvoiceItemResource::setCurrentFulfillmentStatus(std::string  current_fulfillment_status)
{
	this->current_fulfillment_status = current_fulfillment_status;
}

int
InvoiceItemResource::getId()
{
	return id;
}

void
InvoiceItemResource::setId(int  id)
{
	this->id = id;
}

int
InvoiceItemResource::getInvoiceId()
{
	return invoice_id;
}

void
InvoiceItemResource::setInvoiceId(int  invoice_id)
{
	this->invoice_id = invoice_id;
}

int
InvoiceItemResource::getItemId()
{
	return item_id;
}

void
InvoiceItemResource::setItemId(int  item_id)
{
	this->item_id = item_id;
}

std::string
InvoiceItemResource::getItemName()
{
	return item_name;
}

void
InvoiceItemResource::setItemName(std::string  item_name)
{
	this->item_name = item_name;
}

long long
InvoiceItemResource::getOriginalTotalPrice()
{
	return original_total_price;
}

void
InvoiceItemResource::setOriginalTotalPrice(long long  original_total_price)
{
	this->original_total_price = original_total_price;
}

long long
InvoiceItemResource::getOriginalUnitPrice()
{
	return original_unit_price;
}

void
InvoiceItemResource::setOriginalUnitPrice(long long  original_unit_price)
{
	this->original_unit_price = original_unit_price;
}

int
InvoiceItemResource::getQty()
{
	return qty;
}

void
InvoiceItemResource::setQty(int  qty)
{
	this->qty = qty;
}

std::string
InvoiceItemResource::getSaleName()
{
	return sale_name;
}

void
InvoiceItemResource::setSaleName(std::string  sale_name)
{
	this->sale_name = sale_name;
}

std::string
InvoiceItemResource::getSku()
{
	return sku;
}

void
InvoiceItemResource::setSku(std::string  sku)
{
	this->sku = sku;
}

std::string
InvoiceItemResource::getSkuDescription()
{
	return sku_description;
}

void
InvoiceItemResource::setSkuDescription(std::string  sku_description)
{
	this->sku_description = sku_description;
}

long long
InvoiceItemResource::getSystemPrice()
{
	return system_price;
}

void
InvoiceItemResource::setSystemPrice(long long  system_price)
{
	this->system_price = system_price;
}

long long
InvoiceItemResource::getTotalPrice()
{
	return total_price;
}

void
InvoiceItemResource::setTotalPrice(long long  total_price)
{
	this->total_price = total_price;
}

std::string
InvoiceItemResource::getTypeHint()
{
	return type_hint;
}

void
InvoiceItemResource::setTypeHint(std::string  type_hint)
{
	this->type_hint = type_hint;
}

long long
InvoiceItemResource::getUnitPrice()
{
	return unit_price;
}

void
InvoiceItemResource::setUnitPrice(long long  unit_price)
{
	this->unit_price = unit_price;
}


