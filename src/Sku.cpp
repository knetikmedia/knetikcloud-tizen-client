#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Sku.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Sku::Sku()
{
	//__init();
}

Sku::~Sku()
{
	//__cleanup();
}

void
Sku::__init()
{
	//
	//new std::map()std::map> additional_properties;
	//
	//
	//
	//currency_code = std::string();
	//
	//
	//description = std::string();
	//
	//
	//inventory = int(0);
	//
	//
	//min_inventory_threshold = int(0);
	//
	//
	//not_available = bool(false);
	//
	//
	//not_displayable = bool(false);
	//
	//
	//original_price = long(0);
	//
	//
	//price = long(0);
	//
	//
	//published = bool(false);
	//
	//
	//sale_id = int(0);
	//
	//
	//sale_name = std::string();
	//
	//
	//sku = std::string();
	//
	//
	//start_date = long(0);
	//
	//
	//stop_date = long(0);
	//
}

void
Sku::__cleanup()
{
	//if(additional_properties != NULL) {
	//additional_properties.RemoveAll(true);
	//delete additional_properties;
	//additional_properties = NULL;
	//}
	//if(currency_code != NULL) {
	//
	//delete currency_code;
	//currency_code = NULL;
	//}
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
	//}
	//if(inventory != NULL) {
	//
	//delete inventory;
	//inventory = NULL;
	//}
	//if(min_inventory_threshold != NULL) {
	//
	//delete min_inventory_threshold;
	//min_inventory_threshold = NULL;
	//}
	//if(not_available != NULL) {
	//
	//delete not_available;
	//not_available = NULL;
	//}
	//if(not_displayable != NULL) {
	//
	//delete not_displayable;
	//not_displayable = NULL;
	//}
	//if(original_price != NULL) {
	//
	//delete original_price;
	//original_price = NULL;
	//}
	//if(price != NULL) {
	//
	//delete price;
	//price = NULL;
	//}
	//if(published != NULL) {
	//
	//delete published;
	//published = NULL;
	//}
	//if(sale_id != NULL) {
	//
	//delete sale_id;
	//sale_id = NULL;
	//}
	//if(sale_name != NULL) {
	//
	//delete sale_name;
	//sale_name = NULL;
	//}
	//if(sku != NULL) {
	//
	//delete sku;
	//sku = NULL;
	//}
	//if(start_date != NULL) {
	//
	//delete start_date;
	//start_date = NULL;
	//}
	//if(stop_date != NULL) {
	//
	//delete stop_date;
	//stop_date = NULL;
	//}
	//
}

void
Sku::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *additional_propertiesKey = "additional_properties";
	node = json_object_get_member(pJsonObject, additional_propertiesKey);
	if (node !=NULL) {
	
		{
			JsonObject* json_obj = json_node_get_object(node);
			map<string,string> new_map;
			json_object_foreach_member(json_obj,helper_func,&new_map);
			additional_properties = new_map;
		}
		
	}
	const gchar *currency_codeKey = "currency_code";
	node = json_object_get_member(pJsonObject, currency_codeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&currency_code, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *descriptionKey = "description";
	node = json_object_get_member(pJsonObject, descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *inventoryKey = "inventory";
	node = json_object_get_member(pJsonObject, inventoryKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&inventory, node, "int", "");
		} else {
			
		}
	}
	const gchar *min_inventory_thresholdKey = "min_inventory_threshold";
	node = json_object_get_member(pJsonObject, min_inventory_thresholdKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&min_inventory_threshold, node, "int", "");
		} else {
			
		}
	}
	const gchar *not_availableKey = "not_available";
	node = json_object_get_member(pJsonObject, not_availableKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&not_available, node, "bool", "");
		} else {
			
		}
	}
	const gchar *not_displayableKey = "not_displayable";
	node = json_object_get_member(pJsonObject, not_displayableKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&not_displayable, node, "bool", "");
		} else {
			
		}
	}
	const gchar *original_priceKey = "original_price";
	node = json_object_get_member(pJsonObject, original_priceKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&original_price, node, "long long", "");
		} else {
			
		}
	}
	const gchar *priceKey = "price";
	node = json_object_get_member(pJsonObject, priceKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&price, node, "long long", "");
		} else {
			
		}
	}
	const gchar *publishedKey = "published";
	node = json_object_get_member(pJsonObject, publishedKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&published, node, "bool", "");
		} else {
			
		}
	}
	const gchar *sale_idKey = "sale_id";
	node = json_object_get_member(pJsonObject, sale_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&sale_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *sale_nameKey = "sale_name";
	node = json_object_get_member(pJsonObject, sale_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&sale_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *skuKey = "sku";
	node = json_object_get_member(pJsonObject, skuKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&sku, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *start_dateKey = "start_date";
	node = json_object_get_member(pJsonObject, start_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&start_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *stop_dateKey = "stop_date";
	node = json_object_get_member(pJsonObject, stop_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&stop_date, node, "long long", "");
		} else {
			
		}
	}
}

Sku::Sku(char* json)
{
	this->fromJson(json);
}

char*
Sku::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;


	{
		JsonObject* json_obj;
		map<string, string> new_list = static_cast<map <string, string> > (getAdditionalProperties());
		json_obj = json_object_new();
		for (map<string, string>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			string obj = (*it).first;
			string obj2 = (*it).second;
			JsonNode* tempnode = json_from_string(obj2.c_str(),NULL);
			json_object_set_member(json_obj, obj.c_str(), tempnode);
		}
	node = json_node_alloc();
	json_node_init_object(node, json_obj);
	json_object_unref(json_obj);
	}

	const gchar *additional_propertiesKey = "additional_properties";
	json_object_set_member(pJsonObject, additional_propertiesKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCurrencyCode();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *currency_codeKey = "currency_code";
	json_object_set_member(pJsonObject, currency_codeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *descriptionKey = "description";
	json_object_set_member(pJsonObject, descriptionKey, node);
	if (isprimitive("int")) {
		int obj = getInventory();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *inventoryKey = "inventory";
	json_object_set_member(pJsonObject, inventoryKey, node);
	if (isprimitive("int")) {
		int obj = getMinInventoryThreshold();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *min_inventory_thresholdKey = "min_inventory_threshold";
	json_object_set_member(pJsonObject, min_inventory_thresholdKey, node);
	if (isprimitive("bool")) {
		bool obj = getNotAvailable();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *not_availableKey = "not_available";
	json_object_set_member(pJsonObject, not_availableKey, node);
	if (isprimitive("bool")) {
		bool obj = getNotDisplayable();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *not_displayableKey = "not_displayable";
	json_object_set_member(pJsonObject, not_displayableKey, node);
	if (isprimitive("long long")) {
		long long obj = getOriginalPrice();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *original_priceKey = "original_price";
	json_object_set_member(pJsonObject, original_priceKey, node);
	if (isprimitive("long long")) {
		long long obj = getPrice();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *priceKey = "price";
	json_object_set_member(pJsonObject, priceKey, node);
	if (isprimitive("bool")) {
		bool obj = getPublished();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *publishedKey = "published";
	json_object_set_member(pJsonObject, publishedKey, node);
	if (isprimitive("int")) {
		int obj = getSaleId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *sale_idKey = "sale_id";
	json_object_set_member(pJsonObject, sale_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSaleName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *sale_nameKey = "sale_name";
	json_object_set_member(pJsonObject, sale_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSku();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *skuKey = "sku";
	json_object_set_member(pJsonObject, skuKey, node);
	if (isprimitive("long long")) {
		long long obj = getStartDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *start_dateKey = "start_date";
	json_object_set_member(pJsonObject, start_dateKey, node);
	if (isprimitive("long long")) {
		long long obj = getStopDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *stop_dateKey = "stop_date";
	json_object_set_member(pJsonObject, stop_dateKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::map<string, string>
Sku::getAdditionalProperties()
{
	return additional_properties;
}

void
Sku::setAdditionalProperties(std::map <string, string> additional_properties)
{
	this->additional_properties = additional_properties;
}

std::string
Sku::getCurrencyCode()
{
	return currency_code;
}

void
Sku::setCurrencyCode(std::string  currency_code)
{
	this->currency_code = currency_code;
}

std::string
Sku::getDescription()
{
	return description;
}

void
Sku::setDescription(std::string  description)
{
	this->description = description;
}

int
Sku::getInventory()
{
	return inventory;
}

void
Sku::setInventory(int  inventory)
{
	this->inventory = inventory;
}

int
Sku::getMinInventoryThreshold()
{
	return min_inventory_threshold;
}

void
Sku::setMinInventoryThreshold(int  min_inventory_threshold)
{
	this->min_inventory_threshold = min_inventory_threshold;
}

bool
Sku::getNotAvailable()
{
	return not_available;
}

void
Sku::setNotAvailable(bool  not_available)
{
	this->not_available = not_available;
}

bool
Sku::getNotDisplayable()
{
	return not_displayable;
}

void
Sku::setNotDisplayable(bool  not_displayable)
{
	this->not_displayable = not_displayable;
}

long long
Sku::getOriginalPrice()
{
	return original_price;
}

void
Sku::setOriginalPrice(long long  original_price)
{
	this->original_price = original_price;
}

long long
Sku::getPrice()
{
	return price;
}

void
Sku::setPrice(long long  price)
{
	this->price = price;
}

bool
Sku::getPublished()
{
	return published;
}

void
Sku::setPublished(bool  published)
{
	this->published = published;
}

int
Sku::getSaleId()
{
	return sale_id;
}

void
Sku::setSaleId(int  sale_id)
{
	this->sale_id = sale_id;
}

std::string
Sku::getSaleName()
{
	return sale_name;
}

void
Sku::setSaleName(std::string  sale_name)
{
	this->sale_name = sale_name;
}

std::string
Sku::getSku()
{
	return sku;
}

void
Sku::setSku(std::string  sku)
{
	this->sku = sku;
}

long long
Sku::getStartDate()
{
	return start_date;
}

void
Sku::setStartDate(long long  start_date)
{
	this->start_date = start_date;
}

long long
Sku::getStopDate()
{
	return stop_date;
}

void
Sku::setStopDate(long long  stop_date)
{
	this->stop_date = stop_date;
}


