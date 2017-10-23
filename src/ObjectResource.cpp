#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ObjectResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ObjectResource::ObjectResource()
{
	//__init();
}

ObjectResource::~ObjectResource()
{
	//__cleanup();
}

void
ObjectResource::__init()
{
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
	//data = null;
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
	//unique_key = std::string();
	//
	//
	//updated_date = long(0);
	//
}

void
ObjectResource::__cleanup()
{
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
	//if(data != NULL) {
	//
	//delete data;
	//data = NULL;
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
	//
}

void
ObjectResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
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
	const gchar *dataKey = "data";
	node = json_object_get_member(pJsonObject, dataKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&data, node, "std::string", "");
		} else {
			
			std::string* obj = static_cast<std::string*> (&data);
			obj->fromJson(json_to_string(node, false));
			
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
}

ObjectResource::ObjectResource(char* json)
{
	this->fromJson(json);
}

char*
ObjectResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
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
	if (isprimitive("std::string")) {
		std::string obj = getData();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
		std::string obj = static_cast<std::string> (getData());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *dataKey = "data";
	json_object_set_member(pJsonObject, dataKey, node);
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
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::list<Behavior>
ObjectResource::getBehaviors()
{
	return behaviors;
}

void
ObjectResource::setBehaviors(std::list <Behavior> behaviors)
{
	this->behaviors = behaviors;
}

std::string
ObjectResource::getCategory()
{
	return category;
}

void
ObjectResource::setCategory(std::string  category)
{
	this->category = category;
}

long long
ObjectResource::getCreatedDate()
{
	return created_date;
}

void
ObjectResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

std::string
ObjectResource::getData()
{
	return data;
}

void
ObjectResource::setData(std::string  data)
{
	this->data = data;
}

int
ObjectResource::getId()
{
	return id;
}

void
ObjectResource::setId(int  id)
{
	this->id = id;
}

std::string
ObjectResource::getLongDescription()
{
	return long_description;
}

void
ObjectResource::setLongDescription(std::string  long_description)
{
	this->long_description = long_description;
}

std::string
ObjectResource::getName()
{
	return name;
}

void
ObjectResource::setName(std::string  name)
{
	this->name = name;
}

std::string
ObjectResource::getShortDescription()
{
	return short_description;
}

void
ObjectResource::setShortDescription(std::string  short_description)
{
	this->short_description = short_description;
}

int
ObjectResource::getSort()
{
	return sort;
}

void
ObjectResource::setSort(int  sort)
{
	this->sort = sort;
}

std::list<std::string>
ObjectResource::getTags()
{
	return tags;
}

void
ObjectResource::setTags(std::list <std::string> tags)
{
	this->tags = tags;
}

std::string
ObjectResource::getUniqueKey()
{
	return unique_key;
}

void
ObjectResource::setUniqueKey(std::string  unique_key)
{
	this->unique_key = unique_key;
}

long long
ObjectResource::getUpdatedDate()
{
	return updated_date;
}

void
ObjectResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}


