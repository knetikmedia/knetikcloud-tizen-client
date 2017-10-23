#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "StripePaymentRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

StripePaymentRequest::StripePaymentRequest()
{
	//__init();
}

StripePaymentRequest::~StripePaymentRequest()
{
	//__cleanup();
}

void
StripePaymentRequest::__init()
{
	//
	//
	//amount = long(0);
	//
	//
	//invoice_id = int(0);
	//
	//
	//token = std::string();
	//
}

void
StripePaymentRequest::__cleanup()
{
	//if(amount != NULL) {
	//
	//delete amount;
	//amount = NULL;
	//}
	//if(invoice_id != NULL) {
	//
	//delete invoice_id;
	//invoice_id = NULL;
	//}
	//if(token != NULL) {
	//
	//delete token;
	//token = NULL;
	//}
	//
}

void
StripePaymentRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *amountKey = "amount";
	node = json_object_get_member(pJsonObject, amountKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&amount, node, "long long", "");
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
	const gchar *tokenKey = "token";
	node = json_object_get_member(pJsonObject, tokenKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&token, node, "std::string", "");
		} else {
			
		}
	}
}

StripePaymentRequest::StripePaymentRequest(char* json)
{
	this->fromJson(json);
}

char*
StripePaymentRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getAmount();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *amountKey = "amount";
	json_object_set_member(pJsonObject, amountKey, node);
	if (isprimitive("int")) {
		int obj = getInvoiceId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *invoice_idKey = "invoice_id";
	json_object_set_member(pJsonObject, invoice_idKey, node);
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

long long
StripePaymentRequest::getAmount()
{
	return amount;
}

void
StripePaymentRequest::setAmount(long long  amount)
{
	this->amount = amount;
}

int
StripePaymentRequest::getInvoiceId()
{
	return invoice_id;
}

void
StripePaymentRequest::setInvoiceId(int  invoice_id)
{
	this->invoice_id = invoice_id;
}

std::string
StripePaymentRequest::getToken()
{
	return token;
}

void
StripePaymentRequest::setToken(std::string  token)
{
	this->token = token;
}


