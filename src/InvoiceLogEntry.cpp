#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "InvoiceLogEntry.h"

using namespace std;
using namespace Tizen::ArtikCloud;

InvoiceLogEntry::InvoiceLogEntry()
{
	//__init();
}

InvoiceLogEntry::~InvoiceLogEntry()
{
	//__cleanup();
}

void
InvoiceLogEntry::__init()
{
	//
	//
	//date = long(0);
	//
	//
	//invoice_id = int(0);
	//
	//
	//message = std::string();
	//
	//
	//type = std::string();
	//
}

void
InvoiceLogEntry::__cleanup()
{
	//if(date != NULL) {
	//
	//delete date;
	//date = NULL;
	//}
	//if(invoice_id != NULL) {
	//
	//delete invoice_id;
	//invoice_id = NULL;
	//}
	//if(message != NULL) {
	//
	//delete message;
	//message = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//
}

void
InvoiceLogEntry::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *dateKey = "date";
	node = json_object_get_member(pJsonObject, dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&date, node, "long long", "");
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
	const gchar *messageKey = "message";
	node = json_object_get_member(pJsonObject, messageKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&message, node, "std::string", "");
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

InvoiceLogEntry::InvoiceLogEntry(char* json)
{
	this->fromJson(json);
}

char*
InvoiceLogEntry::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *dateKey = "date";
	json_object_set_member(pJsonObject, dateKey, node);
	if (isprimitive("int")) {
		int obj = getInvoiceId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *invoice_idKey = "invoice_id";
	json_object_set_member(pJsonObject, invoice_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMessage();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *messageKey = "message";
	json_object_set_member(pJsonObject, messageKey, node);
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

long long
InvoiceLogEntry::getDate()
{
	return date;
}

void
InvoiceLogEntry::setDate(long long  date)
{
	this->date = date;
}

int
InvoiceLogEntry::getInvoiceId()
{
	return invoice_id;
}

void
InvoiceLogEntry::setInvoiceId(int  invoice_id)
{
	this->invoice_id = invoice_id;
}

std::string
InvoiceLogEntry::getMessage()
{
	return message;
}

void
InvoiceLogEntry::setMessage(std::string  message)
{
	this->message = message;
}

std::string
InvoiceLogEntry::getType()
{
	return type;
}

void
InvoiceLogEntry::setType(std::string  type)
{
	this->type = type;
}


