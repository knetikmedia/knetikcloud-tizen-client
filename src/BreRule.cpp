#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BreRule.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BreRule::BreRule()
{
	//__init();
}

BreRule::~BreRule()
{
	//__cleanup();
}

void
BreRule::__init()
{
	//
	//
	//actions = new ActionResource();
	//
	//
	//condition = new PredicateOperation();
	//
	//
	//condition_text = std::string();
	//
	//
	//description = std::string();
	//
	//
	//enabled = bool(false);
	//
	//
	//end_date = long(0);
	//
	//
	//event_name = std::string();
	//
	//
	//id = std::string();
	//
	//
	//name = std::string();
	//
	//
	//sort = int(0);
	//
	//
	//start_date = long(0);
	//
	//
	//system_rule = bool(false);
	//
}

void
BreRule::__cleanup()
{
	//if(actions != NULL) {
	//
	//delete actions;
	//actions = NULL;
	//}
	//if(condition != NULL) {
	//
	//delete condition;
	//condition = NULL;
	//}
	//if(condition_text != NULL) {
	//
	//delete condition_text;
	//condition_text = NULL;
	//}
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
	//}
	//if(enabled != NULL) {
	//
	//delete enabled;
	//enabled = NULL;
	//}
	//if(end_date != NULL) {
	//
	//delete end_date;
	//end_date = NULL;
	//}
	//if(event_name != NULL) {
	//
	//delete event_name;
	//event_name = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(sort != NULL) {
	//
	//delete sort;
	//sort = NULL;
	//}
	//if(start_date != NULL) {
	//
	//delete start_date;
	//start_date = NULL;
	//}
	//if(system_rule != NULL) {
	//
	//delete system_rule;
	//system_rule = NULL;
	//}
	//
}

void
BreRule::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *actionsKey = "actions";
	node = json_object_get_member(pJsonObject, actionsKey);
	if (node !=NULL) {
	

		if (isprimitive("ActionResource")) {
			jsonToValue(&actions, node, "ActionResource", "ActionResource");
		} else {
			
			ActionResource* obj = static_cast<ActionResource*> (&actions);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *conditionKey = "condition";
	node = json_object_get_member(pJsonObject, conditionKey);
	if (node !=NULL) {
	

		if (isprimitive("PredicateOperation")) {
			jsonToValue(&condition, node, "PredicateOperation", "PredicateOperation");
		} else {
			
			PredicateOperation* obj = static_cast<PredicateOperation*> (&condition);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *condition_textKey = "condition_text";
	node = json_object_get_member(pJsonObject, condition_textKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&condition_text, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *descriptionKey = "description";
	node = json_object_get_member(pJsonObject, descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&description, node, "std::string", "");
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
	const gchar *end_dateKey = "end_date";
	node = json_object_get_member(pJsonObject, end_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&end_date, node, "long long", "");
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
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&id, node, "std::string", "");
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
	const gchar *sortKey = "sort";
	node = json_object_get_member(pJsonObject, sortKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&sort, node, "int", "");
		} else {
			
		}
	}
	const gchar *start_dateKey = "start_date";
	node = json_object_get_member(pJsonObject, start_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&start_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *system_ruleKey = "system_rule";
	node = json_object_get_member(pJsonObject, system_ruleKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&system_rule, node, "bool", "");
		} else {
			
		}
	}
}

BreRule::BreRule(char* json)
{
	this->fromJson(json);
}

char*
BreRule::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("ActionResource")) {
		ActionResource obj = getActions();
		node = converttoJson(&obj, "ActionResource", "");
	}
	else {
		
		ActionResource obj = static_cast<ActionResource> (getActions());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *actionsKey = "actions";
	json_object_set_member(pJsonObject, actionsKey, node);
	if (isprimitive("PredicateOperation")) {
		PredicateOperation obj = getCondition();
		node = converttoJson(&obj, "PredicateOperation", "");
	}
	else {
		
		PredicateOperation obj = static_cast<PredicateOperation> (getCondition());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *conditionKey = "condition";
	json_object_set_member(pJsonObject, conditionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getConditionText();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *condition_textKey = "condition_text";
	json_object_set_member(pJsonObject, condition_textKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *descriptionKey = "description";
	json_object_set_member(pJsonObject, descriptionKey, node);
	if (isprimitive("bool")) {
		bool obj = getEnabled();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *enabledKey = "enabled";
	json_object_set_member(pJsonObject, enabledKey, node);
	if (isprimitive("long long")) {
		long long obj = getEndDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *end_dateKey = "end_date";
	json_object_set_member(pJsonObject, end_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getEventName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *event_nameKey = "event_name";
	json_object_set_member(pJsonObject, event_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("int")) {
		int obj = getSort();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *sortKey = "sort";
	json_object_set_member(pJsonObject, sortKey, node);
	if (isprimitive("long long")) {
		long long obj = getStartDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *start_dateKey = "start_date";
	json_object_set_member(pJsonObject, start_dateKey, node);
	if (isprimitive("bool")) {
		bool obj = getSystemRule();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *system_ruleKey = "system_rule";
	json_object_set_member(pJsonObject, system_ruleKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

ActionResource
BreRule::getActions()
{
	return actions;
}

void
BreRule::setActions(ActionResource  actions)
{
	this->actions = actions;
}

PredicateOperation
BreRule::getCondition()
{
	return condition;
}

void
BreRule::setCondition(PredicateOperation  condition)
{
	this->condition = condition;
}

std::string
BreRule::getConditionText()
{
	return condition_text;
}

void
BreRule::setConditionText(std::string  condition_text)
{
	this->condition_text = condition_text;
}

std::string
BreRule::getDescription()
{
	return description;
}

void
BreRule::setDescription(std::string  description)
{
	this->description = description;
}

bool
BreRule::getEnabled()
{
	return enabled;
}

void
BreRule::setEnabled(bool  enabled)
{
	this->enabled = enabled;
}

long long
BreRule::getEndDate()
{
	return end_date;
}

void
BreRule::setEndDate(long long  end_date)
{
	this->end_date = end_date;
}

std::string
BreRule::getEventName()
{
	return event_name;
}

void
BreRule::setEventName(std::string  event_name)
{
	this->event_name = event_name;
}

std::string
BreRule::getId()
{
	return id;
}

void
BreRule::setId(std::string  id)
{
	this->id = id;
}

std::string
BreRule::getName()
{
	return name;
}

void
BreRule::setName(std::string  name)
{
	this->name = name;
}

int
BreRule::getSort()
{
	return sort;
}

void
BreRule::setSort(int  sort)
{
	this->sort = sort;
}

long long
BreRule::getStartDate()
{
	return start_date;
}

void
BreRule::setStartDate(long long  start_date)
{
	this->start_date = start_date;
}

bool
BreRule::getSystemRule()
{
	return system_rule;
}

void
BreRule::setSystemRule(bool  system_rule)
{
	this->system_rule = system_rule;
}


