#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CouponItem.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CouponItem::CouponItem()
{
	//__init();
}

CouponItem::~CouponItem()
{
	//__cleanup();
}

void
CouponItem::__init()
{
	//
	//new std::map()std::map> additional_properties;
	//
	//
	//new std::list()std::list> behaviors;
	//
	//
	//
	//category = std::string();
	//
	//
	//created_date = long(0);
	//
	//
	//id = int(0);
	//
	//
	//long_description = std::string();
	//
	//
	//name = std::string();
	//
	//
	//short_description = std::string();
	//
	//
	//sort = int(0);
	//
	//new std::list()std::list> tags;
	//
	//
	//
	//_template = std::string();
	//
	//
	//type_hint = std::string();
	//
	//
	//unique_key = std::string();
	//
	//
	//updated_date = long(0);
	//
	//
	//displayable = bool(false);
	//
	//new std::list()std::list> geo_country_list;
	//
	//
	//
	//geo_policy_type = std::string();
	//
	//
	//shipping_tier = int(0);
	//
	//new std::list()std::list> skus;
	//
	//
	//
	//store_end = long(0);
	//
	//
	//store_start = long(0);
	//
	//
	//vendor_id = int(0);
	//
	//
	//coupon_type_hint = std::string();
	//
	//
	//discount_max = long(0);
	//
	//
	//discount_min_cart_value = long(0);
	//
	//
	//discount_type = std::string();
	//
	//
	//discount_value = long(0);
	//
	//
	//exclusive = bool(false);
	//
	//
	//item_id = int(0);
	//
	//
	//max_quantity = int(0);
	//
	//
	//self_exclusive = bool(false);
	//
	//new std::list()std::list> valid_for_tags;
	//
	//
}

void
CouponItem::__cleanup()
{
	//if(additional_properties != NULL) {
	//additional_properties.RemoveAll(true);
	//delete additional_properties;
	//additional_properties = NULL;
	//}
	//if(behaviors != NULL) {
	//behaviors.RemoveAll(true);
	//delete behaviors;
	//behaviors = NULL;
	//}
	//if(category != NULL) {
	//
	//delete category;
	//category = NULL;
	//}
	//if(created_date != NULL) {
	//
	//delete created_date;
	//created_date = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
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
	//if(short_description != NULL) {
	//
	//delete short_description;
	//short_description = NULL;
	//}
	//if(sort != NULL) {
	//
	//delete sort;
	//sort = NULL;
	//}
	//if(tags != NULL) {
	//tags.RemoveAll(true);
	//delete tags;
	//tags = NULL;
	//}
	//if(_template != NULL) {
	//
	//delete _template;
	//_template = NULL;
	//}
	//if(type_hint != NULL) {
	//
	//delete type_hint;
	//type_hint = NULL;
	//}
	//if(unique_key != NULL) {
	//
	//delete unique_key;
	//unique_key = NULL;
	//}
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//if(displayable != NULL) {
	//
	//delete displayable;
	//displayable = NULL;
	//}
	//if(geo_country_list != NULL) {
	//geo_country_list.RemoveAll(true);
	//delete geo_country_list;
	//geo_country_list = NULL;
	//}
	//if(geo_policy_type != NULL) {
	//
	//delete geo_policy_type;
	//geo_policy_type = NULL;
	//}
	//if(shipping_tier != NULL) {
	//
	//delete shipping_tier;
	//shipping_tier = NULL;
	//}
	//if(skus != NULL) {
	//skus.RemoveAll(true);
	//delete skus;
	//skus = NULL;
	//}
	//if(store_end != NULL) {
	//
	//delete store_end;
	//store_end = NULL;
	//}
	//if(store_start != NULL) {
	//
	//delete store_start;
	//store_start = NULL;
	//}
	//if(vendor_id != NULL) {
	//
	//delete vendor_id;
	//vendor_id = NULL;
	//}
	//if(coupon_type_hint != NULL) {
	//
	//delete coupon_type_hint;
	//coupon_type_hint = NULL;
	//}
	//if(discount_max != NULL) {
	//
	//delete discount_max;
	//discount_max = NULL;
	//}
	//if(discount_min_cart_value != NULL) {
	//
	//delete discount_min_cart_value;
	//discount_min_cart_value = NULL;
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
	//if(exclusive != NULL) {
	//
	//delete exclusive;
	//exclusive = NULL;
	//}
	//if(item_id != NULL) {
	//
	//delete item_id;
	//item_id = NULL;
	//}
	//if(max_quantity != NULL) {
	//
	//delete max_quantity;
	//max_quantity = NULL;
	//}
	//if(self_exclusive != NULL) {
	//
	//delete self_exclusive;
	//self_exclusive = NULL;
	//}
	//if(valid_for_tags != NULL) {
	//valid_for_tags.RemoveAll(true);
	//delete valid_for_tags;
	//valid_for_tags = NULL;
	//}
	//
}

void
CouponItem::fromJson(char* jsonStr)
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
	const gchar *behaviorsKey = "behaviors";
	node = json_object_get_member(pJsonObject, behaviorsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<Behavior> new_list;
			Behavior inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("Behavior")) {
					jsonToValue(&inst, temp_json, "Behavior", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			behaviors = new_list;
		}
		
	}
	const gchar *categoryKey = "category";
	node = json_object_get_member(pJsonObject, categoryKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&category, node, "std::string", "");
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
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&id, node, "int", "");
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
	const gchar *short_descriptionKey = "short_description";
	node = json_object_get_member(pJsonObject, short_descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&short_description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *sortKey = "sort";
	node = json_object_get_member(pJsonObject, sortKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&sort, node, "int", "");
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
	const gchar *_templateKey = "template";
	node = json_object_get_member(pJsonObject, _templateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&_template, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *type_hintKey = "type_hint";
	node = json_object_get_member(pJsonObject, type_hintKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type_hint, node, "std::string", "");
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
	const gchar *updated_dateKey = "updated_date";
	node = json_object_get_member(pJsonObject, updated_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&updated_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *displayableKey = "displayable";
	node = json_object_get_member(pJsonObject, displayableKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&displayable, node, "bool", "");
		} else {
			
		}
	}
	const gchar *geo_country_listKey = "geo_country_list";
	node = json_object_get_member(pJsonObject, geo_country_listKey);
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
			geo_country_list = new_list;
		}
		
	}
	const gchar *geo_policy_typeKey = "geo_policy_type";
	node = json_object_get_member(pJsonObject, geo_policy_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&geo_policy_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *shipping_tierKey = "shipping_tier";
	node = json_object_get_member(pJsonObject, shipping_tierKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&shipping_tier, node, "int", "");
		} else {
			
		}
	}
	const gchar *skusKey = "skus";
	node = json_object_get_member(pJsonObject, skusKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<Sku> new_list;
			Sku inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("Sku")) {
					jsonToValue(&inst, temp_json, "Sku", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			skus = new_list;
		}
		
	}
	const gchar *store_endKey = "store_end";
	node = json_object_get_member(pJsonObject, store_endKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&store_end, node, "long long", "");
		} else {
			
		}
	}
	const gchar *store_startKey = "store_start";
	node = json_object_get_member(pJsonObject, store_startKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&store_start, node, "long long", "");
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
	const gchar *coupon_type_hintKey = "coupon_type_hint";
	node = json_object_get_member(pJsonObject, coupon_type_hintKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&coupon_type_hint, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *discount_maxKey = "discount_max";
	node = json_object_get_member(pJsonObject, discount_maxKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&discount_max, node, "long long", "");
		} else {
			
		}
	}
	const gchar *discount_min_cart_valueKey = "discount_min_cart_value";
	node = json_object_get_member(pJsonObject, discount_min_cart_valueKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&discount_min_cart_value, node, "long long", "");
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
	

		if (isprimitive("long long")) {
			jsonToValue(&discount_value, node, "long long", "");
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
	const gchar *item_idKey = "item_id";
	node = json_object_get_member(pJsonObject, item_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&item_id, node, "int", "");
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
	const gchar *self_exclusiveKey = "self_exclusive";
	node = json_object_get_member(pJsonObject, self_exclusiveKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&self_exclusive, node, "bool", "");
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
}

CouponItem::CouponItem(char* json)
{
	this->fromJson(json);
}

char*
CouponItem::toJson()
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
	if (isprimitive("Behavior")) {
		list<Behavior> new_list = static_cast<list <Behavior> > (getBehaviors());
		node = converttoJson(&new_list, "Behavior", "array");
	} else {
		node = json_node_alloc();
		list<Behavior> new_list = static_cast<list <Behavior> > (getBehaviors());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<Behavior>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			Behavior obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *behaviorsKey = "behaviors";
	json_object_set_member(pJsonObject, behaviorsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCategory();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *categoryKey = "category";
	json_object_set_member(pJsonObject, categoryKey, node);
	if (isprimitive("long long")) {
		long long obj = getCreatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *created_dateKey = "created_date";
	json_object_set_member(pJsonObject, created_dateKey, node);
	if (isprimitive("int")) {
		int obj = getId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
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
	if (isprimitive("std::string")) {
		std::string obj = getShortDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *short_descriptionKey = "short_description";
	json_object_set_member(pJsonObject, short_descriptionKey, node);
	if (isprimitive("int")) {
		int obj = getSort();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *sortKey = "sort";
	json_object_set_member(pJsonObject, sortKey, node);
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
		std::string obj = getTemplate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *_templateKey = "template";
	json_object_set_member(pJsonObject, _templateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTypeHint();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *type_hintKey = "type_hint";
	json_object_set_member(pJsonObject, type_hintKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUniqueKey();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *unique_keyKey = "unique_key";
	json_object_set_member(pJsonObject, unique_keyKey, node);
	if (isprimitive("long long")) {
		long long obj = getUpdatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *updated_dateKey = "updated_date";
	json_object_set_member(pJsonObject, updated_dateKey, node);
	if (isprimitive("bool")) {
		bool obj = getDisplayable();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *displayableKey = "displayable";
	json_object_set_member(pJsonObject, displayableKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getGeoCountryList());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getGeoCountryList());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *geo_country_listKey = "geo_country_list";
	json_object_set_member(pJsonObject, geo_country_listKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getGeoPolicyType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *geo_policy_typeKey = "geo_policy_type";
	json_object_set_member(pJsonObject, geo_policy_typeKey, node);
	if (isprimitive("int")) {
		int obj = getShippingTier();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *shipping_tierKey = "shipping_tier";
	json_object_set_member(pJsonObject, shipping_tierKey, node);
	if (isprimitive("Sku")) {
		list<Sku> new_list = static_cast<list <Sku> > (getSkus());
		node = converttoJson(&new_list, "Sku", "array");
	} else {
		node = json_node_alloc();
		list<Sku> new_list = static_cast<list <Sku> > (getSkus());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<Sku>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			Sku obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *skusKey = "skus";
	json_object_set_member(pJsonObject, skusKey, node);
	if (isprimitive("long long")) {
		long long obj = getStoreEnd();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *store_endKey = "store_end";
	json_object_set_member(pJsonObject, store_endKey, node);
	if (isprimitive("long long")) {
		long long obj = getStoreStart();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *store_startKey = "store_start";
	json_object_set_member(pJsonObject, store_startKey, node);
	if (isprimitive("int")) {
		int obj = getVendorId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *vendor_idKey = "vendor_id";
	json_object_set_member(pJsonObject, vendor_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCouponTypeHint();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *coupon_type_hintKey = "coupon_type_hint";
	json_object_set_member(pJsonObject, coupon_type_hintKey, node);
	if (isprimitive("long long")) {
		long long obj = getDiscountMax();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *discount_maxKey = "discount_max";
	json_object_set_member(pJsonObject, discount_maxKey, node);
	if (isprimitive("long long")) {
		long long obj = getDiscountMinCartValue();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *discount_min_cart_valueKey = "discount_min_cart_value";
	json_object_set_member(pJsonObject, discount_min_cart_valueKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDiscountType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *discount_typeKey = "discount_type";
	json_object_set_member(pJsonObject, discount_typeKey, node);
	if (isprimitive("long long")) {
		long long obj = getDiscountValue();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *discount_valueKey = "discount_value";
	json_object_set_member(pJsonObject, discount_valueKey, node);
	if (isprimitive("bool")) {
		bool obj = getExclusive();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *exclusiveKey = "exclusive";
	json_object_set_member(pJsonObject, exclusiveKey, node);
	if (isprimitive("int")) {
		int obj = getItemId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *item_idKey = "item_id";
	json_object_set_member(pJsonObject, item_idKey, node);
	if (isprimitive("int")) {
		int obj = getMaxQuantity();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *max_quantityKey = "max_quantity";
	json_object_set_member(pJsonObject, max_quantityKey, node);
	if (isprimitive("bool")) {
		bool obj = getSelfExclusive();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *self_exclusiveKey = "self_exclusive";
	json_object_set_member(pJsonObject, self_exclusiveKey, node);
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
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::map<string, string>
CouponItem::getAdditionalProperties()
{
	return additional_properties;
}

void
CouponItem::setAdditionalProperties(std::map <string, string> additional_properties)
{
	this->additional_properties = additional_properties;
}

std::list<Behavior>
CouponItem::getBehaviors()
{
	return behaviors;
}

void
CouponItem::setBehaviors(std::list <Behavior> behaviors)
{
	this->behaviors = behaviors;
}

std::string
CouponItem::getCategory()
{
	return category;
}

void
CouponItem::setCategory(std::string  category)
{
	this->category = category;
}

long long
CouponItem::getCreatedDate()
{
	return created_date;
}

void
CouponItem::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

int
CouponItem::getId()
{
	return id;
}

void
CouponItem::setId(int  id)
{
	this->id = id;
}

std::string
CouponItem::getLongDescription()
{
	return long_description;
}

void
CouponItem::setLongDescription(std::string  long_description)
{
	this->long_description = long_description;
}

std::string
CouponItem::getName()
{
	return name;
}

void
CouponItem::setName(std::string  name)
{
	this->name = name;
}

std::string
CouponItem::getShortDescription()
{
	return short_description;
}

void
CouponItem::setShortDescription(std::string  short_description)
{
	this->short_description = short_description;
}

int
CouponItem::getSort()
{
	return sort;
}

void
CouponItem::setSort(int  sort)
{
	this->sort = sort;
}

std::list<std::string>
CouponItem::getTags()
{
	return tags;
}

void
CouponItem::setTags(std::list <std::string> tags)
{
	this->tags = tags;
}

std::string
CouponItem::getTemplate()
{
	return _template;
}

void
CouponItem::setTemplate(std::string  _template)
{
	this->_template = _template;
}

std::string
CouponItem::getTypeHint()
{
	return type_hint;
}

void
CouponItem::setTypeHint(std::string  type_hint)
{
	this->type_hint = type_hint;
}

std::string
CouponItem::getUniqueKey()
{
	return unique_key;
}

void
CouponItem::setUniqueKey(std::string  unique_key)
{
	this->unique_key = unique_key;
}

long long
CouponItem::getUpdatedDate()
{
	return updated_date;
}

void
CouponItem::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}

bool
CouponItem::getDisplayable()
{
	return displayable;
}

void
CouponItem::setDisplayable(bool  displayable)
{
	this->displayable = displayable;
}

std::list<std::string>
CouponItem::getGeoCountryList()
{
	return geo_country_list;
}

void
CouponItem::setGeoCountryList(std::list <std::string> geo_country_list)
{
	this->geo_country_list = geo_country_list;
}

std::string
CouponItem::getGeoPolicyType()
{
	return geo_policy_type;
}

void
CouponItem::setGeoPolicyType(std::string  geo_policy_type)
{
	this->geo_policy_type = geo_policy_type;
}

int
CouponItem::getShippingTier()
{
	return shipping_tier;
}

void
CouponItem::setShippingTier(int  shipping_tier)
{
	this->shipping_tier = shipping_tier;
}

std::list<Sku>
CouponItem::getSkus()
{
	return skus;
}

void
CouponItem::setSkus(std::list <Sku> skus)
{
	this->skus = skus;
}

long long
CouponItem::getStoreEnd()
{
	return store_end;
}

void
CouponItem::setStoreEnd(long long  store_end)
{
	this->store_end = store_end;
}

long long
CouponItem::getStoreStart()
{
	return store_start;
}

void
CouponItem::setStoreStart(long long  store_start)
{
	this->store_start = store_start;
}

int
CouponItem::getVendorId()
{
	return vendor_id;
}

void
CouponItem::setVendorId(int  vendor_id)
{
	this->vendor_id = vendor_id;
}

std::string
CouponItem::getCouponTypeHint()
{
	return coupon_type_hint;
}

void
CouponItem::setCouponTypeHint(std::string  coupon_type_hint)
{
	this->coupon_type_hint = coupon_type_hint;
}

long long
CouponItem::getDiscountMax()
{
	return discount_max;
}

void
CouponItem::setDiscountMax(long long  discount_max)
{
	this->discount_max = discount_max;
}

long long
CouponItem::getDiscountMinCartValue()
{
	return discount_min_cart_value;
}

void
CouponItem::setDiscountMinCartValue(long long  discount_min_cart_value)
{
	this->discount_min_cart_value = discount_min_cart_value;
}

std::string
CouponItem::getDiscountType()
{
	return discount_type;
}

void
CouponItem::setDiscountType(std::string  discount_type)
{
	this->discount_type = discount_type;
}

long long
CouponItem::getDiscountValue()
{
	return discount_value;
}

void
CouponItem::setDiscountValue(long long  discount_value)
{
	this->discount_value = discount_value;
}

bool
CouponItem::getExclusive()
{
	return exclusive;
}

void
CouponItem::setExclusive(bool  exclusive)
{
	this->exclusive = exclusive;
}

int
CouponItem::getItemId()
{
	return item_id;
}

void
CouponItem::setItemId(int  item_id)
{
	this->item_id = item_id;
}

int
CouponItem::getMaxQuantity()
{
	return max_quantity;
}

void
CouponItem::setMaxQuantity(int  max_quantity)
{
	this->max_quantity = max_quantity;
}

bool
CouponItem::getSelfExclusive()
{
	return self_exclusive;
}

void
CouponItem::setSelfExclusive(bool  self_exclusive)
{
	this->self_exclusive = self_exclusive;
}

std::list<std::string>
CouponItem::getValidForTags()
{
	return valid_for_tags;
}

void
CouponItem::setValidForTags(std::list <std::string> valid_for_tags)
{
	this->valid_for_tags = valid_for_tags;
}


