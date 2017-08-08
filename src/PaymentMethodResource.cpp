#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PaymentMethodResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

PaymentMethodResource::PaymentMethodResource()
{
	//__init();
}

PaymentMethodResource::~PaymentMethodResource()
{
	//__cleanup();
}

void
PaymentMethodResource::__init()
{
	//
	//
	//created_date = long(0);
	//
	//
	//_default = bool(false);
	//
	//
	//disabled = bool(false);
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
	//id = long(0);
	//
	//
	//last4 = std::string();
	//
	//
	//name = std::string();
	//
	//
	//payment_method_type = new PaymentMethodTypeResource();
	//
	//
	//payment_type = std::string();
	//
	//
	//sort = int(0);
	//
	//
	//token = std::string();
	//
	//
	//unique_key = std::string();
	//
	//
	//updated_date = long(0);
	//
	//
	//user_id = int(0);
	//
	//
	//verified = bool(false);
	//
}

void
PaymentMethodResource::__cleanup()
{
	//if(created_date != NULL) {
	//
	//delete created_date;
	//created_date = NULL;
	//}
	//if(_default != NULL) {
	//
	//delete _default;
	//_default = NULL;
	//}
	//if(disabled != NULL) {
	//
	//delete disabled;
	//disabled = NULL;
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
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(last4 != NULL) {
	//
	//delete last4;
	//last4 = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(payment_method_type != NULL) {
	//
	//delete payment_method_type;
	//payment_method_type = NULL;
	//}
	//if(payment_type != NULL) {
	//
	//delete payment_type;
	//payment_type = NULL;
	//}
	//if(sort != NULL) {
	//
	//delete sort;
	//sort = NULL;
	//}
	//if(token != NULL) {
	//
	//delete token;
	//token = NULL;
	//}
	//if(unique_key != NULL) {
	//
	//delete unique_key;
	//unique_key = NULL;
	//}
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//if(user_id != NULL) {
	//
	//delete user_id;
	//user_id = NULL;
	//}
	//if(verified != NULL) {
	//
	//delete verified;
	//verified = NULL;
	//}
	//
}

void
PaymentMethodResource::fromJson(char* jsonStr)
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
	const gchar *_defaultKey = "default";
	node = json_object_get_member(pJsonObject, _defaultKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&_default, node, "bool", "");
		} else {
			
		}
	}
	const gchar *disabledKey = "disabled";
	node = json_object_get_member(pJsonObject, disabledKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&disabled, node, "bool", "");
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
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&id, node, "long long", "");
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
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *payment_method_typeKey = "payment_method_type";
	node = json_object_get_member(pJsonObject, payment_method_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("PaymentMethodTypeResource")) {
			jsonToValue(&payment_method_type, node, "PaymentMethodTypeResource", "PaymentMethodTypeResource");
		} else {
			
			PaymentMethodTypeResource* obj = static_cast<PaymentMethodTypeResource*> (&payment_method_type);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *payment_typeKey = "payment_type";
	node = json_object_get_member(pJsonObject, payment_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&payment_type, node, "std::string", "");
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
	const gchar *tokenKey = "token";
	node = json_object_get_member(pJsonObject, tokenKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&token, node, "std::string", "");
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
	const gchar *updated_dateKey = "updated_date";
	node = json_object_get_member(pJsonObject, updated_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&updated_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *user_idKey = "user_id";
	node = json_object_get_member(pJsonObject, user_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&user_id, node, "int", "");
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

PaymentMethodResource::PaymentMethodResource(char* json)
{
	this->fromJson(json);
}

char*
PaymentMethodResource::toJson()
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
	if (isprimitive("bool")) {
		bool obj = getDefault();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *_defaultKey = "default";
	json_object_set_member(pJsonObject, _defaultKey, node);
	if (isprimitive("bool")) {
		bool obj = getDisabled();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *disabledKey = "disabled";
	json_object_set_member(pJsonObject, disabledKey, node);
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
	if (isprimitive("long long")) {
		long long obj = getId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLast4();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *last4Key = "last4";
	json_object_set_member(pJsonObject, last4Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("PaymentMethodTypeResource")) {
		PaymentMethodTypeResource obj = getPaymentMethodType();
		node = converttoJson(&obj, "PaymentMethodTypeResource", "");
	}
	else {
		
		PaymentMethodTypeResource obj = static_cast<PaymentMethodTypeResource> (getPaymentMethodType());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *payment_method_typeKey = "payment_method_type";
	json_object_set_member(pJsonObject, payment_method_typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPaymentType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *payment_typeKey = "payment_type";
	json_object_set_member(pJsonObject, payment_typeKey, node);
	if (isprimitive("int")) {
		int obj = getSort();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *sortKey = "sort";
	json_object_set_member(pJsonObject, sortKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getToken();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *tokenKey = "token";
	json_object_set_member(pJsonObject, tokenKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUniqueKey();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *unique_keyKey = "unique_key";
	json_object_set_member(pJsonObject, unique_keyKey, node);
	if (isprimitive("long long")) {
		long long obj = getUpdatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *updated_dateKey = "updated_date";
	json_object_set_member(pJsonObject, updated_dateKey, node);
	if (isprimitive("int")) {
		int obj = getUserId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *user_idKey = "user_id";
	json_object_set_member(pJsonObject, user_idKey, node);
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

long long
PaymentMethodResource::getCreatedDate()
{
	return created_date;
}

void
PaymentMethodResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

bool
PaymentMethodResource::getDefault()
{
	return _default;
}

void
PaymentMethodResource::setDefault(bool  _default)
{
	this->_default = _default;
}

bool
PaymentMethodResource::getDisabled()
{
	return disabled;
}

void
PaymentMethodResource::setDisabled(bool  disabled)
{
	this->disabled = disabled;
}

long long
PaymentMethodResource::getExpirationDate()
{
	return expiration_date;
}

void
PaymentMethodResource::setExpirationDate(long long  expiration_date)
{
	this->expiration_date = expiration_date;
}

int
PaymentMethodResource::getExpirationMonth()
{
	return expiration_month;
}

void
PaymentMethodResource::setExpirationMonth(int  expiration_month)
{
	this->expiration_month = expiration_month;
}

int
PaymentMethodResource::getExpirationYear()
{
	return expiration_year;
}

void
PaymentMethodResource::setExpirationYear(int  expiration_year)
{
	this->expiration_year = expiration_year;
}

long long
PaymentMethodResource::getId()
{
	return id;
}

void
PaymentMethodResource::setId(long long  id)
{
	this->id = id;
}

std::string
PaymentMethodResource::getLast4()
{
	return last4;
}

void
PaymentMethodResource::setLast4(std::string  last4)
{
	this->last4 = last4;
}

std::string
PaymentMethodResource::getName()
{
	return name;
}

void
PaymentMethodResource::setName(std::string  name)
{
	this->name = name;
}

PaymentMethodTypeResource
PaymentMethodResource::getPaymentMethodType()
{
	return payment_method_type;
}

void
PaymentMethodResource::setPaymentMethodType(PaymentMethodTypeResource  payment_method_type)
{
	this->payment_method_type = payment_method_type;
}

std::string
PaymentMethodResource::getPaymentType()
{
	return payment_type;
}

void
PaymentMethodResource::setPaymentType(std::string  payment_type)
{
	this->payment_type = payment_type;
}

int
PaymentMethodResource::getSort()
{
	return sort;
}

void
PaymentMethodResource::setSort(int  sort)
{
	this->sort = sort;
}

std::string
PaymentMethodResource::getToken()
{
	return token;
}

void
PaymentMethodResource::setToken(std::string  token)
{
	this->token = token;
}

std::string
PaymentMethodResource::getUniqueKey()
{
	return unique_key;
}

void
PaymentMethodResource::setUniqueKey(std::string  unique_key)
{
	this->unique_key = unique_key;
}

long long
PaymentMethodResource::getUpdatedDate()
{
	return updated_date;
}

void
PaymentMethodResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}

int
PaymentMethodResource::getUserId()
{
	return user_id;
}

void
PaymentMethodResource::setUserId(int  user_id)
{
	this->user_id = user_id;
}

bool
PaymentMethodResource::getVerified()
{
	return verified;
}

void
PaymentMethodResource::setVerified(bool  verified)
{
	this->verified = verified;
}


