#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CatalogSale.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CatalogSale::CatalogSale()
{
	//__init();
}

CatalogSale::~CatalogSale()
{
	//__cleanup();
}

void
CatalogSale::__init()
{
	//
	//
	//currency_code = std::string();
	//
	//
	//discount_type = std::string();
	//
	//
	//discount_value = double(0);
	//
	//
	//id = int(0);
	//
	//
	//item = int(0);
	//
	//
	//long_description = std::string();
	//
	//
	//name = std::string();
	//
	//
	//sale_end_date = long(0);
	//
	//
	//sale_start_date = long(0);
	//
	//
	//short_description = std::string();
	//
	//
	//tag = std::string();
	//
	//
	//vendor = int(0);
	//
}

void
CatalogSale::__cleanup()
{
	//if(currency_code != NULL) {
	//
	//delete currency_code;
	//currency_code = NULL;
	//}
	//if(discount_type != NULL) {
	//
	//delete discount_type;
	//discount_type = NULL;
	//}
	//if(discount_value != NULL) {
	//
	//delete discount_value;
	//discount_value = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(item != NULL) {
	//
	//delete item;
	//item = NULL;
	//}
	//if(long_description != NULL) {
	//
	//delete long_description;
	//long_description = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(sale_end_date != NULL) {
	//
	//delete sale_end_date;
	//sale_end_date = NULL;
	//}
	//if(sale_start_date != NULL) {
	//
	//delete sale_start_date;
	//sale_start_date = NULL;
	//}
	//if(short_description != NULL) {
	//
	//delete short_description;
	//short_description = NULL;
	//}
	//if(tag != NULL) {
	//
	//delete tag;
	//tag = NULL;
	//}
	//if(vendor != NULL) {
	//
	//delete vendor;
	//vendor = NULL;
	//}
	//
}

void
CatalogSale::fromJson(char* jsonStr)
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
	const gchar *discount_typeKey = "discount_type";
	node = json_object_get_member(pJsonObject, discount_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&discount_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *discount_valueKey = "discount_value";
	node = json_object_get_member(pJsonObject, discount_valueKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&discount_value, node, "double", "");
		} else {
			
		}
	}
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&id, node, "int", "");
		} else {
			
		}
	}
	const gchar *itemKey = "item";
	node = json_object_get_member(pJsonObject, itemKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&item, node, "int", "");
		} else {
			
		}
	}
	const gchar *long_descriptionKey = "long_description";
	node = json_object_get_member(pJsonObject, long_descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&long_description, node, "std::string", "");
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
	const gchar *sale_end_dateKey = "sale_end_date";
	node = json_object_get_member(pJsonObject, sale_end_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&sale_end_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *sale_start_dateKey = "sale_start_date";
	node = json_object_get_member(pJsonObject, sale_start_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&sale_start_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *short_descriptionKey = "short_description";
	node = json_object_get_member(pJsonObject, short_descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&short_description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *tagKey = "tag";
	node = json_object_get_member(pJsonObject, tagKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&tag, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vendorKey = "vendor";
	node = json_object_get_member(pJsonObject, vendorKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&vendor, node, "int", "");
		} else {
			
		}
	}
}

CatalogSale::CatalogSale(char* json)
{
	this->fromJson(json);
}

char*
CatalogSale::toJson()
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
		std::string obj = getDiscountType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *discount_typeKey = "discount_type";
	json_object_set_member(pJsonObject, discount_typeKey, node);
	if (isprimitive("double")) {
		double obj = getDiscountValue();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *discount_valueKey = "discount_value";
	json_object_set_member(pJsonObject, discount_valueKey, node);
	if (isprimitive("int")) {
		int obj = getId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("int")) {
		int obj = getItem();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *itemKey = "item";
	json_object_set_member(pJsonObject, itemKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLongDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *long_descriptionKey = "long_description";
	json_object_set_member(pJsonObject, long_descriptionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("long long")) {
		long long obj = getSaleEndDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *sale_end_dateKey = "sale_end_date";
	json_object_set_member(pJsonObject, sale_end_dateKey, node);
	if (isprimitive("long long")) {
		long long obj = getSaleStartDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *sale_start_dateKey = "sale_start_date";
	json_object_set_member(pJsonObject, sale_start_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getShortDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *short_descriptionKey = "short_description";
	json_object_set_member(pJsonObject, short_descriptionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTag();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *tagKey = "tag";
	json_object_set_member(pJsonObject, tagKey, node);
	if (isprimitive("int")) {
		int obj = getVendor();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *vendorKey = "vendor";
	json_object_set_member(pJsonObject, vendorKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
CatalogSale::getCurrencyCode()
{
	return currency_code;
}

void
CatalogSale::setCurrencyCode(std::string  currency_code)
{
	this->currency_code = currency_code;
}

std::string
CatalogSale::getDiscountType()
{
	return discount_type;
}

void
CatalogSale::setDiscountType(std::string  discount_type)
{
	this->discount_type = discount_type;
}

double
CatalogSale::getDiscountValue()
{
	return discount_value;
}

void
CatalogSale::setDiscountValue(double  discount_value)
{
	this->discount_value = discount_value;
}

int
CatalogSale::getId()
{
	return id;
}

void
CatalogSale::setId(int  id)
{
	this->id = id;
}

int
CatalogSale::getItem()
{
	return item;
}

void
CatalogSale::setItem(int  item)
{
	this->item = item;
}

std::string
CatalogSale::getLongDescription()
{
	return long_description;
}

void
CatalogSale::setLongDescription(std::string  long_description)
{
	this->long_description = long_description;
}

std::string
CatalogSale::getName()
{
	return name;
}

void
CatalogSale::setName(std::string  name)
{
	this->name = name;
}

long long
CatalogSale::getSaleEndDate()
{
	return sale_end_date;
}

void
CatalogSale::setSaleEndDate(long long  sale_end_date)
{
	this->sale_end_date = sale_end_date;
}

long long
CatalogSale::getSaleStartDate()
{
	return sale_start_date;
}

void
CatalogSale::setSaleStartDate(long long  sale_start_date)
{
	this->sale_start_date = sale_start_date;
}

std::string
CatalogSale::getShortDescription()
{
	return short_description;
}

void
CatalogSale::setShortDescription(std::string  short_description)
{
	this->short_description = short_description;
}

std::string
CatalogSale::getTag()
{
	return tag;
}

void
CatalogSale::setTag(std::string  tag)
{
	this->tag = tag;
}

int
CatalogSale::getVendor()
{
	return vendor;
}

void
CatalogSale::setVendor(int  vendor)
{
	this->vendor = vendor;
}


