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
	//
	//authorization = std::string();
	//
	//
	//condition = std::string();
	//
	//
	//created_date = long(0);
	//
	//new std::map()std::map> data;
	//
	//
	//
	//description = std::string();
	//
	//
	//device_type = std::string();
	//
	//
	//id = int(0);
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
	//serial = std::string();
	//
	//
	//status = std::string();
	//
	//
	//updated_date = long(0);
	//
	//
	//user = new SimpleUserResource();
	//
	//new std::list()std::list> users;
	//
	//
}

void
DeviceResource::__cleanup()
{
	//if(authorization != NULL) {
	//
	//delete authorization;
	//authorization = NULL;
	//}
	//if(condition != NULL) {
	//
	//delete condition;
	//condition = NULL;
	//}
	//if(created_date != NULL) {
	//
	//delete created_date;
	//created_date = NULL;
	//}
	//if(data != NULL) {
	//data.RemoveAll(true);
	//delete data;
	//data = NULL;
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
	//if(serial != NULL) {
	//
	//delete serial;
	//serial = NULL;
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
	//if(user != NULL) {
	//
	//delete user;
	//user = NULL;
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
	const gchar *authorizationKey = "authorization";
	node = json_object_get_member(pJsonObject, authorizationKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&authorization, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *conditionKey = "condition";
	node = json_object_get_member(pJsonObject, conditionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&condition, node, "std::string", "");
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
	
		{
			JsonObject* json_obj = json_node_get_object(node);
			map<string,string> new_map;
			json_object_foreach_member(json_obj,helper_func,&new_map);
			data = new_map;
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
	

		if (isprimitive("int")) {
			jsonToValue(&id, node, "int", "");
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
	const gchar *serialKey = "serial";
	node = json_object_get_member(pJsonObject, serialKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&serial, node, "std::string", "");
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
	const gchar *userKey = "user";
	node = json_object_get_member(pJsonObject, userKey);
	if (node !=NULL) {
	

		if (isprimitive("SimpleUserResource")) {
			jsonToValue(&user, node, "SimpleUserResource", "SimpleUserResource");
		} else {
			
			SimpleUserResource* obj = static_cast<SimpleUserResource*> (&user);
			obj->fromJson(json_to_string(node, false));
			
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
	if (isprimitive("std::string")) {
		std::string obj = getAuthorization();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *authorizationKey = "authorization";
	json_object_set_member(pJsonObject, authorizationKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCondition();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *conditionKey = "condition";
	json_object_set_member(pJsonObject, conditionKey, node);
	if (isprimitive("long long")) {
		long long obj = getCreatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *created_dateKey = "created_date";
	json_object_set_member(pJsonObject, created_dateKey, node);


	{
		JsonObject* json_obj;
		map<string, string> new_list = static_cast<map <string, string> > (getData());
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

	const gchar *dataKey = "data";
	json_object_set_member(pJsonObject, dataKey, node);
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
	if (isprimitive("int")) {
		int obj = getId();
		node = converttoJson(&obj, "int", "");
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
	if (isprimitive("std::string")) {
		std::string obj = getSerial();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *serialKey = "serial";
	json_object_set_member(pJsonObject, serialKey, node);
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
	if (isprimitive("SimpleUserResource")) {
		SimpleUserResource obj = getUser();
		node = converttoJson(&obj, "SimpleUserResource", "");
	}
	else {
		
		SimpleUserResource obj = static_cast<SimpleUserResource> (getUser());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *userKey = "user";
	json_object_set_member(pJsonObject, userKey, node);
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

std::string
DeviceResource::getAuthorization()
{
	return authorization;
}

void
DeviceResource::setAuthorization(std::string  authorization)
{
	this->authorization = authorization;
}

std::string
DeviceResource::getCondition()
{
	return condition;
}

void
DeviceResource::setCondition(std::string  condition)
{
	this->condition = condition;
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

std::map<string, string>
DeviceResource::getData()
{
	return data;
}

void
DeviceResource::setData(std::map <string, string> data)
{
	this->data = data;
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

int
DeviceResource::getId()
{
	return id;
}

void
DeviceResource::setId(int  id)
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

std::string
DeviceResource::getStatus()
{
	return status;
}

void
DeviceResource::setStatus(std::string  status)
{
	this->status = status;
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

SimpleUserResource
DeviceResource::getUser()
{
	return user;
}

void
DeviceResource::setUser(SimpleUserResource  user)
{
	this->user = user;
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


