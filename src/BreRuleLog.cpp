#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BreRuleLog.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BreRuleLog::BreRuleLog()
{
	//__init();
}

BreRuleLog::~BreRuleLog()
{
	//__cleanup();
}

void
BreRuleLog::__init()
{
	//
	//
	//ran = bool(false);
	//
	//
	//reason = std::string();
	//
	//
	//rule_end_date = long(0);
	//
	//
	//rule_id = std::string();
	//
	//
	//rule_name = std::string();
	//
	//
	//rule_start_date = long(0);
	//
}

void
BreRuleLog::__cleanup()
{
	//if(ran != NULL) {
	//
	//delete ran;
	//ran = NULL;
	//}
	//if(reason != NULL) {
	//
	//delete reason;
	//reason = NULL;
	//}
	//if(rule_end_date != NULL) {
	//
	//delete rule_end_date;
	//rule_end_date = NULL;
	//}
	//if(rule_id != NULL) {
	//
	//delete rule_id;
	//rule_id = NULL;
	//}
	//if(rule_name != NULL) {
	//
	//delete rule_name;
	//rule_name = NULL;
	//}
	//if(rule_start_date != NULL) {
	//
	//delete rule_start_date;
	//rule_start_date = NULL;
	//}
	//
}

void
BreRuleLog::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *ranKey = "ran";
	node = json_object_get_member(pJsonObject, ranKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&ran, node, "bool", "");
		} else {
			
		}
	}
	const gchar *reasonKey = "reason";
	node = json_object_get_member(pJsonObject, reasonKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&reason, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *rule_end_dateKey = "rule_end_date";
	node = json_object_get_member(pJsonObject, rule_end_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&rule_end_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *rule_idKey = "rule_id";
	node = json_object_get_member(pJsonObject, rule_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&rule_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *rule_nameKey = "rule_name";
	node = json_object_get_member(pJsonObject, rule_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&rule_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *rule_start_dateKey = "rule_start_date";
	node = json_object_get_member(pJsonObject, rule_start_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&rule_start_date, node, "long long", "");
		} else {
			
		}
	}
}

BreRuleLog::BreRuleLog(char* json)
{
	this->fromJson(json);
}

char*
BreRuleLog::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getRan();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *ranKey = "ran";
	json_object_set_member(pJsonObject, ranKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getReason();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *reasonKey = "reason";
	json_object_set_member(pJsonObject, reasonKey, node);
	if (isprimitive("long long")) {
		long long obj = getRuleEndDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *rule_end_dateKey = "rule_end_date";
	json_object_set_member(pJsonObject, rule_end_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRuleId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *rule_idKey = "rule_id";
	json_object_set_member(pJsonObject, rule_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRuleName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *rule_nameKey = "rule_name";
	json_object_set_member(pJsonObject, rule_nameKey, node);
	if (isprimitive("long long")) {
		long long obj = getRuleStartDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *rule_start_dateKey = "rule_start_date";
	json_object_set_member(pJsonObject, rule_start_dateKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
BreRuleLog::getRan()
{
	return ran;
}

void
BreRuleLog::setRan(bool  ran)
{
	this->ran = ran;
}

std::string
BreRuleLog::getReason()
{
	return reason;
}

void
BreRuleLog::setReason(std::string  reason)
{
	this->reason = reason;
}

long long
BreRuleLog::getRuleEndDate()
{
	return rule_end_date;
}

void
BreRuleLog::setRuleEndDate(long long  rule_end_date)
{
	this->rule_end_date = rule_end_date;
}

std::string
BreRuleLog::getRuleId()
{
	return rule_id;
}

void
BreRuleLog::setRuleId(std::string  rule_id)
{
	this->rule_id = rule_id;
}

std::string
BreRuleLog::getRuleName()
{
	return rule_name;
}

void
BreRuleLog::setRuleName(std::string  rule_name)
{
	this->rule_name = rule_name;
}

long long
BreRuleLog::getRuleStartDate()
{
	return rule_start_date;
}

void
BreRuleLog::setRuleStartDate(long long  rule_start_date)
{
	this->rule_start_date = rule_start_date;
}


