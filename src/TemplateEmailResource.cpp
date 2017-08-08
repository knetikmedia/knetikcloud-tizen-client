#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "TemplateEmailResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

TemplateEmailResource::TemplateEmailResource()
{
	//__init();
}

TemplateEmailResource::~TemplateEmailResource()
{
	//__cleanup();
}

void
TemplateEmailResource::__init()
{
	//
	//
	//from = std::string();
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
TemplateEmailResource::__cleanup()
{
	//if(from != NULL) {
	//
	//delete from;
	//from = NULL;
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
TemplateEmailResource::fromJson(char* jsonStr)
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
			list<KeyValuePair«string,string»> new_list;
			KeyValuePair«string,string» inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("KeyValuePair«string,string»")) {
					jsonToValue(&inst, temp_json, "KeyValuePair«string,string»", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			template_vars = new_list;
		}
		
	}
}

TemplateEmailResource::TemplateEmailResource(char* json)
{
	this->fromJson(json);
}

char*
TemplateEmailResource::toJson()
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
	if (isprimitive("KeyValuePair«string,string»")) {
		list<KeyValuePair«string,string»> new_list = static_cast<list <KeyValuePair«string,string»> > (getTemplateVars());
		node = converttoJson(&new_list, "KeyValuePair«string,string»", "array");
	} else {
		node = json_node_alloc();
		list<KeyValuePair«string,string»> new_list = static_cast<list <KeyValuePair«string,string»> > (getTemplateVars());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<KeyValuePair«string,string»>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			KeyValuePair«string,string» obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
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
TemplateEmailResource::getFrom()
{
	return from;
}

void
TemplateEmailResource::setFrom(std::string  from)
{
	this->from = from;
}

std::list<int>
TemplateEmailResource::getRecipients()
{
	return recipients;
}

void
TemplateEmailResource::setRecipients(std::list <int> recipients)
{
	this->recipients = recipients;
}

std::string
TemplateEmailResource::getTemplateKey()
{
	return template_key;
}

void
TemplateEmailResource::setTemplateKey(std::string  template_key)
{
	this->template_key = template_key;
}

std::list<KeyValuePair«string,string»>
TemplateEmailResource::getTemplateVars()
{
	return template_vars;
}

void
TemplateEmailResource::setTemplateVars(std::list <KeyValuePair«string,string»> template_vars)
{
	this->template_vars = template_vars;
}


