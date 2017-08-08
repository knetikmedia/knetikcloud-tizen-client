#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "TemplateSMSResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

TemplateSMSResource::TemplateSMSResource()
{
	//__init();
}

TemplateSMSResource::~TemplateSMSResource()
{
	//__cleanup();
}

void
TemplateSMSResource::__init()
{
	//
	//
	//from = std::string();
	//
	//
	//localizer = new Localizer();
	//
	//new std::list()std::list> recipients;
	//
	//
	//
	//template_key = std::string();
	//
	//new std::list()std::list> template_vars;
	//
	//
}

void
TemplateSMSResource::__cleanup()
{
	//if(from != NULL) {
	//
	//delete from;
	//from = NULL;
	//}
	//if(localizer != NULL) {
	//
	//delete localizer;
	//localizer = NULL;
	//}
	//if(recipients != NULL) {
	//recipients.RemoveAll(true);
	//delete recipients;
	//recipients = NULL;
	//}
	//if(template_key != NULL) {
	//
	//delete template_key;
	//template_key = NULL;
	//}
	//if(template_vars != NULL) {
	//template_vars.RemoveAll(true);
	//delete template_vars;
	//template_vars = NULL;
	//}
	//
}

void
TemplateSMSResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *fromKey = "from";
	node = json_object_get_member(pJsonObject, fromKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&from, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *localizerKey = "localizer";
	node = json_object_get_member(pJsonObject, localizerKey);
	if (node !=NULL) {
	

		if (isprimitive("Localizer")) {
			jsonToValue(&localizer, node, "Localizer", "Localizer");
		} else {
			
			Localizer* obj = static_cast<Localizer*> (&localizer);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *recipientsKey = "recipients";
	node = json_object_get_member(pJsonObject, recipientsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<int> new_list;
			int inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("int")) {
					jsonToValue(&inst, temp_json, "int", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			recipients = new_list;
		}
		
	}
	const gchar *template_keyKey = "template_key";
	node = json_object_get_member(pJsonObject, template_keyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&template_key, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *template_varsKey = "template_vars";
	node = json_object_get_member(pJsonObject, template_varsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<std::string> new_list;
			std::string inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("std::string")) {
					jsonToValue(&inst, temp_json, "std::string", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			template_vars = new_list;
		}
		
	}
}

TemplateSMSResource::TemplateSMSResource(char* json)
{
	this->fromJson(json);
}

char*
TemplateSMSResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getFrom();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *fromKey = "from";
	json_object_set_member(pJsonObject, fromKey, node);
	if (isprimitive("Localizer")) {
		Localizer obj = getLocalizer();
		node = converttoJson(&obj, "Localizer", "");
	}
	else {
		
		Localizer obj = static_cast<Localizer> (getLocalizer());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *localizerKey = "localizer";
	json_object_set_member(pJsonObject, localizerKey, node);
	if (isprimitive("int")) {
		list<int> new_list = static_cast<list <int> > (getRecipients());
		node = converttoJson(&new_list, "int", "array");
	} else {
		node = json_node_alloc();
		list<int> new_list = static_cast<list <int> > (getRecipients());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *recipientsKey = "recipients";
	json_object_set_member(pJsonObject, recipientsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTemplateKey();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *template_keyKey = "template_key";
	json_object_set_member(pJsonObject, template_keyKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getTemplateVars());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getTemplateVars());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *template_varsKey = "template_vars";
	json_object_set_member(pJsonObject, template_varsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
TemplateSMSResource::getFrom()
{
	return from;
}

void
TemplateSMSResource::setFrom(std::string  from)
{
	this->from = from;
}

Localizer
TemplateSMSResource::getLocalizer()
{
	return localizer;
}

void
TemplateSMSResource::setLocalizer(Localizer  localizer)
{
	this->localizer = localizer;
}

std::list<int>
TemplateSMSResource::getRecipients()
{
	return recipients;
}

void
TemplateSMSResource::setRecipients(std::list <int> recipients)
{
	this->recipients = recipients;
}

std::string
TemplateSMSResource::getTemplateKey()
{
	return template_key;
}

void
TemplateSMSResource::setTemplateKey(std::string  template_key)
{
	this->template_key = template_key;
}

std::list<std::string>
TemplateSMSResource::getTemplateVars()
{
	return template_vars;
}

void
TemplateSMSResource::setTemplateVars(std::list <std::string> template_vars)
{
	this->template_vars = template_vars;
}


