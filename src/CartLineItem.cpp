#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CartLineItem.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CartLineItem::CartLineItem()
{
	//__init();
}

CartLineItem::~CartLineItem()
{
	//__cleanup();
}

void
CartLineItem::__init()
{
	//
	//
	//currency_code = std::string();
	//
	//
	//description = std::string();
	//
	//
	//discount = new Discount();
	//
	//
	//line_total = double(0);
	//
	//
	//name = std::string();
	//
	//
	//original_line_total = double(0);
	//
	//
	//original_unit_price = double(0);
	//
	//
	//qty = int(0);
	//
	//
	//sale_name = std::string();
	//
	//
	//sku = std::string();
	//
	//
	//sku_description = std::string();
	//
	//
	//store_item_id = int(0);
	//
	//new std::list()std::list> tags;
	//
	//
	//
	//thumb_url = std::string();
	//
	//
	//unique_key = std::string();
	//
	//
	//unit_price = double(0);
	//
	//
	//vendor_id = int(0);
	//
	//
	//vendor_name = std::string();
	//
}

void
CartLineItem::__cleanup()
{
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
	//if(discount != NULL) {
	//
	//delete discount;
	//discount = NULL;
	//}
	//if(line_total != NULL) {
	//
	//delete line_total;
	//line_total = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(original_line_total != NULL) {
	//
	//delete original_line_total;
	//original_line_total = NULL;
	//}
	//if(original_unit_price != NULL) {
	//
	//delete original_unit_price;
	//original_unit_price = NULL;
	//}
	//if(qty != NULL) {
	//
	//delete qty;
	//qty = NULL;
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
	//if(sku_description != NULL) {
	//
	//delete sku_description;
	//sku_description = NULL;
	//}
	//if(store_item_id != NULL) {
	//
	//delete store_item_id;
	//store_item_id = NULL;
	//}
	//if(tags != NULL) {
	//tags.RemoveAll(true);
	//delete tags;
	//tags = NULL;
	//}
	//if(thumb_url != NULL) {
	//
	//delete thumb_url;
	//thumb_url = NULL;
	//}
	//if(unique_key != NULL) {
	//
	//delete unique_key;
	//unique_key = NULL;
	//}
	//if(unit_price != NULL) {
	//
	//delete unit_price;
	//unit_price = NULL;
	//}
	//if(vendor_id != NULL) {
	//
	//delete vendor_id;
	//vendor_id = NULL;
	//}
	//if(vendor_name != NULL) {
	//
	//delete vendor_name;
	//vendor_name = NULL;
	//}
	//
}

void
CartLineItem::fromJson(char* jsonStr)
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
	const gchar *descriptionKey = "description";
	node = json_object_get_member(pJsonObject, descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *discountKey = "discount";
	node = json_object_get_member(pJsonObject, discountKey);
	if (node !=NULL) {
	

		if (isprimitive("Discount")) {
			jsonToValue(&discount, node, "Discount", "Discount");
		} else {
			
			Discount* obj = static_cast<Discount*> (&discount);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *line_totalKey = "line_total";
	node = json_object_get_member(pJsonObject, line_totalKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&line_total, node, "double", "");
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
	const gchar *original_line_totalKey = "original_line_total";
	node = json_object_get_member(pJsonObject, original_line_totalKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&original_line_total, node, "double", "");
		} else {
			
		}
	}
	const gchar *original_unit_priceKey = "original_unit_price";
	node = json_object_get_member(pJsonObject, original_unit_priceKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&original_unit_price, node, "double", "");
		} else {
			
		}
	}
	const gchar *qtyKey = "qty";
	node = json_object_get_member(pJsonObject, qtyKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&qty, node, "int", "");
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
	const gchar *sku_descriptionKey = "sku_description";
	node = json_object_get_member(pJsonObject, sku_descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&sku_description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *store_item_idKey = "store_item_id";
	node = json_object_get_member(pJsonObject, store_item_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&store_item_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *tagsKey = "tags";
	node = json_object_get_member(pJsonObject, tagsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<std::string> new_list;
			std::string inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("std::string")) {
					jsonToValue(&inst, temp_json, "std::string", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			tags = new_list;
		}
		
	}
	const gchar *thumb_urlKey = "thumb_url";
	node = json_object_get_member(pJsonObject, thumb_urlKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&thumb_url, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *unique_keyKey = "unique_key";
	node = json_object_get_member(pJsonObject, unique_keyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&unique_key, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *unit_priceKey = "unit_price";
	node = json_object_get_member(pJsonObject, unit_priceKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&unit_price, node, "double", "");
		} else {
			
		}
	}
	const gchar *vendor_idKey = "vendor_id";
	node = json_object_get_member(pJsonObject, vendor_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&vendor_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *vendor_nameKey = "vendor_name";
	node = json_object_get_member(pJsonObject, vendor_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vendor_name, node, "std::string", "");
		} else {
			
		}
	}
}

CartLineItem::CartLineItem(char* json)
{
	this->fromJson(json);
}

char*
CartLineItem::toJson()
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
		std::string obj = getDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *descriptionKey = "description";
	json_object_set_member(pJsonObject, descriptionKey, node);
	if (isprimitive("Discount")) {
		Discount obj = getDiscount();
		node = converttoJson(&obj, "Discount", "");
	}
	else {
		
		Discount obj = static_cast<Discount> (getDiscount());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *discountKey = "discount";
	json_object_set_member(pJsonObject, discountKey, node);
	if (isprimitive("double")) {
		double obj = getLineTotal();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *line_totalKey = "line_total";
	json_object_set_member(pJsonObject, line_totalKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("double")) {
		double obj = getOriginalLineTotal();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *original_line_totalKey = "original_line_total";
	json_object_set_member(pJsonObject, original_line_totalKey, node);
	if (isprimitive("double")) {
		double obj = getOriginalUnitPrice();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *original_unit_priceKey = "original_unit_price";
	json_object_set_member(pJsonObject, original_unit_priceKey, node);
	if (isprimitive("int")) {
		int obj = getQty();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *qtyKey = "qty";
	json_object_set_member(pJsonObject, qtyKey, node);
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
	if (isprimitive("std::string")) {
		std::string obj = getSkuDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *sku_descriptionKey = "sku_description";
	json_object_set_member(pJsonObject, sku_descriptionKey, node);
	if (isprimitive("int")) {
		int obj = getStoreItemId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *store_item_idKey = "store_item_id";
	json_object_set_member(pJsonObject, store_item_idKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getTags());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getTags());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *tagsKey = "tags";
	json_object_set_member(pJsonObject, tagsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getThumbUrl();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *thumb_urlKey = "thumb_url";
	json_object_set_member(pJsonObject, thumb_urlKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUniqueKey();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *unique_keyKey = "unique_key";
	json_object_set_member(pJsonObject, unique_keyKey, node);
	if (isprimitive("double")) {
		double obj = getUnitPrice();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *unit_priceKey = "unit_price";
	json_object_set_member(pJsonObject, unit_priceKey, node);
	if (isprimitive("int")) {
		int obj = getVendorId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *vendor_idKey = "vendor_id";
	json_object_set_member(pJsonObject, vendor_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVendorName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vendor_nameKey = "vendor_name";
	json_object_set_member(pJsonObject, vendor_nameKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
CartLineItem::getCurrencyCode()
{
	return currency_code;
}

void
CartLineItem::setCurrencyCode(std::string  currency_code)
{
	this->currency_code = currency_code;
}

std::string
CartLineItem::getDescription()
{
	return description;
}

void
CartLineItem::setDescription(std::string  description)
{
	this->description = description;
}

Discount
CartLineItem::getDiscount()
{
	return discount;
}

void
CartLineItem::setDiscount(Discount  discount)
{
	this->discount = discount;
}

double
CartLineItem::getLineTotal()
{
	return line_total;
}

void
CartLineItem::setLineTotal(double  line_total)
{
	this->line_total = line_total;
}

std::string
CartLineItem::getName()
{
	return name;
}

void
CartLineItem::setName(std::string  name)
{
	this->name = name;
}

double
CartLineItem::getOriginalLineTotal()
{
	return original_line_total;
}

void
CartLineItem::setOriginalLineTotal(double  original_line_total)
{
	this->original_line_total = original_line_total;
}

double
CartLineItem::getOriginalUnitPrice()
{
	return original_unit_price;
}

void
CartLineItem::setOriginalUnitPrice(double  original_unit_price)
{
	this->original_unit_price = original_unit_price;
}

int
CartLineItem::getQty()
{
	return qty;
}

void
CartLineItem::setQty(int  qty)
{
	this->qty = qty;
}

std::string
CartLineItem::getSaleName()
{
	return sale_name;
}

void
CartLineItem::setSaleName(std::string  sale_name)
{
	this->sale_name = sale_name;
}

std::string
CartLineItem::getSku()
{
	return sku;
}

void
CartLineItem::setSku(std::string  sku)
{
	this->sku = sku;
}

std::string
CartLineItem::getSkuDescription()
{
	return sku_description;
}

void
CartLineItem::setSkuDescription(std::string  sku_description)
{
	this->sku_description = sku_description;
}

int
CartLineItem::getStoreItemId()
{
	return store_item_id;
}

void
CartLineItem::setStoreItemId(int  store_item_id)
{
	this->store_item_id = store_item_id;
}

std::list<std::string>
CartLineItem::getTags()
{
	return tags;
}

void
CartLineItem::setTags(std::list <std::string> tags)
{
	this->tags = tags;
}

std::string
CartLineItem::getThumbUrl()
{
	return thumb_url;
}

void
CartLineItem::setThumbUrl(std::string  thumb_url)
{
	this->thumb_url = thumb_url;
}

std::string
CartLineItem::getUniqueKey()
{
	return unique_key;
}

void
CartLineItem::setUniqueKey(std::string  unique_key)
{
	this->unique_key = unique_key;
}

double
CartLineItem::getUnitPrice()
{
	return unit_price;
}

void
CartLineItem::setUnitPrice(double  unit_price)
{
	this->unit_price = unit_price;
}

int
CartLineItem::getVendorId()
{
	return vendor_id;
}

void
CartLineItem::setVendorId(int  vendor_id)
{
	this->vendor_id = vendor_id;
}

std::string
CartLineItem::getVendorName()
{
	return vendor_name;
}

void
CartLineItem::setVendorName(std::string  vendor_name)
{
	this->vendor_name = vendor_name;
}


