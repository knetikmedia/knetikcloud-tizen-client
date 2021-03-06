#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BundleItem.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BundleItem::BundleItem()
{
	//__init();
}

BundleItem::~BundleItem()
{
	//__cleanup();
}

void
BundleItem::__init()
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
	//new std::list()std::list> bundled_skus;
	//
	//
}

void
BundleItem::__cleanup()
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
	//if(bundled_skus != NULL) {
	//bundled_skus.RemoveAll(true);
	//delete bundled_skus;
	//bundled_skus = NULL;
	//}
	//
}

void
BundleItem::fromJson(char* jsonStr)
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
	const gchar *bundled_skusKey = "bundled_skus";
	node = json_object_get_member(pJsonObject, bundled_skusKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<BundledSku> new_list;
			BundledSku inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("BundledSku")) {
					jsonToValue(&inst, temp_json, "BundledSku", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			bundled_skus = new_list;
		}
		
	}
}

BundleItem::BundleItem(char* json)
{
	this->fromJson(json);
}

char*
BundleItem::toJson()
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
	if (isprimitive("BundledSku")) {
		list<BundledSku> new_list = static_cast<list <BundledSku> > (getBundledSkus());
		node = converttoJson(&new_list, "BundledSku", "array");
	} else {
		node = json_node_alloc();
		list<BundledSku> new_list = static_cast<list <BundledSku> > (getBundledSkus());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<BundledSku>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			BundledSku obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *bundled_skusKey = "bundled_skus";
	json_object_set_member(pJsonObject, bundled_skusKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::map<string, string>
BundleItem::getAdditionalProperties()
{
	return additional_properties;
}

void
BundleItem::setAdditionalProperties(std::map <string, string> additional_properties)
{
	this->additional_properties = additional_properties;
}

std::list<Behavior>
BundleItem::getBehaviors()
{
	return behaviors;
}

void
BundleItem::setBehaviors(std::list <Behavior> behaviors)
{
	this->behaviors = behaviors;
}

std::string
BundleItem::getCategory()
{
	return category;
}

void
BundleItem::setCategory(std::string  category)
{
	this->category = category;
}

long long
BundleItem::getCreatedDate()
{
	return created_date;
}

void
BundleItem::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

int
BundleItem::getId()
{
	return id;
}

void
BundleItem::setId(int  id)
{
	this->id = id;
}

std::string
BundleItem::getLongDescription()
{
	return long_description;
}

void
BundleItem::setLongDescription(std::string  long_description)
{
	this->long_description = long_description;
}

std::string
BundleItem::getName()
{
	return name;
}

void
BundleItem::setName(std::string  name)
{
	this->name = name;
}

std::string
BundleItem::getShortDescription()
{
	return short_description;
}

void
BundleItem::setShortDescription(std::string  short_description)
{
	this->short_description = short_description;
}

int
BundleItem::getSort()
{
	return sort;
}

void
BundleItem::setSort(int  sort)
{
	this->sort = sort;
}

std::list<std::string>
BundleItem::getTags()
{
	return tags;
}

void
BundleItem::setTags(std::list <std::string> tags)
{
	this->tags = tags;
}

std::string
BundleItem::getTemplate()
{
	return _template;
}

void
BundleItem::setTemplate(std::string  _template)
{
	this->_template = _template;
}

std::string
BundleItem::getTypeHint()
{
	return type_hint;
}

void
BundleItem::setTypeHint(std::string  type_hint)
{
	this->type_hint = type_hint;
}

std::string
BundleItem::getUniqueKey()
{
	return unique_key;
}

void
BundleItem::setUniqueKey(std::string  unique_key)
{
	this->unique_key = unique_key;
}

long long
BundleItem::getUpdatedDate()
{
	return updated_date;
}

void
BundleItem::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}

bool
BundleItem::getDisplayable()
{
	return displayable;
}

void
BundleItem::setDisplayable(bool  displayable)
{
	this->displayable = displayable;
}

std::list<std::string>
BundleItem::getGeoCountryList()
{
	return geo_country_list;
}

void
BundleItem::setGeoCountryList(std::list <std::string> geo_country_list)
{
	this->geo_country_list = geo_country_list;
}

std::string
BundleItem::getGeoPolicyType()
{
	return geo_policy_type;
}

void
BundleItem::setGeoPolicyType(std::string  geo_policy_type)
{
	this->geo_policy_type = geo_policy_type;
}

int
BundleItem::getShippingTier()
{
	return shipping_tier;
}

void
BundleItem::setShippingTier(int  shipping_tier)
{
	this->shipping_tier = shipping_tier;
}

std::list<Sku>
BundleItem::getSkus()
{
	return skus;
}

void
BundleItem::setSkus(std::list <Sku> skus)
{
	this->skus = skus;
}

long long
BundleItem::getStoreEnd()
{
	return store_end;
}

void
BundleItem::setStoreEnd(long long  store_end)
{
	this->store_end = store_end;
}

long long
BundleItem::getStoreStart()
{
	return store_start;
}

void
BundleItem::setStoreStart(long long  store_start)
{
	this->store_start = store_start;
}

int
BundleItem::getVendorId()
{
	return vendor_id;
}

void
BundleItem::setVendorId(int  vendor_id)
{
	this->vendor_id = vendor_id;
}

std::list<BundledSku>
BundleItem::getBundledSkus()
{
	return bundled_skus;
}

void
BundleItem::setBundledSkus(std::list <BundledSku> bundled_skus)
{
	this->bundled_skus = bundled_skus;
}


