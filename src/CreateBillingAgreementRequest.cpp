#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CreateBillingAgreementRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CreateBillingAgreementRequest::CreateBillingAgreementRequest()
{
	//__init();
}

CreateBillingAgreementRequest::~CreateBillingAgreementRequest()
{
	//__cleanup();
}

void
CreateBillingAgreementRequest::__init()
{
	//
	//
	//cancel_url = std::string();
	//
	//
	//return_url = std::string();
	//
	//
	//user_id = int(0);
	//
}

void
CreateBillingAgreementRequest::__cleanup()
{
	//if(cancel_url != NULL) {
	//
	//delete cancel_url;
	//cancel_url = NULL;
	//}
	//if(return_url != NULL) {
	//
	//delete return_url;
	//return_url = NULL;
	//}
	//if(user_id != NULL) {
	//
	//delete user_id;
	//user_id = NULL;
	//}
	//
}

void
CreateBillingAgreementRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *cancel_urlKey = "cancel_url";
	node = json_object_get_member(pJsonObject, cancel_urlKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&cancel_url, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *return_urlKey = "return_url";
	node = json_object_get_member(pJsonObject, return_urlKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&return_url, node, "std::string", "");
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

CreateBillingAgreementRequest::CreateBillingAgreementRequest(char* json)
{
	this->fromJson(json);
}

char*
CreateBillingAgreementRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getCancelUrl();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *cancel_urlKey = "cancel_url";
	json_object_set_member(pJsonObject, cancel_urlKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getReturnUrl();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *return_urlKey = "return_url";
	json_object_set_member(pJsonObject, return_urlKey, node);
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

std::string
CreateBillingAgreementRequest::getCancelUrl()
{
	return cancel_url;
}

void
CreateBillingAgreementRequest::setCancelUrl(std::string  cancel_url)
{
	this->cancel_url = cancel_url;
}

std::string
CreateBillingAgreementRequest::getReturnUrl()
{
	return return_url;
}

void
CreateBillingAgreementRequest::setReturnUrl(std::string  return_url)
{
	this->return_url = return_url;
}

int
CreateBillingAgreementRequest::getUserId()
{
	return user_id;
}

void
CreateBillingAgreementRequest::setUserId(int  user_id)
{
	this->user_id = user_id;
}


