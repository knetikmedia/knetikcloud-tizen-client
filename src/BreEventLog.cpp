#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BreEventLog.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BreEventLog::BreEventLog()
{
	//__init();
}

BreEventLog::~BreEventLog()
{
	//__cleanup();
}

void
BreEventLog::__init()
{
	//
	//
	//customer = std::string();
	//
	//
	//event_id = std::string();
	//
	//
	//event_name = std::string();
	//
	//
	//event_start_date = long(0);
	//
	//
	//id = std::string();
	//
	//
	//parameters = null;
	//
	//new std::list()std::list> rules;
	//
	//
}

void
BreEventLog::__cleanup()
{
	//if(customer != NULL) {
	//
	//delete customer;
	//customer = NULL;
	//}
	//if(event_id != NULL) {
	//
	//delete event_id;
	//event_id = NULL;
	//}
	//if(event_name != NULL) {
	//
	//delete event_name;
	//event_name = NULL;
	//}
	//if(event_start_date != NULL) {
	//
	//delete event_start_date;
	//event_start_date = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(parameters != NULL) {
	//
	//delete parameters;
	//parameters = NULL;
	//}
	//if(rules != NULL) {
	//rules.RemoveAll(true);
	//delete rules;
	//rules = NULL;
	//}
	//
}

void
BreEventLog::fromJson(char* jsonStr)
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
	const gchar *event_idKey = "event_id";
	node = json_object_get_member(pJsonObject, event_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&event_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *event_nameKey = "event_name";
	node = json_object_get_member(pJsonObject, event_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&event_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *event_start_dateKey = "event_start_date";
	node = json_object_get_member(pJsonObject, event_start_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&event_start_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *parametersKey = "parameters";
	node = json_object_get_member(pJsonObject, parametersKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&parameters, node, "std::string", "");
		} else {
			
			std::string* obj = static_cast<std::string*> (&parameters);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *rulesKey = "rules";
	node = json_object_get_member(pJsonObject, rulesKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<BreRuleLog> new_list;
			BreRuleLog inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("BreRuleLog")) {
					jsonToValue(&inst, temp_json, "BreRuleLog", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			rules = new_list;
		}
		
	}
}

BreEventLog::BreEventLog(char* json)
{
	this->fromJson(json);
}

char*
BreEventLog::toJson()
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
	if (isprimitive("std::string")) {
		std::string obj = getEventId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *event_idKey = "event_id";
	json_object_set_member(pJsonObject, event_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getEventName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *event_nameKey = "event_name";
	json_object_set_member(pJsonObject, event_nameKey, node);
	if (isprimitive("long long")) {
		long long obj = getEventStartDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *event_start_dateKey = "event_start_date";
	json_object_set_member(pJsonObject, event_start_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getParameters();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
		std::string obj = static_cast<std::string> (getParameters());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *parametersKey = "parameters";
	json_object_set_member(pJsonObject, parametersKey, node);
	if (isprimitive("BreRuleLog")) {
		list<BreRuleLog> new_list = static_cast<list <BreRuleLog> > (getRules());
		node = converttoJson(&new_list, "BreRuleLog", "array");
	} else {
		node = json_node_alloc();
		list<BreRuleLog> new_list = static_cast<list <BreRuleLog> > (getRules());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<BreRuleLog>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			BreRuleLog obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *rulesKey = "rules";
	json_object_set_member(pJsonObject, rulesKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
BreEventLog::getCustomer()
{
	return customer;
}

void
BreEventLog::setCustomer(std::string  customer)
{
	this->customer = customer;
}

std::string
BreEventLog::getEventId()
{
	return event_id;
}

void
BreEventLog::setEventId(std::string  event_id)
{
	this->event_id = event_id;
}

std::string
BreEventLog::getEventName()
{
	return event_name;
}

void
BreEventLog::setEventName(std::string  event_name)
{
	this->event_name = event_name;
}

long long
BreEventLog::getEventStartDate()
{
	return event_start_date;
}

void
BreEventLog::setEventStartDate(long long  event_start_date)
{
	this->event_start_date = event_start_date;
}

std::string
BreEventLog::getId()
{
	return id;
}

void
BreEventLog::setId(std::string  id)
{
	this->id = id;
}

std::string
BreEventLog::getParameters()
{
	return parameters;
}

void
BreEventLog::setParameters(std::string  parameters)
{
	this->parameters = parameters;
}

std::list<BreRuleLog>
BreEventLog::getRules()
{
	return rules;
}

void
BreEventLog::setRules(std::list <BreRuleLog> rules)
{
	this->rules = rules;
}


