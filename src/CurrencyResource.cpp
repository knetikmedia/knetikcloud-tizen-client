#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CurrencyResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CurrencyResource::CurrencyResource()
{
	//__init();
}

CurrencyResource::~CurrencyResource()
{
	//__cleanup();
}

void
CurrencyResource::__init()
{
	//
	//
	//active = bool(false);
	//
	//
	//code = std::string();
	//
	//
	//created_date = long(0);
	//
	//
	//default_currency = bool(false);
	//
	//
	//factor = long(0);
	//
	//
	//icon = std::string();
	//
	//
	//name = std::string();
	//
	//
	//type = std::string();
	//
	//
	//updated_date = long(0);
	//
}

void
CurrencyResource::__cleanup()
{
	//if(active != NULL) {
	//
	//delete active;
	//active = NULL;
	//}
	//if(code != NULL) {
	//
	//delete code;
	//code = NULL;
	//}
	//if(created_date != NULL) {
	//
	//delete created_date;
	//created_date = NULL;
	//}
	//if(default_currency != NULL) {
	//
	//delete default_currency;
	//default_currency = NULL;
	//}
	//if(factor != NULL) {
	//
	//delete factor;
	//factor = NULL;
	//}
	//if(icon != NULL) {
	//
	//delete icon;
	//icon = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//
}

void
CurrencyResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *activeKey = "active";
	node = json_object_get_member(pJsonObject, activeKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&active, node, "bool", "");
		} else {
			
		}
	}
	const gchar *codeKey = "code";
	node = json_object_get_member(pJsonObject, codeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&code, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *created_dateKey = "created_date";
	node = json_object_get_member(pJsonObject, created_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&created_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *default_currencyKey = "default_currency";
	node = json_object_get_member(pJsonObject, default_currencyKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&default_currency, node, "bool", "");
		} else {
			
		}
	}
	const gchar *factorKey = "factor";
	node = json_object_get_member(pJsonObject, factorKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&factor, node, "long long", "");
		} else {
			
		}
	}
	const gchar *iconKey = "icon";
	node = json_object_get_member(pJsonObject, iconKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&icon, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
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
	const gchar *updated_dateKey = "updated_date";
	node = json_object_get_member(pJsonObject, updated_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&updated_date, node, "long long", "");
		} else {
			
		}
	}
}

CurrencyResource::CurrencyResource(char* json)
{
	this->fromJson(json);
}

char*
CurrencyResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getActive();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *activeKey = "active";
	json_object_set_member(pJsonObject, activeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCode();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *codeKey = "code";
	json_object_set_member(pJsonObject, codeKey, node);
	if (isprimitive("long long")) {
		long long obj = getCreatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *created_dateKey = "created_date";
	json_object_set_member(pJsonObject, created_dateKey, node);
	if (isprimitive("bool")) {
		bool obj = getDefaultCurrency();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *default_currencyKey = "default_currency";
	json_object_set_member(pJsonObject, default_currencyKey, node);
	if (isprimitive("long long")) {
		long long obj = getFactor();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *factorKey = "factor";
	json_object_set_member(pJsonObject, factorKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getIcon();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *iconKey = "icon";
	json_object_set_member(pJsonObject, iconKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	if (isprimitive("long long")) {
		long long obj = getUpdatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *updated_dateKey = "updated_date";
	json_object_set_member(pJsonObject, updated_dateKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
CurrencyResource::getActive()
{
	return active;
}

void
CurrencyResource::setActive(bool  active)
{
	this->active = active;
}

std::string
CurrencyResource::getCode()
{
	return code;
}

void
CurrencyResource::setCode(std::string  code)
{
	this->code = code;
}

long long
CurrencyResource::getCreatedDate()
{
	return created_date;
}

void
CurrencyResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

bool
CurrencyResource::getDefaultCurrency()
{
	return default_currency;
}

void
CurrencyResource::setDefaultCurrency(bool  default_currency)
{
	this->default_currency = default_currency;
}

long long
CurrencyResource::getFactor()
{
	return factor;
}

void
CurrencyResource::setFactor(long long  factor)
{
	this->factor = factor;
}

std::string
CurrencyResource::getIcon()
{
	return icon;
}

void
CurrencyResource::setIcon(std::string  icon)
{
	this->icon = icon;
}

std::string
CurrencyResource::getName()
{
	return name;
}

void
CurrencyResource::setName(std::string  name)
{
	this->name = name;
}

std::string
CurrencyResource::getType()
{
	return type;
}

void
CurrencyResource::setType(std::string  type)
{
	this->type = type;
}

long long
CurrencyResource::getUpdatedDate()
{
	return updated_date;
}

void
CurrencyResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}


