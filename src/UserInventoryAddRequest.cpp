#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "UserInventoryAddRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

UserInventoryAddRequest::UserInventoryAddRequest()
{
	//__init();
}

UserInventoryAddRequest::~UserInventoryAddRequest()
{
	//__cleanup();
}

void
UserInventoryAddRequest::__init()
{
	//
	//
	//note = std::string();
	//
	//new std::list()std::list> overrides;
	//
	//
	//
	//skip_invoice = bool(false);
	//
	//
	//sku = std::string();
	//
}

void
UserInventoryAddRequest::__cleanup()
{
	//if(note != NULL) {
	//
	//delete note;
	//note = NULL;
	//}
	//if(overrides != NULL) {
	//overrides.RemoveAll(true);
	//delete overrides;
	//overrides = NULL;
	//}
	//if(skip_invoice != NULL) {
	//
	//delete skip_invoice;
	//skip_invoice = NULL;
	//}
	//if(sku != NULL) {
	//
	//delete sku;
	//sku = NULL;
	//}
	//
}

void
UserInventoryAddRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *noteKey = "note";
	node = json_object_get_member(pJsonObject, noteKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&note, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *overridesKey = "overrides";
	node = json_object_get_member(pJsonObject, overridesKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<std::string> new_list;
			std::string inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("std::string")) {
					jsonToValue(&inst, temp_json, "std::string", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			overrides = new_list;
		}
		
	}
	const gchar *skip_invoiceKey = "skip_invoice";
	node = json_object_get_member(pJsonObject, skip_invoiceKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&skip_invoice, node, "bool", "");
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

UserInventoryAddRequest::UserInventoryAddRequest(char* json)
{
	this->fromJson(json);
}

char*
UserInventoryAddRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getNote();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *noteKey = "note";
	json_object_set_member(pJsonObject, noteKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getOverrides());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getOverrides());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *overridesKey = "overrides";
	json_object_set_member(pJsonObject, overridesKey, node);
	if (isprimitive("bool")) {
		bool obj = getSkipInvoice();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *skip_invoiceKey = "skip_invoice";
	json_object_set_member(pJsonObject, skip_invoiceKey, node);
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

std::string
UserInventoryAddRequest::getNote()
{
	return note;
}

void
UserInventoryAddRequest::setNote(std::string  note)
{
	this->note = note;
}

std::list<std::string>
UserInventoryAddRequest::getOverrides()
{
	return overrides;
}

void
UserInventoryAddRequest::setOverrides(std::list <std::string> overrides)
{
	this->overrides = overrides;
}

bool
UserInventoryAddRequest::getSkipInvoice()
{
	return skip_invoice;
}

void
UserInventoryAddRequest::setSkipInvoice(bool  skip_invoice)
{
	this->skip_invoice = skip_invoice;
}

std::string
UserInventoryAddRequest::getSku()
{
	return sku;
}

void
UserInventoryAddRequest::setSku(std::string  sku)
{
	this->sku = sku;
}


