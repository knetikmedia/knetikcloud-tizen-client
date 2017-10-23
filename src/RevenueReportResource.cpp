#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "RevenueReportResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

RevenueReportResource::RevenueReportResource()
{
	//__init();
}

RevenueReportResource::~RevenueReportResource()
{
	//__cleanup();
}

void
RevenueReportResource::__init()
{
	//
	//
	//customer_count = long(0);
	//
	//
	//sale_count = long(0);
	//
	//
	//sales_average = long(0);
	//
	//
	//sales_total = long(0);
	//
}

void
RevenueReportResource::__cleanup()
{
	//if(customer_count != NULL) {
	//
	//delete customer_count;
	//customer_count = NULL;
	//}
	//if(sale_count != NULL) {
	//
	//delete sale_count;
	//sale_count = NULL;
	//}
	//if(sales_average != NULL) {
	//
	//delete sales_average;
	//sales_average = NULL;
	//}
	//if(sales_total != NULL) {
	//
	//delete sales_total;
	//sales_total = NULL;
	//}
	//
}

void
RevenueReportResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *customer_countKey = "customer_count";
	node = json_object_get_member(pJsonObject, customer_countKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&customer_count, node, "long long", "");
		} else {
			
		}
	}
	const gchar *sale_countKey = "sale_count";
	node = json_object_get_member(pJsonObject, sale_countKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&sale_count, node, "long long", "");
		} else {
			
		}
	}
	const gchar *sales_averageKey = "sales_average";
	node = json_object_get_member(pJsonObject, sales_averageKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&sales_average, node, "long long", "");
		} else {
			
		}
	}
	const gchar *sales_totalKey = "sales_total";
	node = json_object_get_member(pJsonObject, sales_totalKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&sales_total, node, "long long", "");
		} else {
			
		}
	}
}

RevenueReportResource::RevenueReportResource(char* json)
{
	this->fromJson(json);
}

char*
RevenueReportResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getCustomerCount();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *customer_countKey = "customer_count";
	json_object_set_member(pJsonObject, customer_countKey, node);
	if (isprimitive("long long")) {
		long long obj = getSaleCount();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *sale_countKey = "sale_count";
	json_object_set_member(pJsonObject, sale_countKey, node);
	if (isprimitive("long long")) {
		long long obj = getSalesAverage();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *sales_averageKey = "sales_average";
	json_object_set_member(pJsonObject, sales_averageKey, node);
	if (isprimitive("long long")) {
		long long obj = getSalesTotal();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *sales_totalKey = "sales_total";
	json_object_set_member(pJsonObject, sales_totalKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
RevenueReportResource::getCustomerCount()
{
	return customer_count;
}

void
RevenueReportResource::setCustomerCount(long long  customer_count)
{
	this->customer_count = customer_count;
}

long long
RevenueReportResource::getSaleCount()
{
	return sale_count;
}

void
RevenueReportResource::setSaleCount(long long  sale_count)
{
	this->sale_count = sale_count;
}

long long
RevenueReportResource::getSalesAverage()
{
	return sales_average;
}

void
RevenueReportResource::setSalesAverage(long long  sales_average)
{
	this->sales_average = sales_average;
}

long long
RevenueReportResource::getSalesTotal()
{
	return sales_total;
}

void
RevenueReportResource::setSalesTotal(long long  sales_total)
{
	this->sales_total = sales_total;
}


