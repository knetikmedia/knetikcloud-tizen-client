#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CartShippableResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CartShippableResponse::CartShippableResponse()
{
	//__init();
}

CartShippableResponse::~CartShippableResponse()
{
	//__cleanup();
}

void
CartShippableResponse::__init()
{
	//
	//
	//cart_id = int(0);
	//
	//
	//shippable = bool(false);
	//
}

void
CartShippableResponse::__cleanup()
{
	//if(cart_id != NULL) {
	//
	//delete cart_id;
	//cart_id = NULL;
	//}
	//if(shippable != NULL) {
	//
	//delete shippable;
	//shippable = NULL;
	//}
	//
}

void
CartShippableResponse::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *cart_idKey = "cart_id";
	node = json_object_get_member(pJsonObject, cart_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&cart_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *shippableKey = "shippable";
	node = json_object_get_member(pJsonObject, shippableKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&shippable, node, "bool", "");
		} else {
			
		}
	}
}

CartShippableResponse::CartShippableResponse(char* json)
{
	this->fromJson(json);
}

char*
CartShippableResponse::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getCartId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *cart_idKey = "cart_id";
	json_object_set_member(pJsonObject, cart_idKey, node);
	if (isprimitive("bool")) {
		bool obj = getShippable();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *shippableKey = "shippable";
	json_object_set_member(pJsonObject, shippableKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
CartShippableResponse::getCartId()
{
	return cart_id;
}

void
CartShippableResponse::setCartId(int  cart_id)
{
	this->cart_id = cart_id;
}

bool
CartShippableResponse::getShippable()
{
	return shippable;
}

void
CartShippableResponse::setShippable(bool  shippable)
{
	this->shippable = shippable;
}


