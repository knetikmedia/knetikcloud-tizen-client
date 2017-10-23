#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "AggregateInvoiceReportResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

AggregateInvoiceReportResource::AggregateInvoiceReportResource()
{
	//__init();
}

AggregateInvoiceReportResource::~AggregateInvoiceReportResource()
{
	//__cleanup();
}

void
AggregateInvoiceReportResource::__init()
{
	//
	//
	//count = long(0);
	//
	//
	//date = std::string();
	//
	//
	//revenue = long(0);
	//
	//
	//user_count = long(0);
	//
}

void
AggregateInvoiceReportResource::__cleanup()
{
	//if(count != NULL) {
	//
	//delete count;
	//count = NULL;
	//}
	//if(date != NULL) {
	//
	//delete date;
	//date = NULL;
	//}
	//if(revenue != NULL) {
	//
	//delete revenue;
	//revenue = NULL;
	//}
	//if(user_count != NULL) {
	//
	//delete user_count;
	//user_count = NULL;
	//}
	//
}

void
AggregateInvoiceReportResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *countKey = "count";
	node = json_object_get_member(pJsonObject, countKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&count, node, "long long", "");
		} else {
			
		}
	}
	const gchar *dateKey = "date";
	node = json_object_get_member(pJsonObject, dateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&date, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *revenueKey = "revenue";
	node = json_object_get_member(pJsonObject, revenueKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&revenue, node, "long long", "");
		} else {
			
		}
	}
	const gchar *user_countKey = "user_count";
	node = json_object_get_member(pJsonObject, user_countKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&user_count, node, "long long", "");
		} else {
			
		}
	}
}

AggregateInvoiceReportResource::AggregateInvoiceReportResource(char* json)
{
	this->fromJson(json);
}

char*
AggregateInvoiceReportResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getCount();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *countKey = "count";
	json_object_set_member(pJsonObject, countKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *dateKey = "date";
	json_object_set_member(pJsonObject, dateKey, node);
	if (isprimitive("long long")) {
		long long obj = getRevenue();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *revenueKey = "revenue";
	json_object_set_member(pJsonObject, revenueKey, node);
	if (isprimitive("long long")) {
		long long obj = getUserCount();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *user_countKey = "user_count";
	json_object_set_member(pJsonObject, user_countKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
AggregateInvoiceReportResource::getCount()
{
	return count;
}

void
AggregateInvoiceReportResource::setCount(long long  count)
{
	this->count = count;
}

std::string
AggregateInvoiceReportResource::getDate()
{
	return date;
}

void
AggregateInvoiceReportResource::setDate(std::string  date)
{
	this->date = date;
}

long long
AggregateInvoiceReportResource::getRevenue()
{
	return revenue;
}

void
AggregateInvoiceReportResource::setRevenue(long long  revenue)
{
	this->revenue = revenue;
}

long long
AggregateInvoiceReportResource::getUserCount()
{
	return user_count;
}

void
AggregateInvoiceReportResource::setUserCount(long long  user_count)
{
	this->user_count = user_count;
}


