#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "FattMerchantPaymentMethodRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

FattMerchantPaymentMethodRequest::FattMerchantPaymentMethodRequest()
{
	//__init();
}

FattMerchantPaymentMethodRequest::~FattMerchantPaymentMethodRequest()
{
	//__cleanup();
}

void
FattMerchantPaymentMethodRequest::__init()
{
	//
	//
	//method = new FattMerchantPaymentMethod();
	//
	//
	//user_id = int(0);
	//
}

void
FattMerchantPaymentMethodRequest::__cleanup()
{
	//if(method != NULL) {
	//
	//delete method;
	//method = NULL;
	//}
	//if(user_id != NULL) {
	//
	//delete user_id;
	//user_id = NULL;
	//}
	//
}

void
FattMerchantPaymentMethodRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *methodKey = "method";
	node = json_object_get_member(pJsonObject, methodKey);
	if (node !=NULL) {
	

		if (isprimitive("FattMerchantPaymentMethod")) {
			jsonToValue(&method, node, "FattMerchantPaymentMethod", "FattMerchantPaymentMethod");
		} else {
			
			FattMerchantPaymentMethod* obj = static_cast<FattMerchantPaymentMethod*> (&method);
			obj->fromJson(json_to_string(node, false));
			
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

FattMerchantPaymentMethodRequest::FattMerchantPaymentMethodRequest(char* json)
{
	this->fromJson(json);
}

char*
FattMerchantPaymentMethodRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("FattMerchantPaymentMethod")) {
		FattMerchantPaymentMethod obj = getMethod();
		node = converttoJson(&obj, "FattMerchantPaymentMethod", "");
	}
	else {
		
		FattMerchantPaymentMethod obj = static_cast<FattMerchantPaymentMethod> (getMethod());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *methodKey = "method";
	json_object_set_member(pJsonObject, methodKey, node);
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

FattMerchantPaymentMethod
FattMerchantPaymentMethodRequest::getMethod()
{
	return method;
}

void
FattMerchantPaymentMethodRequest::setMethod(FattMerchantPaymentMethod  method)
{
	this->method = method;
}

int
FattMerchantPaymentMethodRequest::getUserId()
{
	return user_id;
}

void
FattMerchantPaymentMethodRequest::setUserId(int  user_id)
{
	this->user_id = user_id;
}


