#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "SubscriptionPlan.h"

using namespace std;
using namespace Tizen::ArtikCloud;

SubscriptionPlan::SubscriptionPlan()
{
	//__init();
}

SubscriptionPlan::~SubscriptionPlan()
{
	//__cleanup();
}

void
SubscriptionPlan::__init()
{
	//
	//new std::map()std::map> additional_properties;
	//
	//
	//
	//availability = std::string();
	//
	//
	//bill_grace_days = int(0);
	//
	//
	//consolidated = bool(false);
	//
	//
	//first_bill = int(0);
	//
	//
	//first_bill_unit_of_time = std::string();
	//
	//
	//id = std::string();
	//
	//
	//late_payment_sku = std::string();
	//
	//
	//locked = bool(false);
	//
	//
	//max_auto_renew = int(0);
	//
	//
	//max_bill_attempts = int(0);
	//
	//
	//migration_plan = std::string();
	//
	//
	//minimum_term = int(0);
	//
	//
	//name = std::string();
	//
	//
	//primary_sku = std::string();
	//
	//
	//reactivation_sku = std::string();
	//
	//
	//recurring_sku = std::string();
	//
	//
	//renew_period = int(0);
	//
	//
	//renew_period_unit_of_time = std::string();
	//
	//
	//subscription_id = int(0);
	//
}

void
SubscriptionPlan::__cleanup()
{
	//if(additional_properties != NULL) {
	//additional_properties.RemoveAll(true);
	//delete additional_properties;
	//additional_properties = NULL;
	//}
	//if(availability != NULL) {
	//
	//delete availability;
	//availability = NULL;
	//}
	//if(bill_grace_days != NULL) {
	//
	//delete bill_grace_days;
	//bill_grace_days = NULL;
	//}
	//if(consolidated != NULL) {
	//
	//delete consolidated;
	//consolidated = NULL;
	//}
	//if(first_bill != NULL) {
	//
	//delete first_bill;
	//first_bill = NULL;
	//}
	//if(first_bill_unit_of_time != NULL) {
	//
	//delete first_bill_unit_of_time;
	//first_bill_unit_of_time = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(late_payment_sku != NULL) {
	//
	//delete late_payment_sku;
	//late_payment_sku = NULL;
	//}
	//if(locked != NULL) {
	//
	//delete locked;
	//locked = NULL;
	//}
	//if(max_auto_renew != NULL) {
	//
	//delete max_auto_renew;
	//max_auto_renew = NULL;
	//}
	//if(max_bill_attempts != NULL) {
	//
	//delete max_bill_attempts;
	//max_bill_attempts = NULL;
	//}
	//if(migration_plan != NULL) {
	//
	//delete migration_plan;
	//migration_plan = NULL;
	//}
	//if(minimum_term != NULL) {
	//
	//delete minimum_term;
	//minimum_term = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(primary_sku != NULL) {
	//
	//delete primary_sku;
	//primary_sku = NULL;
	//}
	//if(reactivation_sku != NULL) {
	//
	//delete reactivation_sku;
	//reactivation_sku = NULL;
	//}
	//if(recurring_sku != NULL) {
	//
	//delete recurring_sku;
	//recurring_sku = NULL;
	//}
	//if(renew_period != NULL) {
	//
	//delete renew_period;
	//renew_period = NULL;
	//}
	//if(renew_period_unit_of_time != NULL) {
	//
	//delete renew_period_unit_of_time;
	//renew_period_unit_of_time = NULL;
	//}
	//if(subscription_id != NULL) {
	//
	//delete subscription_id;
	//subscription_id = NULL;
	//}
	//
}

void
SubscriptionPlan::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *additional_propertiesKey = "additional_properties";
	node = json_object_get_member(pJsonObject, additional_propertiesKey);
	if (node !=NULL) {
	
		{
			JsonObject* json_obj = json_node_get_object(node);
			map<string,string> new_map;
			json_object_foreach_member(json_obj,helper_func,&new_map);
			additional_properties = new_map;
		}
		
	}
	const gchar *availabilityKey = "availability";
	node = json_object_get_member(pJsonObject, availabilityKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&availability, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *bill_grace_daysKey = "bill_grace_days";
	node = json_object_get_member(pJsonObject, bill_grace_daysKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&bill_grace_days, node, "int", "");
		} else {
			
		}
	}
	const gchar *consolidatedKey = "consolidated";
	node = json_object_get_member(pJsonObject, consolidatedKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&consolidated, node, "bool", "");
		} else {
			
		}
	}
	const gchar *first_billKey = "first_bill";
	node = json_object_get_member(pJsonObject, first_billKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&first_bill, node, "int", "");
		} else {
			
		}
	}
	const gchar *first_bill_unit_of_timeKey = "first_bill_unit_of_time";
	node = json_object_get_member(pJsonObject, first_bill_unit_of_timeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&first_bill_unit_of_time, node, "std::string", "");
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
	const gchar *late_payment_skuKey = "late_payment_sku";
	node = json_object_get_member(pJsonObject, late_payment_skuKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&late_payment_sku, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *lockedKey = "locked";
	node = json_object_get_member(pJsonObject, lockedKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&locked, node, "bool", "");
		} else {
			
		}
	}
	const gchar *max_auto_renewKey = "max_auto_renew";
	node = json_object_get_member(pJsonObject, max_auto_renewKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&max_auto_renew, node, "int", "");
		} else {
			
		}
	}
	const gchar *max_bill_attemptsKey = "max_bill_attempts";
	node = json_object_get_member(pJsonObject, max_bill_attemptsKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&max_bill_attempts, node, "int", "");
		} else {
			
		}
	}
	const gchar *migration_planKey = "migration_plan";
	node = json_object_get_member(pJsonObject, migration_planKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&migration_plan, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *minimum_termKey = "minimum_term";
	node = json_object_get_member(pJsonObject, minimum_termKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&minimum_term, node, "int", "");
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
	const gchar *primary_skuKey = "primary_sku";
	node = json_object_get_member(pJsonObject, primary_skuKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&primary_sku, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *reactivation_skuKey = "reactivation_sku";
	node = json_object_get_member(pJsonObject, reactivation_skuKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&reactivation_sku, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *recurring_skuKey = "recurring_sku";
	node = json_object_get_member(pJsonObject, recurring_skuKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&recurring_sku, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *renew_periodKey = "renew_period";
	node = json_object_get_member(pJsonObject, renew_periodKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&renew_period, node, "int", "");
		} else {
			
		}
	}
	const gchar *renew_period_unit_of_timeKey = "renew_period_unit_of_time";
	node = json_object_get_member(pJsonObject, renew_period_unit_of_timeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&renew_period_unit_of_time, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *subscription_idKey = "subscription_id";
	node = json_object_get_member(pJsonObject, subscription_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&subscription_id, node, "int", "");
		} else {
			
		}
	}
}

SubscriptionPlan::SubscriptionPlan(char* json)
{
	this->fromJson(json);
}

char*
SubscriptionPlan::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;


	{
		JsonObject* json_obj;
		map<string, string> new_list = static_cast<map <string, string> > (getAdditionalProperties());
		json_obj = json_object_new();
		for (map<string, string>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			string obj = (*it).first;
			string obj2 = (*it).second;
			JsonNode* tempnode = json_from_string(obj2.c_str(),NULL);
			json_object_set_member(json_obj, obj.c_str(), tempnode);
		}
	node = json_node_alloc();
	json_node_init_object(node, json_obj);
	json_object_unref(json_obj);
	}

	const gchar *additional_propertiesKey = "additional_properties";
	json_object_set_member(pJsonObject, additional_propertiesKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAvailability();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *availabilityKey = "availability";
	json_object_set_member(pJsonObject, availabilityKey, node);
	if (isprimitive("int")) {
		int obj = getBillGraceDays();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *bill_grace_daysKey = "bill_grace_days";
	json_object_set_member(pJsonObject, bill_grace_daysKey, node);
	if (isprimitive("bool")) {
		bool obj = getConsolidated();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *consolidatedKey = "consolidated";
	json_object_set_member(pJsonObject, consolidatedKey, node);
	if (isprimitive("int")) {
		int obj = getFirstBill();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *first_billKey = "first_bill";
	json_object_set_member(pJsonObject, first_billKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getFirstBillUnitOfTime();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *first_bill_unit_of_timeKey = "first_bill_unit_of_time";
	json_object_set_member(pJsonObject, first_bill_unit_of_timeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLatePaymentSku();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *late_payment_skuKey = "late_payment_sku";
	json_object_set_member(pJsonObject, late_payment_skuKey, node);
	if (isprimitive("bool")) {
		bool obj = getLocked();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *lockedKey = "locked";
	json_object_set_member(pJsonObject, lockedKey, node);
	if (isprimitive("int")) {
		int obj = getMaxAutoRenew();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *max_auto_renewKey = "max_auto_renew";
	json_object_set_member(pJsonObject, max_auto_renewKey, node);
	if (isprimitive("int")) {
		int obj = getMaxBillAttempts();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *max_bill_attemptsKey = "max_bill_attempts";
	json_object_set_member(pJsonObject, max_bill_attemptsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMigrationPlan();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *migration_planKey = "migration_plan";
	json_object_set_member(pJsonObject, migration_planKey, node);
	if (isprimitive("int")) {
		int obj = getMinimumTerm();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *minimum_termKey = "minimum_term";
	json_object_set_member(pJsonObject, minimum_termKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPrimarySku();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *primary_skuKey = "primary_sku";
	json_object_set_member(pJsonObject, primary_skuKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getReactivationSku();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *reactivation_skuKey = "reactivation_sku";
	json_object_set_member(pJsonObject, reactivation_skuKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRecurringSku();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *recurring_skuKey = "recurring_sku";
	json_object_set_member(pJsonObject, recurring_skuKey, node);
	if (isprimitive("int")) {
		int obj = getRenewPeriod();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *renew_periodKey = "renew_period";
	json_object_set_member(pJsonObject, renew_periodKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRenewPeriodUnitOfTime();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *renew_period_unit_of_timeKey = "renew_period_unit_of_time";
	json_object_set_member(pJsonObject, renew_period_unit_of_timeKey, node);
	if (isprimitive("int")) {
		int obj = getSubscriptionId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *subscription_idKey = "subscription_id";
	json_object_set_member(pJsonObject, subscription_idKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::map<string, string>
SubscriptionPlan::getAdditionalProperties()
{
	return additional_properties;
}

void
SubscriptionPlan::setAdditionalProperties(std::map <string, string> additional_properties)
{
	this->additional_properties = additional_properties;
}

std::string
SubscriptionPlan::getAvailability()
{
	return availability;
}

void
SubscriptionPlan::setAvailability(std::string  availability)
{
	this->availability = availability;
}

int
SubscriptionPlan::getBillGraceDays()
{
	return bill_grace_days;
}

void
SubscriptionPlan::setBillGraceDays(int  bill_grace_days)
{
	this->bill_grace_days = bill_grace_days;
}

bool
SubscriptionPlan::getConsolidated()
{
	return consolidated;
}

void
SubscriptionPlan::setConsolidated(bool  consolidated)
{
	this->consolidated = consolidated;
}

int
SubscriptionPlan::getFirstBill()
{
	return first_bill;
}

void
SubscriptionPlan::setFirstBill(int  first_bill)
{
	this->first_bill = first_bill;
}

std::string
SubscriptionPlan::getFirstBillUnitOfTime()
{
	return first_bill_unit_of_time;
}

void
SubscriptionPlan::setFirstBillUnitOfTime(std::string  first_bill_unit_of_time)
{
	this->first_bill_unit_of_time = first_bill_unit_of_time;
}

std::string
SubscriptionPlan::getId()
{
	return id;
}

void
SubscriptionPlan::setId(std::string  id)
{
	this->id = id;
}

std::string
SubscriptionPlan::getLatePaymentSku()
{
	return late_payment_sku;
}

void
SubscriptionPlan::setLatePaymentSku(std::string  late_payment_sku)
{
	this->late_payment_sku = late_payment_sku;
}

bool
SubscriptionPlan::getLocked()
{
	return locked;
}

void
SubscriptionPlan::setLocked(bool  locked)
{
	this->locked = locked;
}

int
SubscriptionPlan::getMaxAutoRenew()
{
	return max_auto_renew;
}

void
SubscriptionPlan::setMaxAutoRenew(int  max_auto_renew)
{
	this->max_auto_renew = max_auto_renew;
}

int
SubscriptionPlan::getMaxBillAttempts()
{
	return max_bill_attempts;
}

void
SubscriptionPlan::setMaxBillAttempts(int  max_bill_attempts)
{
	this->max_bill_attempts = max_bill_attempts;
}

std::string
SubscriptionPlan::getMigrationPlan()
{
	return migration_plan;
}

void
SubscriptionPlan::setMigrationPlan(std::string  migration_plan)
{
	this->migration_plan = migration_plan;
}

int
SubscriptionPlan::getMinimumTerm()
{
	return minimum_term;
}

void
SubscriptionPlan::setMinimumTerm(int  minimum_term)
{
	this->minimum_term = minimum_term;
}

std::string
SubscriptionPlan::getName()
{
	return name;
}

void
SubscriptionPlan::setName(std::string  name)
{
	this->name = name;
}

std::string
SubscriptionPlan::getPrimarySku()
{
	return primary_sku;
}

void
SubscriptionPlan::setPrimarySku(std::string  primary_sku)
{
	this->primary_sku = primary_sku;
}

std::string
SubscriptionPlan::getReactivationSku()
{
	return reactivation_sku;
}

void
SubscriptionPlan::setReactivationSku(std::string  reactivation_sku)
{
	this->reactivation_sku = reactivation_sku;
}

std::string
SubscriptionPlan::getRecurringSku()
{
	return recurring_sku;
}

void
SubscriptionPlan::setRecurringSku(std::string  recurring_sku)
{
	this->recurring_sku = recurring_sku;
}

int
SubscriptionPlan::getRenewPeriod()
{
	return renew_period;
}

void
SubscriptionPlan::setRenewPeriod(int  renew_period)
{
	this->renew_period = renew_period;
}

std::string
SubscriptionPlan::getRenewPeriodUnitOfTime()
{
	return renew_period_unit_of_time;
}

void
SubscriptionPlan::setRenewPeriodUnitOfTime(std::string  renew_period_unit_of_time)
{
	this->renew_period_unit_of_time = renew_period_unit_of_time;
}

int
SubscriptionPlan::getSubscriptionId()
{
	return subscription_id;
}

void
SubscriptionPlan::setSubscriptionId(int  subscription_id)
{
	this->subscription_id = subscription_id;
}


