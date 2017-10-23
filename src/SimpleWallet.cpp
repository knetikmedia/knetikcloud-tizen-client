#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "SimpleWallet.h"

using namespace std;
using namespace Tizen::ArtikCloud;

SimpleWallet::SimpleWallet()
{
	//__init();
}

SimpleWallet::~SimpleWallet()
{
	//__cleanup();
}

void
SimpleWallet::__init()
{
	//
	//
	//balance = long(0);
	//
	//
	//code = std::string();
	//
	//
	//currency_name = std::string();
	//
	//
	//id = int(0);
	//
	//
	//user_id = int(0);
	//
}

void
SimpleWallet::__cleanup()
{
	//if(balance != NULL) {
	//
	//delete balance;
	//balance = NULL;
	//}
	//if(code != NULL) {
	//
	//delete code;
	//code = NULL;
	//}
	//if(currency_name != NULL) {
	//
	//delete currency_name;
	//currency_name = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(user_id != NULL) {
	//
	//delete user_id;
	//user_id = NULL;
	//}
	//
}

void
SimpleWallet::fromJson(char* jsonStr)
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
	const gchar *codeKey = "code";
	node = json_object_get_member(pJsonObject, codeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&code, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *currency_nameKey = "currency_name";
	node = json_object_get_member(pJsonObject, currency_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&currency_name, node, "std::string", "");
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
	const gchar *user_idKey = "user_id";
	node = json_object_get_member(pJsonObject, user_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&user_id, node, "int", "");
		} else {
			
		}
	}
}

SimpleWallet::SimpleWallet(char* json)
{
	this->fromJson(json);
}

char*
SimpleWallet::toJson()
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
	if (isprimitive("std::string")) {
		std::string obj = getCode();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *codeKey = "code";
	json_object_set_member(pJsonObject, codeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCurrencyName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *currency_nameKey = "currency_name";
	json_object_set_member(pJsonObject, currency_nameKey, node);
	if (isprimitive("int")) {
		int obj = getId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
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

long long
SimpleWallet::getBalance()
{
	return balance;
}

void
SimpleWallet::setBalance(long long  balance)
{
	this->balance = balance;
}

std::string
SimpleWallet::getCode()
{
	return code;
}

void
SimpleWallet::setCode(std::string  code)
{
	this->code = code;
}

std::string
SimpleWallet::getCurrencyName()
{
	return currency_name;
}

void
SimpleWallet::setCurrencyName(std::string  currency_name)
{
	this->currency_name = currency_name;
}

int
SimpleWallet::getId()
{
	return id;
}

void
SimpleWallet::setId(int  id)
{
	this->id = id;
}

int
SimpleWallet::getUserId()
{
	return user_id;
}

void
SimpleWallet::setUserId(int  user_id)
{
	this->user_id = user_id;
}


