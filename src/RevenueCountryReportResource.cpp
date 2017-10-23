#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "RevenueCountryReportResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

RevenueCountryReportResource::RevenueCountryReportResource()
{
	//__init();
}

RevenueCountryReportResource::~RevenueCountryReportResource()
{
	//__cleanup();
}

void
RevenueCountryReportResource::__init()
{
	//
	//
	//country = std::string();
	//
	//
	//revenue = long(0);
	//
	//
	//volume = long(0);
	//
}

void
RevenueCountryReportResource::__cleanup()
{
	//if(country != NULL) {
	//
	//delete country;
	//country = NULL;
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
RevenueCountryReportResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *countryKey = "country";
	node = json_object_get_member(pJsonObject, countryKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&country, node, "std::string", "");
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

RevenueCountryReportResource::RevenueCountryReportResource(char* json)
{
	this->fromJson(json);
}

char*
RevenueCountryReportResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getCountry();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *countryKey = "country";
	json_object_set_member(pJsonObject, countryKey, node);
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

std::string
RevenueCountryReportResource::getCountry()
{
	return country;
}

void
RevenueCountryReportResource::setCountry(std::string  country)
{
	this->country = country;
}

long long
RevenueCountryReportResource::getRevenue()
{
	return revenue;
}

void
RevenueCountryReportResource::setRevenue(long long  revenue)
{
	this->revenue = revenue;
}

long long
RevenueCountryReportResource::getVolume()
{
	return volume;
}

void
RevenueCountryReportResource::setVolume(long long  volume)
{
	this->volume = volume;
}


