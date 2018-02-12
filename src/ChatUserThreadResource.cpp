#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ChatUserThreadResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ChatUserThreadResource::ChatUserThreadResource()
{
	//__init();
}

ChatUserThreadResource::~ChatUserThreadResource()
{
	//__cleanup();
}

void
ChatUserThreadResource::__init()
{
	//
	//
	//created_date = long(0);
	//
	//
	//read_count = int(0);
	//
	//
	//thread = new ChatThreadResource();
	//
	//
	//thread_id = std::string();
	//
	//
	//updated_date = long(0);
	//
	//
	//user_id = int(0);
	//
}

void
ChatUserThreadResource::__cleanup()
{
	//if(created_date != NULL) {
	//
	//delete created_date;
	//created_date = NULL;
	//}
	//if(read_count != NULL) {
	//
	//delete read_count;
	//read_count = NULL;
	//}
	//if(thread != NULL) {
	//
	//delete thread;
	//thread = NULL;
	//}
	//if(thread_id != NULL) {
	//
	//delete thread_id;
	//thread_id = NULL;
	//}
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//if(user_id != NULL) {
	//
	//delete user_id;
	//user_id = NULL;
	//}
	//
}

void
ChatUserThreadResource::fromJson(char* jsonStr)
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
	const gchar *read_countKey = "read_count";
	node = json_object_get_member(pJsonObject, read_countKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&read_count, node, "int", "");
		} else {
			
		}
	}
	const gchar *threadKey = "thread";
	node = json_object_get_member(pJsonObject, threadKey);
	if (node !=NULL) {
	

		if (isprimitive("ChatThreadResource")) {
			jsonToValue(&thread, node, "ChatThreadResource", "ChatThreadResource");
		} else {
			
			ChatThreadResource* obj = static_cast<ChatThreadResource*> (&thread);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *thread_idKey = "thread_id";
	node = json_object_get_member(pJsonObject, thread_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&thread_id, node, "std::string", "");
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
	const gchar *user_idKey = "user_id";
	node = json_object_get_member(pJsonObject, user_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&user_id, node, "int", "");
		} else {
			
		}
	}
}

ChatUserThreadResource::ChatUserThreadResource(char* json)
{
	this->fromJson(json);
}

char*
ChatUserThreadResource::toJson()
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
	if (isprimitive("int")) {
		int obj = getReadCount();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *read_countKey = "read_count";
	json_object_set_member(pJsonObject, read_countKey, node);
	if (isprimitive("ChatThreadResource")) {
		ChatThreadResource obj = getThread();
		node = converttoJson(&obj, "ChatThreadResource", "");
	}
	else {
		
		ChatThreadResource obj = static_cast<ChatThreadResource> (getThread());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *threadKey = "thread";
	json_object_set_member(pJsonObject, threadKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getThreadId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *thread_idKey = "thread_id";
	json_object_set_member(pJsonObject, thread_idKey, node);
	if (isprimitive("long long")) {
		long long obj = getUpdatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *updated_dateKey = "updated_date";
	json_object_set_member(pJsonObject, updated_dateKey, node);
	if (isprimitive("int")) {
		int obj = getUserId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *user_idKey = "user_id";
	json_object_set_member(pJsonObject, user_idKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
ChatUserThreadResource::getCreatedDate()
{
	return created_date;
}

void
ChatUserThreadResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

int
ChatUserThreadResource::getReadCount()
{
	return read_count;
}

void
ChatUserThreadResource::setReadCount(int  read_count)
{
	this->read_count = read_count;
}

ChatThreadResource
ChatUserThreadResource::getThread()
{
	return thread;
}

void
ChatUserThreadResource::setThread(ChatThreadResource  thread)
{
	this->thread = thread;
}

std::string
ChatUserThreadResource::getThreadId()
{
	return thread_id;
}

void
ChatUserThreadResource::setThreadId(std::string  thread_id)
{
	this->thread_id = thread_id;
}

long long
ChatUserThreadResource::getUpdatedDate()
{
	return updated_date;
}

void
ChatUserThreadResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}

int
ChatUserThreadResource::getUserId()
{
	return user_id;
}

void
ChatUserThreadResource::setUserId(int  user_id)
{
	this->user_id = user_id;
}


