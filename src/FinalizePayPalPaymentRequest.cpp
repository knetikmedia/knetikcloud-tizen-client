#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "FinalizePayPalPaymentRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

FinalizePayPalPaymentRequest::FinalizePayPalPaymentRequest()
{
	//__init();
}

FinalizePayPalPaymentRequest::~FinalizePayPalPaymentRequest()
{
	//__cleanup();
}

void
FinalizePayPalPaymentRequest::__init()
{
	//
	//
	//invoice_id = int(0);
	//
	//
	//payer_id = std::string();
	//
	//
	//token = std::string();
	//
}

void
FinalizePayPalPaymentRequest::__cleanup()
{
	//if(invoice_id != NULL) {
	//
	//delete invoice_id;
	//invoice_id = NULL;
	//}
	//if(payer_id != NULL) {
	//
	//delete payer_id;
	//payer_id = NULL;
	//}
	//if(token != NULL) {
	//
	//delete token;
	//token = NULL;
	//}
	//
}

void
FinalizePayPalPaymentRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *invoice_idKey = "invoice_id";
	node = json_object_get_member(pJsonObject, invoice_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&invoice_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *payer_idKey = "payer_id";
	node = json_object_get_member(pJsonObject, payer_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&payer_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *tokenKey = "token";
	node = json_object_get_member(pJsonObject, tokenKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&token, node, "std::string", "");
		} else {
			
		}
	}
}

FinalizePayPalPaymentRequest::FinalizePayPalPaymentRequest(char* json)
{
	this->fromJson(json);
}

char*
FinalizePayPalPaymentRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getInvoiceId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *invoice_idKey = "invoice_id";
	json_object_set_member(pJsonObject, invoice_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPayerId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *payer_idKey = "payer_id";
	json_object_set_member(pJsonObject, payer_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getToken();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *tokenKey = "token";
	json_object_set_member(pJsonObject, tokenKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
FinalizePayPalPaymentRequest::getInvoiceId()
{
	return invoice_id;
}

void
FinalizePayPalPaymentRequest::setInvoiceId(int  invoice_id)
{
	this->invoice_id = invoice_id;
}

std::string
FinalizePayPalPaymentRequest::getPayerId()
{
	return payer_id;
}

void
FinalizePayPalPaymentRequest::setPayerId(std::string  payer_id)
{
	this->payer_id = payer_id;
}

std::string
FinalizePayPalPaymentRequest::getToken()
{
	return token;
}

void
FinalizePayPalPaymentRequest::setToken(std::string  token)
{
	this->token = token;
}


