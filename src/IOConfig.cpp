#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "IOConfig.h"

using namespace std;
using namespace Tizen::ArtikCloud;

IOConfig::IOConfig()
{
	//__init();
}

IOConfig::~IOConfig()
{
	//__cleanup();
}

void
IOConfig::__init()
{
	//
	//
	//customer = std::string();
	//
	//
	//enabled = bool(false);
	//
	//
	//environment = std::string();
	//
	//
	//product = std::string();
	//
}

void
IOConfig::__cleanup()
{
	//if(customer != NULL) {
	//
	//delete customer;
	//customer = NULL;
	//}
	//if(enabled != NULL) {
	//
	//delete enabled;
	//enabled = NULL;
	//}
	//if(environment != NULL) {
	//
	//delete environment;
	//environment = NULL;
	//}
	//if(product != NULL) {
	//
	//delete product;
	//product = NULL;
	//}
	//
}

void
IOConfig::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *customerKey = "customer";
	node = json_object_get_member(pJsonObject, customerKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&customer, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *enabledKey = "enabled";
	node = json_object_get_member(pJsonObject, enabledKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&enabled, node, "bool", "");
		} else {
			
		}
	}
	const gchar *environmentKey = "environment";
	node = json_object_get_member(pJsonObject, environmentKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&environment, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *productKey = "product";
	node = json_object_get_member(pJsonObject, productKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&product, node, "std::string", "");
		} else {
			
		}
	}
}

IOConfig::IOConfig(char* json)
{
	this->fromJson(json);
}

char*
IOConfig::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getCustomer();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *customerKey = "customer";
	json_object_set_member(pJsonObject, customerKey, node);
	if (isprimitive("bool")) {
		bool obj = getEnabled();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *enabledKey = "enabled";
	json_object_set_member(pJsonObject, enabledKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getEnvironment();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *environmentKey = "environment";
	json_object_set_member(pJsonObject, environmentKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getProduct();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *productKey = "product";
	json_object_set_member(pJsonObject, productKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
IOConfig::getCustomer()
{
	return customer;
}

void
IOConfig::setCustomer(std::string  customer)
{
	this->customer = customer;
}

bool
IOConfig::getEnabled()
{
	return enabled;
}

void
IOConfig::setEnabled(bool  enabled)
{
	this->enabled = enabled;
}

std::string
IOConfig::getEnvironment()
{
	return environment;
}

void
IOConfig::setEnvironment(std::string  environment)
{
	this->environment = environment;
}

std::string
IOConfig::getProduct()
{
	return product;
}

void
IOConfig::setProduct(std::string  product)
{
	this->product = product;
}


