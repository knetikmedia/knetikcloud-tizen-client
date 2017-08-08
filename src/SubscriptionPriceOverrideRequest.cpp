#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "SubscriptionPriceOverrideRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

SubscriptionPriceOverrideRequest::SubscriptionPriceOverrideRequest()
{
	//__init();
}

SubscriptionPriceOverrideRequest::~SubscriptionPriceOverrideRequest()
{
	//__cleanup();
}

void
SubscriptionPriceOverrideRequest::__init()
{
	//
	//
	//new_price = double(0);
	//
	//
	//reason = std::string();
	//
}

void
SubscriptionPriceOverrideRequest::__cleanup()
{
	//if(new_price != NULL) {
	//
	//delete new_price;
	//new_price = NULL;
	//}
	//if(reason != NULL) {
	//
	//delete reason;
	//reason = NULL;
	//}
	//
}

void
SubscriptionPriceOverrideRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *new_priceKey = "new_price";
	node = json_object_get_member(pJsonObject, new_priceKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&new_price, node, "double", "");
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

SubscriptionPriceOverrideRequest::SubscriptionPriceOverrideRequest(char* json)
{
	this->fromJson(json);
}

char*
SubscriptionPriceOverrideRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("double")) {
		double obj = getNewPrice();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *new_priceKey = "new_price";
	json_object_set_member(pJsonObject, new_priceKey, node);
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
SubscriptionPriceOverrideRequest::getNewPrice()
{
	return new_price;
}

void
SubscriptionPriceOverrideRequest::setNewPrice(double  new_price)
{
	this->new_price = new_price;
}

std::string
SubscriptionPriceOverrideRequest::getReason()
{
	return reason;
}

void
SubscriptionPriceOverrideRequest::setReason(std::string  reason)
{
	this->reason = reason;
}


