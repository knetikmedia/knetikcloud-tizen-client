#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "GooglePaymentRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

GooglePaymentRequest::GooglePaymentRequest()
{
	//__init();
}

GooglePaymentRequest::~GooglePaymentRequest()
{
	//__cleanup();
}

void
GooglePaymentRequest::__init()
{
	//
	//
	//json_payload = std::string();
	//
	//
	//signature = std::string();
	//
}

void
GooglePaymentRequest::__cleanup()
{
	//if(json_payload != NULL) {
	//
	//delete json_payload;
	//json_payload = NULL;
	//}
	//if(signature != NULL) {
	//
	//delete signature;
	//signature = NULL;
	//}
	//
}

void
GooglePaymentRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *json_payloadKey = "json_payload";
	node = json_object_get_member(pJsonObject, json_payloadKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&json_payload, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *signatureKey = "signature";
	node = json_object_get_member(pJsonObject, signatureKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&signature, node, "std::string", "");
		} else {
			
		}
	}
}

GooglePaymentRequest::GooglePaymentRequest(char* json)
{
	this->fromJson(json);
}

char*
GooglePaymentRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getJsonPayload();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *json_payloadKey = "json_payload";
	json_object_set_member(pJsonObject, json_payloadKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSignature();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *signatureKey = "signature";
	json_object_set_member(pJsonObject, signatureKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
GooglePaymentRequest::getJsonPayload()
{
	return json_payload;
}

void
GooglePaymentRequest::setJsonPayload(std::string  json_payload)
{
	this->json_payload = json_payload;
}

std::string
GooglePaymentRequest::getSignature()
{
	return signature;
}

void
GooglePaymentRequest::setSignature(std::string  signature)
{
	this->signature = signature;
}


