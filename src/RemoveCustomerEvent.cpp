#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "RemoveCustomerEvent.h"

using namespace std;
using namespace Tizen::ArtikCloud;

RemoveCustomerEvent::RemoveCustomerEvent()
{
	//__init();
}

RemoveCustomerEvent::~RemoveCustomerEvent()
{
	//__cleanup();
}

void
RemoveCustomerEvent::__init()
{
	//
	//
	//client = std::string();
	//
	//
	//customer = std::string();
	//
	//
	//do_not_broadcast = bool(false);
	//
	//
	//section = std::string();
	//
	//
	//source = null;
	//
	//
	//specifics = std::string();
	//
	//
	//synchronous = bool(false);
	//
	//
	//timestamp = long(0);
	//
	//
	//type = std::string();
	//
	//
	//customer_config = new CustomerConfig();
	//
}

void
RemoveCustomerEvent::__cleanup()
{
	//if(client != NULL) {
	//
	//delete client;
	//client = NULL;
	//}
	//if(customer != NULL) {
	//
	//delete customer;
	//customer = NULL;
	//}
	//if(do_not_broadcast != NULL) {
	//
	//delete do_not_broadcast;
	//do_not_broadcast = NULL;
	//}
	//if(section != NULL) {
	//
	//delete section;
	//section = NULL;
	//}
	//if(source != NULL) {
	//
	//delete source;
	//source = NULL;
	//}
	//if(specifics != NULL) {
	//
	//delete specifics;
	//specifics = NULL;
	//}
	//if(synchronous != NULL) {
	//
	//delete synchronous;
	//synchronous = NULL;
	//}
	//if(timestamp != NULL) {
	//
	//delete timestamp;
	//timestamp = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(customer_config != NULL) {
	//
	//delete customer_config;
	//customer_config = NULL;
	//}
	//
}

void
RemoveCustomerEvent::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *clientKey = "client";
	node = json_object_get_member(pJsonObject, clientKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&client, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *customerKey = "customer";
	node = json_object_get_member(pJsonObject, customerKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&customer, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *do_not_broadcastKey = "do_not_broadcast";
	node = json_object_get_member(pJsonObject, do_not_broadcastKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&do_not_broadcast, node, "bool", "");
		} else {
			
		}
	}
	const gchar *sectionKey = "section";
	node = json_object_get_member(pJsonObject, sectionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&section, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *sourceKey = "source";
	node = json_object_get_member(pJsonObject, sourceKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&source, node, "std::string", "");
		} else {
			
			std::string* obj = static_cast<std::string*> (&source);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *specificsKey = "specifics";
	node = json_object_get_member(pJsonObject, specificsKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&specifics, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *synchronousKey = "synchronous";
	node = json_object_get_member(pJsonObject, synchronousKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&synchronous, node, "bool", "");
		} else {
			
		}
	}
	const gchar *timestampKey = "timestamp";
	node = json_object_get_member(pJsonObject, timestampKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&timestamp, node, "long long", "");
		} else {
			
		}
	}
	const gchar *typeKey = "type";
	node = json_object_get_member(pJsonObject, typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *customer_configKey = "customer_config";
	node = json_object_get_member(pJsonObject, customer_configKey);
	if (node !=NULL) {
	

		if (isprimitive("CustomerConfig")) {
			jsonToValue(&customer_config, node, "CustomerConfig", "CustomerConfig");
		} else {
			
			CustomerConfig* obj = static_cast<CustomerConfig*> (&customer_config);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

RemoveCustomerEvent::RemoveCustomerEvent(char* json)
{
	this->fromJson(json);
}

char*
RemoveCustomerEvent::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getClient();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *clientKey = "client";
	json_object_set_member(pJsonObject, clientKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCustomer();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *customerKey = "customer";
	json_object_set_member(pJsonObject, customerKey, node);
	if (isprimitive("bool")) {
		bool obj = getDoNotBroadcast();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *do_not_broadcastKey = "do_not_broadcast";
	json_object_set_member(pJsonObject, do_not_broadcastKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSection();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *sectionKey = "section";
	json_object_set_member(pJsonObject, sectionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSource();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
		std::string obj = static_cast<std::string> (getSource());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *sourceKey = "source";
	json_object_set_member(pJsonObject, sourceKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSpecifics();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *specificsKey = "specifics";
	json_object_set_member(pJsonObject, specificsKey, node);
	if (isprimitive("bool")) {
		bool obj = getSynchronous();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *synchronousKey = "synchronous";
	json_object_set_member(pJsonObject, synchronousKey, node);
	if (isprimitive("long long")) {
		long long obj = getTimestamp();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *timestampKey = "timestamp";
	json_object_set_member(pJsonObject, timestampKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	if (isprimitive("CustomerConfig")) {
		CustomerConfig obj = getCustomerConfig();
		node = converttoJson(&obj, "CustomerConfig", "");
	}
	else {
		
		CustomerConfig obj = static_cast<CustomerConfig> (getCustomerConfig());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *customer_configKey = "customer_config";
	json_object_set_member(pJsonObject, customer_configKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
RemoveCustomerEvent::getClient()
{
	return client;
}

void
RemoveCustomerEvent::setClient(std::string  client)
{
	this->client = client;
}

std::string
RemoveCustomerEvent::getCustomer()
{
	return customer;
}

void
RemoveCustomerEvent::setCustomer(std::string  customer)
{
	this->customer = customer;
}

bool
RemoveCustomerEvent::getDoNotBroadcast()
{
	return do_not_broadcast;
}

void
RemoveCustomerEvent::setDoNotBroadcast(bool  do_not_broadcast)
{
	this->do_not_broadcast = do_not_broadcast;
}

std::string
RemoveCustomerEvent::getSection()
{
	return section;
}

void
RemoveCustomerEvent::setSection(std::string  section)
{
	this->section = section;
}

std::string
RemoveCustomerEvent::getSource()
{
	return source;
}

void
RemoveCustomerEvent::setSource(std::string  source)
{
	this->source = source;
}

std::string
RemoveCustomerEvent::getSpecifics()
{
	return specifics;
}

void
RemoveCustomerEvent::setSpecifics(std::string  specifics)
{
	this->specifics = specifics;
}

bool
RemoveCustomerEvent::getSynchronous()
{
	return synchronous;
}

void
RemoveCustomerEvent::setSynchronous(bool  synchronous)
{
	this->synchronous = synchronous;
}

long long
RemoveCustomerEvent::getTimestamp()
{
	return timestamp;
}

void
RemoveCustomerEvent::setTimestamp(long long  timestamp)
{
	this->timestamp = timestamp;
}

std::string
RemoveCustomerEvent::getType()
{
	return type;
}

void
RemoveCustomerEvent::setType(std::string  type)
{
	this->type = type;
}

CustomerConfig
RemoveCustomerEvent::getCustomerConfig()
{
	return customer_config;
}

void
RemoveCustomerEvent::setCustomerConfig(CustomerConfig  customer_config)
{
	this->customer_config = customer_config;
}


