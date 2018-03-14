#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServiceDeployedEvent.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServiceDeployedEvent::ServiceDeployedEvent()
{
	//__init();
}

ServiceDeployedEvent::~ServiceDeployedEvent()
{
	//__cleanup();
}

void
ServiceDeployedEvent::__init()
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
	//new std::list()std::list> events;
	//
	//
	//new std::list()std::list> resources;
	//
	//
	//
	//service_name = std::string();
	//
	//
	//swagger_url = std::string();
	//
}

void
ServiceDeployedEvent::__cleanup()
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
	//if(events != NULL) {
	//events.RemoveAll(true);
	//delete events;
	//events = NULL;
	//}
	//if(resources != NULL) {
	//resources.RemoveAll(true);
	//delete resources;
	//resources = NULL;
	//}
	//if(service_name != NULL) {
	//
	//delete service_name;
	//service_name = NULL;
	//}
	//if(swagger_url != NULL) {
	//
	//delete swagger_url;
	//swagger_url = NULL;
	//}
	//
}

void
ServiceDeployedEvent::fromJson(char* jsonStr)
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
	const gchar *eventsKey = "events";
	node = json_object_get_member(pJsonObject, eventsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<BreTriggerResource> new_list;
			BreTriggerResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("BreTriggerResource")) {
					jsonToValue(&inst, temp_json, "BreTriggerResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			events = new_list;
		}
		
	}
	const gchar *resourcesKey = "resources";
	node = json_object_get_member(pJsonObject, resourcesKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<ResourceTypeDescription> new_list;
			ResourceTypeDescription inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("ResourceTypeDescription")) {
					jsonToValue(&inst, temp_json, "ResourceTypeDescription", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			resources = new_list;
		}
		
	}
	const gchar *service_nameKey = "service_name";
	node = json_object_get_member(pJsonObject, service_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&service_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *swagger_urlKey = "swagger_url";
	node = json_object_get_member(pJsonObject, swagger_urlKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&swagger_url, node, "std::string", "");
		} else {
			
		}
	}
}

ServiceDeployedEvent::ServiceDeployedEvent(char* json)
{
	this->fromJson(json);
}

char*
ServiceDeployedEvent::toJson()
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
	if (isprimitive("BreTriggerResource")) {
		list<BreTriggerResource> new_list = static_cast<list <BreTriggerResource> > (getEvents());
		node = converttoJson(&new_list, "BreTriggerResource", "array");
	} else {
		node = json_node_alloc();
		list<BreTriggerResource> new_list = static_cast<list <BreTriggerResource> > (getEvents());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<BreTriggerResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			BreTriggerResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *eventsKey = "events";
	json_object_set_member(pJsonObject, eventsKey, node);
	if (isprimitive("ResourceTypeDescription")) {
		list<ResourceTypeDescription> new_list = static_cast<list <ResourceTypeDescription> > (getResources());
		node = converttoJson(&new_list, "ResourceTypeDescription", "array");
	} else {
		node = json_node_alloc();
		list<ResourceTypeDescription> new_list = static_cast<list <ResourceTypeDescription> > (getResources());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<ResourceTypeDescription>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			ResourceTypeDescription obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *resourcesKey = "resources";
	json_object_set_member(pJsonObject, resourcesKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServiceName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *service_nameKey = "service_name";
	json_object_set_member(pJsonObject, service_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSwaggerUrl();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *swagger_urlKey = "swagger_url";
	json_object_set_member(pJsonObject, swagger_urlKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
ServiceDeployedEvent::getClient()
{
	return client;
}

void
ServiceDeployedEvent::setClient(std::string  client)
{
	this->client = client;
}

std::string
ServiceDeployedEvent::getCustomer()
{
	return customer;
}

void
ServiceDeployedEvent::setCustomer(std::string  customer)
{
	this->customer = customer;
}

bool
ServiceDeployedEvent::getDoNotBroadcast()
{
	return do_not_broadcast;
}

void
ServiceDeployedEvent::setDoNotBroadcast(bool  do_not_broadcast)
{
	this->do_not_broadcast = do_not_broadcast;
}

std::string
ServiceDeployedEvent::getSection()
{
	return section;
}

void
ServiceDeployedEvent::setSection(std::string  section)
{
	this->section = section;
}

std::string
ServiceDeployedEvent::getSource()
{
	return source;
}

void
ServiceDeployedEvent::setSource(std::string  source)
{
	this->source = source;
}

std::string
ServiceDeployedEvent::getSpecifics()
{
	return specifics;
}

void
ServiceDeployedEvent::setSpecifics(std::string  specifics)
{
	this->specifics = specifics;
}

bool
ServiceDeployedEvent::getSynchronous()
{
	return synchronous;
}

void
ServiceDeployedEvent::setSynchronous(bool  synchronous)
{
	this->synchronous = synchronous;
}

long long
ServiceDeployedEvent::getTimestamp()
{
	return timestamp;
}

void
ServiceDeployedEvent::setTimestamp(long long  timestamp)
{
	this->timestamp = timestamp;
}

std::string
ServiceDeployedEvent::getType()
{
	return type;
}

void
ServiceDeployedEvent::setType(std::string  type)
{
	this->type = type;
}

std::list<BreTriggerResource>
ServiceDeployedEvent::getEvents()
{
	return events;
}

void
ServiceDeployedEvent::setEvents(std::list <BreTriggerResource> events)
{
	this->events = events;
}

std::list<ResourceTypeDescription>
ServiceDeployedEvent::getResources()
{
	return resources;
}

void
ServiceDeployedEvent::setResources(std::list <ResourceTypeDescription> resources)
{
	this->resources = resources;
}

std::string
ServiceDeployedEvent::getServiceName()
{
	return service_name;
}

void
ServiceDeployedEvent::setServiceName(std::string  service_name)
{
	this->service_name = service_name;
}

std::string
ServiceDeployedEvent::getSwaggerUrl()
{
	return swagger_url;
}

void
ServiceDeployedEvent::setSwaggerUrl(std::string  swagger_url)
{
	this->swagger_url = swagger_url;
}


