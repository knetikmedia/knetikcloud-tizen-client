#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CacheClearEvent.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CacheClearEvent::CacheClearEvent()
{
	//__init();
}

CacheClearEvent::~CacheClearEvent()
{
	//__cleanup();
}

void
CacheClearEvent::__init()
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
	//customer_setup = bool(false);
	//
	//
	//customer_teardown = bool(false);
	//
}

void
CacheClearEvent::__cleanup()
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
	//if(customer_setup != NULL) {
	//
	//delete customer_setup;
	//customer_setup = NULL;
	//}
	//if(customer_teardown != NULL) {
	//
	//delete customer_teardown;
	//customer_teardown = NULL;
	//}
	//
}

void
CacheClearEvent::fromJson(char* jsonStr)
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
	const gchar *customer_setupKey = "customer_setup";
	node = json_object_get_member(pJsonObject, customer_setupKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&customer_setup, node, "bool", "");
		} else {
			
		}
	}
	const gchar *customer_teardownKey = "customer_teardown";
	node = json_object_get_member(pJsonObject, customer_teardownKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&customer_teardown, node, "bool", "");
		} else {
			
		}
	}
}

CacheClearEvent::CacheClearEvent(char* json)
{
	this->fromJson(json);
}

char*
CacheClearEvent::toJson()
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
	if (isprimitive("bool")) {
		bool obj = getCustomerSetup();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *customer_setupKey = "customer_setup";
	json_object_set_member(pJsonObject, customer_setupKey, node);
	if (isprimitive("bool")) {
		bool obj = getCustomerTeardown();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *customer_teardownKey = "customer_teardown";
	json_object_set_member(pJsonObject, customer_teardownKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
CacheClearEvent::getClient()
{
	return client;
}

void
CacheClearEvent::setClient(std::string  client)
{
	this->client = client;
}

std::string
CacheClearEvent::getCustomer()
{
	return customer;
}

void
CacheClearEvent::setCustomer(std::string  customer)
{
	this->customer = customer;
}

bool
CacheClearEvent::getDoNotBroadcast()
{
	return do_not_broadcast;
}

void
CacheClearEvent::setDoNotBroadcast(bool  do_not_broadcast)
{
	this->do_not_broadcast = do_not_broadcast;
}

std::string
CacheClearEvent::getSection()
{
	return section;
}

void
CacheClearEvent::setSection(std::string  section)
{
	this->section = section;
}

std::string
CacheClearEvent::getSource()
{
	return source;
}

void
CacheClearEvent::setSource(std::string  source)
{
	this->source = source;
}

std::string
CacheClearEvent::getSpecifics()
{
	return specifics;
}

void
CacheClearEvent::setSpecifics(std::string  specifics)
{
	this->specifics = specifics;
}

bool
CacheClearEvent::getSynchronous()
{
	return synchronous;
}

void
CacheClearEvent::setSynchronous(bool  synchronous)
{
	this->synchronous = synchronous;
}

long long
CacheClearEvent::getTimestamp()
{
	return timestamp;
}

void
CacheClearEvent::setTimestamp(long long  timestamp)
{
	this->timestamp = timestamp;
}

std::string
CacheClearEvent::getType()
{
	return type;
}

void
CacheClearEvent::setType(std::string  type)
{
	this->type = type;
}

bool
CacheClearEvent::getCustomerSetup()
{
	return customer_setup;
}

void
CacheClearEvent::setCustomerSetup(bool  customer_setup)
{
	this->customer_setup = customer_setup;
}

bool
CacheClearEvent::getCustomerTeardown()
{
	return customer_teardown;
}

void
CacheClearEvent::setCustomerTeardown(bool  customer_teardown)
{
	this->customer_teardown = customer_teardown;
}


