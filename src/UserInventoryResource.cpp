#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "UserInventoryResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

UserInventoryResource::UserInventoryResource()
{
	//__init();
}

UserInventoryResource::~UserInventoryResource()
{
	//__cleanup();
}

void
UserInventoryResource::__init()
{
	//
	//
	//behavior_data = null;
	//
	//
	//created_date = long(0);
	//
	//
	//expires = long(0);
	//
	//
	//id = int(0);
	//
	//
	//invoice_id = int(0);
	//
	//
	//item_id = int(0);
	//
	//
	//item_name = std::string();
	//
	//
	//item_type_hint = std::string();
	//
	//
	//status = std::string();
	//
	//
	//updated_date = long(0);
	//
	//
	//user = new SimpleUserResource();
	//
}

void
UserInventoryResource::__cleanup()
{
	//if(behavior_data != NULL) {
	//
	//delete behavior_data;
	//behavior_data = NULL;
	//}
	//if(created_date != NULL) {
	//
	//delete created_date;
	//created_date = NULL;
	//}
	//if(expires != NULL) {
	//
	//delete expires;
	//expires = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(invoice_id != NULL) {
	//
	//delete invoice_id;
	//invoice_id = NULL;
	//}
	//if(item_id != NULL) {
	//
	//delete item_id;
	//item_id = NULL;
	//}
	//if(item_name != NULL) {
	//
	//delete item_name;
	//item_name = NULL;
	//}
	//if(item_type_hint != NULL) {
	//
	//delete item_type_hint;
	//item_type_hint = NULL;
	//}
	//if(status != NULL) {
	//
	//delete status;
	//status = NULL;
	//}
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//if(user != NULL) {
	//
	//delete user;
	//user = NULL;
	//}
	//
}

void
UserInventoryResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *behavior_dataKey = "behavior_data";
	node = json_object_get_member(pJsonObject, behavior_dataKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&behavior_data, node, "std::string", "");
		} else {
			
			std::string* obj = static_cast<std::string*> (&behavior_data);
			obj->fromJson(json_to_string(node, false));
			
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
	const gchar *expiresKey = "expires";
	node = json_object_get_member(pJsonObject, expiresKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&expires, node, "long long", "");
		} else {
			
		}
	}
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&id, node, "int", "");
		} else {
			
		}
	}
	const gchar *invoice_idKey = "invoice_id";
	node = json_object_get_member(pJsonObject, invoice_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&invoice_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *item_idKey = "item_id";
	node = json_object_get_member(pJsonObject, item_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&item_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *item_nameKey = "item_name";
	node = json_object_get_member(pJsonObject, item_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&item_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *item_type_hintKey = "item_type_hint";
	node = json_object_get_member(pJsonObject, item_type_hintKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&item_type_hint, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *statusKey = "status";
	node = json_object_get_member(pJsonObject, statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&status, node, "std::string", "");
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
}

UserInventoryResource::UserInventoryResource(char* json)
{
	this->fromJson(json);
}

char*
UserInventoryResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getBehaviorData();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
		std::string obj = static_cast<std::string> (getBehaviorData());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *behavior_dataKey = "behavior_data";
	json_object_set_member(pJsonObject, behavior_dataKey, node);
	if (isprimitive("long long")) {
		long long obj = getCreatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *created_dateKey = "created_date";
	json_object_set_member(pJsonObject, created_dateKey, node);
	if (isprimitive("long long")) {
		long long obj = getExpires();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *expiresKey = "expires";
	json_object_set_member(pJsonObject, expiresKey, node);
	if (isprimitive("int")) {
		int obj = getId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("int")) {
		int obj = getInvoiceId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *invoice_idKey = "invoice_id";
	json_object_set_member(pJsonObject, invoice_idKey, node);
	if (isprimitive("int")) {
		int obj = getItemId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *item_idKey = "item_id";
	json_object_set_member(pJsonObject, item_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getItemName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *item_nameKey = "item_name";
	json_object_set_member(pJsonObject, item_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getItemTypeHint();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *item_type_hintKey = "item_type_hint";
	json_object_set_member(pJsonObject, item_type_hintKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *statusKey = "status";
	json_object_set_member(pJsonObject, statusKey, node);
	if (isprimitive("long long")) {
		long long obj = getUpdatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *updated_dateKey = "updated_date";
	json_object_set_member(pJsonObject, updated_dateKey, node);
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
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
UserInventoryResource::getBehaviorData()
{
	return behavior_data;
}

void
UserInventoryResource::setBehaviorData(std::string  behavior_data)
{
	this->behavior_data = behavior_data;
}

long long
UserInventoryResource::getCreatedDate()
{
	return created_date;
}

void
UserInventoryResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

long long
UserInventoryResource::getExpires()
{
	return expires;
}

void
UserInventoryResource::setExpires(long long  expires)
{
	this->expires = expires;
}

int
UserInventoryResource::getId()
{
	return id;
}

void
UserInventoryResource::setId(int  id)
{
	this->id = id;
}

int
UserInventoryResource::getInvoiceId()
{
	return invoice_id;
}

void
UserInventoryResource::setInvoiceId(int  invoice_id)
{
	this->invoice_id = invoice_id;
}

int
UserInventoryResource::getItemId()
{
	return item_id;
}

void
UserInventoryResource::setItemId(int  item_id)
{
	this->item_id = item_id;
}

std::string
UserInventoryResource::getItemName()
{
	return item_name;
}

void
UserInventoryResource::setItemName(std::string  item_name)
{
	this->item_name = item_name;
}

std::string
UserInventoryResource::getItemTypeHint()
{
	return item_type_hint;
}

void
UserInventoryResource::setItemTypeHint(std::string  item_type_hint)
{
	this->item_type_hint = item_type_hint;
}

std::string
UserInventoryResource::getStatus()
{
	return status;
}

void
UserInventoryResource::setStatus(std::string  status)
{
	this->status = status;
}

long long
UserInventoryResource::getUpdatedDate()
{
	return updated_date;
}

void
UserInventoryResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}

SimpleUserResource
UserInventoryResource::getUser()
{
	return user;
}

void
UserInventoryResource::setUser(SimpleUserResource  user)
{
	this->user = user;
}


