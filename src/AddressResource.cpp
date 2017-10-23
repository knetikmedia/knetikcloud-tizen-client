#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "AddressResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

AddressResource::AddressResource()
{
	//__init();
}

AddressResource::~AddressResource()
{
	//__cleanup();
}

void
AddressResource::__init()
{
	//
	//
	//address1 = std::string();
	//
	//
	//address2 = std::string();
	//
	//
	//city = std::string();
	//
	//
	//country_code = std::string();
	//
	//
	//postal_code = std::string();
	//
	//
	//state_code = std::string();
	//
}

void
AddressResource::__cleanup()
{
	//if(address1 != NULL) {
	//
	//delete address1;
	//address1 = NULL;
	//}
	//if(address2 != NULL) {
	//
	//delete address2;
	//address2 = NULL;
	//}
	//if(city != NULL) {
	//
	//delete city;
	//city = NULL;
	//}
	//if(country_code != NULL) {
	//
	//delete country_code;
	//country_code = NULL;
	//}
	//if(postal_code != NULL) {
	//
	//delete postal_code;
	//postal_code = NULL;
	//}
	//if(state_code != NULL) {
	//
	//delete state_code;
	//state_code = NULL;
	//}
	//
}

void
AddressResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *address1Key = "address1";
	node = json_object_get_member(pJsonObject, address1Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&address1, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *address2Key = "address2";
	node = json_object_get_member(pJsonObject, address2Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&address2, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *cityKey = "city";
	node = json_object_get_member(pJsonObject, cityKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&city, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *country_codeKey = "country_code";
	node = json_object_get_member(pJsonObject, country_codeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&country_code, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *postal_codeKey = "postal_code";
	node = json_object_get_member(pJsonObject, postal_codeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&postal_code, node, "std::string", "");
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
}

AddressResource::AddressResource(char* json)
{
	this->fromJson(json);
}

char*
AddressResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getAddress1();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *address1Key = "address1";
	json_object_set_member(pJsonObject, address1Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getAddress2();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *address2Key = "address2";
	json_object_set_member(pJsonObject, address2Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getCity();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *cityKey = "city";
	json_object_set_member(pJsonObject, cityKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCountryCode();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *country_codeKey = "country_code";
	json_object_set_member(pJsonObject, country_codeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPostalCode();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *postal_codeKey = "postal_code";
	json_object_set_member(pJsonObject, postal_codeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getStateCode();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *state_codeKey = "state_code";
	json_object_set_member(pJsonObject, state_codeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
AddressResource::getAddress1()
{
	return address1;
}

void
AddressResource::setAddress1(std::string  address1)
{
	this->address1 = address1;
}

std::string
AddressResource::getAddress2()
{
	return address2;
}

void
AddressResource::setAddress2(std::string  address2)
{
	this->address2 = address2;
}

std::string
AddressResource::getCity()
{
	return city;
}

void
AddressResource::setCity(std::string  city)
{
	this->city = city;
}

std::string
AddressResource::getCountryCode()
{
	return country_code;
}

void
AddressResource::setCountryCode(std::string  country_code)
{
	this->country_code = country_code;
}

std::string
AddressResource::getPostalCode()
{
	return postal_code;
}

void
AddressResource::setPostalCode(std::string  postal_code)
{
	this->postal_code = postal_code;
}

std::string
AddressResource::getStateCode()
{
	return state_code;
}

void
AddressResource::setStateCode(std::string  state_code)
{
	this->state_code = state_code;
}


