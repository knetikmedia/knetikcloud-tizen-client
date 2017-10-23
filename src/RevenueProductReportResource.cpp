#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "RevenueProductReportResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

RevenueProductReportResource::RevenueProductReportResource()
{
	//__init();
}

RevenueProductReportResource::~RevenueProductReportResource()
{
	//__cleanup();
}

void
RevenueProductReportResource::__init()
{
	//
	//
	//item_id = int(0);
	//
	//
	//item_name = std::string();
	//
	//
	//revenue = long(0);
	//
	//
	//volume = long(0);
	//
}

void
RevenueProductReportResource::__cleanup()
{
	//if(item_id != NULL) {
	//
	//delete item_id;
	//item_id = NULL;
	//}
	//if(item_name != NULL) {
	//
	//delete item_name;
	//item_name = NULL;
	//}
	//if(revenue != NULL) {
	//
	//delete revenue;
	//revenue = NULL;
	//}
	//if(volume != NULL) {
	//
	//delete volume;
	//volume = NULL;
	//}
	//
}

void
RevenueProductReportResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *item_idKey = "item_id";
	node = json_object_get_member(pJsonObject, item_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&item_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *item_nameKey = "item_name";
	node = json_object_get_member(pJsonObject, item_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&item_name, node, "std::string", "");
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
	const gchar *volumeKey = "volume";
	node = json_object_get_member(pJsonObject, volumeKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&volume, node, "long long", "");
		} else {
			
		}
	}
}

RevenueProductReportResource::RevenueProductReportResource(char* json)
{
	this->fromJson(json);
}

char*
RevenueProductReportResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getItemId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *item_idKey = "item_id";
	json_object_set_member(pJsonObject, item_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getItemName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *item_nameKey = "item_name";
	json_object_set_member(pJsonObject, item_nameKey, node);
	if (isprimitive("long long")) {
		long long obj = getRevenue();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *revenueKey = "revenue";
	json_object_set_member(pJsonObject, revenueKey, node);
	if (isprimitive("long long")) {
		long long obj = getVolume();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *volumeKey = "volume";
	json_object_set_member(pJsonObject, volumeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
RevenueProductReportResource::getItemId()
{
	return item_id;
}

void
RevenueProductReportResource::setItemId(int  item_id)
{
	this->item_id = item_id;
}

std::string
RevenueProductReportResource::getItemName()
{
	return item_name;
}

void
RevenueProductReportResource::setItemName(std::string  item_name)
{
	this->item_name = item_name;
}

long long
RevenueProductReportResource::getRevenue()
{
	return revenue;
}

void
RevenueProductReportResource::setRevenue(long long  revenue)
{
	this->revenue = revenue;
}

long long
RevenueProductReportResource::getVolume()
{
	return volume;
}

void
RevenueProductReportResource::setVolume(long long  volume)
{
	this->volume = volume;
}


