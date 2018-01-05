#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "GroupResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

GroupResource::GroupResource()
{
	//__init();
}

GroupResource::~GroupResource()
{
	//__cleanup();
}

void
GroupResource::__init()
{
	//
	//new std::map()std::map> additional_properties;
	//
	//
	//
	//description = std::string();
	//
	//
	//member_count = int(0);
	//
	//
	//message_of_the_day = std::string();
	//
	//
	//name = std::string();
	//
	//
	//parent = std::string();
	//
	//
	//status = std::string();
	//
	//
	//sub_member_count = int(0);
	//
	//new std::list()std::list> tags;
	//
	//
	//
	//_template = std::string();
	//
	//
	//unique_name = std::string();
	//
}

void
GroupResource::__cleanup()
{
	//if(additional_properties != NULL) {
	//additional_properties.RemoveAll(true);
	//delete additional_properties;
	//additional_properties = NULL;
	//}
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
	//}
	//if(member_count != NULL) {
	//
	//delete member_count;
	//member_count = NULL;
	//}
	//if(message_of_the_day != NULL) {
	//
	//delete message_of_the_day;
	//message_of_the_day = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(parent != NULL) {
	//
	//delete parent;
	//parent = NULL;
	//}
	//if(status != NULL) {
	//
	//delete status;
	//status = NULL;
	//}
	//if(sub_member_count != NULL) {
	//
	//delete sub_member_count;
	//sub_member_count = NULL;
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
	//if(unique_name != NULL) {
	//
	//delete unique_name;
	//unique_name = NULL;
	//}
	//
}

void
GroupResource::fromJson(char* jsonStr)
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
	const gchar *descriptionKey = "description";
	node = json_object_get_member(pJsonObject, descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *member_countKey = "member_count";
	node = json_object_get_member(pJsonObject, member_countKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&member_count, node, "int", "");
		} else {
			
		}
	}
	const gchar *message_of_the_dayKey = "message_of_the_day";
	node = json_object_get_member(pJsonObject, message_of_the_dayKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&message_of_the_day, node, "std::string", "");
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
	const gchar *parentKey = "parent";
	node = json_object_get_member(pJsonObject, parentKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&parent, node, "std::string", "");
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
	const gchar *sub_member_countKey = "sub_member_count";
	node = json_object_get_member(pJsonObject, sub_member_countKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&sub_member_count, node, "int", "");
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
	const gchar *unique_nameKey = "unique_name";
	node = json_object_get_member(pJsonObject, unique_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&unique_name, node, "std::string", "");
		} else {
			
		}
	}
}

GroupResource::GroupResource(char* json)
{
	this->fromJson(json);
}

char*
GroupResource::toJson()
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
	if (isprimitive("std::string")) {
		std::string obj = getDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *descriptionKey = "description";
	json_object_set_member(pJsonObject, descriptionKey, node);
	if (isprimitive("int")) {
		int obj = getMemberCount();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *member_countKey = "member_count";
	json_object_set_member(pJsonObject, member_countKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMessageOfTheDay();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *message_of_the_dayKey = "message_of_the_day";
	json_object_set_member(pJsonObject, message_of_the_dayKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getParent();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *parentKey = "parent";
	json_object_set_member(pJsonObject, parentKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *statusKey = "status";
	json_object_set_member(pJsonObject, statusKey, node);
	if (isprimitive("int")) {
		int obj = getSubMemberCount();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *sub_member_countKey = "sub_member_count";
	json_object_set_member(pJsonObject, sub_member_countKey, node);
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
		std::string obj = getUniqueName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *unique_nameKey = "unique_name";
	json_object_set_member(pJsonObject, unique_nameKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::map<string, string>
GroupResource::getAdditionalProperties()
{
	return additional_properties;
}

void
GroupResource::setAdditionalProperties(std::map <string, string> additional_properties)
{
	this->additional_properties = additional_properties;
}

std::string
GroupResource::getDescription()
{
	return description;
}

void
GroupResource::setDescription(std::string  description)
{
	this->description = description;
}

int
GroupResource::getMemberCount()
{
	return member_count;
}

void
GroupResource::setMemberCount(int  member_count)
{
	this->member_count = member_count;
}

std::string
GroupResource::getMessageOfTheDay()
{
	return message_of_the_day;
}

void
GroupResource::setMessageOfTheDay(std::string  message_of_the_day)
{
	this->message_of_the_day = message_of_the_day;
}

std::string
GroupResource::getName()
{
	return name;
}

void
GroupResource::setName(std::string  name)
{
	this->name = name;
}

std::string
GroupResource::getParent()
{
	return parent;
}

void
GroupResource::setParent(std::string  parent)
{
	this->parent = parent;
}

std::string
GroupResource::getStatus()
{
	return status;
}

void
GroupResource::setStatus(std::string  status)
{
	this->status = status;
}

int
GroupResource::getSubMemberCount()
{
	return sub_member_count;
}

void
GroupResource::setSubMemberCount(int  sub_member_count)
{
	this->sub_member_count = sub_member_count;
}

std::list<std::string>
GroupResource::getTags()
{
	return tags;
}

void
GroupResource::setTags(std::list <std::string> tags)
{
	this->tags = tags;
}

std::string
GroupResource::getTemplate()
{
	return _template;
}

void
GroupResource::setTemplate(std::string  _template)
{
	this->_template = _template;
}

std::string
GroupResource::getUniqueName()
{
	return unique_name;
}

void
GroupResource::setUniqueName(std::string  unique_name)
{
	this->unique_name = unique_name;
}


