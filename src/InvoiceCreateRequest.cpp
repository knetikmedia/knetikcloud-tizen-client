#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "InvoiceCreateRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

InvoiceCreateRequest::InvoiceCreateRequest()
{
	//__init();
}

InvoiceCreateRequest::~InvoiceCreateRequest()
{
	//__cleanup();
}

void
InvoiceCreateRequest::__init()
{
	//
	//
	//cart_guid = std::string();
	//
}

void
InvoiceCreateRequest::__cleanup()
{
	//if(cart_guid != NULL) {
	//
	//delete cart_guid;
	//cart_guid = NULL;
	//}
	//
}

void
InvoiceCreateRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *cart_guidKey = "cart_guid";
	node = json_object_get_member(pJsonObject, cart_guidKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&cart_guid, node, "std::string", "");
		} else {
			
		}
	}
}

InvoiceCreateRequest::InvoiceCreateRequest(char* json)
{
	this->fromJson(json);
}

char*
InvoiceCreateRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getCartGuid();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *cart_guidKey = "cart_guid";
	json_object_set_member(pJsonObject, cart_guidKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
InvoiceCreateRequest::getCartGuid()
{
	return cart_guid;
}

void
InvoiceCreateRequest::setCartGuid(std::string  cart_guid)
{
	this->cart_guid = cart_guid;
}


