#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "AmazonS3Activity.h"

using namespace std;
using namespace Tizen::ArtikCloud;

AmazonS3Activity::AmazonS3Activity()
{
	//__init();
}

AmazonS3Activity::~AmazonS3Activity()
{
	//__cleanup();
}

void
AmazonS3Activity::__init()
{
	//
	//
	//action = std::string();
	//
	//
	//cdn_url = std::string();
	//
	//
	//created_date = long(0);
	//
	//
	//filename = std::string();
	//
	//
	//id = long(0);
	//
	//
	//object_key = std::string();
	//
	//
	//url = std::string();
	//
	//
	//user_id = int(0);
	//
}

void
AmazonS3Activity::__cleanup()
{
	//if(action != NULL) {
	//
	//delete action;
	//action = NULL;
	//}
	//if(cdn_url != NULL) {
	//
	//delete cdn_url;
	//cdn_url = NULL;
	//}
	//if(created_date != NULL) {
	//
	//delete created_date;
	//created_date = NULL;
	//}
	//if(filename != NULL) {
	//
	//delete filename;
	//filename = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(object_key != NULL) {
	//
	//delete object_key;
	//object_key = NULL;
	//}
	//if(url != NULL) {
	//
	//delete url;
	//url = NULL;
	//}
	//if(user_id != NULL) {
	//
	//delete user_id;
	//user_id = NULL;
	//}
	//
}

void
AmazonS3Activity::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *actionKey = "action";
	node = json_object_get_member(pJsonObject, actionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&action, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *cdn_urlKey = "cdn_url";
	node = json_object_get_member(pJsonObject, cdn_urlKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&cdn_url, node, "std::string", "");
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
	const gchar *filenameKey = "filename";
	node = json_object_get_member(pJsonObject, filenameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&filename, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&id, node, "long long", "");
		} else {
			
		}
	}
	const gchar *object_keyKey = "object_key";
	node = json_object_get_member(pJsonObject, object_keyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&object_key, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *urlKey = "url";
	node = json_object_get_member(pJsonObject, urlKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&url, node, "std::string", "");
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

AmazonS3Activity::AmazonS3Activity(char* json)
{
	this->fromJson(json);
}

char*
AmazonS3Activity::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getAction();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *actionKey = "action";
	json_object_set_member(pJsonObject, actionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCdnUrl();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *cdn_urlKey = "cdn_url";
	json_object_set_member(pJsonObject, cdn_urlKey, node);
	if (isprimitive("long long")) {
		long long obj = getCreatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *created_dateKey = "created_date";
	json_object_set_member(pJsonObject, created_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getFilename();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *filenameKey = "filename";
	json_object_set_member(pJsonObject, filenameKey, node);
	if (isprimitive("long long")) {
		long long obj = getId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getObjectKey();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *object_keyKey = "object_key";
	json_object_set_member(pJsonObject, object_keyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUrl();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *urlKey = "url";
	json_object_set_member(pJsonObject, urlKey, node);
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

std::string
AmazonS3Activity::getAction()
{
	return action;
}

void
AmazonS3Activity::setAction(std::string  action)
{
	this->action = action;
}

std::string
AmazonS3Activity::getCdnUrl()
{
	return cdn_url;
}

void
AmazonS3Activity::setCdnUrl(std::string  cdn_url)
{
	this->cdn_url = cdn_url;
}

long long
AmazonS3Activity::getCreatedDate()
{
	return created_date;
}

void
AmazonS3Activity::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

std::string
AmazonS3Activity::getFilename()
{
	return filename;
}

void
AmazonS3Activity::setFilename(std::string  filename)
{
	this->filename = filename;
}

long long
AmazonS3Activity::getId()
{
	return id;
}

void
AmazonS3Activity::setId(long long  id)
{
	this->id = id;
}

std::string
AmazonS3Activity::getObjectKey()
{
	return object_key;
}

void
AmazonS3Activity::setObjectKey(std::string  object_key)
{
	this->object_key = object_key;
}

std::string
AmazonS3Activity::getUrl()
{
	return url;
}

void
AmazonS3Activity::setUrl(std::string  url)
{
	this->url = url;
}

int
AmazonS3Activity::getUserId()
{
	return user_id;
}

void
AmazonS3Activity::setUserId(int  user_id)
{
	this->user_id = user_id;
}


