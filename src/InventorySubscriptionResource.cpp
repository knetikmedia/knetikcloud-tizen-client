#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "InventorySubscriptionResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

InventorySubscriptionResource::InventorySubscriptionResource()
{
	//__init();
}

InventorySubscriptionResource::~InventorySubscriptionResource()
{
	//__cleanup();
}

void
InventorySubscriptionResource::__init()
{
	//
	//
	//bill_date = long(0);
	//
	//
	//credit = double(0);
	//
	//new std::list()std::list> credit_log;
	//
	//
	//
	//grace_end = long(0);
	//
	//
	//inventory_id = int(0);
	//
	//
	//inventory_status = std::string();
	//
	//
	//item_id = int(0);
	//
	//
	//payment_method = new PaymentMethodResource();
	//
	//
	//price_override = double(0);
	//
	//
	//price_override_reason = std::string();
	//
	//
	//recurring_price = double(0);
	//
	//
	//sku = std::string();
	//
	//
	//start_date = long(0);
	//
	//
	//subscription_status = int(0);
	//
	//
	//user = new SimpleUserResource();
	//
}

void
InventorySubscriptionResource::__cleanup()
{
	//if(bill_date != NULL) {
	//
	//delete bill_date;
	//bill_date = NULL;
	//}
	//if(credit != NULL) {
	//
	//delete credit;
	//credit = NULL;
	//}
	//if(credit_log != NULL) {
	//credit_log.RemoveAll(true);
	//delete credit_log;
	//credit_log = NULL;
	//}
	//if(grace_end != NULL) {
	//
	//delete grace_end;
	//grace_end = NULL;
	//}
	//if(inventory_id != NULL) {
	//
	//delete inventory_id;
	//inventory_id = NULL;
	//}
	//if(inventory_status != NULL) {
	//
	//delete inventory_status;
	//inventory_status = NULL;
	//}
	//if(item_id != NULL) {
	//
	//delete item_id;
	//item_id = NULL;
	//}
	//if(payment_method != NULL) {
	//
	//delete payment_method;
	//payment_method = NULL;
	//}
	//if(price_override != NULL) {
	//
	//delete price_override;
	//price_override = NULL;
	//}
	//if(price_override_reason != NULL) {
	//
	//delete price_override_reason;
	//price_override_reason = NULL;
	//}
	//if(recurring_price != NULL) {
	//
	//delete recurring_price;
	//recurring_price = NULL;
	//}
	//if(sku != NULL) {
	//
	//delete sku;
	//sku = NULL;
	//}
	//if(start_date != NULL) {
	//
	//delete start_date;
	//start_date = NULL;
	//}
	//if(subscription_status != NULL) {
	//
	//delete subscription_status;
	//subscription_status = NULL;
	//}
	//if(user != NULL) {
	//
	//delete user;
	//user = NULL;
	//}
	//
}

void
InventorySubscriptionResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *bill_dateKey = "bill_date";
	node = json_object_get_member(pJsonObject, bill_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&bill_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *creditKey = "credit";
	node = json_object_get_member(pJsonObject, creditKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&credit, node, "double", "");
		} else {
			
		}
	}
	const gchar *credit_logKey = "credit_log";
	node = json_object_get_member(pJsonObject, credit_logKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<SubscriptionCreditResource> new_list;
			SubscriptionCreditResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("SubscriptionCreditResource")) {
					jsonToValue(&inst, temp_json, "SubscriptionCreditResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			credit_log = new_list;
		}
		
	}
	const gchar *grace_endKey = "grace_end";
	node = json_object_get_member(pJsonObject, grace_endKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&grace_end, node, "long long", "");
		} else {
			
		}
	}
	const gchar *inventory_idKey = "inventory_id";
	node = json_object_get_member(pJsonObject, inventory_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&inventory_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *inventory_statusKey = "inventory_status";
	node = json_object_get_member(pJsonObject, inventory_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&inventory_status, node, "std::string", "");
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
	const gchar *payment_methodKey = "payment_method";
	node = json_object_get_member(pJsonObject, payment_methodKey);
	if (node !=NULL) {
	

		if (isprimitive("PaymentMethodResource")) {
			jsonToValue(&payment_method, node, "PaymentMethodResource", "PaymentMethodResource");
		} else {
			
			PaymentMethodResource* obj = static_cast<PaymentMethodResource*> (&payment_method);
			obj->fromJson(json_to_string(node, false));
			
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
	const gchar *price_override_reasonKey = "price_override_reason";
	node = json_object_get_member(pJsonObject, price_override_reasonKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&price_override_reason, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *recurring_priceKey = "recurring_price";
	node = json_object_get_member(pJsonObject, recurring_priceKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&recurring_price, node, "double", "");
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
	const gchar *start_dateKey = "start_date";
	node = json_object_get_member(pJsonObject, start_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&start_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *subscription_statusKey = "subscription_status";
	node = json_object_get_member(pJsonObject, subscription_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&subscription_status, node, "int", "");
		} else {
			
		}
	}
	const gchar *userKey = "user";
	node = json_object_get_member(pJsonObject, userKey);
	if (node !=NULL) {
	

		if (isprimitive("SimpleUserResource")) {
			jsonToValue(&user, node, "SimpleUserResource", "SimpleUserResource");
		} else {
			
			SimpleUserResource* obj = static_cast<SimpleUserResource*> (&user);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

InventorySubscriptionResource::InventorySubscriptionResource(char* json)
{
	this->fromJson(json);
}

char*
InventorySubscriptionResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getBillDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *bill_dateKey = "bill_date";
	json_object_set_member(pJsonObject, bill_dateKey, node);
	if (isprimitive("double")) {
		double obj = getCredit();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *creditKey = "credit";
	json_object_set_member(pJsonObject, creditKey, node);
	if (isprimitive("SubscriptionCreditResource")) {
		list<SubscriptionCreditResource> new_list = static_cast<list <SubscriptionCreditResource> > (getCreditLog());
		node = converttoJson(&new_list, "SubscriptionCreditResource", "array");
	} else {
		node = json_node_alloc();
		list<SubscriptionCreditResource> new_list = static_cast<list <SubscriptionCreditResource> > (getCreditLog());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<SubscriptionCreditResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			SubscriptionCreditResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *credit_logKey = "credit_log";
	json_object_set_member(pJsonObject, credit_logKey, node);
	if (isprimitive("long long")) {
		long long obj = getGraceEnd();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *grace_endKey = "grace_end";
	json_object_set_member(pJsonObject, grace_endKey, node);
	if (isprimitive("int")) {
		int obj = getInventoryId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *inventory_idKey = "inventory_id";
	json_object_set_member(pJsonObject, inventory_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getInventoryStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *inventory_statusKey = "inventory_status";
	json_object_set_member(pJsonObject, inventory_statusKey, node);
	if (isprimitive("int")) {
		int obj = getItemId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *item_idKey = "item_id";
	json_object_set_member(pJsonObject, item_idKey, node);
	if (isprimitive("PaymentMethodResource")) {
		PaymentMethodResource obj = getPaymentMethod();
		node = converttoJson(&obj, "PaymentMethodResource", "");
	}
	else {
		
		PaymentMethodResource obj = static_cast<PaymentMethodResource> (getPaymentMethod());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *payment_methodKey = "payment_method";
	json_object_set_member(pJsonObject, payment_methodKey, node);
	if (isprimitive("double")) {
		double obj = getPriceOverride();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *price_overrideKey = "price_override";
	json_object_set_member(pJsonObject, price_overrideKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPriceOverrideReason();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *price_override_reasonKey = "price_override_reason";
	json_object_set_member(pJsonObject, price_override_reasonKey, node);
	if (isprimitive("double")) {
		double obj = getRecurringPrice();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *recurring_priceKey = "recurring_price";
	json_object_set_member(pJsonObject, recurring_priceKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSku();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *skuKey = "sku";
	json_object_set_member(pJsonObject, skuKey, node);
	if (isprimitive("long long")) {
		long long obj = getStartDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *start_dateKey = "start_date";
	json_object_set_member(pJsonObject, start_dateKey, node);
	if (isprimitive("int")) {
		int obj = getSubscriptionStatus();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *subscription_statusKey = "subscription_status";
	json_object_set_member(pJsonObject, subscription_statusKey, node);
	if (isprimitive("SimpleUserResource")) {
		SimpleUserResource obj = getUser();
		node = converttoJson(&obj, "SimpleUserResource", "");
	}
	else {
		
		SimpleUserResource obj = static_cast<SimpleUserResource> (getUser());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *userKey = "user";
	json_object_set_member(pJsonObject, userKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
InventorySubscriptionResource::getBillDate()
{
	return bill_date;
}

void
InventorySubscriptionResource::setBillDate(long long  bill_date)
{
	this->bill_date = bill_date;
}

double
InventorySubscriptionResource::getCredit()
{
	return credit;
}

void
InventorySubscriptionResource::setCredit(double  credit)
{
	this->credit = credit;
}

std::list<SubscriptionCreditResource>
InventorySubscriptionResource::getCreditLog()
{
	return credit_log;
}

void
InventorySubscriptionResource::setCreditLog(std::list <SubscriptionCreditResource> credit_log)
{
	this->credit_log = credit_log;
}

long long
InventorySubscriptionResource::getGraceEnd()
{
	return grace_end;
}

void
InventorySubscriptionResource::setGraceEnd(long long  grace_end)
{
	this->grace_end = grace_end;
}

int
InventorySubscriptionResource::getInventoryId()
{
	return inventory_id;
}

void
InventorySubscriptionResource::setInventoryId(int  inventory_id)
{
	this->inventory_id = inventory_id;
}

std::string
InventorySubscriptionResource::getInventoryStatus()
{
	return inventory_status;
}

void
InventorySubscriptionResource::setInventoryStatus(std::string  inventory_status)
{
	this->inventory_status = inventory_status;
}

int
InventorySubscriptionResource::getItemId()
{
	return item_id;
}

void
InventorySubscriptionResource::setItemId(int  item_id)
{
	this->item_id = item_id;
}

PaymentMethodResource
InventorySubscriptionResource::getPaymentMethod()
{
	return payment_method;
}

void
InventorySubscriptionResource::setPaymentMethod(PaymentMethodResource  payment_method)
{
	this->payment_method = payment_method;
}

double
InventorySubscriptionResource::getPriceOverride()
{
	return price_override;
}

void
InventorySubscriptionResource::setPriceOverride(double  price_override)
{
	this->price_override = price_override;
}

std::string
InventorySubscriptionResource::getPriceOverrideReason()
{
	return price_override_reason;
}

void
InventorySubscriptionResource::setPriceOverrideReason(std::string  price_override_reason)
{
	this->price_override_reason = price_override_reason;
}

double
InventorySubscriptionResource::getRecurringPrice()
{
	return recurring_price;
}

void
InventorySubscriptionResource::setRecurringPrice(double  recurring_price)
{
	this->recurring_price = recurring_price;
}

std::string
InventorySubscriptionResource::getSku()
{
	return sku;
}

void
InventorySubscriptionResource::setSku(std::string  sku)
{
	this->sku = sku;
}

long long
InventorySubscriptionResource::getStartDate()
{
	return start_date;
}

void
InventorySubscriptionResource::setStartDate(long long  start_date)
{
	this->start_date = start_date;
}

int
InventorySubscriptionResource::getSubscriptionStatus()
{
	return subscription_status;
}

void
InventorySubscriptionResource::setSubscriptionStatus(int  subscription_status)
{
	this->subscription_status = subscription_status;
}

SimpleUserResource
InventorySubscriptionResource::getUser()
{
	return user;
}

void
InventorySubscriptionResource::setUser(SimpleUserResource  user)
{
	this->user = user;
}


