#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CountryTaxResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CountryTaxResource::CountryTaxResource()
{
	//__init();
}

CountryTaxResource::~CountryTaxResource()
{
	//__cleanup();
}

void
CountryTaxResource::__init()
{
	//
	//
	//country_iso3 = std::string();
	//
	//
	//name = std::string();
	//
	//
	//rate = double(0);
	//
	//
	//tax_shipping = bool(false);
	//
}

void
CountryTaxResource::__cleanup()
{
	//if(country_iso3 != NULL) {
	//
	//delete country_iso3;
	//country_iso3 = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(rate != NULL) {
	//
	//delete rate;
	//rate = NULL;
	//}
	//if(tax_shipping != NULL) {
	//
	//delete tax_shipping;
	//tax_shipping = NULL;
	//}
	//
}

void
CountryTaxResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *country_iso3Key = "country_iso3";
	node = json_object_get_member(pJsonObject, country_iso3Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&country_iso3, node, "std::string", "");
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
	const gchar *rateKey = "rate";
	node = json_object_get_member(pJsonObject, rateKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&rate, node, "double", "");
		} else {
			
		}
	}
	const gchar *tax_shippingKey = "tax_shipping";
	node = json_object_get_member(pJsonObject, tax_shippingKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&tax_shipping, node, "bool", "");
		} else {
			
		}
	}
}

CountryTaxResource::CountryTaxResource(char* json)
{
	this->fromJson(json);
}

char*
CountryTaxResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getCountryIso3();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *country_iso3Key = "country_iso3";
	json_object_set_member(pJsonObject, country_iso3Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("double")) {
		double obj = getRate();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *rateKey = "rate";
	json_object_set_member(pJsonObject, rateKey, node);
	if (isprimitive("bool")) {
		bool obj = getTaxShipping();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *tax_shippingKey = "tax_shipping";
	json_object_set_member(pJsonObject, tax_shippingKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
CountryTaxResource::getCountryIso3()
{
	return country_iso3;
}

void
CountryTaxResource::setCountryIso3(std::string  country_iso3)
{
	this->country_iso3 = country_iso3;
}

std::string
CountryTaxResource::getName()
{
	return name;
}

void
CountryTaxResource::setName(std::string  name)
{
	this->name = name;
}

double
CountryTaxResource::getRate()
{
	return rate;
}

void
CountryTaxResource::setRate(double  rate)
{
	this->rate = rate;
}

bool
CountryTaxResource::getTaxShipping()
{
	return tax_shipping;
}

void
CountryTaxResource::setTaxShipping(bool  tax_shipping)
{
	this->tax_shipping = tax_shipping;
}


