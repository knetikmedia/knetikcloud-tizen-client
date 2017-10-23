#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ImportJobResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ImportJobResource::ImportJobResource()
{
	//__init();
}

ImportJobResource::~ImportJobResource()
{
	//__cleanup();
}

void
ImportJobResource::__init()
{
	//
	//
	//category_id = std::string();
	//
	//
	//created_date = long(0);
	//
	//
	//id = long(0);
	//
	//
	//name = std::string();
	//
	//new std::list()std::list> output;
	//
	//
	//
	//record_count = long(0);
	//
	//
	//status = std::string();
	//
	//
	//updated_date = long(0);
	//
	//
	//url = std::string();
	//
	//
	//vendor = std::string();
	//
}

void
ImportJobResource::__cleanup()
{
	//if(category_id != NULL) {
	//
	//delete category_id;
	//category_id = NULL;
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
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(output != NULL) {
	//output.RemoveAll(true);
	//delete output;
	//output = NULL;
	//}
	//if(record_count != NULL) {
	//
	//delete record_count;
	//record_count = NULL;
	//}
	//if(status != NULL) {
	//
	//delete status;
	//status = NULL;
	//}
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//if(url != NULL) {
	//
	//delete url;
	//url = NULL;
	//}
	//if(vendor != NULL) {
	//
	//delete vendor;
	//vendor = NULL;
	//}
	//
}

void
ImportJobResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *category_idKey = "category_id";
	node = json_object_get_member(pJsonObject, category_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&category_id, node, "std::string", "");
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
	

		if (isprimitive("long long")) {
			jsonToValue(&id, node, "long long", "");
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
	const gchar *outputKey = "output";
	node = json_object_get_member(pJsonObject, outputKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<ImportJobOutputResource> new_list;
			ImportJobOutputResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("ImportJobOutputResource")) {
					jsonToValue(&inst, temp_json, "ImportJobOutputResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			output = new_list;
		}
		
	}
	const gchar *record_countKey = "record_count";
	node = json_object_get_member(pJsonObject, record_countKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&record_count, node, "long long", "");
		} else {
			
		}
	}
	const gchar *statusKey = "status";
	node = json_object_get_member(pJsonObject, statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&status, node, "std::string", "");
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
	const gchar *urlKey = "url";
	node = json_object_get_member(pJsonObject, urlKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&url, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vendorKey = "vendor";
	node = json_object_get_member(pJsonObject, vendorKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vendor, node, "std::string", "");
		} else {
			
		}
	}
}

ImportJobResource::ImportJobResource(char* json)
{
	this->fromJson(json);
}

char*
ImportJobResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getCategoryId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *category_idKey = "category_id";
	json_object_set_member(pJsonObject, category_idKey, node);
	if (isprimitive("long long")) {
		long long obj = getCreatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *created_dateKey = "created_date";
	json_object_set_member(pJsonObject, created_dateKey, node);
	if (isprimitive("long long")) {
		long long obj = getId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("ImportJobOutputResource")) {
		list<ImportJobOutputResource> new_list = static_cast<list <ImportJobOutputResource> > (getOutput());
		node = converttoJson(&new_list, "ImportJobOutputResource", "array");
	} else {
		node = json_node_alloc();
		list<ImportJobOutputResource> new_list = static_cast<list <ImportJobOutputResource> > (getOutput());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<ImportJobOutputResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			ImportJobOutputResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *outputKey = "output";
	json_object_set_member(pJsonObject, outputKey, node);
	if (isprimitive("long long")) {
		long long obj = getRecordCount();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *record_countKey = "record_count";
	json_object_set_member(pJsonObject, record_countKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *statusKey = "status";
	json_object_set_member(pJsonObject, statusKey, node);
	if (isprimitive("long long")) {
		long long obj = getUpdatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *updated_dateKey = "updated_date";
	json_object_set_member(pJsonObject, updated_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUrl();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *urlKey = "url";
	json_object_set_member(pJsonObject, urlKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVendor();
		node = converttoJson(&obj, "std::string", "");
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
ImportJobResource::getCategoryId()
{
	return category_id;
}

void
ImportJobResource::setCategoryId(std::string  category_id)
{
	this->category_id = category_id;
}

long long
ImportJobResource::getCreatedDate()
{
	return created_date;
}

void
ImportJobResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

long long
ImportJobResource::getId()
{
	return id;
}

void
ImportJobResource::setId(long long  id)
{
	this->id = id;
}

std::string
ImportJobResource::getName()
{
	return name;
}

void
ImportJobResource::setName(std::string  name)
{
	this->name = name;
}

std::list<ImportJobOutputResource>
ImportJobResource::getOutput()
{
	return output;
}

void
ImportJobResource::setOutput(std::list <ImportJobOutputResource> output)
{
	this->output = output;
}

long long
ImportJobResource::getRecordCount()
{
	return record_count;
}

void
ImportJobResource::setRecordCount(long long  record_count)
{
	this->record_count = record_count;
}

std::string
ImportJobResource::getStatus()
{
	return status;
}

void
ImportJobResource::setStatus(std::string  status)
{
	this->status = status;
}

long long
ImportJobResource::getUpdatedDate()
{
	return updated_date;
}

void
ImportJobResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}

std::string
ImportJobResource::getUrl()
{
	return url;
}

void
ImportJobResource::setUrl(std::string  url)
{
	this->url = url;
}

std::string
ImportJobResource::getVendor()
{
	return vendor;
}

void
ImportJobResource::setVendor(std::string  vendor)
{
	this->vendor = vendor;
}


