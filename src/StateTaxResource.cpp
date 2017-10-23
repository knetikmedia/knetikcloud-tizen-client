#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "StateTaxResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

StateTaxResource::StateTaxResource()
{
	//__init();
}

StateTaxResource::~StateTaxResource()
{
	//__cleanup();
}

void
StateTaxResource::__init()
{
	//
	//
	//country_iso3 = std::string();
	//
	//
	//federally_exempt = bool(false);
	//
	//
	//name = std::string();
	//
	//
	//rate = double(0);
	//
	//
	//state_code = std::string();
	//
	//
	//tax_shipping = bool(false);
	//
}

void
StateTaxResource::__cleanup()
{
	//if(country_iso3 != NULL) {
	//
	//delete country_iso3;
	//country_iso3 = NULL;
	//}
	//if(federally_exempt != NULL) {
	//
	//delete federally_exempt;
	//federally_exempt = NULL;
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
	//if(state_code != NULL) {
	//
	//delete state_code;
	//state_code = NULL;
	//}
	//if(tax_shipping != NULL) {
	//
	//delete tax_shipping;
	//tax_shipping = NULL;
	//}
	//
}

void
StateTaxResource::fromJson(char* jsonStr)
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
	const gchar *federally_exemptKey = "federally_exempt";
	node = json_object_get_member(pJsonObject, federally_exemptKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&federally_exempt, node, "bool", "");
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
	const gchar *state_codeKey = "state_code";
	node = json_object_get_member(pJsonObject, state_codeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&state_code, node, "std::string", "");
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

StateTaxResource::StateTaxResource(char* json)
{
	this->fromJson(json);
}

char*
StateTaxResource::toJson()
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
	if (isprimitive("bool")) {
		bool obj = getFederallyExempt();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *federally_exemptKey = "federally_exempt";
	json_object_set_member(pJsonObject, federally_exemptKey, node);
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
	if (isprimitive("std::string")) {
		std::string obj = getStateCode();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *state_codeKey = "state_code";
	json_object_set_member(pJsonObject, state_codeKey, node);
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
StateTaxResource::getCountryIso3()
{
	return country_iso3;
}

void
StateTaxResource::setCountryIso3(std::string  country_iso3)
{
	this->country_iso3 = country_iso3;
}

bool
StateTaxResource::getFederallyExempt()
{
	return federally_exempt;
}

void
StateTaxResource::setFederallyExempt(bool  federally_exempt)
{
	this->federally_exempt = federally_exempt;
}

std::string
StateTaxResource::getName()
{
	return name;
}

void
StateTaxResource::setName(std::string  name)
{
	this->name = name;
}

double
StateTaxResource::getRate()
{
	return rate;
}

void
StateTaxResource::setRate(double  rate)
{
	this->rate = rate;
}

std::string
StateTaxResource::getStateCode()
{
	return state_code;
}

void
StateTaxResource::setStateCode(std::string  state_code)
{
	this->state_code = state_code;
}

bool
StateTaxResource::getTaxShipping()
{
	return tax_shipping;
}

void
StateTaxResource::setTaxShipping(bool  tax_shipping)
{
	this->tax_shipping = tax_shipping;
}


