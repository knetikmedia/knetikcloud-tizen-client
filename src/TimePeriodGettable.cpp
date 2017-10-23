#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "TimePeriodGettable.h"

using namespace std;
using namespace Tizen::ArtikCloud;

TimePeriodGettable::TimePeriodGettable()
{
	//__init();
}

TimePeriodGettable::~TimePeriodGettable()
{
	//__cleanup();
}

void
TimePeriodGettable::__init()
{
	//
	//
	//description = std::string();
	//
	//
	//type_hint = std::string();
	//
	//
	//get_limit = int(0);
	//
	//
	//group_name = std::string();
	//
	//
	//time_length = int(0);
	//
	//
	//unit_of_time = std::string();
	//
}

void
TimePeriodGettable::__cleanup()
{
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
	//}
	//if(type_hint != NULL) {
	//
	//delete type_hint;
	//type_hint = NULL;
	//}
	//if(get_limit != NULL) {
	//
	//delete get_limit;
	//get_limit = NULL;
	//}
	//if(group_name != NULL) {
	//
	//delete group_name;
	//group_name = NULL;
	//}
	//if(time_length != NULL) {
	//
	//delete time_length;
	//time_length = NULL;
	//}
	//if(unit_of_time != NULL) {
	//
	//delete unit_of_time;
	//unit_of_time = NULL;
	//}
	//
}

void
TimePeriodGettable::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *descriptionKey = "description";
	node = json_object_get_member(pJsonObject, descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *type_hintKey = "type_hint";
	node = json_object_get_member(pJsonObject, type_hintKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type_hint, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *get_limitKey = "get_limit";
	node = json_object_get_member(pJsonObject, get_limitKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&get_limit, node, "int", "");
		} else {
			
		}
	}
	const gchar *group_nameKey = "group_name";
	node = json_object_get_member(pJsonObject, group_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&group_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *time_lengthKey = "time_length";
	node = json_object_get_member(pJsonObject, time_lengthKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&time_length, node, "int", "");
		} else {
			
		}
	}
	const gchar *unit_of_timeKey = "unit_of_time";
	node = json_object_get_member(pJsonObject, unit_of_timeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&unit_of_time, node, "std::string", "");
		} else {
			
		}
	}
}

TimePeriodGettable::TimePeriodGettable(char* json)
{
	this->fromJson(json);
}

char*
TimePeriodGettable::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *descriptionKey = "description";
	json_object_set_member(pJsonObject, descriptionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTypeHint();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *type_hintKey = "type_hint";
	json_object_set_member(pJsonObject, type_hintKey, node);
	if (isprimitive("int")) {
		int obj = getGetLimit();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *get_limitKey = "get_limit";
	json_object_set_member(pJsonObject, get_limitKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getGroupName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *group_nameKey = "group_name";
	json_object_set_member(pJsonObject, group_nameKey, node);
	if (isprimitive("int")) {
		int obj = getTimeLength();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *time_lengthKey = "time_length";
	json_object_set_member(pJsonObject, time_lengthKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUnitOfTime();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *unit_of_timeKey = "unit_of_time";
	json_object_set_member(pJsonObject, unit_of_timeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
TimePeriodGettable::getDescription()
{
	return description;
}

void
TimePeriodGettable::setDescription(std::string  description)
{
	this->description = description;
}

std::string
TimePeriodGettable::getTypeHint()
{
	return type_hint;
}

void
TimePeriodGettable::setTypeHint(std::string  type_hint)
{
	this->type_hint = type_hint;
}

int
TimePeriodGettable::getGetLimit()
{
	return get_limit;
}

void
TimePeriodGettable::setGetLimit(int  get_limit)
{
	this->get_limit = get_limit;
}

std::string
TimePeriodGettable::getGroupName()
{
	return group_name;
}

void
TimePeriodGettable::setGroupName(std::string  group_name)
{
	this->group_name = group_name;
}

int
TimePeriodGettable::getTimeLength()
{
	return time_length;
}

void
TimePeriodGettable::setTimeLength(int  time_length)
{
	this->time_length = time_length;
}

std::string
TimePeriodGettable::getUnitOfTime()
{
	return unit_of_time;
}

void
TimePeriodGettable::setUnitOfTime(std::string  unit_of_time)
{
	this->unit_of_time = unit_of_time;
}


