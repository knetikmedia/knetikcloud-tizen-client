#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CartShippingAddressRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CartShippingAddressRequest::CartShippingAddressRequest()
{
	//__init();
}

CartShippingAddressRequest::~CartShippingAddressRequest()
{
	//__cleanup();
}

void
CartShippingAddressRequest::__init()
{
	//
	//
	//city = std::string();
	//
	//
	//country_code_iso3 = std::string();
	//
	//
	//email = std::string();
	//
	//
	//first_name = std::string();
	//
	//
	//last_name = std::string();
	//
	//
	//name_prefix = std::string();
	//
	//
	//order_notes = std::string();
	//
	//
	//phone_number = std::string();
	//
	//
	//postal_state_code = std::string();
	//
	//
	//shipping_address_line1 = std::string();
	//
	//
	//shipping_address_line2 = std::string();
	//
	//
	//zip = std::string();
	//
}

void
CartShippingAddressRequest::__cleanup()
{
	//if(city != NULL) {
	//
	//delete city;
	//city = NULL;
	//}
	//if(country_code_iso3 != NULL) {
	//
	//delete country_code_iso3;
	//country_code_iso3 = NULL;
	//}
	//if(email != NULL) {
	//
	//delete email;
	//email = NULL;
	//}
	//if(first_name != NULL) {
	//
	//delete first_name;
	//first_name = NULL;
	//}
	//if(last_name != NULL) {
	//
	//delete last_name;
	//last_name = NULL;
	//}
	//if(name_prefix != NULL) {
	//
	//delete name_prefix;
	//name_prefix = NULL;
	//}
	//if(order_notes != NULL) {
	//
	//delete order_notes;
	//order_notes = NULL;
	//}
	//if(phone_number != NULL) {
	//
	//delete phone_number;
	//phone_number = NULL;
	//}
	//if(postal_state_code != NULL) {
	//
	//delete postal_state_code;
	//postal_state_code = NULL;
	//}
	//if(shipping_address_line1 != NULL) {
	//
	//delete shipping_address_line1;
	//shipping_address_line1 = NULL;
	//}
	//if(shipping_address_line2 != NULL) {
	//
	//delete shipping_address_line2;
	//shipping_address_line2 = NULL;
	//}
	//if(zip != NULL) {
	//
	//delete zip;
	//zip = NULL;
	//}
	//
}

void
CartShippingAddressRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *cityKey = "city";
	node = json_object_get_member(pJsonObject, cityKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&city, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *country_code_iso3Key = "country_code_iso3";
	node = json_object_get_member(pJsonObject, country_code_iso3Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&country_code_iso3, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *emailKey = "email";
	node = json_object_get_member(pJsonObject, emailKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&email, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *first_nameKey = "first_name";
	node = json_object_get_member(pJsonObject, first_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&first_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *last_nameKey = "last_name";
	node = json_object_get_member(pJsonObject, last_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&last_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *name_prefixKey = "name_prefix";
	node = json_object_get_member(pJsonObject, name_prefixKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name_prefix, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *order_notesKey = "order_notes";
	node = json_object_get_member(pJsonObject, order_notesKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&order_notes, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *phone_numberKey = "phone_number";
	node = json_object_get_member(pJsonObject, phone_numberKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&phone_number, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *postal_state_codeKey = "postal_state_code";
	node = json_object_get_member(pJsonObject, postal_state_codeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&postal_state_code, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *shipping_address_line1Key = "shipping_address_line1";
	node = json_object_get_member(pJsonObject, shipping_address_line1Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&shipping_address_line1, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *shipping_address_line2Key = "shipping_address_line2";
	node = json_object_get_member(pJsonObject, shipping_address_line2Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&shipping_address_line2, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *zipKey = "zip";
	node = json_object_get_member(pJsonObject, zipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&zip, node, "std::string", "");
		} else {
			
		}
	}
}

CartShippingAddressRequest::CartShippingAddressRequest(char* json)
{
	this->fromJson(json);
}

char*
CartShippingAddressRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getCity();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *cityKey = "city";
	json_object_set_member(pJsonObject, cityKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCountryCodeIso3();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *country_code_iso3Key = "country_code_iso3";
	json_object_set_member(pJsonObject, country_code_iso3Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getEmail();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *emailKey = "email";
	json_object_set_member(pJsonObject, emailKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getFirstName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *first_nameKey = "first_name";
	json_object_set_member(pJsonObject, first_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLastName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *last_nameKey = "last_name";
	json_object_set_member(pJsonObject, last_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getNamePrefix();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *name_prefixKey = "name_prefix";
	json_object_set_member(pJsonObject, name_prefixKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getOrderNotes();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *order_notesKey = "order_notes";
	json_object_set_member(pJsonObject, order_notesKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPhoneNumber();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *phone_numberKey = "phone_number";
	json_object_set_member(pJsonObject, phone_numberKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPostalStateCode();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *postal_state_codeKey = "postal_state_code";
	json_object_set_member(pJsonObject, postal_state_codeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getShippingAddressLine1();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *shipping_address_line1Key = "shipping_address_line1";
	json_object_set_member(pJsonObject, shipping_address_line1Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getShippingAddressLine2();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *shipping_address_line2Key = "shipping_address_line2";
	json_object_set_member(pJsonObject, shipping_address_line2Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getZip();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *zipKey = "zip";
	json_object_set_member(pJsonObject, zipKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
CartShippingAddressRequest::getCity()
{
	return city;
}

void
CartShippingAddressRequest::setCity(std::string  city)
{
	this->city = city;
}

std::string
CartShippingAddressRequest::getCountryCodeIso3()
{
	return country_code_iso3;
}

void
CartShippingAddressRequest::setCountryCodeIso3(std::string  country_code_iso3)
{
	this->country_code_iso3 = country_code_iso3;
}

std::string
CartShippingAddressRequest::getEmail()
{
	return email;
}

void
CartShippingAddressRequest::setEmail(std::string  email)
{
	this->email = email;
}

std::string
CartShippingAddressRequest::getFirstName()
{
	return first_name;
}

void
CartShippingAddressRequest::setFirstName(std::string  first_name)
{
	this->first_name = first_name;
}

std::string
CartShippingAddressRequest::getLastName()
{
	return last_name;
}

void
CartShippingAddressRequest::setLastName(std::string  last_name)
{
	this->last_name = last_name;
}

std::string
CartShippingAddressRequest::getNamePrefix()
{
	return name_prefix;
}

void
CartShippingAddressRequest::setNamePrefix(std::string  name_prefix)
{
	this->name_prefix = name_prefix;
}

std::string
CartShippingAddressRequest::getOrderNotes()
{
	return order_notes;
}

void
CartShippingAddressRequest::setOrderNotes(std::string  order_notes)
{
	this->order_notes = order_notes;
}

std::string
CartShippingAddressRequest::getPhoneNumber()
{
	return phone_number;
}

void
CartShippingAddressRequest::setPhoneNumber(std::string  phone_number)
{
	this->phone_number = phone_number;
}

std::string
CartShippingAddressRequest::getPostalStateCode()
{
	return postal_state_code;
}

void
CartShippingAddressRequest::setPostalStateCode(std::string  postal_state_code)
{
	this->postal_state_code = postal_state_code;
}

std::string
CartShippingAddressRequest::getShippingAddressLine1()
{
	return shipping_address_line1;
}

void
CartShippingAddressRequest::setShippingAddressLine1(std::string  shipping_address_line1)
{
	this->shipping_address_line1 = shipping_address_line1;
}

std::string
CartShippingAddressRequest::getShippingAddressLine2()
{
	return shipping_address_line2;
}

void
CartShippingAddressRequest::setShippingAddressLine2(std::string  shipping_address_line2)
{
	this->shipping_address_line2 = shipping_address_line2;
}

std::string
CartShippingAddressRequest::getZip()
{
	return zip;
}

void
CartShippingAddressRequest::setZip(std::string  zip)
{
	this->zip = zip;
}


