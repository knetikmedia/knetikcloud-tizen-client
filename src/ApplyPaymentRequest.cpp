#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ApplyPaymentRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ApplyPaymentRequest::ApplyPaymentRequest()
{
	//__init();
}

ApplyPaymentRequest::~ApplyPaymentRequest()
{
	//__cleanup();
}

void
ApplyPaymentRequest::__init()
{
	//
	//
	//invoice_id = int(0);
	//
	//
	//receipt = std::string();
	//
	//
	//transaction_id = std::string();
	//
}

void
ApplyPaymentRequest::__cleanup()
{
	//if(invoice_id != NULL) {
	//
	//delete invoice_id;
	//invoice_id = NULL;
	//}
	//if(receipt != NULL) {
	//
	//delete receipt;
	//receipt = NULL;
	//}
	//if(transaction_id != NULL) {
	//
	//delete transaction_id;
	//transaction_id = NULL;
	//}
	//
}

void
ApplyPaymentRequest::fromJson(char* jsonStr)
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
	const gchar *receiptKey = "receipt";
	node = json_object_get_member(pJsonObject, receiptKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&receipt, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *transaction_idKey = "transaction_id";
	node = json_object_get_member(pJsonObject, transaction_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&transaction_id, node, "std::string", "");
		} else {
			
		}
	}
}

ApplyPaymentRequest::ApplyPaymentRequest(char* json)
{
	this->fromJson(json);
}

char*
ApplyPaymentRequest::toJson()
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
		std::string obj = getReceipt();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *receiptKey = "receipt";
	json_object_set_member(pJsonObject, receiptKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTransactionId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *transaction_idKey = "transaction_id";
	json_object_set_member(pJsonObject, transaction_idKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
ApplyPaymentRequest::getInvoiceId()
{
	return invoice_id;
}

void
ApplyPaymentRequest::setInvoiceId(int  invoice_id)
{
	this->invoice_id = invoice_id;
}

std::string
ApplyPaymentRequest::getReceipt()
{
	return receipt;
}

void
ApplyPaymentRequest::setReceipt(std::string  receipt)
{
	this->receipt = receipt;
}

std::string
ApplyPaymentRequest::getTransactionId()
{
	return transaction_id;
}

void
ApplyPaymentRequest::setTransactionId(std::string  transaction_id)
{
	this->transaction_id = transaction_id;
}


