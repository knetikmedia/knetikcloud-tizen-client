#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "TierResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

TierResource::TierResource()
{
	//__init();
}

TierResource::~TierResource()
{
	//__cleanup();
}

void
TierResource::__init()
{
	//
	//new std::map()std::map> additional_properties;
	//
	//
	//
	//name = std::string();
	//
	//
	//required_progress = int(0);
	//
}

void
TierResource::__cleanup()
{
	//if(additional_properties != NULL) {
	//additional_properties.RemoveAll(true);
	//delete additional_properties;
	//additional_properties = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(required_progress != NULL) {
	//
	//delete required_progress;
	//required_progress = NULL;
	//}
	//
}

void
TierResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *additional_propertiesKey = "additional_properties";
	node = json_object_get_member(pJsonObject, additional_propertiesKey);
	if (node !=NULL) {
	
		{
			JsonObject* json_obj = json_node_get_object(node);
			map<string,string> new_map;
			json_object_foreach_member(json_obj,helper_func,&new_map);
			additional_properties = new_map;
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
	const gchar *required_progressKey = "required_progress";
	node = json_object_get_member(pJsonObject, required_progressKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&required_progress, node, "int", "");
		} else {
			
		}
	}
}

TierResource::TierResource(char* json)
{
	this->fromJson(json);
}

char*
TierResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;


	{
		JsonObject* json_obj;
		map<string, string> new_list = static_cast<map <string, string> > (getAdditionalProperties());
		json_obj = json_object_new();
		for (map<string, string>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			string obj = (*it).first;
			string obj2 = (*it).second;
			JsonNode* tempnode = json_from_string(obj2.c_str(),NULL);
			json_object_set_member(json_obj, obj.c_str(), tempnode);
		}
	node = json_node_alloc();
	json_node_init_object(node, json_obj);
	json_object_unref(json_obj);
	}

	const gchar *additional_propertiesKey = "additional_properties";
	json_object_set_member(pJsonObject, additional_propertiesKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("int")) {
		int obj = getRequiredProgress();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *required_progressKey = "required_progress";
	json_object_set_member(pJsonObject, required_progressKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::map<string, string>
TierResource::getAdditionalProperties()
{
	return additional_properties;
}

void
TierResource::setAdditionalProperties(std::map <string, string> additional_properties)
{
	this->additional_properties = additional_properties;
}

std::string
TierResource::getName()
{
	return name;
}

void
TierResource::setName(std::string  name)
{
	this->name = name;
}

int
TierResource::getRequiredProgress()
{
	return required_progress;
}

void
TierResource::setRequiredProgress(int  required_progress)
{
	this->required_progress = required_progress;
}


