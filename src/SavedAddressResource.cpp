#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "SavedAddressResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

SavedAddressResource::SavedAddressResource()
{
	//__init();
}

SavedAddressResource::~SavedAddressResource()
{
	//__cleanup();
}

void
SavedAddressResource::__init()
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
	//_default = bool(false);
	//
	//
	//first_name = std::string();
	//
	//
	//id = int(0);
	//
	//
	//last_name = std::string();
	//
	//
	//name = std::string();
	//
	//
	//phone1 = std::string();
	//
	//
	//phone2 = std::string();
	//
	//
	//postal_code = std::string();
	//
	//
	//state_code = std::string();
	//
}

void
SavedAddressResource::__cleanup()
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
	//if(_default != NULL) {
	//
	//delete _default;
	//_default = NULL;
	//}
	//if(first_name != NULL) {
	//
	//delete first_name;
	//first_name = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(last_name != NULL) {
	//
	//delete last_name;
	//last_name = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(phone1 != NULL) {
	//
	//delete phone1;
	//phone1 = NULL;
	//}
	//if(phone2 != NULL) {
	//
	//delete phone2;
	//phone2 = NULL;
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
SavedAddressResource::fromJson(char* jsonStr)
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
	const gchar *_defaultKey = "default";
	node = json_object_get_member(pJsonObject, _defaultKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&_default, node, "bool", "");
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
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&id, node, "int", "");
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
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *phone1Key = "phone1";
	node = json_object_get_member(pJsonObject, phone1Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&phone1, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *phone2Key = "phone2";
	node = json_object_get_member(pJsonObject, phone2Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&phone2, node, "std::string", "");
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

SavedAddressResource::SavedAddressResource(char* json)
{
	this->fromJson(json);
}

char*
SavedAddressResource::toJson()
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
	if (isprimitive("bool")) {
		bool obj = getDefault();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *_defaultKey = "default";
	json_object_set_member(pJsonObject, _defaultKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getFirstName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *first_nameKey = "first_name";
	json_object_set_member(pJsonObject, first_nameKey, node);
	if (isprimitive("int")) {
		int obj = getId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLastName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *last_nameKey = "last_name";
	json_object_set_member(pJsonObject, last_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPhone1();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *phone1Key = "phone1";
	json_object_set_member(pJsonObject, phone1Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getPhone2();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *phone2Key = "phone2";
	json_object_set_member(pJsonObject, phone2Key, node);
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
SavedAddressResource::getAddress1()
{
	return address1;
}

void
SavedAddressResource::setAddress1(std::string  address1)
{
	this->address1 = address1;
}

std::string
SavedAddressResource::getAddress2()
{
	return address2;
}

void
SavedAddressResource::setAddress2(std::string  address2)
{
	this->address2 = address2;
}

std::string
SavedAddressResource::getCity()
{
	return city;
}

void
SavedAddressResource::setCity(std::string  city)
{
	this->city = city;
}

std::string
SavedAddressResource::getCountryCode()
{
	return country_code;
}

void
SavedAddressResource::setCountryCode(std::string  country_code)
{
	this->country_code = country_code;
}

bool
SavedAddressResource::getDefault()
{
	return _default;
}

void
SavedAddressResource::setDefault(bool  _default)
{
	this->_default = _default;
}

std::string
SavedAddressResource::getFirstName()
{
	return first_name;
}

void
SavedAddressResource::setFirstName(std::string  first_name)
{
	this->first_name = first_name;
}

int
SavedAddressResource::getId()
{
	return id;
}

void
SavedAddressResource::setId(int  id)
{
	this->id = id;
}

std::string
SavedAddressResource::getLastName()
{
	return last_name;
}

void
SavedAddressResource::setLastName(std::string  last_name)
{
	this->last_name = last_name;
}

std::string
SavedAddressResource::getName()
{
	return name;
}

void
SavedAddressResource::setName(std::string  name)
{
	this->name = name;
}

std::string
SavedAddressResource::getPhone1()
{
	return phone1;
}

void
SavedAddressResource::setPhone1(std::string  phone1)
{
	this->phone1 = phone1;
}

std::string
SavedAddressResource::getPhone2()
{
	return phone2;
}

void
SavedAddressResource::setPhone2(std::string  phone2)
{
	this->phone2 = phone2;
}

std::string
SavedAddressResource::getPostalCode()
{
	return postal_code;
}

void
SavedAddressResource::setPostalCode(std::string  postal_code)
{
	this->postal_code = postal_code;
}

std::string
SavedAddressResource::getStateCode()
{
	return state_code;
}

void
SavedAddressResource::setStateCode(std::string  state_code)
{
	this->state_code = state_code;
}


