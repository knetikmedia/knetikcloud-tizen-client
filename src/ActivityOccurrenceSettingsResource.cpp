#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ActivityOccurrenceSettingsResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ActivityOccurrenceSettingsResource::ActivityOccurrenceSettingsResource()
{
	//__init();
}

ActivityOccurrenceSettingsResource::~ActivityOccurrenceSettingsResource()
{
	//__cleanup();
}

void
ActivityOccurrenceSettingsResource::__init()
{
	//
	//
	//core_settings = new CoreActivityOccurrenceSettings();
	//
	//new std::list()std::list> settings;
	//
	//
}

void
ActivityOccurrenceSettingsResource::__cleanup()
{
	//if(core_settings != NULL) {
	//
	//delete core_settings;
	//core_settings = NULL;
	//}
	//if(settings != NULL) {
	//settings.RemoveAll(true);
	//delete settings;
	//settings = NULL;
	//}
	//
}

void
ActivityOccurrenceSettingsResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *core_settingsKey = "core_settings";
	node = json_object_get_member(pJsonObject, core_settingsKey);
	if (node !=NULL) {
	

		if (isprimitive("CoreActivityOccurrenceSettings")) {
			jsonToValue(&core_settings, node, "CoreActivityOccurrenceSettings", "CoreActivityOccurrenceSettings");
		} else {
			
			CoreActivityOccurrenceSettings* obj = static_cast<CoreActivityOccurrenceSettings*> (&core_settings);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *settingsKey = "settings";
	node = json_object_get_member(pJsonObject, settingsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<SelectedSettingRequest> new_list;
			SelectedSettingRequest inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("SelectedSettingRequest")) {
					jsonToValue(&inst, temp_json, "SelectedSettingRequest", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			settings = new_list;
		}
		
	}
}

ActivityOccurrenceSettingsResource::ActivityOccurrenceSettingsResource(char* json)
{
	this->fromJson(json);
}

char*
ActivityOccurrenceSettingsResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("CoreActivityOccurrenceSettings")) {
		CoreActivityOccurrenceSettings obj = getCoreSettings();
		node = converttoJson(&obj, "CoreActivityOccurrenceSettings", "");
	}
	else {
		
		CoreActivityOccurrenceSettings obj = static_cast<CoreActivityOccurrenceSettings> (getCoreSettings());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *core_settingsKey = "core_settings";
	json_object_set_member(pJsonObject, core_settingsKey, node);
	if (isprimitive("SelectedSettingRequest")) {
		list<SelectedSettingRequest> new_list = static_cast<list <SelectedSettingRequest> > (getSettings());
		node = converttoJson(&new_list, "SelectedSettingRequest", "array");
	} else {
		node = json_node_alloc();
		list<SelectedSettingRequest> new_list = static_cast<list <SelectedSettingRequest> > (getSettings());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<SelectedSettingRequest>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			SelectedSettingRequest obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *settingsKey = "settings";
	json_object_set_member(pJsonObject, settingsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

CoreActivityOccurrenceSettings
ActivityOccurrenceSettingsResource::getCoreSettings()
{
	return core_settings;
}

void
ActivityOccurrenceSettingsResource::setCoreSettings(CoreActivityOccurrenceSettings  core_settings)
{
	this->core_settings = core_settings;
}

std::list<SelectedSettingRequest>
ActivityOccurrenceSettingsResource::getSettings()
{
	return settings;
}

void
ActivityOccurrenceSettingsResource::setSettings(std::list <SelectedSettingRequest> settings)
{
	this->settings = settings;
}


