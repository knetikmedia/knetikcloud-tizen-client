#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Cart.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Cart::Cart()
{
	//__init();
}

Cart::~Cart()
{
	//__cleanup();
}

void
Cart::__init()
{
	//
	//new std::list()std::list> available_shipping_options;
	//
	//
	//
	//country_tax = long(0);
	//
	//new std::list()std::list> coupons;
	//
	//
	//
	//created = long(0);
	//
	//
	//currency_code = std::string();
	//
	//
	//discount_total = long(0);
	//
	//
	//error_code = int(0);
	//
	//
	//error_message = std::string();
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
	//new std::list()std::list> items;
	//
	//
	//
	//owner = int(0);
	//
	//new std::list()std::list> selected_shipping_options;
	//
	//
	//
	//shippable = bool(false);
	//
	//
	//shipping_address = new CartShippingAddressRequest();
	//
	//
	//shipping_cost = long(0);
	//
	//
	//state_tax = long(0);
	//
	//
	//status = std::string();
	//
	//
	//subtotal = long(0);
	//
	//
	//updated = long(0);
	//
}

void
Cart::__cleanup()
{
	//if(available_shipping_options != NULL) {
	//available_shipping_options.RemoveAll(true);
	//delete available_shipping_options;
	//available_shipping_options = NULL;
	//}
	//if(country_tax != NULL) {
	//
	//delete country_tax;
	//country_tax = NULL;
	//}
	//if(coupons != NULL) {
	//coupons.RemoveAll(true);
	//delete coupons;
	//coupons = NULL;
	//}
	//if(created != NULL) {
	//
	//delete created;
	//created = NULL;
	//}
	//if(currency_code != NULL) {
	//
	//delete currency_code;
	//currency_code = NULL;
	//}
	//if(discount_total != NULL) {
	//
	//delete discount_total;
	//discount_total = NULL;
	//}
	//if(error_code != NULL) {
	//
	//delete error_code;
	//error_code = NULL;
	//}
	//if(error_message != NULL) {
	//
	//delete error_message;
	//error_message = NULL;
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
	//if(items != NULL) {
	//items.RemoveAll(true);
	//delete items;
	//items = NULL;
	//}
	//if(owner != NULL) {
	//
	//delete owner;
	//owner = NULL;
	//}
	//if(selected_shipping_options != NULL) {
	//selected_shipping_options.RemoveAll(true);
	//delete selected_shipping_options;
	//selected_shipping_options = NULL;
	//}
	//if(shippable != NULL) {
	//
	//delete shippable;
	//shippable = NULL;
	//}
	//if(shipping_address != NULL) {
	//
	//delete shipping_address;
	//shipping_address = NULL;
	//}
	//if(shipping_cost != NULL) {
	//
	//delete shipping_cost;
	//shipping_cost = NULL;
	//}
	//if(state_tax != NULL) {
	//
	//delete state_tax;
	//state_tax = NULL;
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
	//if(updated != NULL) {
	//
	//delete updated;
	//updated = NULL;
	//}
	//
}

void
Cart::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *available_shipping_optionsKey = "available_shipping_options";
	node = json_object_get_member(pJsonObject, available_shipping_optionsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<CartShippingOption> new_list;
			CartShippingOption inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("CartShippingOption")) {
					jsonToValue(&inst, temp_json, "CartShippingOption", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			available_shipping_options = new_list;
		}
		
	}
	const gchar *country_taxKey = "country_tax";
	node = json_object_get_member(pJsonObject, country_taxKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&country_tax, node, "long long", "");
		} else {
			
		}
	}
	const gchar *couponsKey = "coupons";
	node = json_object_get_member(pJsonObject, couponsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<CouponDefinition> new_list;
			CouponDefinition inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("CouponDefinition")) {
					jsonToValue(&inst, temp_json, "CouponDefinition", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			coupons = new_list;
		}
		
	}
	const gchar *createdKey = "created";
	node = json_object_get_member(pJsonObject, createdKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&created, node, "long long", "");
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
	const gchar *discount_totalKey = "discount_total";
	node = json_object_get_member(pJsonObject, discount_totalKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&discount_total, node, "long long", "");
		} else {
			
		}
	}
	const gchar *error_codeKey = "error_code";
	node = json_object_get_member(pJsonObject, error_codeKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&error_code, node, "int", "");
		} else {
			
		}
	}
	const gchar *error_messageKey = "error_message";
	node = json_object_get_member(pJsonObject, error_messageKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&error_message, node, "std::string", "");
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
	const gchar *itemsKey = "items";
	node = json_object_get_member(pJsonObject, itemsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<CartLineItem> new_list;
			CartLineItem inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("CartLineItem")) {
					jsonToValue(&inst, temp_json, "CartLineItem", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			items = new_list;
		}
		
	}
	const gchar *ownerKey = "owner";
	node = json_object_get_member(pJsonObject, ownerKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&owner, node, "int", "");
		} else {
			
		}
	}
	const gchar *selected_shipping_optionsKey = "selected_shipping_options";
	node = json_object_get_member(pJsonObject, selected_shipping_optionsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<CartShippingOption> new_list;
			CartShippingOption inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("CartShippingOption")) {
					jsonToValue(&inst, temp_json, "CartShippingOption", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			selected_shipping_options = new_list;
		}
		
	}
	const gchar *shippableKey = "shippable";
	node = json_object_get_member(pJsonObject, shippableKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&shippable, node, "bool", "");
		} else {
			
		}
	}
	const gchar *shipping_addressKey = "shipping_address";
	node = json_object_get_member(pJsonObject, shipping_addressKey);
	if (node !=NULL) {
	

		if (isprimitive("CartShippingAddressRequest")) {
			jsonToValue(&shipping_address, node, "CartShippingAddressRequest", "CartShippingAddressRequest");
		} else {
			
			CartShippingAddressRequest* obj = static_cast<CartShippingAddressRequest*> (&shipping_address);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *shipping_costKey = "shipping_cost";
	node = json_object_get_member(pJsonObject, shipping_costKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&shipping_cost, node, "long long", "");
		} else {
			
		}
	}
	const gchar *state_taxKey = "state_tax";
	node = json_object_get_member(pJsonObject, state_taxKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&state_tax, node, "long long", "");
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
	const gchar *updatedKey = "updated";
	node = json_object_get_member(pJsonObject, updatedKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&updated, node, "long long", "");
		} else {
			
		}
	}
}

Cart::Cart(char* json)
{
	this->fromJson(json);
}

char*
Cart::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("CartShippingOption")) {
		list<CartShippingOption> new_list = static_cast<list <CartShippingOption> > (getAvailableShippingOptions());
		node = converttoJson(&new_list, "CartShippingOption", "array");
	} else {
		node = json_node_alloc();
		list<CartShippingOption> new_list = static_cast<list <CartShippingOption> > (getAvailableShippingOptions());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<CartShippingOption>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			CartShippingOption obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *available_shipping_optionsKey = "available_shipping_options";
	json_object_set_member(pJsonObject, available_shipping_optionsKey, node);
	if (isprimitive("long long")) {
		long long obj = getCountryTax();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *country_taxKey = "country_tax";
	json_object_set_member(pJsonObject, country_taxKey, node);
	if (isprimitive("CouponDefinition")) {
		list<CouponDefinition> new_list = static_cast<list <CouponDefinition> > (getCoupons());
		node = converttoJson(&new_list, "CouponDefinition", "array");
	} else {
		node = json_node_alloc();
		list<CouponDefinition> new_list = static_cast<list <CouponDefinition> > (getCoupons());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<CouponDefinition>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			CouponDefinition obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *couponsKey = "coupons";
	json_object_set_member(pJsonObject, couponsKey, node);
	if (isprimitive("long long")) {
		long long obj = getCreated();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *createdKey = "created";
	json_object_set_member(pJsonObject, createdKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCurrencyCode();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *currency_codeKey = "currency_code";
	json_object_set_member(pJsonObject, currency_codeKey, node);
	if (isprimitive("long long")) {
		long long obj = getDiscountTotal();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *discount_totalKey = "discount_total";
	json_object_set_member(pJsonObject, discount_totalKey, node);
	if (isprimitive("int")) {
		int obj = getErrorCode();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *error_codeKey = "error_code";
	json_object_set_member(pJsonObject, error_codeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getErrorMessage();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *error_messageKey = "error_message";
	json_object_set_member(pJsonObject, error_messageKey, node);
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
	if (isprimitive("CartLineItem")) {
		list<CartLineItem> new_list = static_cast<list <CartLineItem> > (getItems());
		node = converttoJson(&new_list, "CartLineItem", "array");
	} else {
		node = json_node_alloc();
		list<CartLineItem> new_list = static_cast<list <CartLineItem> > (getItems());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<CartLineItem>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			CartLineItem obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *itemsKey = "items";
	json_object_set_member(pJsonObject, itemsKey, node);
	if (isprimitive("int")) {
		int obj = getOwner();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *ownerKey = "owner";
	json_object_set_member(pJsonObject, ownerKey, node);
	if (isprimitive("CartShippingOption")) {
		list<CartShippingOption> new_list = static_cast<list <CartShippingOption> > (getSelectedShippingOptions());
		node = converttoJson(&new_list, "CartShippingOption", "array");
	} else {
		node = json_node_alloc();
		list<CartShippingOption> new_list = static_cast<list <CartShippingOption> > (getSelectedShippingOptions());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<CartShippingOption>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			CartShippingOption obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *selected_shipping_optionsKey = "selected_shipping_options";
	json_object_set_member(pJsonObject, selected_shipping_optionsKey, node);
	if (isprimitive("bool")) {
		bool obj = getShippable();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *shippableKey = "shippable";
	json_object_set_member(pJsonObject, shippableKey, node);
	if (isprimitive("CartShippingAddressRequest")) {
		CartShippingAddressRequest obj = getShippingAddress();
		node = converttoJson(&obj, "CartShippingAddressRequest", "");
	}
	else {
		
		CartShippingAddressRequest obj = static_cast<CartShippingAddressRequest> (getShippingAddress());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *shipping_addressKey = "shipping_address";
	json_object_set_member(pJsonObject, shipping_addressKey, node);
	if (isprimitive("long long")) {
		long long obj = getShippingCost();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *shipping_costKey = "shipping_cost";
	json_object_set_member(pJsonObject, shipping_costKey, node);
	if (isprimitive("long long")) {
		long long obj = getStateTax();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *state_taxKey = "state_tax";
	json_object_set_member(pJsonObject, state_taxKey, node);
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
	if (isprimitive("long long")) {
		long long obj = getUpdated();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *updatedKey = "updated";
	json_object_set_member(pJsonObject, updatedKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::list<CartShippingOption>
Cart::getAvailableShippingOptions()
{
	return available_shipping_options;
}

void
Cart::setAvailableShippingOptions(std::list <CartShippingOption> available_shipping_options)
{
	this->available_shipping_options = available_shipping_options;
}

long long
Cart::getCountryTax()
{
	return country_tax;
}

void
Cart::setCountryTax(long long  country_tax)
{
	this->country_tax = country_tax;
}

std::list<CouponDefinition>
Cart::getCoupons()
{
	return coupons;
}

void
Cart::setCoupons(std::list <CouponDefinition> coupons)
{
	this->coupons = coupons;
}

long long
Cart::getCreated()
{
	return created;
}

void
Cart::setCreated(long long  created)
{
	this->created = created;
}

std::string
Cart::getCurrencyCode()
{
	return currency_code;
}

void
Cart::setCurrencyCode(std::string  currency_code)
{
	this->currency_code = currency_code;
}

long long
Cart::getDiscountTotal()
{
	return discount_total;
}

void
Cart::setDiscountTotal(long long  discount_total)
{
	this->discount_total = discount_total;
}

int
Cart::getErrorCode()
{
	return error_code;
}

void
Cart::setErrorCode(int  error_code)
{
	this->error_code = error_code;
}

std::string
Cart::getErrorMessage()
{
	return error_message;
}

void
Cart::setErrorMessage(std::string  error_message)
{
	this->error_message = error_message;
}

long long
Cart::getGrandTotal()
{
	return grand_total;
}

void
Cart::setGrandTotal(long long  grand_total)
{
	this->grand_total = grand_total;
}

std::string
Cart::getId()
{
	return id;
}

void
Cart::setId(std::string  id)
{
	this->id = id;
}

long long
Cart::getInvoiceId()
{
	return invoice_id;
}

void
Cart::setInvoiceId(long long  invoice_id)
{
	this->invoice_id = invoice_id;
}

std::list<CartLineItem>
Cart::getItems()
{
	return items;
}

void
Cart::setItems(std::list <CartLineItem> items)
{
	this->items = items;
}

int
Cart::getOwner()
{
	return owner;
}

void
Cart::setOwner(int  owner)
{
	this->owner = owner;
}

std::list<CartShippingOption>
Cart::getSelectedShippingOptions()
{
	return selected_shipping_options;
}

void
Cart::setSelectedShippingOptions(std::list <CartShippingOption> selected_shipping_options)
{
	this->selected_shipping_options = selected_shipping_options;
}

bool
Cart::getShippable()
{
	return shippable;
}

void
Cart::setShippable(bool  shippable)
{
	this->shippable = shippable;
}

CartShippingAddressRequest
Cart::getShippingAddress()
{
	return shipping_address;
}

void
Cart::setShippingAddress(CartShippingAddressRequest  shipping_address)
{
	this->shipping_address = shipping_address;
}

long long
Cart::getShippingCost()
{
	return shipping_cost;
}

void
Cart::setShippingCost(long long  shipping_cost)
{
	this->shipping_cost = shipping_cost;
}

long long
Cart::getStateTax()
{
	return state_tax;
}

void
Cart::setStateTax(long long  state_tax)
{
	this->state_tax = state_tax;
}

std::string
Cart::getStatus()
{
	return status;
}

void
Cart::setStatus(std::string  status)
{
	this->status = status;
}

long long
Cart::getSubtotal()
{
	return subtotal;
}

void
Cart::setSubtotal(long long  subtotal)
{
	this->subtotal = subtotal;
}

long long
Cart::getUpdated()
{
	return updated;
}

void
Cart::setUpdated(long long  updated)
{
	this->updated = updated;
}


