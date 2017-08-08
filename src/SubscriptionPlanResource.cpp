#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "SubscriptionPlanResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

SubscriptionPlanResource::SubscriptionPlanResource()
{
	//__init();
}

SubscriptionPlanResource::~SubscriptionPlanResource()
{
	//__cleanup();
}

void
SubscriptionPlanResource::__init()
{
	//
	//new std::map()std::map> additional_properties;
	//
	//
	//
	//billing_cycle_length = int(0);
	//
	//
	//billing_cycle_unit = std::string();
	//
	//
	//consolidated = bool(false);
	//
	//
	//currency_code = std::string();
	//
	//
	//end_date = long(0);
	//
	//
	//first_billing_cycle_length = int(0);
	//
	//
	//first_billing_cycle_unit = std::string();
	//
	//
	//grace_period = int(0);
	//
	//
	//id = std::string();
	//
	//
	//initial_fee = double(0);
	//
	//
	//initial_sku = std::string();
	//
	//
	//late_payment_fee = double(0);
	//
	//
	//late_payment_sku = std::string();
	//
	//
	//locked = bool(false);
	//
	//
	//max_bill_attempts = int(0);
	//
	//
	//max_cycles = int(0);
	//
	//
	//migrate_to_plan = std::string();
	//
	//
	//min_cycles = int(0);
	//
	//
	//name = std::string();
	//
	//
	//published = bool(false);
	//
	//
	//reactivation_fee = double(0);
	//
	//
	//reactivation_sku = std::string();
	//
	//
	//recurring_fee = double(0);
	//
	//
	//recurring_sku = std::string();
	//
	//
	//start_date = long(0);
	//
}

void
SubscriptionPlanResource::__cleanup()
{
	//if(additional_properties != NULL) {
	//additional_properties.RemoveAll(true);
	//delete additional_properties;
	//additional_properties = NULL;
	//}
	//if(billing_cycle_length != NULL) {
	//
	//delete billing_cycle_length;
	//billing_cycle_length = NULL;
	//}
	//if(billing_cycle_unit != NULL) {
	//
	//delete billing_cycle_unit;
	//billing_cycle_unit = NULL;
	//}
	//if(consolidated != NULL) {
	//
	//delete consolidated;
	//consolidated = NULL;
	//}
	//if(currency_code != NULL) {
	//
	//delete currency_code;
	//currency_code = NULL;
	//}
	//if(end_date != NULL) {
	//
	//delete end_date;
	//end_date = NULL;
	//}
	//if(first_billing_cycle_length != NULL) {
	//
	//delete first_billing_cycle_length;
	//first_billing_cycle_length = NULL;
	//}
	//if(first_billing_cycle_unit != NULL) {
	//
	//delete first_billing_cycle_unit;
	//first_billing_cycle_unit = NULL;
	//}
	//if(grace_period != NULL) {
	//
	//delete grace_period;
	//grace_period = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(initial_fee != NULL) {
	//
	//delete initial_fee;
	//initial_fee = NULL;
	//}
	//if(initial_sku != NULL) {
	//
	//delete initial_sku;
	//initial_sku = NULL;
	//}
	//if(late_payment_fee != NULL) {
	//
	//delete late_payment_fee;
	//late_payment_fee = NULL;
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
	//if(max_bill_attempts != NULL) {
	//
	//delete max_bill_attempts;
	//max_bill_attempts = NULL;
	//}
	//if(max_cycles != NULL) {
	//
	//delete max_cycles;
	//max_cycles = NULL;
	//}
	//if(migrate_to_plan != NULL) {
	//
	//delete migrate_to_plan;
	//migrate_to_plan = NULL;
	//}
	//if(min_cycles != NULL) {
	//
	//delete min_cycles;
	//min_cycles = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(published != NULL) {
	//
	//delete published;
	//published = NULL;
	//}
	//if(reactivation_fee != NULL) {
	//
	//delete reactivation_fee;
	//reactivation_fee = NULL;
	//}
	//if(reactivation_sku != NULL) {
	//
	//delete reactivation_sku;
	//reactivation_sku = NULL;
	//}
	//if(recurring_fee != NULL) {
	//
	//delete recurring_fee;
	//recurring_fee = NULL;
	//}
	//if(recurring_sku != NULL) {
	//
	//delete recurring_sku;
	//recurring_sku = NULL;
	//}
	//if(start_date != NULL) {
	//
	//delete start_date;
	//start_date = NULL;
	//}
	//
}

void
SubscriptionPlanResource::fromJson(char* jsonStr)
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
	const gchar *billing_cycle_lengthKey = "billing_cycle_length";
	node = json_object_get_member(pJsonObject, billing_cycle_lengthKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&billing_cycle_length, node, "int", "");
		} else {
			
		}
	}
	const gchar *billing_cycle_unitKey = "billing_cycle_unit";
	node = json_object_get_member(pJsonObject, billing_cycle_unitKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&billing_cycle_unit, node, "std::string", "");
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
	const gchar *currency_codeKey = "currency_code";
	node = json_object_get_member(pJsonObject, currency_codeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&currency_code, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *end_dateKey = "end_date";
	node = json_object_get_member(pJsonObject, end_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&end_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *first_billing_cycle_lengthKey = "first_billing_cycle_length";
	node = json_object_get_member(pJsonObject, first_billing_cycle_lengthKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&first_billing_cycle_length, node, "int", "");
		} else {
			
		}
	}
	const gchar *first_billing_cycle_unitKey = "first_billing_cycle_unit";
	node = json_object_get_member(pJsonObject, first_billing_cycle_unitKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&first_billing_cycle_unit, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *grace_periodKey = "grace_period";
	node = json_object_get_member(pJsonObject, grace_periodKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&grace_period, node, "int", "");
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
	const gchar *initial_feeKey = "initial_fee";
	node = json_object_get_member(pJsonObject, initial_feeKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&initial_fee, node, "double", "");
		} else {
			
		}
	}
	const gchar *initial_skuKey = "initial_sku";
	node = json_object_get_member(pJsonObject, initial_skuKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&initial_sku, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *late_payment_feeKey = "late_payment_fee";
	node = json_object_get_member(pJsonObject, late_payment_feeKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&late_payment_fee, node, "double", "");
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
	const gchar *max_bill_attemptsKey = "max_bill_attempts";
	node = json_object_get_member(pJsonObject, max_bill_attemptsKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&max_bill_attempts, node, "int", "");
		} else {
			
		}
	}
	const gchar *max_cyclesKey = "max_cycles";
	node = json_object_get_member(pJsonObject, max_cyclesKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&max_cycles, node, "int", "");
		} else {
			
		}
	}
	const gchar *migrate_to_planKey = "migrate_to_plan";
	node = json_object_get_member(pJsonObject, migrate_to_planKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&migrate_to_plan, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *min_cyclesKey = "min_cycles";
	node = json_object_get_member(pJsonObject, min_cyclesKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&min_cycles, node, "int", "");
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
	const gchar *publishedKey = "published";
	node = json_object_get_member(pJsonObject, publishedKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&published, node, "bool", "");
		} else {
			
		}
	}
	const gchar *reactivation_feeKey = "reactivation_fee";
	node = json_object_get_member(pJsonObject, reactivation_feeKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&reactivation_fee, node, "double", "");
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
	const gchar *recurring_feeKey = "recurring_fee";
	node = json_object_get_member(pJsonObject, recurring_feeKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&recurring_fee, node, "double", "");
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
	const gchar *start_dateKey = "start_date";
	node = json_object_get_member(pJsonObject, start_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&start_date, node, "long long", "");
		} else {
			
		}
	}
}

SubscriptionPlanResource::SubscriptionPlanResource(char* json)
{
	this->fromJson(json);
}

char*
SubscriptionPlanResource::toJson()
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
	if (isprimitive("int")) {
		int obj = getBillingCycleLength();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *billing_cycle_lengthKey = "billing_cycle_length";
	json_object_set_member(pJsonObject, billing_cycle_lengthKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBillingCycleUnit();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *billing_cycle_unitKey = "billing_cycle_unit";
	json_object_set_member(pJsonObject, billing_cycle_unitKey, node);
	if (isprimitive("bool")) {
		bool obj = getConsolidated();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *consolidatedKey = "consolidated";
	json_object_set_member(pJsonObject, consolidatedKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCurrencyCode();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *currency_codeKey = "currency_code";
	json_object_set_member(pJsonObject, currency_codeKey, node);
	if (isprimitive("long long")) {
		long long obj = getEndDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *end_dateKey = "end_date";
	json_object_set_member(pJsonObject, end_dateKey, node);
	if (isprimitive("int")) {
		int obj = getFirstBillingCycleLength();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *first_billing_cycle_lengthKey = "first_billing_cycle_length";
	json_object_set_member(pJsonObject, first_billing_cycle_lengthKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getFirstBillingCycleUnit();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *first_billing_cycle_unitKey = "first_billing_cycle_unit";
	json_object_set_member(pJsonObject, first_billing_cycle_unitKey, node);
	if (isprimitive("int")) {
		int obj = getGracePeriod();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *grace_periodKey = "grace_period";
	json_object_set_member(pJsonObject, grace_periodKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("double")) {
		double obj = getInitialFee();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *initial_feeKey = "initial_fee";
	json_object_set_member(pJsonObject, initial_feeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getInitialSku();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *initial_skuKey = "initial_sku";
	json_object_set_member(pJsonObject, initial_skuKey, node);
	if (isprimitive("double")) {
		double obj = getLatePaymentFee();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *late_payment_feeKey = "late_payment_fee";
	json_object_set_member(pJsonObject, late_payment_feeKey, node);
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
		int obj = getMaxBillAttempts();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *max_bill_attemptsKey = "max_bill_attempts";
	json_object_set_member(pJsonObject, max_bill_attemptsKey, node);
	if (isprimitive("int")) {
		int obj = getMaxCycles();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *max_cyclesKey = "max_cycles";
	json_object_set_member(pJsonObject, max_cyclesKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMigrateToPlan();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *migrate_to_planKey = "migrate_to_plan";
	json_object_set_member(pJsonObject, migrate_to_planKey, node);
	if (isprimitive("int")) {
		int obj = getMinCycles();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *min_cyclesKey = "min_cycles";
	json_object_set_member(pJsonObject, min_cyclesKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("bool")) {
		bool obj = getPublished();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *publishedKey = "published";
	json_object_set_member(pJsonObject, publishedKey, node);
	if (isprimitive("double")) {
		double obj = getReactivationFee();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *reactivation_feeKey = "reactivation_fee";
	json_object_set_member(pJsonObject, reactivation_feeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getReactivationSku();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *reactivation_skuKey = "reactivation_sku";
	json_object_set_member(pJsonObject, reactivation_skuKey, node);
	if (isprimitive("double")) {
		double obj = getRecurringFee();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *recurring_feeKey = "recurring_fee";
	json_object_set_member(pJsonObject, recurring_feeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRecurringSku();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *recurring_skuKey = "recurring_sku";
	json_object_set_member(pJsonObject, recurring_skuKey, node);
	if (isprimitive("long long")) {
		long long obj = getStartDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *start_dateKey = "start_date";
	json_object_set_member(pJsonObject, start_dateKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::map<string, string>
SubscriptionPlanResource::getAdditionalProperties()
{
	return additional_properties;
}

void
SubscriptionPlanResource::setAdditionalProperties(std::map <string, string> additional_properties)
{
	this->additional_properties = additional_properties;
}

int
SubscriptionPlanResource::getBillingCycleLength()
{
	return billing_cycle_length;
}

void
SubscriptionPlanResource::setBillingCycleLength(int  billing_cycle_length)
{
	this->billing_cycle_length = billing_cycle_length;
}

std::string
SubscriptionPlanResource::getBillingCycleUnit()
{
	return billing_cycle_unit;
}

void
SubscriptionPlanResource::setBillingCycleUnit(std::string  billing_cycle_unit)
{
	this->billing_cycle_unit = billing_cycle_unit;
}

bool
SubscriptionPlanResource::getConsolidated()
{
	return consolidated;
}

void
SubscriptionPlanResource::setConsolidated(bool  consolidated)
{
	this->consolidated = consolidated;
}

std::string
SubscriptionPlanResource::getCurrencyCode()
{
	return currency_code;
}

void
SubscriptionPlanResource::setCurrencyCode(std::string  currency_code)
{
	this->currency_code = currency_code;
}

long long
SubscriptionPlanResource::getEndDate()
{
	return end_date;
}

void
SubscriptionPlanResource::setEndDate(long long  end_date)
{
	this->end_date = end_date;
}

int
SubscriptionPlanResource::getFirstBillingCycleLength()
{
	return first_billing_cycle_length;
}

void
SubscriptionPlanResource::setFirstBillingCycleLength(int  first_billing_cycle_length)
{
	this->first_billing_cycle_length = first_billing_cycle_length;
}

std::string
SubscriptionPlanResource::getFirstBillingCycleUnit()
{
	return first_billing_cycle_unit;
}

void
SubscriptionPlanResource::setFirstBillingCycleUnit(std::string  first_billing_cycle_unit)
{
	this->first_billing_cycle_unit = first_billing_cycle_unit;
}

int
SubscriptionPlanResource::getGracePeriod()
{
	return grace_period;
}

void
SubscriptionPlanResource::setGracePeriod(int  grace_period)
{
	this->grace_period = grace_period;
}

std::string
SubscriptionPlanResource::getId()
{
	return id;
}

void
SubscriptionPlanResource::setId(std::string  id)
{
	this->id = id;
}

double
SubscriptionPlanResource::getInitialFee()
{
	return initial_fee;
}

void
SubscriptionPlanResource::setInitialFee(double  initial_fee)
{
	this->initial_fee = initial_fee;
}

std::string
SubscriptionPlanResource::getInitialSku()
{
	return initial_sku;
}

void
SubscriptionPlanResource::setInitialSku(std::string  initial_sku)
{
	this->initial_sku = initial_sku;
}

double
SubscriptionPlanResource::getLatePaymentFee()
{
	return late_payment_fee;
}

void
SubscriptionPlanResource::setLatePaymentFee(double  late_payment_fee)
{
	this->late_payment_fee = late_payment_fee;
}

std::string
SubscriptionPlanResource::getLatePaymentSku()
{
	return late_payment_sku;
}

void
SubscriptionPlanResource::setLatePaymentSku(std::string  late_payment_sku)
{
	this->late_payment_sku = late_payment_sku;
}

bool
SubscriptionPlanResource::getLocked()
{
	return locked;
}

void
SubscriptionPlanResource::setLocked(bool  locked)
{
	this->locked = locked;
}

int
SubscriptionPlanResource::getMaxBillAttempts()
{
	return max_bill_attempts;
}

void
SubscriptionPlanResource::setMaxBillAttempts(int  max_bill_attempts)
{
	this->max_bill_attempts = max_bill_attempts;
}

int
SubscriptionPlanResource::getMaxCycles()
{
	return max_cycles;
}

void
SubscriptionPlanResource::setMaxCycles(int  max_cycles)
{
	this->max_cycles = max_cycles;
}

std::string
SubscriptionPlanResource::getMigrateToPlan()
{
	return migrate_to_plan;
}

void
SubscriptionPlanResource::setMigrateToPlan(std::string  migrate_to_plan)
{
	this->migrate_to_plan = migrate_to_plan;
}

int
SubscriptionPlanResource::getMinCycles()
{
	return min_cycles;
}

void
SubscriptionPlanResource::setMinCycles(int  min_cycles)
{
	this->min_cycles = min_cycles;
}

std::string
SubscriptionPlanResource::getName()
{
	return name;
}

void
SubscriptionPlanResource::setName(std::string  name)
{
	this->name = name;
}

bool
SubscriptionPlanResource::getPublished()
{
	return published;
}

void
SubscriptionPlanResource::setPublished(bool  published)
{
	this->published = published;
}

double
SubscriptionPlanResource::getReactivationFee()
{
	return reactivation_fee;
}

void
SubscriptionPlanResource::setReactivationFee(double  reactivation_fee)
{
	this->reactivation_fee = reactivation_fee;
}

std::string
SubscriptionPlanResource::getReactivationSku()
{
	return reactivation_sku;
}

void
SubscriptionPlanResource::setReactivationSku(std::string  reactivation_sku)
{
	this->reactivation_sku = reactivation_sku;
}

double
SubscriptionPlanResource::getRecurringFee()
{
	return recurring_fee;
}

void
SubscriptionPlanResource::setRecurringFee(double  recurring_fee)
{
	this->recurring_fee = recurring_fee;
}

std::string
SubscriptionPlanResource::getRecurringSku()
{
	return recurring_sku;
}

void
SubscriptionPlanResource::setRecurringSku(std::string  recurring_sku)
{
	this->recurring_sku = recurring_sku;
}

long long
SubscriptionPlanResource::getStartDate()
{
	return start_date;
}

void
SubscriptionPlanResource::setStartDate(long long  start_date)
{
	this->start_date = start_date;
}


