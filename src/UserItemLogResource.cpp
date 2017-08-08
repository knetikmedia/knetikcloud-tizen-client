#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "UserItemLogResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

UserItemLogResource::UserItemLogResource()
{
	//__init();
}

UserItemLogResource::~UserItemLogResource()
{
	//__cleanup();
}

void
UserItemLogResource::__init()
{
	//
	//
	//id = int(0);
	//
	//
	//info = std::string();
	//
	//
	//item = new SimpleReferenceResource«int»();
	//
	//
	//log_date = long(0);
	//
	//
	//type = std::string();
	//
	//
	//user = new SimpleUserResource();
	//
	//
	//user_inventory = int(0);
	//
}

void
UserItemLogResource::__cleanup()
{
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(info != NULL) {
	//
	//delete info;
	//info = NULL;
	//}
	//if(item != NULL) {
	//
	//delete item;
	//item = NULL;
	//}
	//if(log_date != NULL) {
	//
	//delete log_date;
	//log_date = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(user != NULL) {
	//
	//delete user;
	//user = NULL;
	//}
	//if(user_inventory != NULL) {
	//
	//delete user_inventory;
	//user_inventory = NULL;
	//}
	//
}

void
UserItemLogResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&id, node, "int", "");
		} else {
			
		}
	}
	const gchar *infoKey = "info";
	node = json_object_get_member(pJsonObject, infoKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&info, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *itemKey = "item";
	node = json_object_get_member(pJsonObject, itemKey);
	if (node !=NULL) {
	

		if (isprimitive("SimpleReferenceResource«int»")) {
			jsonToValue(&item, node, "SimpleReferenceResource«int»", "SimpleReferenceResource«int»");
		} else {
			
			SimpleReferenceResource«int»* obj = static_cast<SimpleReferenceResource«int»*> (&item);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *log_dateKey = "log_date";
	node = json_object_get_member(pJsonObject, log_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&log_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *typeKey = "type";
	node = json_object_get_member(pJsonObject, typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *userKey = "user";
	node = json_object_get_member(pJsonObject, userKey);
	if (node !=NULL) {
	

		if (isprimitive("SimpleUserResource")) {
			jsonToValue(&user, node, "SimpleUserResource", "SimpleUserResource");
		} else {
			
			SimpleUserResource* obj = static_cast<SimpleUserResource*> (&user);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *user_inventoryKey = "user_inventory";
	node = json_object_get_member(pJsonObject, user_inventoryKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&user_inventory, node, "int", "");
		} else {
			
		}
	}
}

UserItemLogResource::UserItemLogResource(char* json)
{
	this->fromJson(json);
}

char*
UserItemLogResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getInfo();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *infoKey = "info";
	json_object_set_member(pJsonObject, infoKey, node);
	if (isprimitive("SimpleReferenceResource«int»")) {
		SimpleReferenceResource«int» obj = getItem();
		node = converttoJson(&obj, "SimpleReferenceResource«int»", "");
	}
	else {
		
		SimpleReferenceResource«int» obj = static_cast<SimpleReferenceResource«int»> (getItem());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *itemKey = "item";
	json_object_set_member(pJsonObject, itemKey, node);
	if (isprimitive("long long")) {
		long long obj = getLogDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *log_dateKey = "log_date";
	json_object_set_member(pJsonObject, log_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	if (isprimitive("SimpleUserResource")) {
		SimpleUserResource obj = getUser();
		node = converttoJson(&obj, "SimpleUserResource", "");
	}
	else {
		
		SimpleUserResource obj = static_cast<SimpleUserResource> (getUser());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *userKey = "user";
	json_object_set_member(pJsonObject, userKey, node);
	if (isprimitive("int")) {
		int obj = getUserInventory();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *user_inventoryKey = "user_inventory";
	json_object_set_member(pJsonObject, user_inventoryKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
UserItemLogResource::getId()
{
	return id;
}

void
UserItemLogResource::setId(int  id)
{
	this->id = id;
}

std::string
UserItemLogResource::getInfo()
{
	return info;
}

void
UserItemLogResource::setInfo(std::string  info)
{
	this->info = info;
}

SimpleReferenceResource«int»
UserItemLogResource::getItem()
{
	return item;
}

void
UserItemLogResource::setItem(SimpleReferenceResource«int»  item)
{
	this->item = item;
}

long long
UserItemLogResource::getLogDate()
{
	return log_date;
}

void
UserItemLogResource::setLogDate(long long  log_date)
{
	this->log_date = log_date;
}

std::string
UserItemLogResource::getType()
{
	return type;
}

void
UserItemLogResource::setType(std::string  type)
{
	this->type = type;
}

SimpleUserResource
UserItemLogResource::getUser()
{
	return user;
}

void
UserItemLogResource::setUser(SimpleUserResource  user)
{
	this->user = user;
}

int
UserItemLogResource::getUserInventory()
{
	return user_inventory;
}

void
UserItemLogResource::setUserInventory(int  user_inventory)
{
	this->user_inventory = user_inventory;
}


