#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CartSummary.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CartSummary::CartSummary()
{
	//__init();
}

CartSummary::~CartSummary()
{
	//__cleanup();
}

void
CartSummary::__init()
{
	//
	//
	//created_date = long(0);
	//
	//
	//currency_code = std::string();
	//
	//
	//grand_total = long(0);
	//
	//
	//id = std::string();
	//
	//
	//invoice_id = long(0);
	//
	//
	//items_in_cart = int(0);
	//
	//
	//status = std::string();
	//
	//
	//subtotal = long(0);
	//
}

void
CartSummary::__cleanup()
{
	//if(created_date != NULL) {
	//
	//delete created_date;
	//created_date = NULL;
	//}
	//if(currency_code != NULL) {
	//
	//delete currency_code;
	//currency_code = NULL;
	//}
	//if(grand_total != NULL) {
	//
	//delete grand_total;
	//grand_total = NULL;
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
	//if(items_in_cart != NULL) {
	//
	//delete items_in_cart;
	//items_in_cart = NULL;
	//}
	//if(status != NULL) {
	//
	//delete status;
	//status = NULL;
	//}
	//if(subtotal != NULL) {
	//
	//delete subtotal;
	//subtotal = NULL;
	//}
	//
}

void
CartSummary::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *created_dateKey = "created_date";
	node = json_object_get_member(pJsonObject, created_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&created_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *currency_codeKey = "currency_code";
	node = json_object_get_member(pJsonObject, currency_codeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&currency_code, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *grand_totalKey = "grand_total";
	node = json_object_get_member(pJsonObject, grand_totalKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&grand_total, node, "long long", "");
		} else {
			
		}
	}
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *invoice_idKey = "invoice_id";
	node = json_object_get_member(pJsonObject, invoice_idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&invoice_id, node, "long long", "");
		} else {
			
		}
	}
	const gchar *items_in_cartKey = "items_in_cart";
	node = json_object_get_member(pJsonObject, items_in_cartKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&items_in_cart, node, "int", "");
		} else {
			
		}
	}
	const gchar *statusKey = "status";
	node = json_object_get_member(pJsonObject, statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *subtotalKey = "subtotal";
	node = json_object_get_member(pJsonObject, subtotalKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&subtotal, node, "long long", "");
		} else {
			
		}
	}
}

CartSummary::CartSummary(char* json)
{
	this->fromJson(json);
}

char*
CartSummary::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getCreatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *created_dateKey = "created_date";
	json_object_set_member(pJsonObject, created_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCurrencyCode();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *currency_codeKey = "currency_code";
	json_object_set_member(pJsonObject, currency_codeKey, node);
	if (isprimitive("long long")) {
		long long obj = getGrandTotal();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *grand_totalKey = "grand_total";
	json_object_set_member(pJsonObject, grand_totalKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("long long")) {
		long long obj = getInvoiceId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *invoice_idKey = "invoice_id";
	json_object_set_member(pJsonObject, invoice_idKey, node);
	if (isprimitive("int")) {
		int obj = getItemsInCart();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *items_in_cartKey = "items_in_cart";
	json_object_set_member(pJsonObject, items_in_cartKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *statusKey = "status";
	json_object_set_member(pJsonObject, statusKey, node);
	if (isprimitive("long long")) {
		long long obj = getSubtotal();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *subtotalKey = "subtotal";
	json_object_set_member(pJsonObject, subtotalKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
CartSummary::getCreatedDate()
{
	return created_date;
}

void
CartSummary::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

std::string
CartSummary::getCurrencyCode()
{
	return currency_code;
}

void
CartSummary::setCurrencyCode(std::string  currency_code)
{
	this->currency_code = currency_code;
}

long long
CartSummary::getGrandTotal()
{
	return grand_total;
}

void
CartSummary::setGrandTotal(long long  grand_total)
{
	this->grand_total = grand_total;
}

std::string
CartSummary::getId()
{
	return id;
}

void
CartSummary::setId(std::string  id)
{
	this->id = id;
}

long long
CartSummary::getInvoiceId()
{
	return invoice_id;
}

void
CartSummary::setInvoiceId(long long  invoice_id)
{
	this->invoice_id = invoice_id;
}

int
CartSummary::getItemsInCart()
{
	return items_in_cart;
}

void
CartSummary::setItemsInCart(int  items_in_cart)
{
	this->items_in_cart = items_in_cart;
}

std::string
CartSummary::getStatus()
{
	return status;
}

void
CartSummary::setStatus(std::string  status)
{
	this->status = status;
}

long long
CartSummary::getSubtotal()
{
	return subtotal;
}

void
CartSummary::setSubtotal(long long  subtotal)
{
	this->subtotal = subtotal;
}


