#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "TimePeriodUsable.h"

using namespace std;
using namespace Tizen::ArtikCloud;

TimePeriodUsable::TimePeriodUsable()
{
	//__init();
}

TimePeriodUsable::~TimePeriodUsable()
{
	//__cleanup();
}

void
TimePeriodUsable::__init()
{
	//
	//
	//description = std::string();
	//
	//
	//type_hint = std::string();
	//
	//
	//max_use = int(0);
	//
	//
	//time_length = int(0);
	//
	//
	//unit_of_time = std::string();
	//
}

void
TimePeriodUsable::__cleanup()
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
	//if(max_use != NULL) {
	//
	//delete max_use;
	//max_use = NULL;
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
TimePeriodUsable::fromJson(char* jsonStr)
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
	const gchar *max_useKey = "max_use";
	node = json_object_get_member(pJsonObject, max_useKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&max_use, node, "int", "");
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

TimePeriodUsable::TimePeriodUsable(char* json)
{
	this->fromJson(json);
}

char*
TimePeriodUsable::toJson()
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
		int obj = getMaxUse();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *max_useKey = "max_use";
	json_object_set_member(pJsonObject, max_useKey, node);
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
TimePeriodUsable::getDescription()
{
	return description;
}

void
TimePeriodUsable::setDescription(std::string  description)
{
	this->description = description;
}

std::string
TimePeriodUsable::getTypeHint()
{
	return type_hint;
}

void
TimePeriodUsable::setTypeHint(std::string  type_hint)
{
	this->type_hint = type_hint;
}

int
TimePeriodUsable::getMaxUse()
{
	return max_use;
}

void
TimePeriodUsable::setMaxUse(int  max_use)
{
	this->max_use = max_use;
}

int
TimePeriodUsable::getTimeLength()
{
	return time_length;
}

void
TimePeriodUsable::setTimeLength(int  time_length)
{
	this->time_length = time_length;
}

std::string
TimePeriodUsable::getUnitOfTime()
{
	return unit_of_time;
}

void
TimePeriodUsable::setUnitOfTime(std::string  unit_of_time)
{
	this->unit_of_time = unit_of_time;
}


