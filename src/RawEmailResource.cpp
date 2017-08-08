#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "RawEmailResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

RawEmailResource::RawEmailResource()
{
	//__init();
}

RawEmailResource::~RawEmailResource()
{
	//__cleanup();
}

void
RawEmailResource::__init()
{
	//
	//
	//body = std::string();
	//
	//
	//from = std::string();
	//
	//
	//html = bool(false);
	//
	//new std::list()std::list> recipients;
	//
	//
	//
	//subject = std::string();
	//
}

void
RawEmailResource::__cleanup()
{
	//if(body != NULL) {
	//
	//delete body;
	//body = NULL;
	//}
	//if(from != NULL) {
	//
	//delete from;
	//from = NULL;
	//}
	//if(html != NULL) {
	//
	//delete html;
	//html = NULL;
	//}
	//if(recipients != NULL) {
	//recipients.RemoveAll(true);
	//delete recipients;
	//recipients = NULL;
	//}
	//if(subject != NULL) {
	//
	//delete subject;
	//subject = NULL;
	//}
	//
}

void
RawEmailResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *bodyKey = "body";
	node = json_object_get_member(pJsonObject, bodyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&body, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *fromKey = "from";
	node = json_object_get_member(pJsonObject, fromKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&from, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *htmlKey = "html";
	node = json_object_get_member(pJsonObject, htmlKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&html, node, "bool", "");
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
	const gchar *subjectKey = "subject";
	node = json_object_get_member(pJsonObject, subjectKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&subject, node, "std::string", "");
		} else {
			
		}
	}
}

RawEmailResource::RawEmailResource(char* json)
{
	this->fromJson(json);
}

char*
RawEmailResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getBody();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *bodyKey = "body";
	json_object_set_member(pJsonObject, bodyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getFrom();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *fromKey = "from";
	json_object_set_member(pJsonObject, fromKey, node);
	if (isprimitive("bool")) {
		bool obj = getHtml();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *htmlKey = "html";
	json_object_set_member(pJsonObject, htmlKey, node);
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
		std::string obj = getSubject();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *subjectKey = "subject";
	json_object_set_member(pJsonObject, subjectKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
RawEmailResource::getBody()
{
	return body;
}

void
RawEmailResource::setBody(std::string  body)
{
	this->body = body;
}

std::string
RawEmailResource::getFrom()
{
	return from;
}

void
RawEmailResource::setFrom(std::string  from)
{
	this->from = from;
}

bool
RawEmailResource::getHtml()
{
	return html;
}

void
RawEmailResource::setHtml(bool  html)
{
	this->html = html;
}

std::list<int>
RawEmailResource::getRecipients()
{
	return recipients;
}

void
RawEmailResource::setRecipients(std::list <int> recipients)
{
	this->recipients = recipients;
}

std::string
RawEmailResource::getSubject()
{
	return subject;
}

void
RawEmailResource::setSubject(std::string  subject)
{
	this->subject = subject;
}


