#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "InvoicePaymentStatusRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

InvoicePaymentStatusRequest::InvoicePaymentStatusRequest()
{
	//__init();
}

InvoicePaymentStatusRequest::~InvoicePaymentStatusRequest()
{
	//__cleanup();
}

void
InvoicePaymentStatusRequest::__init()
{
	//
	//
	//payment_method_id = int(0);
	//
	//
	//status = std::string();
	//
}

void
InvoicePaymentStatusRequest::__cleanup()
{
	//if(payment_method_id != NULL) {
	//
	//delete payment_method_id;
	//payment_method_id = NULL;
	//}
	//if(status != NULL) {
	//
	//delete status;
	//status = NULL;
	//}
	//
}

void
InvoicePaymentStatusRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *payment_method_idKey = "payment_method_id";
	node = json_object_get_member(pJsonObject, payment_method_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&payment_method_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *statusKey = "status";
	node = json_object_get_member(pJsonObject, statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&status, node, "std::string", "");
		} else {
			
		}
	}
}

InvoicePaymentStatusRequest::InvoicePaymentStatusRequest(char* json)
{
	this->fromJson(json);
}

char*
InvoicePaymentStatusRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getPaymentMethodId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *payment_method_idKey = "payment_method_id";
	json_object_set_member(pJsonObject, payment_method_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *statusKey = "status";
	json_object_set_member(pJsonObject, statusKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
InvoicePaymentStatusRequest::getPaymentMethodId()
{
	return payment_method_id;
}

void
InvoicePaymentStatusRequest::setPaymentMethodId(int  payment_method_id)
{
	this->payment_method_id = payment_method_id;
}

std::string
InvoicePaymentStatusRequest::getStatus()
{
	return status;
}

void
InvoicePaymentStatusRequest::setStatus(std::string  status)
{
	this->status = status;
}


