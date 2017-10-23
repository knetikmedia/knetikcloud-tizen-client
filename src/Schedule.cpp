#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Schedule.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Schedule::Schedule()
{
	//__init();
}

Schedule::~Schedule()
{
	//__cleanup();
}

void
Schedule::__init()
{
	//
	//
	//duration = int(0);
	//
	//
	//duration_unit = std::string();
	//
	//
	//repeat = std::string();
	//
}

void
Schedule::__cleanup()
{
	//if(duration != NULL) {
	//
	//delete duration;
	//duration = NULL;
	//}
	//if(duration_unit != NULL) {
	//
	//delete duration_unit;
	//duration_unit = NULL;
	//}
	//if(repeat != NULL) {
	//
	//delete repeat;
	//repeat = NULL;
	//}
	//
}

void
Schedule::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *durationKey = "duration";
	node = json_object_get_member(pJsonObject, durationKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&duration, node, "int", "");
		} else {
			
		}
	}
	const gchar *duration_unitKey = "duration_unit";
	node = json_object_get_member(pJsonObject, duration_unitKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&duration_unit, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *repeatKey = "repeat";
	node = json_object_get_member(pJsonObject, repeatKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&repeat, node, "std::string", "");
		} else {
			
		}
	}
}

Schedule::Schedule(char* json)
{
	this->fromJson(json);
}

char*
Schedule::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getDuration();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *durationKey = "duration";
	json_object_set_member(pJsonObject, durationKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDurationUnit();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *duration_unitKey = "duration_unit";
	json_object_set_member(pJsonObject, duration_unitKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRepeat();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *repeatKey = "repeat";
	json_object_set_member(pJsonObject, repeatKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
Schedule::getDuration()
{
	return duration;
}

void
Schedule::setDuration(int  duration)
{
	this->duration = duration;
}

std::string
Schedule::getDurationUnit()
{
	return duration_unit;
}

void
Schedule::setDurationUnit(std::string  duration_unit)
{
	this->duration_unit = duration_unit;
}

std::string
Schedule::getRepeat()
{
	return repeat;
}

void
Schedule::setRepeat(std::string  repeat)
{
	this->repeat = repeat;
}


