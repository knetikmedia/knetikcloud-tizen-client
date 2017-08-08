#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "WalletTotalResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

WalletTotalResponse::WalletTotalResponse()
{
	//__init();
}

WalletTotalResponse::~WalletTotalResponse()
{
	//__cleanup();
}

void
WalletTotalResponse::__init()
{
	//
	//
	//currency_code = std::string();
	//
	//
	//total = double(0);
	//
}

void
WalletTotalResponse::__cleanup()
{
	//if(currency_code != NULL) {
	//
	//delete currency_code;
	//currency_code = NULL;
	//}
	//if(total != NULL) {
	//
	//delete total;
	//total = NULL;
	//}
	//
}

void
WalletTotalResponse::fromJson(char* jsonStr)
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
	const gchar *totalKey = "total";
	node = json_object_get_member(pJsonObject, totalKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&total, node, "double", "");
		} else {
			
		}
	}
}

WalletTotalResponse::WalletTotalResponse(char* json)
{
	this->fromJson(json);
}

char*
WalletTotalResponse::toJson()
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
	if (isprimitive("double")) {
		double obj = getTotal();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *totalKey = "total";
	json_object_set_member(pJsonObject, totalKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
WalletTotalResponse::getCurrencyCode()
{
	return currency_code;
}

void
WalletTotalResponse::setCurrencyCode(std::string  currency_code)
{
	this->currency_code = currency_code;
}

double
WalletTotalResponse::getTotal()
{
	return total;
}

void
WalletTotalResponse::setTotal(double  total)
{
	this->total = total;
}


