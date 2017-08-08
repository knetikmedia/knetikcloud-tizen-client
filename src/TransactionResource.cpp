#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "TransactionResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

TransactionResource::TransactionResource()
{
	//__init();
}

TransactionResource::~TransactionResource()
{
	//__cleanup();
}

void
TransactionResource::__init()
{
	//
	//
	//create_date = long(0);
	//
	//
	//currency_code = std::string();
	//
	//
	//details = std::string();
	//
	//
	//id = int(0);
	//
	//
	//invoice_id = int(0);
	//
	//
	//is_refunded = bool(false);
	//
	//
	//response = std::string();
	//
	//
	//source = std::string();
	//
	//
	//successful = bool(false);
	//
	//
	//transaction_id = std::string();
	//
	//
	//type = std::string();
	//
	//
	//type_hint = std::string();
	//
	//
	//value = double(0);
	//
}

void
TransactionResource::__cleanup()
{
	//if(create_date != NULL) {
	//
	//delete create_date;
	//create_date = NULL;
	//}
	//if(currency_code != NULL) {
	//
	//delete currency_code;
	//currency_code = NULL;
	//}
	//if(details != NULL) {
	//
	//delete details;
	//details = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(invoice_id != NULL) {
	//
	//delete invoice_id;
	//invoice_id = NULL;
	//}
	//if(is_refunded != NULL) {
	//
	//delete is_refunded;
	//is_refunded = NULL;
	//}
	//if(response != NULL) {
	//
	//delete response;
	//response = NULL;
	//}
	//if(source != NULL) {
	//
	//delete source;
	//source = NULL;
	//}
	//if(successful != NULL) {
	//
	//delete successful;
	//successful = NULL;
	//}
	//if(transaction_id != NULL) {
	//
	//delete transaction_id;
	//transaction_id = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(type_hint != NULL) {
	//
	//delete type_hint;
	//type_hint = NULL;
	//}
	//if(value != NULL) {
	//
	//delete value;
	//value = NULL;
	//}
	//
}

void
TransactionResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *create_dateKey = "create_date";
	node = json_object_get_member(pJsonObject, create_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&create_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *currency_codeKey = "currency_code";
	node = json_object_get_member(pJsonObject, currency_codeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&currency_code, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *detailsKey = "details";
	node = json_object_get_member(pJsonObject, detailsKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&details, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&id, node, "int", "");
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
	const gchar *is_refundedKey = "is_refunded";
	node = json_object_get_member(pJsonObject, is_refundedKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&is_refunded, node, "bool", "");
		} else {
			
		}
	}
	const gchar *responseKey = "response";
	node = json_object_get_member(pJsonObject, responseKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&response, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *sourceKey = "source";
	node = json_object_get_member(pJsonObject, sourceKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&source, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *successfulKey = "successful";
	node = json_object_get_member(pJsonObject, successfulKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&successful, node, "bool", "");
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
	const gchar *typeKey = "type";
	node = json_object_get_member(pJsonObject, typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *type_hintKey = "type_hint";
	node = json_object_get_member(pJsonObject, type_hintKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type_hint, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *valueKey = "value";
	node = json_object_get_member(pJsonObject, valueKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&value, node, "double", "");
		} else {
			
		}
	}
}

TransactionResource::TransactionResource(char* json)
{
	this->fromJson(json);
}

char*
TransactionResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getCreateDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *create_dateKey = "create_date";
	json_object_set_member(pJsonObject, create_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCurrencyCode();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *currency_codeKey = "currency_code";
	json_object_set_member(pJsonObject, currency_codeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDetails();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *detailsKey = "details";
	json_object_set_member(pJsonObject, detailsKey, node);
	if (isprimitive("int")) {
		int obj = getId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("int")) {
		int obj = getInvoiceId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *invoice_idKey = "invoice_id";
	json_object_set_member(pJsonObject, invoice_idKey, node);
	if (isprimitive("bool")) {
		bool obj = getIsRefunded();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *is_refundedKey = "is_refunded";
	json_object_set_member(pJsonObject, is_refundedKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getResponse();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *responseKey = "response";
	json_object_set_member(pJsonObject, responseKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSource();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *sourceKey = "source";
	json_object_set_member(pJsonObject, sourceKey, node);
	if (isprimitive("bool")) {
		bool obj = getSuccessful();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *successfulKey = "successful";
	json_object_set_member(pJsonObject, successfulKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTransactionId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *transaction_idKey = "transaction_id";
	json_object_set_member(pJsonObject, transaction_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTypeHint();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *type_hintKey = "type_hint";
	json_object_set_member(pJsonObject, type_hintKey, node);
	if (isprimitive("double")) {
		double obj = getValue();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *valueKey = "value";
	json_object_set_member(pJsonObject, valueKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
TransactionResource::getCreateDate()
{
	return create_date;
}

void
TransactionResource::setCreateDate(long long  create_date)
{
	this->create_date = create_date;
}

std::string
TransactionResource::getCurrencyCode()
{
	return currency_code;
}

void
TransactionResource::setCurrencyCode(std::string  currency_code)
{
	this->currency_code = currency_code;
}

std::string
TransactionResource::getDetails()
{
	return details;
}

void
TransactionResource::setDetails(std::string  details)
{
	this->details = details;
}

int
TransactionResource::getId()
{
	return id;
}

void
TransactionResource::setId(int  id)
{
	this->id = id;
}

int
TransactionResource::getInvoiceId()
{
	return invoice_id;
}

void
TransactionResource::setInvoiceId(int  invoice_id)
{
	this->invoice_id = invoice_id;
}

bool
TransactionResource::getIsRefunded()
{
	return is_refunded;
}

void
TransactionResource::setIsRefunded(bool  is_refunded)
{
	this->is_refunded = is_refunded;
}

std::string
TransactionResource::getResponse()
{
	return response;
}

void
TransactionResource::setResponse(std::string  response)
{
	this->response = response;
}

std::string
TransactionResource::getSource()
{
	return source;
}

void
TransactionResource::setSource(std::string  source)
{
	this->source = source;
}

bool
TransactionResource::getSuccessful()
{
	return successful;
}

void
TransactionResource::setSuccessful(bool  successful)
{
	this->successful = successful;
}

std::string
TransactionResource::getTransactionId()
{
	return transaction_id;
}

void
TransactionResource::setTransactionId(std::string  transaction_id)
{
	this->transaction_id = transaction_id;
}

std::string
TransactionResource::getType()
{
	return type;
}

void
TransactionResource::setType(std::string  type)
{
	this->type = type;
}

std::string
TransactionResource::getTypeHint()
{
	return type_hint;
}

void
TransactionResource::setTypeHint(std::string  type_hint)
{
	this->type_hint = type_hint;
}

double
TransactionResource::getValue()
{
	return value;
}

void
TransactionResource::setValue(double  value)
{
	this->value = value;
}


