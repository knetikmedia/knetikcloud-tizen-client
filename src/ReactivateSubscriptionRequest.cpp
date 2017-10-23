#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ReactivateSubscriptionRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ReactivateSubscriptionRequest::ReactivateSubscriptionRequest()
{
	//__init();
}

ReactivateSubscriptionRequest::~ReactivateSubscriptionRequest()
{
	//__cleanup();
}

void
ReactivateSubscriptionRequest::__init()
{
	//
	//
	//inventory_id = int(0);
	//
	//
	//reactivation_fee = bool(false);
	//
}

void
ReactivateSubscriptionRequest::__cleanup()
{
	//if(inventory_id != NULL) {
	//
	//delete inventory_id;
	//inventory_id = NULL;
	//}
	//if(reactivation_fee != NULL) {
	//
	//delete reactivation_fee;
	//reactivation_fee = NULL;
	//}
	//
}

void
ReactivateSubscriptionRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *inventory_idKey = "inventory_id";
	node = json_object_get_member(pJsonObject, inventory_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&inventory_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *reactivation_feeKey = "reactivation_fee";
	node = json_object_get_member(pJsonObject, reactivation_feeKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&reactivation_fee, node, "bool", "");
		} else {
			
		}
	}
}

ReactivateSubscriptionRequest::ReactivateSubscriptionRequest(char* json)
{
	this->fromJson(json);
}

char*
ReactivateSubscriptionRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getInventoryId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *inventory_idKey = "inventory_id";
	json_object_set_member(pJsonObject, inventory_idKey, node);
	if (isprimitive("bool")) {
		bool obj = getReactivationFee();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *reactivation_feeKey = "reactivation_fee";
	json_object_set_member(pJsonObject, reactivation_feeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
ReactivateSubscriptionRequest::getInventoryId()
{
	return inventory_id;
}

void
ReactivateSubscriptionRequest::setInventoryId(int  inventory_id)
{
	this->inventory_id = inventory_id;
}

bool
ReactivateSubscriptionRequest::getReactivationFee()
{
	return reactivation_fee;
}

void
ReactivateSubscriptionRequest::setReactivationFee(bool  reactivation_fee)
{
	this->reactivation_fee = reactivation_fee;
}


