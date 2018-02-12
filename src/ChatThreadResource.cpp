#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ChatThreadResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ChatThreadResource::ChatThreadResource()
{
	//__init();
}

ChatThreadResource::~ChatThreadResource()
{
	//__cleanup();
}

void
ChatThreadResource::__init()
{
	//
	//
	//active_users = int(0);
	//
	//
	//count = int(0);
	//
	//
	//created_date = long(0);
	//
	//
	//id = std::string();
	//
	//
	//recipient_id = std::string();
	//
	//
	//recipient_type = std::string();
	//
	//
	//subject = std::string();
	//
	//
	//updated_date = long(0);
	//
}

void
ChatThreadResource::__cleanup()
{
	//if(active_users != NULL) {
	//
	//delete active_users;
	//active_users = NULL;
	//}
	//if(count != NULL) {
	//
	//delete count;
	//count = NULL;
	//}
	//if(created_date != NULL) {
	//
	//delete created_date;
	//created_date = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(recipient_id != NULL) {
	//
	//delete recipient_id;
	//recipient_id = NULL;
	//}
	//if(recipient_type != NULL) {
	//
	//delete recipient_type;
	//recipient_type = NULL;
	//}
	//if(subject != NULL) {
	//
	//delete subject;
	//subject = NULL;
	//}
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//
}

void
ChatThreadResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *active_usersKey = "active_users";
	node = json_object_get_member(pJsonObject, active_usersKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&active_users, node, "int", "");
		} else {
			
		}
	}
	const gchar *countKey = "count";
	node = json_object_get_member(pJsonObject, countKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&count, node, "int", "");
		} else {
			
		}
	}
	const gchar *created_dateKey = "created_date";
	node = json_object_get_member(pJsonObject, created_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&created_date, node, "long long", "");
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
	const gchar *recipient_idKey = "recipient_id";
	node = json_object_get_member(pJsonObject, recipient_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&recipient_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *recipient_typeKey = "recipient_type";
	node = json_object_get_member(pJsonObject, recipient_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&recipient_type, node, "std::string", "");
		} else {
			
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
	const gchar *updated_dateKey = "updated_date";
	node = json_object_get_member(pJsonObject, updated_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&updated_date, node, "long long", "");
		} else {
			
		}
	}
}

ChatThreadResource::ChatThreadResource(char* json)
{
	this->fromJson(json);
}

char*
ChatThreadResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getActiveUsers();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *active_usersKey = "active_users";
	json_object_set_member(pJsonObject, active_usersKey, node);
	if (isprimitive("int")) {
		int obj = getCount();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *countKey = "count";
	json_object_set_member(pJsonObject, countKey, node);
	if (isprimitive("long long")) {
		long long obj = getCreatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *created_dateKey = "created_date";
	json_object_set_member(pJsonObject, created_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRecipientId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *recipient_idKey = "recipient_id";
	json_object_set_member(pJsonObject, recipient_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRecipientType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *recipient_typeKey = "recipient_type";
	json_object_set_member(pJsonObject, recipient_typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSubject();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *subjectKey = "subject";
	json_object_set_member(pJsonObject, subjectKey, node);
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

int
ChatThreadResource::getActiveUsers()
{
	return active_users;
}

void
ChatThreadResource::setActiveUsers(int  active_users)
{
	this->active_users = active_users;
}

int
ChatThreadResource::getCount()
{
	return count;
}

void
ChatThreadResource::setCount(int  count)
{
	this->count = count;
}

long long
ChatThreadResource::getCreatedDate()
{
	return created_date;
}

void
ChatThreadResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

std::string
ChatThreadResource::getId()
{
	return id;
}

void
ChatThreadResource::setId(std::string  id)
{
	this->id = id;
}

std::string
ChatThreadResource::getRecipientId()
{
	return recipient_id;
}

void
ChatThreadResource::setRecipientId(std::string  recipient_id)
{
	this->recipient_id = recipient_id;
}

std::string
ChatThreadResource::getRecipientType()
{
	return recipient_type;
}

void
ChatThreadResource::setRecipientType(std::string  recipient_type)
{
	this->recipient_type = recipient_type;
}

std::string
ChatThreadResource::getSubject()
{
	return subject;
}

void
ChatThreadResource::setSubject(std::string  subject)
{
	this->subject = subject;
}

long long
ChatThreadResource::getUpdatedDate()
{
	return updated_date;
}

void
ChatThreadResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}


