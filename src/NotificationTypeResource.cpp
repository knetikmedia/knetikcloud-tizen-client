#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "NotificationTypeResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

NotificationTypeResource::NotificationTypeResource()
{
	//__init();
}

NotificationTypeResource::~NotificationTypeResource()
{
	//__cleanup();
}

void
NotificationTypeResource::__init()
{
	//
	//
	//created_date = long(0);
	//
	//
	//email_body_template_external = bool(false);
	//
	//
	//email_body_template_id = std::string();
	//
	//
	//email_subject_template_id = std::string();
	//
	//
	//id = std::string();
	//
	//
	//name = std::string();
	//
	//
	//sms_template_id = std::string();
	//
	//
	//updated_date = long(0);
	//
}

void
NotificationTypeResource::__cleanup()
{
	//if(created_date != NULL) {
	//
	//delete created_date;
	//created_date = NULL;
	//}
	//if(email_body_template_external != NULL) {
	//
	//delete email_body_template_external;
	//email_body_template_external = NULL;
	//}
	//if(email_body_template_id != NULL) {
	//
	//delete email_body_template_id;
	//email_body_template_id = NULL;
	//}
	//if(email_subject_template_id != NULL) {
	//
	//delete email_subject_template_id;
	//email_subject_template_id = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(sms_template_id != NULL) {
	//
	//delete sms_template_id;
	//sms_template_id = NULL;
	//}
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//
}

void
NotificationTypeResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *created_dateKey = "created_date";
	node = json_object_get_member(pJsonObject, created_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&created_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *email_body_template_externalKey = "email_body_template_external";
	node = json_object_get_member(pJsonObject, email_body_template_externalKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&email_body_template_external, node, "bool", "");
		} else {
			
		}
	}
	const gchar *email_body_template_idKey = "email_body_template_id";
	node = json_object_get_member(pJsonObject, email_body_template_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&email_body_template_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *email_subject_template_idKey = "email_subject_template_id";
	node = json_object_get_member(pJsonObject, email_subject_template_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&email_subject_template_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&id, node, "std::string", "");
		} else {
			
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
	const gchar *sms_template_idKey = "sms_template_id";
	node = json_object_get_member(pJsonObject, sms_template_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&sms_template_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *updated_dateKey = "updated_date";
	node = json_object_get_member(pJsonObject, updated_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&updated_date, node, "long long", "");
		} else {
			
		}
	}
}

NotificationTypeResource::NotificationTypeResource(char* json)
{
	this->fromJson(json);
}

char*
NotificationTypeResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getCreatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *created_dateKey = "created_date";
	json_object_set_member(pJsonObject, created_dateKey, node);
	if (isprimitive("bool")) {
		bool obj = getEmailBodyTemplateExternal();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *email_body_template_externalKey = "email_body_template_external";
	json_object_set_member(pJsonObject, email_body_template_externalKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getEmailBodyTemplateId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *email_body_template_idKey = "email_body_template_id";
	json_object_set_member(pJsonObject, email_body_template_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getEmailSubjectTemplateId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *email_subject_template_idKey = "email_subject_template_id";
	json_object_set_member(pJsonObject, email_subject_template_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSmsTemplateId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *sms_template_idKey = "sms_template_id";
	json_object_set_member(pJsonObject, sms_template_idKey, node);
	if (isprimitive("long long")) {
		long long obj = getUpdatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *updated_dateKey = "updated_date";
	json_object_set_member(pJsonObject, updated_dateKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
NotificationTypeResource::getCreatedDate()
{
	return created_date;
}

void
NotificationTypeResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

bool
NotificationTypeResource::getEmailBodyTemplateExternal()
{
	return email_body_template_external;
}

void
NotificationTypeResource::setEmailBodyTemplateExternal(bool  email_body_template_external)
{
	this->email_body_template_external = email_body_template_external;
}

std::string
NotificationTypeResource::getEmailBodyTemplateId()
{
	return email_body_template_id;
}

void
NotificationTypeResource::setEmailBodyTemplateId(std::string  email_body_template_id)
{
	this->email_body_template_id = email_body_template_id;
}

std::string
NotificationTypeResource::getEmailSubjectTemplateId()
{
	return email_subject_template_id;
}

void
NotificationTypeResource::setEmailSubjectTemplateId(std::string  email_subject_template_id)
{
	this->email_subject_template_id = email_subject_template_id;
}

std::string
NotificationTypeResource::getId()
{
	return id;
}

void
NotificationTypeResource::setId(std::string  id)
{
	this->id = id;
}

std::string
NotificationTypeResource::getName()
{
	return name;
}

void
NotificationTypeResource::setName(std::string  name)
{
	this->name = name;
}

std::string
NotificationTypeResource::getSmsTemplateId()
{
	return sms_template_id;
}

void
NotificationTypeResource::setSmsTemplateId(std::string  sms_template_id)
{
	this->sms_template_id = sms_template_id;
}

long long
NotificationTypeResource::getUpdatedDate()
{
	return updated_date;
}

void
NotificationTypeResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}


