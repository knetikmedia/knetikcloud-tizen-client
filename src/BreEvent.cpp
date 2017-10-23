#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BreEvent.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BreEvent::BreEvent()
{
	//__init();
}

BreEvent::~BreEvent()
{
	//__cleanup();
}

void
BreEvent::__init()
{
	//
	//
	//event_name = std::string();
	//
	//
	//params = null;
	//
}

void
BreEvent::__cleanup()
{
	//if(event_name != NULL) {
	//
	//delete event_name;
	//event_name = NULL;
	//}
	//if(params != NULL) {
	//
	//delete params;
	//params = NULL;
	//}
	//
}

void
BreEvent::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *event_nameKey = "event_name";
	node = json_object_get_member(pJsonObject, event_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&event_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *paramsKey = "params";
	node = json_object_get_member(pJsonObject, paramsKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&params, node, "std::string", "");
		} else {
			
			std::string* obj = static_cast<std::string*> (&params);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

BreEvent::BreEvent(char* json)
{
	this->fromJson(json);
}

char*
BreEvent::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getEventName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *event_nameKey = "event_name";
	json_object_set_member(pJsonObject, event_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getParams();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
		std::string obj = static_cast<std::string> (getParams());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *paramsKey = "params";
	json_object_set_member(pJsonObject, paramsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
BreEvent::getEventName()
{
	return event_name;
}

void
BreEvent::setEventName(std::string  event_name)
{
	this->event_name = event_name;
}

std::string
BreEvent::getParams()
{
	return params;
}

void
BreEvent::setParams(std::string  params)
{
	this->params = params;
}


