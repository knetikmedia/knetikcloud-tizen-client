#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CreatePayPalPaymentRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CreatePayPalPaymentRequest::CreatePayPalPaymentRequest()
{
	//__init();
}

CreatePayPalPaymentRequest::~CreatePayPalPaymentRequest()
{
	//__cleanup();
}

void
CreatePayPalPaymentRequest::__init()
{
	//
	//
	//cancel_url = std::string();
	//
	//
	//invoice_id = int(0);
	//
	//
	//return_url = std::string();
	//
}

void
CreatePayPalPaymentRequest::__cleanup()
{
	//if(cancel_url != NULL) {
	//
	//delete cancel_url;
	//cancel_url = NULL;
	//}
	//if(invoice_id != NULL) {
	//
	//delete invoice_id;
	//invoice_id = NULL;
	//}
	//if(return_url != NULL) {
	//
	//delete return_url;
	//return_url = NULL;
	//}
	//
}

void
CreatePayPalPaymentRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *cancel_urlKey = "cancel_url";
	node = json_object_get_member(pJsonObject, cancel_urlKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&cancel_url, node, "std::string", "");
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
	const gchar *return_urlKey = "return_url";
	node = json_object_get_member(pJsonObject, return_urlKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&return_url, node, "std::string", "");
		} else {
			
		}
	}
}

CreatePayPalPaymentRequest::CreatePayPalPaymentRequest(char* json)
{
	this->fromJson(json);
}

char*
CreatePayPalPaymentRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getCancelUrl();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *cancel_urlKey = "cancel_url";
	json_object_set_member(pJsonObject, cancel_urlKey, node);
	if (isprimitive("int")) {
		int obj = getInvoiceId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *invoice_idKey = "invoice_id";
	json_object_set_member(pJsonObject, invoice_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getReturnUrl();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *return_urlKey = "return_url";
	json_object_set_member(pJsonObject, return_urlKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
CreatePayPalPaymentRequest::getCancelUrl()
{
	return cancel_url;
}

void
CreatePayPalPaymentRequest::setCancelUrl(std::string  cancel_url)
{
	this->cancel_url = cancel_url;
}

int
CreatePayPalPaymentRequest::getInvoiceId()
{
	return invoice_id;
}

void
CreatePayPalPaymentRequest::setInvoiceId(int  invoice_id)
{
	this->invoice_id = invoice_id;
}

std::string
CreatePayPalPaymentRequest::getReturnUrl()
{
	return return_url;
}

void
CreatePayPalPaymentRequest::setReturnUrl(std::string  return_url)
{
	this->return_url = return_url;
}


