#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "WalletAlterRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

WalletAlterRequest::WalletAlterRequest()
{
	//__init();
}

WalletAlterRequest::~WalletAlterRequest()
{
	//__cleanup();
}

void
WalletAlterRequest::__init()
{
	//
	//
	//delta = double(0);
	//
	//
	//invoice_id = int(0);
	//
	//
	//reason = std::string();
	//
	//
	//type = std::string();
	//
}

void
WalletAlterRequest::__cleanup()
{
	//if(delta != NULL) {
	//
	//delete delta;
	//delta = NULL;
	//}
	//if(invoice_id != NULL) {
	//
	//delete invoice_id;
	//invoice_id = NULL;
	//}
	//if(reason != NULL) {
	//
	//delete reason;
	//reason = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//
}

void
WalletAlterRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *deltaKey = "delta";
	node = json_object_get_member(pJsonObject, deltaKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&delta, node, "double", "");
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
	const gchar *reasonKey = "reason";
	node = json_object_get_member(pJsonObject, reasonKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&reason, node, "std::string", "");
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
}

WalletAlterRequest::WalletAlterRequest(char* json)
{
	this->fromJson(json);
}

char*
WalletAlterRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("double")) {
		double obj = getDelta();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *deltaKey = "delta";
	json_object_set_member(pJsonObject, deltaKey, node);
	if (isprimitive("int")) {
		int obj = getInvoiceId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *invoice_idKey = "invoice_id";
	json_object_set_member(pJsonObject, invoice_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getReason();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *reasonKey = "reason";
	json_object_set_member(pJsonObject, reasonKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

double
WalletAlterRequest::getDelta()
{
	return delta;
}

void
WalletAlterRequest::setDelta(double  delta)
{
	this->delta = delta;
}

int
WalletAlterRequest::getInvoiceId()
{
	return invoice_id;
}

void
WalletAlterRequest::setInvoiceId(int  invoice_id)
{
	this->invoice_id = invoice_id;
}

std::string
WalletAlterRequest::getReason()
{
	return reason;
}

void
WalletAlterRequest::setReason(std::string  reason)
{
	this->reason = reason;
}

std::string
WalletAlterRequest::getType()
{
	return type;
}

void
WalletAlterRequest::setType(std::string  type)
{
	this->type = type;
}


