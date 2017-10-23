#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "WalletTransactionResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

WalletTransactionResource::WalletTransactionResource()
{
	//__init();
}

WalletTransactionResource::~WalletTransactionResource()
{
	//__cleanup();
}

void
WalletTransactionResource::__init()
{
	//
	//
	//balance = long(0);
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
	//user = new SimpleUserResource();
	//
	//
	//value = long(0);
	//
	//
	//wallet_id = int(0);
	//
}

void
WalletTransactionResource::__cleanup()
{
	//if(balance != NULL) {
	//
	//delete balance;
	//balance = NULL;
	//}
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
	//if(user != NULL) {
	//
	//delete user;
	//user = NULL;
	//}
	//if(value != NULL) {
	//
	//delete value;
	//value = NULL;
	//}
	//if(wallet_id != NULL) {
	//
	//delete wallet_id;
	//wallet_id = NULL;
	//}
	//
}

void
WalletTransactionResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *balanceKey = "balance";
	node = json_object_get_member(pJsonObject, balanceKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&balance, node, "long long", "");
		} else {
			
		}
	}
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
	const gchar *userKey = "user";
	node = json_object_get_member(pJsonObject, userKey);
	if (node !=NULL) {
	

		if (isprimitive("SimpleUserResource")) {
			jsonToValue(&user, node, "SimpleUserResource", "SimpleUserResource");
		} else {
			
			SimpleUserResource* obj = static_cast<SimpleUserResource*> (&user);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *valueKey = "value";
	node = json_object_get_member(pJsonObject, valueKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&value, node, "long long", "");
		} else {
			
		}
	}
	const gchar *wallet_idKey = "wallet_id";
	node = json_object_get_member(pJsonObject, wallet_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&wallet_id, node, "int", "");
		} else {
			
		}
	}
}

WalletTransactionResource::WalletTransactionResource(char* json)
{
	this->fromJson(json);
}

char*
WalletTransactionResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getBalance();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *balanceKey = "balance";
	json_object_set_member(pJsonObject, balanceKey, node);
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
	if (isprimitive("SimpleUserResource")) {
		SimpleUserResource obj = getUser();
		node = converttoJson(&obj, "SimpleUserResource", "");
	}
	else {
		
		SimpleUserResource obj = static_cast<SimpleUserResource> (getUser());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *userKey = "user";
	json_object_set_member(pJsonObject, userKey, node);
	if (isprimitive("long long")) {
		long long obj = getValue();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *valueKey = "value";
	json_object_set_member(pJsonObject, valueKey, node);
	if (isprimitive("int")) {
		int obj = getWalletId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *wallet_idKey = "wallet_id";
	json_object_set_member(pJsonObject, wallet_idKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
WalletTransactionResource::getBalance()
{
	return balance;
}

void
WalletTransactionResource::setBalance(long long  balance)
{
	this->balance = balance;
}

long long
WalletTransactionResource::getCreateDate()
{
	return create_date;
}

void
WalletTransactionResource::setCreateDate(long long  create_date)
{
	this->create_date = create_date;
}

std::string
WalletTransactionResource::getCurrencyCode()
{
	return currency_code;
}

void
WalletTransactionResource::setCurrencyCode(std::string  currency_code)
{
	this->currency_code = currency_code;
}

std::string
WalletTransactionResource::getDetails()
{
	return details;
}

void
WalletTransactionResource::setDetails(std::string  details)
{
	this->details = details;
}

int
WalletTransactionResource::getId()
{
	return id;
}

void
WalletTransactionResource::setId(int  id)
{
	this->id = id;
}

int
WalletTransactionResource::getInvoiceId()
{
	return invoice_id;
}

void
WalletTransactionResource::setInvoiceId(int  invoice_id)
{
	this->invoice_id = invoice_id;
}

bool
WalletTransactionResource::getIsRefunded()
{
	return is_refunded;
}

void
WalletTransactionResource::setIsRefunded(bool  is_refunded)
{
	this->is_refunded = is_refunded;
}

std::string
WalletTransactionResource::getResponse()
{
	return response;
}

void
WalletTransactionResource::setResponse(std::string  response)
{
	this->response = response;
}

std::string
WalletTransactionResource::getSource()
{
	return source;
}

void
WalletTransactionResource::setSource(std::string  source)
{
	this->source = source;
}

bool
WalletTransactionResource::getSuccessful()
{
	return successful;
}

void
WalletTransactionResource::setSuccessful(bool  successful)
{
	this->successful = successful;
}

std::string
WalletTransactionResource::getTransactionId()
{
	return transaction_id;
}

void
WalletTransactionResource::setTransactionId(std::string  transaction_id)
{
	this->transaction_id = transaction_id;
}

std::string
WalletTransactionResource::getType()
{
	return type;
}

void
WalletTransactionResource::setType(std::string  type)
{
	this->type = type;
}

std::string
WalletTransactionResource::getTypeHint()
{
	return type_hint;
}

void
WalletTransactionResource::setTypeHint(std::string  type_hint)
{
	this->type_hint = type_hint;
}

SimpleUserResource
WalletTransactionResource::getUser()
{
	return user;
}

void
WalletTransactionResource::setUser(SimpleUserResource  user)
{
	this->user = user;
}

long long
WalletTransactionResource::getValue()
{
	return value;
}

void
WalletTransactionResource::setValue(long long  value)
{
	this->value = value;
}

int
WalletTransactionResource::getWalletId()
{
	return wallet_id;
}

void
WalletTransactionResource::setWalletId(int  wallet_id)
{
	this->wallet_id = wallet_id;
}


