#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PayBySavedMethodRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

PayBySavedMethodRequest::PayBySavedMethodRequest()
{
	//__init();
}

PayBySavedMethodRequest::~PayBySavedMethodRequest()
{
	//__cleanup();
}

void
PayBySavedMethodRequest::__init()
{
	//
	//
	//payment_method = int(0);
	//
	//
	//user_id = int(0);
	//
}

void
PayBySavedMethodRequest::__cleanup()
{
	//if(payment_method != NULL) {
	//
	//delete payment_method;
	//payment_method = NULL;
	//}
	//if(user_id != NULL) {
	//
	//delete user_id;
	//user_id = NULL;
	//}
	//
}

void
PayBySavedMethodRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *payment_methodKey = "payment_method";
	node = json_object_get_member(pJsonObject, payment_methodKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&payment_method, node, "int", "");
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

PayBySavedMethodRequest::PayBySavedMethodRequest(char* json)
{
	this->fromJson(json);
}

char*
PayBySavedMethodRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getPaymentMethod();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *payment_methodKey = "payment_method";
	json_object_set_member(pJsonObject, payment_methodKey, node);
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
PayBySavedMethodRequest::getPaymentMethod()
{
	return payment_method;
}

void
PayBySavedMethodRequest::setPaymentMethod(int  payment_method)
{
	this->payment_method = payment_method;
}

int
PayBySavedMethodRequest::getUserId()
{
	return user_id;
}

void
PayBySavedMethodRequest::setUserId(int  user_id)
{
	this->user_id = user_id;
}


