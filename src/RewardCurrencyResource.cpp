#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "RewardCurrencyResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

RewardCurrencyResource::RewardCurrencyResource()
{
	//__init();
}

RewardCurrencyResource::~RewardCurrencyResource()
{
	//__cleanup();
}

void
RewardCurrencyResource::__init()
{
	//
	//
	//currency_code = std::string();
	//
	//
	//currency_name = std::string();
	//
	//
	//max_rank = int(0);
	//
	//
	//min_rank = int(0);
	//
	//
	//percent = bool(false);
	//
	//
	//value = double(0);
	//
}

void
RewardCurrencyResource::__cleanup()
{
	//if(currency_code != NULL) {
	//
	//delete currency_code;
	//currency_code = NULL;
	//}
	//if(currency_name != NULL) {
	//
	//delete currency_name;
	//currency_name = NULL;
	//}
	//if(max_rank != NULL) {
	//
	//delete max_rank;
	//max_rank = NULL;
	//}
	//if(min_rank != NULL) {
	//
	//delete min_rank;
	//min_rank = NULL;
	//}
	//if(percent != NULL) {
	//
	//delete percent;
	//percent = NULL;
	//}
	//if(value != NULL) {
	//
	//delete value;
	//value = NULL;
	//}
	//
}

void
RewardCurrencyResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *currency_codeKey = "currency_code";
	node = json_object_get_member(pJsonObject, currency_codeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&currency_code, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *currency_nameKey = "currency_name";
	node = json_object_get_member(pJsonObject, currency_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&currency_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *max_rankKey = "max_rank";
	node = json_object_get_member(pJsonObject, max_rankKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&max_rank, node, "int", "");
		} else {
			
		}
	}
	const gchar *min_rankKey = "min_rank";
	node = json_object_get_member(pJsonObject, min_rankKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&min_rank, node, "int", "");
		} else {
			
		}
	}
	const gchar *percentKey = "percent";
	node = json_object_get_member(pJsonObject, percentKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&percent, node, "bool", "");
		} else {
			
		}
	}
	const gchar *valueKey = "value";
	node = json_object_get_member(pJsonObject, valueKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&value, node, "double", "");
		} else {
			
		}
	}
}

RewardCurrencyResource::RewardCurrencyResource(char* json)
{
	this->fromJson(json);
}

char*
RewardCurrencyResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getCurrencyCode();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *currency_codeKey = "currency_code";
	json_object_set_member(pJsonObject, currency_codeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCurrencyName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *currency_nameKey = "currency_name";
	json_object_set_member(pJsonObject, currency_nameKey, node);
	if (isprimitive("int")) {
		int obj = getMaxRank();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *max_rankKey = "max_rank";
	json_object_set_member(pJsonObject, max_rankKey, node);
	if (isprimitive("int")) {
		int obj = getMinRank();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *min_rankKey = "min_rank";
	json_object_set_member(pJsonObject, min_rankKey, node);
	if (isprimitive("bool")) {
		bool obj = getPercent();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *percentKey = "percent";
	json_object_set_member(pJsonObject, percentKey, node);
	if (isprimitive("double")) {
		double obj = getValue();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *valueKey = "value";
	json_object_set_member(pJsonObject, valueKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
RewardCurrencyResource::getCurrencyCode()
{
	return currency_code;
}

void
RewardCurrencyResource::setCurrencyCode(std::string  currency_code)
{
	this->currency_code = currency_code;
}

std::string
RewardCurrencyResource::getCurrencyName()
{
	return currency_name;
}

void
RewardCurrencyResource::setCurrencyName(std::string  currency_name)
{
	this->currency_name = currency_name;
}

int
RewardCurrencyResource::getMaxRank()
{
	return max_rank;
}

void
RewardCurrencyResource::setMaxRank(int  max_rank)
{
	this->max_rank = max_rank;
}

int
RewardCurrencyResource::getMinRank()
{
	return min_rank;
}

void
RewardCurrencyResource::setMinRank(int  min_rank)
{
	this->min_rank = min_rank;
}

bool
RewardCurrencyResource::getPercent()
{
	return percent;
}

void
RewardCurrencyResource::setPercent(bool  percent)
{
	this->percent = percent;
}

double
RewardCurrencyResource::getValue()
{
	return value;
}

void
RewardCurrencyResource::setValue(double  value)
{
	this->value = value;
}


