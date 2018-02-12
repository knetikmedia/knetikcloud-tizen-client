#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BreActionLog.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BreActionLog::BreActionLog()
{
	//__init();
}

BreActionLog::~BreActionLog()
{
	//__cleanup();
}

void
BreActionLog::__init()
{
	//
	//
	//name = std::string();
	//
	//
	//runtime = long(0);
	//
	//
	//status = std::string();
	//
}

void
BreActionLog::__cleanup()
{
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(runtime != NULL) {
	//
	//delete runtime;
	//runtime = NULL;
	//}
	//if(status != NULL) {
	//
	//delete status;
	//status = NULL;
	//}
	//
}

void
BreActionLog::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *runtimeKey = "runtime";
	node = json_object_get_member(pJsonObject, runtimeKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&runtime, node, "long long", "");
		} else {
			
		}
	}
	const gchar *statusKey = "status";
	node = json_object_get_member(pJsonObject, statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&status, node, "std::string", "");
		} else {
			
		}
	}
}

BreActionLog::BreActionLog(char* json)
{
	this->fromJson(json);
}

char*
BreActionLog::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("long long")) {
		long long obj = getRuntime();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *runtimeKey = "runtime";
	json_object_set_member(pJsonObject, runtimeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *statusKey = "status";
	json_object_set_member(pJsonObject, statusKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
BreActionLog::getName()
{
	return name;
}

void
BreActionLog::setName(std::string  name)
{
	this->name = name;
}

long long
BreActionLog::getRuntime()
{
	return runtime;
}

void
BreActionLog::setRuntime(long long  runtime)
{
	this->runtime = runtime;
}

std::string
BreActionLog::getStatus()
{
	return status;
}

void
BreActionLog::setStatus(std::string  status)
{
	this->status = status;
}


