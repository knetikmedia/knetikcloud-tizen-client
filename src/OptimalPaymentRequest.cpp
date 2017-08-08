#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "OptimalPaymentRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

OptimalPaymentRequest::OptimalPaymentRequest()
{
	//__init();
}

OptimalPaymentRequest::~OptimalPaymentRequest()
{
	//__cleanup();
}

void
OptimalPaymentRequest::__init()
{
	//
	//
	//email = std::string();
	//
	//
	//first_name = std::string();
	//
	//
	//invoice_id = int(0);
	//
	//
	//last_name = std::string();
	//
	//
	//on_decline = std::string();
	//
	//
	//on_error = std::string();
	//
	//
	//on_success = std::string();
	//
}

void
OptimalPaymentRequest::__cleanup()
{
	//if(email != NULL) {
	//
	//delete email;
	//email = NULL;
	//}
	//if(first_name != NULL) {
	//
	//delete first_name;
	//first_name = NULL;
	//}
	//if(invoice_id != NULL) {
	//
	//delete invoice_id;
	//invoice_id = NULL;
	//}
	//if(last_name != NULL) {
	//
	//delete last_name;
	//last_name = NULL;
	//}
	//if(on_decline != NULL) {
	//
	//delete on_decline;
	//on_decline = NULL;
	//}
	//if(on_error != NULL) {
	//
	//delete on_error;
	//on_error = NULL;
	//}
	//if(on_success != NULL) {
	//
	//delete on_success;
	//on_success = NULL;
	//}
	//
}

void
OptimalPaymentRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *emailKey = "email";
	node = json_object_get_member(pJsonObject, emailKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&email, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *first_nameKey = "first_name";
	node = json_object_get_member(pJsonObject, first_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&first_name, node, "std::string", "");
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
	const gchar *last_nameKey = "last_name";
	node = json_object_get_member(pJsonObject, last_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&last_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *on_declineKey = "on_decline";
	node = json_object_get_member(pJsonObject, on_declineKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&on_decline, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *on_errorKey = "on_error";
	node = json_object_get_member(pJsonObject, on_errorKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&on_error, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *on_successKey = "on_success";
	node = json_object_get_member(pJsonObject, on_successKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&on_success, node, "std::string", "");
		} else {
			
		}
	}
}

OptimalPaymentRequest::OptimalPaymentRequest(char* json)
{
	this->fromJson(json);
}

char*
OptimalPaymentRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getEmail();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *emailKey = "email";
	json_object_set_member(pJsonObject, emailKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getFirstName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *first_nameKey = "first_name";
	json_object_set_member(pJsonObject, first_nameKey, node);
	if (isprimitive("int")) {
		int obj = getInvoiceId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *invoice_idKey = "invoice_id";
	json_object_set_member(pJsonObject, invoice_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLastName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *last_nameKey = "last_name";
	json_object_set_member(pJsonObject, last_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getOnDecline();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *on_declineKey = "on_decline";
	json_object_set_member(pJsonObject, on_declineKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getOnError();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *on_errorKey = "on_error";
	json_object_set_member(pJsonObject, on_errorKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getOnSuccess();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *on_successKey = "on_success";
	json_object_set_member(pJsonObject, on_successKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
OptimalPaymentRequest::getEmail()
{
	return email;
}

void
OptimalPaymentRequest::setEmail(std::string  email)
{
	this->email = email;
}

std::string
OptimalPaymentRequest::getFirstName()
{
	return first_name;
}

void
OptimalPaymentRequest::setFirstName(std::string  first_name)
{
	this->first_name = first_name;
}

int
OptimalPaymentRequest::getInvoiceId()
{
	return invoice_id;
}

void
OptimalPaymentRequest::setInvoiceId(int  invoice_id)
{
	this->invoice_id = invoice_id;
}

std::string
OptimalPaymentRequest::getLastName()
{
	return last_name;
}

void
OptimalPaymentRequest::setLastName(std::string  last_name)
{
	this->last_name = last_name;
}

std::string
OptimalPaymentRequest::getOnDecline()
{
	return on_decline;
}

void
OptimalPaymentRequest::setOnDecline(std::string  on_decline)
{
	this->on_decline = on_decline;
}

std::string
OptimalPaymentRequest::getOnError()
{
	return on_error;
}

void
OptimalPaymentRequest::setOnError(std::string  on_error)
{
	this->on_error = on_error;
}

std::string
OptimalPaymentRequest::getOnSuccess()
{
	return on_success;
}

void
OptimalPaymentRequest::setOnSuccess(std::string  on_success)
{
	this->on_success = on_success;
}


