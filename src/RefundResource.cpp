#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "RefundResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

RefundResource::RefundResource()
{
	//__init();
}

RefundResource::~RefundResource()
{
	//__cleanup();
}

void
RefundResource::__init()
{
	//
	//
	//amount = double(0);
	//
	//
	//refund_transaction_id = int(0);
	//
	//
	//transaction_id = int(0);
	//
}

void
RefundResource::__cleanup()
{
	//if(amount != NULL) {
	//
	//delete amount;
	//amount = NULL;
	//}
	//if(refund_transaction_id != NULL) {
	//
	//delete refund_transaction_id;
	//refund_transaction_id = NULL;
	//}
	//if(transaction_id != NULL) {
	//
	//delete transaction_id;
	//transaction_id = NULL;
	//}
	//
}

void
RefundResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *amountKey = "amount";
	node = json_object_get_member(pJsonObject, amountKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&amount, node, "double", "");
		} else {
			
		}
	}
	const gchar *refund_transaction_idKey = "refund_transaction_id";
	node = json_object_get_member(pJsonObject, refund_transaction_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&refund_transaction_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *transaction_idKey = "transaction_id";
	node = json_object_get_member(pJsonObject, transaction_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&transaction_id, node, "int", "");
		} else {
			
		}
	}
}

RefundResource::RefundResource(char* json)
{
	this->fromJson(json);
}

char*
RefundResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("double")) {
		double obj = getAmount();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *amountKey = "amount";
	json_object_set_member(pJsonObject, amountKey, node);
	if (isprimitive("int")) {
		int obj = getRefundTransactionId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *refund_transaction_idKey = "refund_transaction_id";
	json_object_set_member(pJsonObject, refund_transaction_idKey, node);
	if (isprimitive("int")) {
		int obj = getTransactionId();
		node = converttoJson(&obj, "int", "");
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

double
RefundResource::getAmount()
{
	return amount;
}

void
RefundResource::setAmount(double  amount)
{
	this->amount = amount;
}

int
RefundResource::getRefundTransactionId()
{
	return refund_transaction_id;
}

void
RefundResource::setRefundTransactionId(int  refund_transaction_id)
{
	this->refund_transaction_id = refund_transaction_id;
}

int
RefundResource::getTransactionId()
{
	return transaction_id;
}

void
RefundResource::setTransactionId(int  transaction_id)
{
	this->transaction_id = transaction_id;
}


