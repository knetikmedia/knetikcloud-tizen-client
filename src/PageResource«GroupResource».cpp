#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PageResource«GroupResource».h"

using namespace std;
using namespace Tizen::ArtikCloud;

PageResource«GroupResource»::PageResource«GroupResource»()
{
	//__init();
}

PageResource«GroupResource»::~PageResource«GroupResource»()
{
	//__cleanup();
}

void
PageResource«GroupResource»::__init()
{
	//
	//new std::list()std::list> content;
	//
	//
	//
	//first = bool(false);
	//
	//
	//last = bool(false);
	//
	//
	//number = int(0);
	//
	//
	//number_of_elements = int(0);
	//
	//
	//size = int(0);
	//
	//new std::list()std::list> sort;
	//
	//
	//
	//total_elements = long(0);
	//
	//
	//total_pages = int(0);
	//
}

void
PageResource«GroupResource»::__cleanup()
{
	//if(content != NULL) {
	//content.RemoveAll(true);
	//delete content;
	//content = NULL;
	//}
	//if(first != NULL) {
	//
	//delete first;
	//first = NULL;
	//}
	//if(last != NULL) {
	//
	//delete last;
	//last = NULL;
	//}
	//if(number != NULL) {
	//
	//delete number;
	//number = NULL;
	//}
	//if(number_of_elements != NULL) {
	//
	//delete number_of_elements;
	//number_of_elements = NULL;
	//}
	//if(size != NULL) {
	//
	//delete size;
	//size = NULL;
	//}
	//if(sort != NULL) {
	//sort.RemoveAll(true);
	//delete sort;
	//sort = NULL;
	//}
	//if(total_elements != NULL) {
	//
	//delete total_elements;
	//total_elements = NULL;
	//}
	//if(total_pages != NULL) {
	//
	//delete total_pages;
	//total_pages = NULL;
	//}
	//
}

void
PageResource«GroupResource»::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *contentKey = "content";
	node = json_object_get_member(pJsonObject, contentKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<GroupResource> new_list;
			GroupResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("GroupResource")) {
					jsonToValue(&inst, temp_json, "GroupResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			content = new_list;
		}
		
	}
	const gchar *firstKey = "first";
	node = json_object_get_member(pJsonObject, firstKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&first, node, "bool", "");
		} else {
			
		}
	}
	const gchar *lastKey = "last";
	node = json_object_get_member(pJsonObject, lastKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&last, node, "bool", "");
		} else {
			
		}
	}
	const gchar *numberKey = "number";
	node = json_object_get_member(pJsonObject, numberKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&number, node, "int", "");
		} else {
			
		}
	}
	const gchar *number_of_elementsKey = "number_of_elements";
	node = json_object_get_member(pJsonObject, number_of_elementsKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&number_of_elements, node, "int", "");
		} else {
			
		}
	}
	const gchar *sizeKey = "size";
	node = json_object_get_member(pJsonObject, sizeKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&size, node, "int", "");
		} else {
			
		}
	}
	const gchar *sortKey = "sort";
	node = json_object_get_member(pJsonObject, sortKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<Order> new_list;
			Order inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("Order")) {
					jsonToValue(&inst, temp_json, "Order", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			sort = new_list;
		}
		
	}
	const gchar *total_elementsKey = "total_elements";
	node = json_object_get_member(pJsonObject, total_elementsKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&total_elements, node, "long long", "");
		} else {
			
		}
	}
	const gchar *total_pagesKey = "total_pages";
	node = json_object_get_member(pJsonObject, total_pagesKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&total_pages, node, "int", "");
		} else {
			
		}
	}
}

PageResource«GroupResource»::PageResource«GroupResource»(char* json)
{
	this->fromJson(json);
}

char*
PageResource«GroupResource»::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("GroupResource")) {
		list<GroupResource> new_list = static_cast<list <GroupResource> > (getContent());
		node = converttoJson(&new_list, "GroupResource", "array");
	} else {
		node = json_node_alloc();
		list<GroupResource> new_list = static_cast<list <GroupResource> > (getContent());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<GroupResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			GroupResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *contentKey = "content";
	json_object_set_member(pJsonObject, contentKey, node);
	if (isprimitive("bool")) {
		bool obj = getFirst();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *firstKey = "first";
	json_object_set_member(pJsonObject, firstKey, node);
	if (isprimitive("bool")) {
		bool obj = getLast();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *lastKey = "last";
	json_object_set_member(pJsonObject, lastKey, node);
	if (isprimitive("int")) {
		int obj = getNumber();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *numberKey = "number";
	json_object_set_member(pJsonObject, numberKey, node);
	if (isprimitive("int")) {
		int obj = getNumberOfElements();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *number_of_elementsKey = "number_of_elements";
	json_object_set_member(pJsonObject, number_of_elementsKey, node);
	if (isprimitive("int")) {
		int obj = getSize();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *sizeKey = "size";
	json_object_set_member(pJsonObject, sizeKey, node);
	if (isprimitive("Order")) {
		list<Order> new_list = static_cast<list <Order> > (getSort());
		node = converttoJson(&new_list, "Order", "array");
	} else {
		node = json_node_alloc();
		list<Order> new_list = static_cast<list <Order> > (getSort());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<Order>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			Order obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *sortKey = "sort";
	json_object_set_member(pJsonObject, sortKey, node);
	if (isprimitive("long long")) {
		long long obj = getTotalElements();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *total_elementsKey = "total_elements";
	json_object_set_member(pJsonObject, total_elementsKey, node);
	if (isprimitive("int")) {
		int obj = getTotalPages();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *total_pagesKey = "total_pages";
	json_object_set_member(pJsonObject, total_pagesKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::list<GroupResource>
PageResource«GroupResource»::getContent()
{
	return content;
}

void
PageResource«GroupResource»::setContent(std::list <GroupResource> content)
{
	this->content = content;
}

bool
PageResource«GroupResource»::getFirst()
{
	return first;
}

void
PageResource«GroupResource»::setFirst(bool  first)
{
	this->first = first;
}

bool
PageResource«GroupResource»::getLast()
{
	return last;
}

void
PageResource«GroupResource»::setLast(bool  last)
{
	this->last = last;
}

int
PageResource«GroupResource»::getNumber()
{
	return number;
}

void
PageResource«GroupResource»::setNumber(int  number)
{
	this->number = number;
}

int
PageResource«GroupResource»::getNumberOfElements()
{
	return number_of_elements;
}

void
PageResource«GroupResource»::setNumberOfElements(int  number_of_elements)
{
	this->number_of_elements = number_of_elements;
}

int
PageResource«GroupResource»::getSize()
{
	return size;
}

void
PageResource«GroupResource»::setSize(int  size)
{
	this->size = size;
}

std::list<Order>
PageResource«GroupResource»::getSort()
{
	return sort;
}

void
PageResource«GroupResource»::setSort(std::list <Order> sort)
{
	this->sort = sort;
}

long long
PageResource«GroupResource»::getTotalElements()
{
	return total_elements;
}

void
PageResource«GroupResource»::setTotalElements(long long  total_elements)
{
	this->total_elements = total_elements;
}

int
PageResource«GroupResource»::getTotalPages()
{
	return total_pages;
}

void
PageResource«GroupResource»::setTotalPages(int  total_pages)
{
	this->total_pages = total_pages;
}


