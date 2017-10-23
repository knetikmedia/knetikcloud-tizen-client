#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PaymentMethodDetails.h"

using namespace std;
using namespace Tizen::ArtikCloud;

PaymentMethodDetails::PaymentMethodDetails()
{
	//__init();
}

PaymentMethodDetails::~PaymentMethodDetails()
{
	//__cleanup();
}

void
PaymentMethodDetails::__init()
{
	//
	//
	//_default = bool(false);
	//
	//
	//expiration_date = long(0);
	//
	//
	//expiration_month = int(0);
	//
	//
	//expiration_year = int(0);
	//
	//
	//last4 = std::string();
	//
	//
	//sort = int(0);
	//
	//
	//unique_key = std::string();
	//
	//
	//verified = bool(false);
	//
}

void
PaymentMethodDetails::__cleanup()
{
	//if(_default != NULL) {
	//
	//delete _default;
	//_default = NULL;
	//}
	//if(expiration_date != NULL) {
	//
	//delete expiration_date;
	//expiration_date = NULL;
	//}
	//if(expiration_month != NULL) {
	//
	//delete expiration_month;
	//expiration_month = NULL;
	//}
	//if(expiration_year != NULL) {
	//
	//delete expiration_year;
	//expiration_year = NULL;
	//}
	//if(last4 != NULL) {
	//
	//delete last4;
	//last4 = NULL;
	//}
	//if(sort != NULL) {
	//
	//delete sort;
	//sort = NULL;
	//}
	//if(unique_key != NULL) {
	//
	//delete unique_key;
	//unique_key = NULL;
	//}
	//if(verified != NULL) {
	//
	//delete verified;
	//verified = NULL;
	//}
	//
}

void
PaymentMethodDetails::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *_defaultKey = "default";
	node = json_object_get_member(pJsonObject, _defaultKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&_default, node, "bool", "");
		} else {
			
		}
	}
	const gchar *expiration_dateKey = "expiration_date";
	node = json_object_get_member(pJsonObject, expiration_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&expiration_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *expiration_monthKey = "expiration_month";
	node = json_object_get_member(pJsonObject, expiration_monthKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&expiration_month, node, "int", "");
		} else {
			
		}
	}
	const gchar *expiration_yearKey = "expiration_year";
	node = json_object_get_member(pJsonObject, expiration_yearKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&expiration_year, node, "int", "");
		} else {
			
		}
	}
	const gchar *last4Key = "last4";
	node = json_object_get_member(pJsonObject, last4Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&last4, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *sortKey = "sort";
	node = json_object_get_member(pJsonObject, sortKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&sort, node, "int", "");
		} else {
			
		}
	}
	const gchar *unique_keyKey = "unique_key";
	node = json_object_get_member(pJsonObject, unique_keyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&unique_key, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *verifiedKey = "verified";
	node = json_object_get_member(pJsonObject, verifiedKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&verified, node, "bool", "");
		} else {
			
		}
	}
}

PaymentMethodDetails::PaymentMethodDetails(char* json)
{
	this->fromJson(json);
}

char*
PaymentMethodDetails::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getDefault();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *_defaultKey = "default";
	json_object_set_member(pJsonObject, _defaultKey, node);
	if (isprimitive("long long")) {
		long long obj = getExpirationDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *expiration_dateKey = "expiration_date";
	json_object_set_member(pJsonObject, expiration_dateKey, node);
	if (isprimitive("int")) {
		int obj = getExpirationMonth();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *expiration_monthKey = "expiration_month";
	json_object_set_member(pJsonObject, expiration_monthKey, node);
	if (isprimitive("int")) {
		int obj = getExpirationYear();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *expiration_yearKey = "expiration_year";
	json_object_set_member(pJsonObject, expiration_yearKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLast4();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *last4Key = "last4";
	json_object_set_member(pJsonObject, last4Key, node);
	if (isprimitive("int")) {
		int obj = getSort();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *sortKey = "sort";
	json_object_set_member(pJsonObject, sortKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUniqueKey();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *unique_keyKey = "unique_key";
	json_object_set_member(pJsonObject, unique_keyKey, node);
	if (isprimitive("bool")) {
		bool obj = getVerified();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *verifiedKey = "verified";
	json_object_set_member(pJsonObject, verifiedKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
PaymentMethodDetails::getDefault()
{
	return _default;
}

void
PaymentMethodDetails::setDefault(bool  _default)
{
	this->_default = _default;
}

long long
PaymentMethodDetails::getExpirationDate()
{
	return expiration_date;
}

void
PaymentMethodDetails::setExpirationDate(long long  expiration_date)
{
	this->expiration_date = expiration_date;
}

int
PaymentMethodDetails::getExpirationMonth()
{
	return expiration_month;
}

void
PaymentMethodDetails::setExpirationMonth(int  expiration_month)
{
	this->expiration_month = expiration_month;
}

int
PaymentMethodDetails::getExpirationYear()
{
	return expiration_year;
}

void
PaymentMethodDetails::setExpirationYear(int  expiration_year)
{
	this->expiration_year = expiration_year;
}

std::string
PaymentMethodDetails::getLast4()
{
	return last4;
}

void
PaymentMethodDetails::setLast4(std::string  last4)
{
	this->last4 = last4;
}

int
PaymentMethodDetails::getSort()
{
	return sort;
}

void
PaymentMethodDetails::setSort(int  sort)
{
	this->sort = sort;
}

std::string
PaymentMethodDetails::getUniqueKey()
{
	return unique_key;
}

void
PaymentMethodDetails::setUniqueKey(std::string  unique_key)
{
	this->unique_key = unique_key;
}

bool
PaymentMethodDetails::getVerified()
{
	return verified;
}

void
PaymentMethodDetails::setVerified(bool  verified)
{
	this->verified = verified;
}


