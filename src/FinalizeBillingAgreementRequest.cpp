#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "FinalizeBillingAgreementRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

FinalizeBillingAgreementRequest::FinalizeBillingAgreementRequest()
{
	//__init();
}

FinalizeBillingAgreementRequest::~FinalizeBillingAgreementRequest()
{
	//__cleanup();
}

void
FinalizeBillingAgreementRequest::__init()
{
	//
	//
	//invoice_id = int(0);
	//
	//
	//new_default = bool(false);
	//
	//
	//payer_id = std::string();
	//
	//
	//token = std::string();
	//
	//
	//user_id = int(0);
	//
}

void
FinalizeBillingAgreementRequest::__cleanup()
{
	//if(invoice_id != NULL) {
	//
	//delete invoice_id;
	//invoice_id = NULL;
	//}
	//if(new_default != NULL) {
	//
	//delete new_default;
	//new_default = NULL;
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
	//if(user_id != NULL) {
	//
	//delete user_id;
	//user_id = NULL;
	//}
	//
}

void
FinalizeBillingAgreementRequest::fromJson(char* jsonStr)
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
	const gchar *new_defaultKey = "new_default";
	node = json_object_get_member(pJsonObject, new_defaultKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&new_default, node, "bool", "");
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
	const gchar *user_idKey = "user_id";
	node = json_object_get_member(pJsonObject, user_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&user_id, node, "int", "");
		} else {
			
		}
	}
}

FinalizeBillingAgreementRequest::FinalizeBillingAgreementRequest(char* json)
{
	this->fromJson(json);
}

char*
FinalizeBillingAgreementRequest::toJson()
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
	if (isprimitive("bool")) {
		bool obj = getNewDefault();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *new_defaultKey = "new_default";
	json_object_set_member(pJsonObject, new_defaultKey, node);
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

int
FinalizeBillingAgreementRequest::getInvoiceId()
{
	return invoice_id;
}

void
FinalizeBillingAgreementRequest::setInvoiceId(int  invoice_id)
{
	this->invoice_id = invoice_id;
}

bool
FinalizeBillingAgreementRequest::getNewDefault()
{
	return new_default;
}

void
FinalizeBillingAgreementRequest::setNewDefault(bool  new_default)
{
	this->new_default = new_default;
}

std::string
FinalizeBillingAgreementRequest::getPayerId()
{
	return payer_id;
}

void
FinalizeBillingAgreementRequest::setPayerId(std::string  payer_id)
{
	this->payer_id = payer_id;
}

std::string
FinalizeBillingAgreementRequest::getToken()
{
	return token;
}

void
FinalizeBillingAgreementRequest::setToken(std::string  token)
{
	this->token = token;
}

int
FinalizeBillingAgreementRequest::getUserId()
{
	return user_id;
}

void
FinalizeBillingAgreementRequest::setUserId(int  user_id)
{
	this->user_id = user_id;
}


