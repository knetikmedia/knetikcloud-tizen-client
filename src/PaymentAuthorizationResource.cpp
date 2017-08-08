#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PaymentAuthorizationResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

PaymentAuthorizationResource::PaymentAuthorizationResource()
{
	//__init();
}

PaymentAuthorizationResource::~PaymentAuthorizationResource()
{
	//__cleanup();
}

void
PaymentAuthorizationResource::__init()
{
	//
	//
	//captured = bool(false);
	//
	//
	//created = long(0);
	//
	//
	//details = null;
	//
	//
	//id = int(0);
	//
	//
	//invoice = int(0);
	//
	//
	//payment_type = new SimpleReferenceResource«int»();
	//
}

void
PaymentAuthorizationResource::__cleanup()
{
	//if(captured != NULL) {
	//
	//delete captured;
	//captured = NULL;
	//}
	//if(created != NULL) {
	//
	//delete created;
	//created = NULL;
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
	//if(invoice != NULL) {
	//
	//delete invoice;
	//invoice = NULL;
	//}
	//if(payment_type != NULL) {
	//
	//delete payment_type;
	//payment_type = NULL;
	//}
	//
}

void
PaymentAuthorizationResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *capturedKey = "captured";
	node = json_object_get_member(pJsonObject, capturedKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&captured, node, "bool", "");
		} else {
			
		}
	}
	const gchar *createdKey = "created";
	node = json_object_get_member(pJsonObject, createdKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&created, node, "long long", "");
		} else {
			
		}
	}
	const gchar *detailsKey = "details";
	node = json_object_get_member(pJsonObject, detailsKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&details, node, "std::string", "");
		} else {
			
			std::string* obj = static_cast<std::string*> (&details);
			obj->fromJson(json_to_string(node, false));
			
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
	const gchar *invoiceKey = "invoice";
	node = json_object_get_member(pJsonObject, invoiceKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&invoice, node, "int", "");
		} else {
			
		}
	}
	const gchar *payment_typeKey = "payment_type";
	node = json_object_get_member(pJsonObject, payment_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("SimpleReferenceResource«int»")) {
			jsonToValue(&payment_type, node, "SimpleReferenceResource«int»", "SimpleReferenceResource«int»");
		} else {
			
			SimpleReferenceResource«int»* obj = static_cast<SimpleReferenceResource«int»*> (&payment_type);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

PaymentAuthorizationResource::PaymentAuthorizationResource(char* json)
{
	this->fromJson(json);
}

char*
PaymentAuthorizationResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getCaptured();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *capturedKey = "captured";
	json_object_set_member(pJsonObject, capturedKey, node);
	if (isprimitive("long long")) {
		long long obj = getCreated();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *createdKey = "created";
	json_object_set_member(pJsonObject, createdKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDetails();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
		std::string obj = static_cast<std::string> (getDetails());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
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
		int obj = getInvoice();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *invoiceKey = "invoice";
	json_object_set_member(pJsonObject, invoiceKey, node);
	if (isprimitive("SimpleReferenceResource«int»")) {
		SimpleReferenceResource«int» obj = getPaymentType();
		node = converttoJson(&obj, "SimpleReferenceResource«int»", "");
	}
	else {
		
		SimpleReferenceResource«int» obj = static_cast<SimpleReferenceResource«int»> (getPaymentType());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *payment_typeKey = "payment_type";
	json_object_set_member(pJsonObject, payment_typeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
PaymentAuthorizationResource::getCaptured()
{
	return captured;
}

void
PaymentAuthorizationResource::setCaptured(bool  captured)
{
	this->captured = captured;
}

long long
PaymentAuthorizationResource::getCreated()
{
	return created;
}

void
PaymentAuthorizationResource::setCreated(long long  created)
{
	this->created = created;
}

std::string
PaymentAuthorizationResource::getDetails()
{
	return details;
}

void
PaymentAuthorizationResource::setDetails(std::string  details)
{
	this->details = details;
}

int
PaymentAuthorizationResource::getId()
{
	return id;
}

void
PaymentAuthorizationResource::setId(int  id)
{
	this->id = id;
}

int
PaymentAuthorizationResource::getInvoice()
{
	return invoice;
}

void
PaymentAuthorizationResource::setInvoice(int  invoice)
{
	this->invoice = invoice;
}

SimpleReferenceResource«int»
PaymentAuthorizationResource::getPaymentType()
{
	return payment_type;
}

void
PaymentAuthorizationResource::setPaymentType(SimpleReferenceResource«int»  payment_type)
{
	this->payment_type = payment_type;
}


