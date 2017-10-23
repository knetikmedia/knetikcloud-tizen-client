#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "UsageInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;

UsageInfo::UsageInfo()
{
	//__init();
}

UsageInfo::~UsageInfo()
{
	//__cleanup();
}

void
UsageInfo::__init()
{
	//
	//
	//count = long(0);
	//
	//
	//date = long(0);
	//
	//
	//method = std::string();
	//
	//
	//url = std::string();
	//
}

void
UsageInfo::__cleanup()
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
	//if(method != NULL) {
	//
	//delete method;
	//method = NULL;
	//}
	//if(url != NULL) {
	//
	//delete url;
	//url = NULL;
	//}
	//
}

void
UsageInfo::fromJson(char* jsonStr)
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
	

		if (isprimitive("long long")) {
			jsonToValue(&date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *methodKey = "method";
	node = json_object_get_member(pJsonObject, methodKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&method, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *urlKey = "url";
	node = json_object_get_member(pJsonObject, urlKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&url, node, "std::string", "");
		} else {
			
		}
	}
}

UsageInfo::UsageInfo(char* json)
{
	this->fromJson(json);
}

char*
UsageInfo::toJson()
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
	if (isprimitive("long long")) {
		long long obj = getDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *dateKey = "date";
	json_object_set_member(pJsonObject, dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMethod();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *methodKey = "method";
	json_object_set_member(pJsonObject, methodKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUrl();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *urlKey = "url";
	json_object_set_member(pJsonObject, urlKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
UsageInfo::getCount()
{
	return count;
}

void
UsageInfo::setCount(long long  count)
{
	this->count = count;
}

long long
UsageInfo::getDate()
{
	return date;
}

void
UsageInfo::setDate(long long  date)
{
	this->date = date;
}

std::string
UsageInfo::getMethod()
{
	return method;
}

void
UsageInfo::setMethod(std::string  method)
{
	this->method = method;
}

std::string
UsageInfo::getUrl()
{
	return url;
}

void
UsageInfo::setUrl(std::string  url)
{
	this->url = url;
}


