#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DeviceResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DeviceResource::DeviceResource()
{
	//__init();
}

DeviceResource::~DeviceResource()
{
	//__cleanup();
}

void
DeviceResource::__init()
{
	//
	//new std::map()std::map> additional_properties;
	//
	//
	//
	//created_date = long(0);
	//
	//
	//description = std::string();
	//
	//
	//device_type = std::string();
	//
	//
	//id = std::string();
	//
	//
	//location = std::string();
	//
	//
	//mac_address = std::string();
	//
	//
	//make = std::string();
	//
	//
	//model = std::string();
	//
	//
	//name = std::string();
	//
	//
	//os = std::string();
	//
	//
	//owner = new SimpleUserResource();
	//
	//
	//serial = std::string();
	//
	//new std::list()std::list> tags;
	//
	//
	//
	//_template = std::string();
	//
	//
	//updated_date = long(0);
	//
	//new std::list()std::list> users;
	//
	//
}

void
DeviceResource::__cleanup()
{
	//if(additional_properties != NULL) {
	//additional_properties.RemoveAll(true);
	//delete additional_properties;
	//additional_properties = NULL;
	//}
	//if(created_date != NULL) {
	//
	//delete created_date;
	//created_date = NULL;
	//}
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
	//}
	//if(device_type != NULL) {
	//
	//delete device_type;
	//device_type = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(location != NULL) {
	//
	//delete location;
	//location = NULL;
	//}
	//if(mac_address != NULL) {
	//
	//delete mac_address;
	//mac_address = NULL;
	//}
	//if(make != NULL) {
	//
	//delete make;
	//make = NULL;
	//}
	//if(model != NULL) {
	//
	//delete model;
	//model = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(os != NULL) {
	//
	//delete os;
	//os = NULL;
	//}
	//if(owner != NULL) {
	//
	//delete owner;
	//owner = NULL;
	//}
	//if(serial != NULL) {
	//
	//delete serial;
	//serial = NULL;
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
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//if(users != NULL) {
	//users.RemoveAll(true);
	//delete users;
	//users = NULL;
	//}
	//
}

void
DeviceResource::fromJson(char* jsonStr)
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
	const gchar *created_dateKey = "created_date";
	node = json_object_get_member(pJsonObject, created_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&created_date, node, "long long", "");
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
	const gchar *device_typeKey = "device_type";
	node = json_object_get_member(pJsonObject, device_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&device_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *locationKey = "location";
	node = json_object_get_member(pJsonObject, locationKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&location, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *mac_addressKey = "mac_address";
	node = json_object_get_member(pJsonObject, mac_addressKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&mac_address, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *makeKey = "make";
	node = json_object_get_member(pJsonObject, makeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&make, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *modelKey = "model";
	node = json_object_get_member(pJsonObject, modelKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&model, node, "std::string", "");
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
	const gchar *osKey = "os";
	node = json_object_get_member(pJsonObject, osKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&os, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *ownerKey = "owner";
	node = json_object_get_member(pJsonObject, ownerKey);
	if (node !=NULL) {
	

		if (isprimitive("SimpleUserResource")) {
			jsonToValue(&owner, node, "SimpleUserResource", "SimpleUserResource");
		} else {
			
			SimpleUserResource* obj = static_cast<SimpleUserResource*> (&owner);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *serialKey = "serial";
	node = json_object_get_member(pJsonObject, serialKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&serial, node, "std::string", "");
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
	const gchar *updated_dateKey = "updated_date";
	node = json_object_get_member(pJsonObject, updated_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&updated_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *usersKey = "users";
	node = json_object_get_member(pJsonObject, usersKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<SimpleUserResource> new_list;
			SimpleUserResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("SimpleUserResource")) {
					jsonToValue(&inst, temp_json, "SimpleUserResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			users = new_list;
		}
		
	}
}

DeviceResource::DeviceResource(char* json)
{
	this->fromJson(json);
}

char*
DeviceResource::toJson()
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
	if (isprimitive("long long")) {
		long long obj = getCreatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *created_dateKey = "created_date";
	json_object_set_member(pJsonObject, created_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *descriptionKey = "description";
	json_object_set_member(pJsonObject, descriptionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDeviceType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *device_typeKey = "device_type";
	json_object_set_member(pJsonObject, device_typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLocation();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *locationKey = "location";
	json_object_set_member(pJsonObject, locationKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMacAddress();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *mac_addressKey = "mac_address";
	json_object_set_member(pJsonObject, mac_addressKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMake();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *makeKey = "make";
	json_object_set_member(pJsonObject, makeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getModel();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *modelKey = "model";
	json_object_set_member(pJsonObject, modelKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getOs();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *osKey = "os";
	json_object_set_member(pJsonObject, osKey, node);
	if (isprimitive("SimpleUserResource")) {
		SimpleUserResource obj = getOwner();
		node = converttoJson(&obj, "SimpleUserResource", "");
	}
	else {
		
		SimpleUserResource obj = static_cast<SimpleUserResource> (getOwner());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *ownerKey = "owner";
	json_object_set_member(pJsonObject, ownerKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSerial();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *serialKey = "serial";
	json_object_set_member(pJsonObject, serialKey, node);
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
	if (isprimitive("long long")) {
		long long obj = getUpdatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *updated_dateKey = "updated_date";
	json_object_set_member(pJsonObject, updated_dateKey, node);
	if (isprimitive("SimpleUserResource")) {
		list<SimpleUserResource> new_list = static_cast<list <SimpleUserResource> > (getUsers());
		node = converttoJson(&new_list, "SimpleUserResource", "array");
	} else {
		node = json_node_alloc();
		list<SimpleUserResource> new_list = static_cast<list <SimpleUserResource> > (getUsers());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<SimpleUserResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			SimpleUserResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *usersKey = "users";
	json_object_set_member(pJsonObject, usersKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::map<string, string>
DeviceResource::getAdditionalProperties()
{
	return additional_properties;
}

void
DeviceResource::setAdditionalProperties(std::map <string, string> additional_properties)
{
	this->additional_properties = additional_properties;
}

long long
DeviceResource::getCreatedDate()
{
	return created_date;
}

void
DeviceResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

std::string
DeviceResource::getDescription()
{
	return description;
}

void
DeviceResource::setDescription(std::string  description)
{
	this->description = description;
}

std::string
DeviceResource::getDeviceType()
{
	return device_type;
}

void
DeviceResource::setDeviceType(std::string  device_type)
{
	this->device_type = device_type;
}

std::string
DeviceResource::getId()
{
	return id;
}

void
DeviceResource::setId(std::string  id)
{
	this->id = id;
}

std::string
DeviceResource::getLocation()
{
	return location;
}

void
DeviceResource::setLocation(std::string  location)
{
	this->location = location;
}

std::string
DeviceResource::getMacAddress()
{
	return mac_address;
}

void
DeviceResource::setMacAddress(std::string  mac_address)
{
	this->mac_address = mac_address;
}

std::string
DeviceResource::getMake()
{
	return make;
}

void
DeviceResource::setMake(std::string  make)
{
	this->make = make;
}

std::string
DeviceResource::getModel()
{
	return model;
}

void
DeviceResource::setModel(std::string  model)
{
	this->model = model;
}

std::string
DeviceResource::getName()
{
	return name;
}

void
DeviceResource::setName(std::string  name)
{
	this->name = name;
}

std::string
DeviceResource::getOs()
{
	return os;
}

void
DeviceResource::setOs(std::string  os)
{
	this->os = os;
}

SimpleUserResource
DeviceResource::getOwner()
{
	return owner;
}

void
DeviceResource::setOwner(SimpleUserResource  owner)
{
	this->owner = owner;
}

std::string
DeviceResource::getSerial()
{
	return serial;
}

void
DeviceResource::setSerial(std::string  serial)
{
	this->serial = serial;
}

std::list<std::string>
DeviceResource::getTags()
{
	return tags;
}

void
DeviceResource::setTags(std::list <std::string> tags)
{
	this->tags = tags;
}

std::string
DeviceResource::getTemplate()
{
	return _template;
}

void
DeviceResource::setTemplate(std::string  _template)
{
	this->_template = _template;
}

long long
DeviceResource::getUpdatedDate()
{
	return updated_date;
}

void
DeviceResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}

std::list<SimpleUserResource>
DeviceResource::getUsers()
{
	return users;
}

void
DeviceResource::setUsers(std::list <SimpleUserResource> users)
{
	this->users = users;
}


