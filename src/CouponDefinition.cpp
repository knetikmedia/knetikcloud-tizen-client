#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CouponDefinition.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CouponDefinition::CouponDefinition()
{
	//__init();
}

CouponDefinition::~CouponDefinition()
{
	//__cleanup();
}

void
CouponDefinition::__init()
{
	//
	//
	//code = std::string();
	//
	//
	//description = std::string();
	//
	//
	//discount_type = std::string();
	//
	//
	//exclusive = bool(false);
	//
	//
	//max_discount = double(0);
	//
	//
	//max_quantity = int(0);
	//
	//
	//min_cart_total = double(0);
	//
	//
	//name = std::string();
	//
	//
	//self_exclusive = bool(false);
	//
	//
	//target_item_id = int(0);
	//
	//
	//type = std::string();
	//
	//
	//unique_key = std::string();
	//
	//new std::list()std::list> valid_for_tags;
	//
	//
	//
	//value = double(0);
	//
	//
	//vendor_id = int(0);
	//
}

void
CouponDefinition::__cleanup()
{
	//if(code != NULL) {
	//
	//delete code;
	//code = NULL;
	//}
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
	//}
	//if(discount_type != NULL) {
	//
	//delete discount_type;
	//discount_type = NULL;
	//}
	//if(exclusive != NULL) {
	//
	//delete exclusive;
	//exclusive = NULL;
	//}
	//if(max_discount != NULL) {
	//
	//delete max_discount;
	//max_discount = NULL;
	//}
	//if(max_quantity != NULL) {
	//
	//delete max_quantity;
	//max_quantity = NULL;
	//}
	//if(min_cart_total != NULL) {
	//
	//delete min_cart_total;
	//min_cart_total = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(self_exclusive != NULL) {
	//
	//delete self_exclusive;
	//self_exclusive = NULL;
	//}
	//if(target_item_id != NULL) {
	//
	//delete target_item_id;
	//target_item_id = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(unique_key != NULL) {
	//
	//delete unique_key;
	//unique_key = NULL;
	//}
	//if(valid_for_tags != NULL) {
	//valid_for_tags.RemoveAll(true);
	//delete valid_for_tags;
	//valid_for_tags = NULL;
	//}
	//if(value != NULL) {
	//
	//delete value;
	//value = NULL;
	//}
	//if(vendor_id != NULL) {
	//
	//delete vendor_id;
	//vendor_id = NULL;
	//}
	//
}

void
CouponDefinition::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *codeKey = "code";
	node = json_object_get_member(pJsonObject, codeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&code, node, "std::string", "");
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
	const gchar *discount_typeKey = "discount_type";
	node = json_object_get_member(pJsonObject, discount_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&discount_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *exclusiveKey = "exclusive";
	node = json_object_get_member(pJsonObject, exclusiveKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&exclusive, node, "bool", "");
		} else {
			
		}
	}
	const gchar *max_discountKey = "max_discount";
	node = json_object_get_member(pJsonObject, max_discountKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&max_discount, node, "double", "");
		} else {
			
		}
	}
	const gchar *max_quantityKey = "max_quantity";
	node = json_object_get_member(pJsonObject, max_quantityKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&max_quantity, node, "int", "");
		} else {
			
		}
	}
	const gchar *min_cart_totalKey = "min_cart_total";
	node = json_object_get_member(pJsonObject, min_cart_totalKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&min_cart_total, node, "double", "");
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
	const gchar *self_exclusiveKey = "self_exclusive";
	node = json_object_get_member(pJsonObject, self_exclusiveKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&self_exclusive, node, "bool", "");
		} else {
			
		}
	}
	const gchar *target_item_idKey = "target_item_id";
	node = json_object_get_member(pJsonObject, target_item_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&target_item_id, node, "int", "");
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
	const gchar *unique_keyKey = "unique_key";
	node = json_object_get_member(pJsonObject, unique_keyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&unique_key, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *valid_for_tagsKey = "valid_for_tags";
	node = json_object_get_member(pJsonObject, valid_for_tagsKey);
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
			valid_for_tags = new_list;
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
	const gchar *vendor_idKey = "vendor_id";
	node = json_object_get_member(pJsonObject, vendor_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&vendor_id, node, "int", "");
		} else {
			
		}
	}
}

CouponDefinition::CouponDefinition(char* json)
{
	this->fromJson(json);
}

char*
CouponDefinition::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getCode();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *codeKey = "code";
	json_object_set_member(pJsonObject, codeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *descriptionKey = "description";
	json_object_set_member(pJsonObject, descriptionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDiscountType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *discount_typeKey = "discount_type";
	json_object_set_member(pJsonObject, discount_typeKey, node);
	if (isprimitive("bool")) {
		bool obj = getExclusive();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *exclusiveKey = "exclusive";
	json_object_set_member(pJsonObject, exclusiveKey, node);
	if (isprimitive("double")) {
		double obj = getMaxDiscount();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *max_discountKey = "max_discount";
	json_object_set_member(pJsonObject, max_discountKey, node);
	if (isprimitive("int")) {
		int obj = getMaxQuantity();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *max_quantityKey = "max_quantity";
	json_object_set_member(pJsonObject, max_quantityKey, node);
	if (isprimitive("double")) {
		double obj = getMinCartTotal();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *min_cart_totalKey = "min_cart_total";
	json_object_set_member(pJsonObject, min_cart_totalKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("bool")) {
		bool obj = getSelfExclusive();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *self_exclusiveKey = "self_exclusive";
	json_object_set_member(pJsonObject, self_exclusiveKey, node);
	if (isprimitive("int")) {
		int obj = getTargetItemId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *target_item_idKey = "target_item_id";
	json_object_set_member(pJsonObject, target_item_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUniqueKey();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *unique_keyKey = "unique_key";
	json_object_set_member(pJsonObject, unique_keyKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getValidForTags());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getValidForTags());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *valid_for_tagsKey = "valid_for_tags";
	json_object_set_member(pJsonObject, valid_for_tagsKey, node);
	if (isprimitive("double")) {
		double obj = getValue();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *valueKey = "value";
	json_object_set_member(pJsonObject, valueKey, node);
	if (isprimitive("int")) {
		int obj = getVendorId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *vendor_idKey = "vendor_id";
	json_object_set_member(pJsonObject, vendor_idKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
CouponDefinition::getCode()
{
	return code;
}

void
CouponDefinition::setCode(std::string  code)
{
	this->code = code;
}

std::string
CouponDefinition::getDescription()
{
	return description;
}

void
CouponDefinition::setDescription(std::string  description)
{
	this->description = description;
}

std::string
CouponDefinition::getDiscountType()
{
	return discount_type;
}

void
CouponDefinition::setDiscountType(std::string  discount_type)
{
	this->discount_type = discount_type;
}

bool
CouponDefinition::getExclusive()
{
	return exclusive;
}

void
CouponDefinition::setExclusive(bool  exclusive)
{
	this->exclusive = exclusive;
}

double
CouponDefinition::getMaxDiscount()
{
	return max_discount;
}

void
CouponDefinition::setMaxDiscount(double  max_discount)
{
	this->max_discount = max_discount;
}

int
CouponDefinition::getMaxQuantity()
{
	return max_quantity;
}

void
CouponDefinition::setMaxQuantity(int  max_quantity)
{
	this->max_quantity = max_quantity;
}

double
CouponDefinition::getMinCartTotal()
{
	return min_cart_total;
}

void
CouponDefinition::setMinCartTotal(double  min_cart_total)
{
	this->min_cart_total = min_cart_total;
}

std::string
CouponDefinition::getName()
{
	return name;
}

void
CouponDefinition::setName(std::string  name)
{
	this->name = name;
}

bool
CouponDefinition::getSelfExclusive()
{
	return self_exclusive;
}

void
CouponDefinition::setSelfExclusive(bool  self_exclusive)
{
	this->self_exclusive = self_exclusive;
}

int
CouponDefinition::getTargetItemId()
{
	return target_item_id;
}

void
CouponDefinition::setTargetItemId(int  target_item_id)
{
	this->target_item_id = target_item_id;
}

std::string
CouponDefinition::getType()
{
	return type;
}

void
CouponDefinition::setType(std::string  type)
{
	this->type = type;
}

std::string
CouponDefinition::getUniqueKey()
{
	return unique_key;
}

void
CouponDefinition::setUniqueKey(std::string  unique_key)
{
	this->unique_key = unique_key;
}

std::list<std::string>
CouponDefinition::getValidForTags()
{
	return valid_for_tags;
}

void
CouponDefinition::setValidForTags(std::list <std::string> valid_for_tags)
{
	this->valid_for_tags = valid_for_tags;
}

double
CouponDefinition::getValue()
{
	return value;
}

void
CouponDefinition::setValue(double  value)
{
	this->value = value;
}

int
CouponDefinition::getVendorId()
{
	return vendor_id;
}

void
CouponDefinition::setVendorId(int  vendor_id)
{
	this->vendor_id = vendor_id;
}


