#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "GroupMemberResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

GroupMemberResource::GroupMemberResource()
{
	//__init();
}

GroupMemberResource::~GroupMemberResource()
{
	//__cleanup();
}

void
GroupMemberResource::__init()
{
	//
	//new std::map()std::map> additional_properties;
	//
	//
	//
	//group = new SimpleGroupResource();
	//
	//
	//implicit = bool(false);
	//
	//
	//membership_id = long(0);
	//
	//
	//order = std::string();
	//
	//
	//status = std::string();
	//
	//
	//_template = std::string();
	//
	//
	//user = new SimpleUserResource();
	//
}

void
GroupMemberResource::__cleanup()
{
	//if(additional_properties != NULL) {
	//additional_properties.RemoveAll(true);
	//delete additional_properties;
	//additional_properties = NULL;
	//}
	//if(group != NULL) {
	//
	//delete group;
	//group = NULL;
	//}
	//if(implicit != NULL) {
	//
	//delete implicit;
	//implicit = NULL;
	//}
	//if(membership_id != NULL) {
	//
	//delete membership_id;
	//membership_id = NULL;
	//}
	//if(order != NULL) {
	//
	//delete order;
	//order = NULL;
	//}
	//if(status != NULL) {
	//
	//delete status;
	//status = NULL;
	//}
	//if(_template != NULL) {
	//
	//delete _template;
	//_template = NULL;
	//}
	//if(user != NULL) {
	//
	//delete user;
	//user = NULL;
	//}
	//
}

void
GroupMemberResource::fromJson(char* jsonStr)
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
	const gchar *groupKey = "group";
	node = json_object_get_member(pJsonObject, groupKey);
	if (node !=NULL) {
	

		if (isprimitive("SimpleGroupResource")) {
			jsonToValue(&group, node, "SimpleGroupResource", "SimpleGroupResource");
		} else {
			
			SimpleGroupResource* obj = static_cast<SimpleGroupResource*> (&group);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *implicitKey = "implicit";
	node = json_object_get_member(pJsonObject, implicitKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&implicit, node, "bool", "");
		} else {
			
		}
	}
	const gchar *membership_idKey = "membership_id";
	node = json_object_get_member(pJsonObject, membership_idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&membership_id, node, "long long", "");
		} else {
			
		}
	}
	const gchar *orderKey = "order";
	node = json_object_get_member(pJsonObject, orderKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&order, node, "std::string", "");
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
	const gchar *_templateKey = "template";
	node = json_object_get_member(pJsonObject, _templateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&_template, node, "std::string", "");
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
}

GroupMemberResource::GroupMemberResource(char* json)
{
	this->fromJson(json);
}

char*
GroupMemberResource::toJson()
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
	if (isprimitive("SimpleGroupResource")) {
		SimpleGroupResource obj = getGroup();
		node = converttoJson(&obj, "SimpleGroupResource", "");
	}
	else {
		
		SimpleGroupResource obj = static_cast<SimpleGroupResource> (getGroup());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *groupKey = "group";
	json_object_set_member(pJsonObject, groupKey, node);
	if (isprimitive("bool")) {
		bool obj = getImplicit();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *implicitKey = "implicit";
	json_object_set_member(pJsonObject, implicitKey, node);
	if (isprimitive("long long")) {
		long long obj = getMembershipId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *membership_idKey = "membership_id";
	json_object_set_member(pJsonObject, membership_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getOrder();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *orderKey = "order";
	json_object_set_member(pJsonObject, orderKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *statusKey = "status";
	json_object_set_member(pJsonObject, statusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTemplate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *_templateKey = "template";
	json_object_set_member(pJsonObject, _templateKey, node);
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
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::map<string, string>
GroupMemberResource::getAdditionalProperties()
{
	return additional_properties;
}

void
GroupMemberResource::setAdditionalProperties(std::map <string, string> additional_properties)
{
	this->additional_properties = additional_properties;
}

SimpleGroupResource
GroupMemberResource::getGroup()
{
	return group;
}

void
GroupMemberResource::setGroup(SimpleGroupResource  group)
{
	this->group = group;
}

bool
GroupMemberResource::getImplicit()
{
	return implicit;
}

void
GroupMemberResource::setImplicit(bool  implicit)
{
	this->implicit = implicit;
}

long long
GroupMemberResource::getMembershipId()
{
	return membership_id;
}

void
GroupMemberResource::setMembershipId(long long  membership_id)
{
	this->membership_id = membership_id;
}

std::string
GroupMemberResource::getOrder()
{
	return order;
}

void
GroupMemberResource::setOrder(std::string  order)
{
	this->order = order;
}

std::string
GroupMemberResource::getStatus()
{
	return status;
}

void
GroupMemberResource::setStatus(std::string  status)
{
	this->status = status;
}

std::string
GroupMemberResource::getTemplate()
{
	return _template;
}

void
GroupMemberResource::setTemplate(std::string  _template)
{
	this->_template = _template;
}

SimpleUserResource
GroupMemberResource::getUser()
{
	return user;
}

void
GroupMemberResource::setUser(SimpleUserResource  user)
{
	this->user = user;
}


