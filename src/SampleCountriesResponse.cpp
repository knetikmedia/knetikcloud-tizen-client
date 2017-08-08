#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "SampleCountriesResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

SampleCountriesResponse::SampleCountriesResponse()
{
	//__init();
}

SampleCountriesResponse::~SampleCountriesResponse()
{
	//__cleanup();
}

void
SampleCountriesResponse::__init()
{
	//
	//new std::list()std::list> vendor_id1;
	//
	//
	//new std::list()std::list> vendor_id2;
	//
	//
}

void
SampleCountriesResponse::__cleanup()
{
	//if(vendor_id1 != NULL) {
	//vendor_id1.RemoveAll(true);
	//delete vendor_id1;
	//vendor_id1 = NULL;
	//}
	//if(vendor_id2 != NULL) {
	//vendor_id2.RemoveAll(true);
	//delete vendor_id2;
	//vendor_id2 = NULL;
	//}
	//
}

void
SampleCountriesResponse::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *vendor_id1Key = "vendor_id1";
	node = json_object_get_member(pJsonObject, vendor_id1Key);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<Country> new_list;
			Country inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("Country")) {
					jsonToValue(&inst, temp_json, "Country", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			vendor_id1 = new_list;
		}
		
	}
	const gchar *vendor_id2Key = "vendor_id2";
	node = json_object_get_member(pJsonObject, vendor_id2Key);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<Country> new_list;
			Country inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("Country")) {
					jsonToValue(&inst, temp_json, "Country", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			vendor_id2 = new_list;
		}
		
	}
}

SampleCountriesResponse::SampleCountriesResponse(char* json)
{
	this->fromJson(json);
}

char*
SampleCountriesResponse::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("Country")) {
		list<Country> new_list = static_cast<list <Country> > (getVendorId1());
		node = converttoJson(&new_list, "Country", "array");
	} else {
		node = json_node_alloc();
		list<Country> new_list = static_cast<list <Country> > (getVendorId1());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<Country>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			Country obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *vendor_id1Key = "vendor_id1";
	json_object_set_member(pJsonObject, vendor_id1Key, node);
	if (isprimitive("Country")) {
		list<Country> new_list = static_cast<list <Country> > (getVendorId2());
		node = converttoJson(&new_list, "Country", "array");
	} else {
		node = json_node_alloc();
		list<Country> new_list = static_cast<list <Country> > (getVendorId2());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<Country>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			Country obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *vendor_id2Key = "vendor_id2";
	json_object_set_member(pJsonObject, vendor_id2Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::list<Country>
SampleCountriesResponse::getVendorId1()
{
	return vendor_id1;
}

void
SampleCountriesResponse::setVendorId1(std::list <Country> vendor_id1)
{
	this->vendor_id1 = vendor_id1;
}

std::list<Country>
SampleCountriesResponse::getVendorId2()
{
	return vendor_id2;
}

void
SampleCountriesResponse::setVendorId2(std::list <Country> vendor_id2)
{
	this->vendor_id2 = vendor_id2;
}


