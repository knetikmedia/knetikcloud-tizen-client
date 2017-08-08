#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "SubscriptionCreditResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

SubscriptionCreditResource::SubscriptionCreditResource()
{
	//__init();
}

SubscriptionCreditResource::~SubscriptionCreditResource()
{
	//__cleanup();
}

void
SubscriptionCreditResource::__init()
{
	//
	//
	//amount = double(0);
	//
	//
	//created_date = long(0);
	//
	//
	//id = int(0);
	//
	//
	//inventory_id = int(0);
	//
	//
	//reason = std::string();
	//
}

void
SubscriptionCreditResource::__cleanup()
{
	//if(amount != NULL) {
	//
	//delete amount;
	//amount = NULL;
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
	//if(inventory_id != NULL) {
	//
	//delete inventory_id;
	//inventory_id = NULL;
	//}
	//if(reason != NULL) {
	//
	//delete reason;
	//reason = NULL;
	//}
	//
}

void
SubscriptionCreditResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *amountKey = "amount";
	node = json_object_get_member(pJsonObject, amountKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&amount, node, "double", "");
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
	

		if (isprimitive("int")) {
			jsonToValue(&id, node, "int", "");
		} else {
			
		}
	}
	const gchar *inventory_idKey = "inventory_id";
	node = json_object_get_member(pJsonObject, inventory_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&inventory_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *reasonKey = "reason";
	node = json_object_get_member(pJsonObject, reasonKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&reason, node, "std::string", "");
		} else {
			
		}
	}
}

SubscriptionCreditResource::SubscriptionCreditResource(char* json)
{
	this->fromJson(json);
}

char*
SubscriptionCreditResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("double")) {
		double obj = getAmount();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *amountKey = "amount";
	json_object_set_member(pJsonObject, amountKey, node);
	if (isprimitive("long long")) {
		long long obj = getCreatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *created_dateKey = "created_date";
	json_object_set_member(pJsonObject, created_dateKey, node);
	if (isprimitive("int")) {
		int obj = getId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("int")) {
		int obj = getInventoryId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *inventory_idKey = "inventory_id";
	json_object_set_member(pJsonObject, inventory_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getReason();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *reasonKey = "reason";
	json_object_set_member(pJsonObject, reasonKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

double
SubscriptionCreditResource::getAmount()
{
	return amount;
}

void
SubscriptionCreditResource::setAmount(double  amount)
{
	this->amount = amount;
}

long long
SubscriptionCreditResource::getCreatedDate()
{
	return created_date;
}

void
SubscriptionCreditResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

int
SubscriptionCreditResource::getId()
{
	return id;
}

void
SubscriptionCreditResource::setId(int  id)
{
	this->id = id;
}

int
SubscriptionCreditResource::getInventoryId()
{
	return inventory_id;
}

void
SubscriptionCreditResource::setInventoryId(int  inventory_id)
{
	this->inventory_id = inventory_id;
}

std::string
SubscriptionCreditResource::getReason()
{
	return reason;
}

void
SubscriptionCreditResource::setReason(std::string  reason)
{
	this->reason = reason;
}


