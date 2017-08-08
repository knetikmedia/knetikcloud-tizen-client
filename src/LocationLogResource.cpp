#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "LocationLogResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

LocationLogResource::LocationLogResource()
{
	//__init();
}

LocationLogResource::~LocationLogResource()
{
	//__cleanup();
}

void
LocationLogResource::__init()
{
	//
	//
	//country = std::string();
	//
	//
	//ip = std::string();
	//
	//
	//time = long(0);
	//
}

void
LocationLogResource::__cleanup()
{
	//if(country != NULL) {
	//
	//delete country;
	//country = NULL;
	//}
	//if(ip != NULL) {
	//
	//delete ip;
	//ip = NULL;
	//}
	//if(time != NULL) {
	//
	//delete time;
	//time = NULL;
	//}
	//
}

void
LocationLogResource::fromJson(char* jsonStr)
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
	const gchar *ipKey = "ip";
	node = json_object_get_member(pJsonObject, ipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ip, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *timeKey = "time";
	node = json_object_get_member(pJsonObject, timeKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&time, node, "long long", "");
		} else {
			
		}
	}
}

LocationLogResource::LocationLogResource(char* json)
{
	this->fromJson(json);
}

char*
LocationLogResource::toJson()
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
	if (isprimitive("std::string")) {
		std::string obj = getIp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ipKey = "ip";
	json_object_set_member(pJsonObject, ipKey, node);
	if (isprimitive("long long")) {
		long long obj = getTime();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *timeKey = "time";
	json_object_set_member(pJsonObject, timeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
LocationLogResource::getCountry()
{
	return country;
}

void
LocationLogResource::setCountry(std::string  country)
{
	this->country = country;
}

std::string
LocationLogResource::getIp()
{
	return ip;
}

void
LocationLogResource::setIp(std::string  ip)
{
	this->ip = ip;
}

long long
LocationLogResource::getTime()
{
	return time;
}

void
LocationLogResource::setTime(long long  time)
{
	this->time = time;
}


