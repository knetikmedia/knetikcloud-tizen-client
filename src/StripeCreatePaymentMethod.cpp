#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "StripeCreatePaymentMethod.h"

using namespace std;
using namespace Tizen::ArtikCloud;

StripeCreatePaymentMethod::StripeCreatePaymentMethod()
{
	//__init();
}

StripeCreatePaymentMethod::~StripeCreatePaymentMethod()
{
	//__cleanup();
}

void
StripeCreatePaymentMethod::__init()
{
	//
	//
	//details = new PaymentMethodDetails();
	//
	//
	//token = std::string();
	//
	//
	//user_id = int(0);
	//
}

void
StripeCreatePaymentMethod::__cleanup()
{
	//if(details != NULL) {
	//
	//delete details;
	//details = NULL;
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
StripeCreatePaymentMethod::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *detailsKey = "details";
	node = json_object_get_member(pJsonObject, detailsKey);
	if (node !=NULL) {
	

		if (isprimitive("PaymentMethodDetails")) {
			jsonToValue(&details, node, "PaymentMethodDetails", "PaymentMethodDetails");
		} else {
			
			PaymentMethodDetails* obj = static_cast<PaymentMethodDetails*> (&details);
			obj->fromJson(json_to_string(node, false));
			
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

StripeCreatePaymentMethod::StripeCreatePaymentMethod(char* json)
{
	this->fromJson(json);
}

char*
StripeCreatePaymentMethod::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("PaymentMethodDetails")) {
		PaymentMethodDetails obj = getDetails();
		node = converttoJson(&obj, "PaymentMethodDetails", "");
	}
	else {
		
		PaymentMethodDetails obj = static_cast<PaymentMethodDetails> (getDetails());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *detailsKey = "details";
	json_object_set_member(pJsonObject, detailsKey, node);
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

PaymentMethodDetails
StripeCreatePaymentMethod::getDetails()
{
	return details;
}

void
StripeCreatePaymentMethod::setDetails(PaymentMethodDetails  details)
{
	this->details = details;
}

std::string
StripeCreatePaymentMethod::getToken()
{
	return token;
}

void
StripeCreatePaymentMethod::setToken(std::string  token)
{
	this->token = token;
}

int
StripeCreatePaymentMethod::getUserId()
{
	return user_id;
}

void
StripeCreatePaymentMethod::setUserId(int  user_id)
{
	this->user_id = user_id;
}


