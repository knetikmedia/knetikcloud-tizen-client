#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "TemplatePushResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

TemplatePushResource::TemplatePushResource()
{
	//__init();
}

TemplatePushResource::~TemplatePushResource()
{
	//__cleanup();
}

void
TemplatePushResource::__init()
{
	//
	//new std::list()std::list> recipients;
	//
	//
	//
	//_template = std::string();
	//
	//
	//template_vars = null;
	//
}

void
TemplatePushResource::__cleanup()
{
	//if(recipients != NULL) {
	//recipients.RemoveAll(true);
	//delete recipients;
	//recipients = NULL;
	//}
	//if(_template != NULL) {
	//
	//delete _template;
	//_template = NULL;
	//}
	//if(template_vars != NULL) {
	//
	//delete template_vars;
	//template_vars = NULL;
	//}
	//
}

void
TemplatePushResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
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
	const gchar *_templateKey = "template";
	node = json_object_get_member(pJsonObject, _templateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&_template, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *template_varsKey = "template_vars";
	node = json_object_get_member(pJsonObject, template_varsKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&template_vars, node, "std::string", "");
		} else {
			
			std::string* obj = static_cast<std::string*> (&template_vars);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

TemplatePushResource::TemplatePushResource(char* json)
{
	this->fromJson(json);
}

char*
TemplatePushResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
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
		std::string obj = getTemplate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *_templateKey = "template";
	json_object_set_member(pJsonObject, _templateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTemplateVars();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
		std::string obj = static_cast<std::string> (getTemplateVars());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
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

std::list<int>
TemplatePushResource::getRecipients()
{
	return recipients;
}

void
TemplatePushResource::setRecipients(std::list <int> recipients)
{
	this->recipients = recipients;
}

std::string
TemplatePushResource::getTemplate()
{
	return _template;
}

void
TemplatePushResource::setTemplate(std::string  _template)
{
	this->_template = _template;
}

std::string
TemplatePushResource::getTemplateVars()
{
	return template_vars;
}

void
TemplatePushResource::setTemplateVars(std::string  template_vars)
{
	this->template_vars = template_vars;
}


