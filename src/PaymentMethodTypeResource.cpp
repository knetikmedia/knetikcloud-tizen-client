#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PaymentMethodTypeResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

PaymentMethodTypeResource::PaymentMethodTypeResource()
{
	//__init();
}

PaymentMethodTypeResource::~PaymentMethodTypeResource()
{
	//__cleanup();
}

void
PaymentMethodTypeResource::__init()
{
	//
	//
	//id = int(0);
	//
	//
	//invoice_processing_hours = int(0);
	//
	//
	//name = std::string();
	//
	//
	//supports_capture = bool(false);
	//
	//
	//supports_partial = bool(false);
	//
	//
	//supports_rebill = bool(false);
	//
	//
	//supports_refunds = bool(false);
	//
}

void
PaymentMethodTypeResource::__cleanup()
{
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(invoice_processing_hours != NULL) {
	//
	//delete invoice_processing_hours;
	//invoice_processing_hours = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(supports_capture != NULL) {
	//
	//delete supports_capture;
	//supports_capture = NULL;
	//}
	//if(supports_partial != NULL) {
	//
	//delete supports_partial;
	//supports_partial = NULL;
	//}
	//if(supports_rebill != NULL) {
	//
	//delete supports_rebill;
	//supports_rebill = NULL;
	//}
	//if(supports_refunds != NULL) {
	//
	//delete supports_refunds;
	//supports_refunds = NULL;
	//}
	//
}

void
PaymentMethodTypeResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&id, node, "int", "");
		} else {
			
		}
	}
	const gchar *invoice_processing_hoursKey = "invoice_processing_hours";
	node = json_object_get_member(pJsonObject, invoice_processing_hoursKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&invoice_processing_hours, node, "int", "");
		} else {
			
		}
	}
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *supports_captureKey = "supports_capture";
	node = json_object_get_member(pJsonObject, supports_captureKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&supports_capture, node, "bool", "");
		} else {
			
		}
	}
	const gchar *supports_partialKey = "supports_partial";
	node = json_object_get_member(pJsonObject, supports_partialKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&supports_partial, node, "bool", "");
		} else {
			
		}
	}
	const gchar *supports_rebillKey = "supports_rebill";
	node = json_object_get_member(pJsonObject, supports_rebillKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&supports_rebill, node, "bool", "");
		} else {
			
		}
	}
	const gchar *supports_refundsKey = "supports_refunds";
	node = json_object_get_member(pJsonObject, supports_refundsKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&supports_refunds, node, "bool", "");
		} else {
			
		}
	}
}

PaymentMethodTypeResource::PaymentMethodTypeResource(char* json)
{
	this->fromJson(json);
}

char*
PaymentMethodTypeResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("int")) {
		int obj = getInvoiceProcessingHours();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *invoice_processing_hoursKey = "invoice_processing_hours";
	json_object_set_member(pJsonObject, invoice_processing_hoursKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("bool")) {
		bool obj = getSupportsCapture();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *supports_captureKey = "supports_capture";
	json_object_set_member(pJsonObject, supports_captureKey, node);
	if (isprimitive("bool")) {
		bool obj = getSupportsPartial();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *supports_partialKey = "supports_partial";
	json_object_set_member(pJsonObject, supports_partialKey, node);
	if (isprimitive("bool")) {
		bool obj = getSupportsRebill();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *supports_rebillKey = "supports_rebill";
	json_object_set_member(pJsonObject, supports_rebillKey, node);
	if (isprimitive("bool")) {
		bool obj = getSupportsRefunds();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *supports_refundsKey = "supports_refunds";
	json_object_set_member(pJsonObject, supports_refundsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
PaymentMethodTypeResource::getId()
{
	return id;
}

void
PaymentMethodTypeResource::setId(int  id)
{
	this->id = id;
}

int
PaymentMethodTypeResource::getInvoiceProcessingHours()
{
	return invoice_processing_hours;
}

void
PaymentMethodTypeResource::setInvoiceProcessingHours(int  invoice_processing_hours)
{
	this->invoice_processing_hours = invoice_processing_hours;
}

std::string
PaymentMethodTypeResource::getName()
{
	return name;
}

void
PaymentMethodTypeResource::setName(std::string  name)
{
	this->name = name;
}

bool
PaymentMethodTypeResource::getSupportsCapture()
{
	return supports_capture;
}

void
PaymentMethodTypeResource::setSupportsCapture(bool  supports_capture)
{
	this->supports_capture = supports_capture;
}

bool
PaymentMethodTypeResource::getSupportsPartial()
{
	return supports_partial;
}

void
PaymentMethodTypeResource::setSupportsPartial(bool  supports_partial)
{
	this->supports_partial = supports_partial;
}

bool
PaymentMethodTypeResource::getSupportsRebill()
{
	return supports_rebill;
}

void
PaymentMethodTypeResource::setSupportsRebill(bool  supports_rebill)
{
	this->supports_rebill = supports_rebill;
}

bool
PaymentMethodTypeResource::getSupportsRefunds()
{
	return supports_refunds;
}

void
PaymentMethodTypeResource::setSupportsRefunds(bool  supports_refunds)
{
	this->supports_refunds = supports_refunds;
}


