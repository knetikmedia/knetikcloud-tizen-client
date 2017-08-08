#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "RefundRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

RefundRequest::RefundRequest()
{
	//__init();
}

RefundRequest::~RefundRequest()
{
	//__cleanup();
}

void
RefundRequest::__init()
{
	//
	//
	//amount = double(0);
	//
	//
	//bundle_sku = std::string();
	//
	//
	//notes = std::string();
	//
	//
	//sku = std::string();
	//
}

void
RefundRequest::__cleanup()
{
	//if(amount != NULL) {
	//
	//delete amount;
	//amount = NULL;
	//}
	//if(bundle_sku != NULL) {
	//
	//delete bundle_sku;
	//bundle_sku = NULL;
	//}
	//if(notes != NULL) {
	//
	//delete notes;
	//notes = NULL;
	//}
	//if(sku != NULL) {
	//
	//delete sku;
	//sku = NULL;
	//}
	//
}

void
RefundRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *amountKey = "amount";
	node = json_object_get_member(pJsonObject, amountKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&amount, node, "double", "");
		} else {
			
		}
	}
	const gchar *bundle_skuKey = "bundle_sku";
	node = json_object_get_member(pJsonObject, bundle_skuKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&bundle_sku, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *notesKey = "notes";
	node = json_object_get_member(pJsonObject, notesKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&notes, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *skuKey = "sku";
	node = json_object_get_member(pJsonObject, skuKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&sku, node, "std::string", "");
		} else {
			
		}
	}
}

RefundRequest::RefundRequest(char* json)
{
	this->fromJson(json);
}

char*
RefundRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("double")) {
		double obj = getAmount();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *amountKey = "amount";
	json_object_set_member(pJsonObject, amountKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBundleSku();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *bundle_skuKey = "bundle_sku";
	json_object_set_member(pJsonObject, bundle_skuKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getNotes();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *notesKey = "notes";
	json_object_set_member(pJsonObject, notesKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSku();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *skuKey = "sku";
	json_object_set_member(pJsonObject, skuKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

double
RefundRequest::getAmount()
{
	return amount;
}

void
RefundRequest::setAmount(double  amount)
{
	this->amount = amount;
}

std::string
RefundRequest::getBundleSku()
{
	return bundle_sku;
}

void
RefundRequest::setBundleSku(std::string  bundle_sku)
{
	this->bundle_sku = bundle_sku;
}

std::string
RefundRequest::getNotes()
{
	return notes;
}

void
RefundRequest::setNotes(std::string  notes)
{
	this->notes = notes;
}

std::string
RefundRequest::getSku()
{
	return sku;
}

void
RefundRequest::setSku(std::string  sku)
{
	this->sku = sku;
}


