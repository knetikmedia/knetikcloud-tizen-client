#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "QuickBuyRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

QuickBuyRequest::QuickBuyRequest()
{
	//__init();
}

QuickBuyRequest::~QuickBuyRequest()
{
	//__cleanup();
}

void
QuickBuyRequest::__init()
{
	//
	//
	//sku = std::string();
	//
	//
	//user_id = int(0);
	//
}

void
QuickBuyRequest::__cleanup()
{
	//if(sku != NULL) {
	//
	//delete sku;
	//sku = NULL;
	//}
	//if(user_id != NULL) {
	//
	//delete user_id;
	//user_id = NULL;
	//}
	//
}

void
QuickBuyRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *skuKey = "sku";
	node = json_object_get_member(pJsonObject, skuKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&sku, node, "std::string", "");
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

QuickBuyRequest::QuickBuyRequest(char* json)
{
	this->fromJson(json);
}

char*
QuickBuyRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getSku();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *skuKey = "sku";
	json_object_set_member(pJsonObject, skuKey, node);
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
QuickBuyRequest::getSku()
{
	return sku;
}

void
QuickBuyRequest::setSku(std::string  sku)
{
	this->sku = sku;
}

int
QuickBuyRequest::getUserId()
{
	return user_id;
}

void
QuickBuyRequest::setUserId(int  user_id)
{
	this->user_id = user_id;
}


