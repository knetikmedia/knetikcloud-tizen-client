#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PollResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

PollResource::PollResource()
{
	//__init();
}

PollResource::~PollResource()
{
	//__cleanup();
}

void
PollResource::__init()
{
	//
	//
	//active = bool(false);
	//
	//new std::map()std::map> additional_properties;
	//
	//
	//new std::list()std::list> answers;
	//
	//
	//
	//category = new NestedCategory();
	//
	//
	//created_date = long(0);
	//
	//
	//id = std::string();
	//
	//new std::list()std::list> tags;
	//
	//
	//
	//_template = std::string();
	//
	//
	//text = std::string();
	//
	//
	//type = std::string();
	//
	//
	//updated_date = long(0);
	//
}

void
PollResource::__cleanup()
{
	//if(active != NULL) {
	//
	//delete active;
	//active = NULL;
	//}
	//if(additional_properties != NULL) {
	//additional_properties.RemoveAll(true);
	//delete additional_properties;
	//additional_properties = NULL;
	//}
	//if(answers != NULL) {
	//answers.RemoveAll(true);
	//delete answers;
	//answers = NULL;
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
	//if(text != NULL) {
	//
	//delete text;
	//text = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//
}

void
PollResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *activeKey = "active";
	node = json_object_get_member(pJsonObject, activeKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&active, node, "bool", "");
		} else {
			
		}
	}
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
	const gchar *answersKey = "answers";
	node = json_object_get_member(pJsonObject, answersKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<PollAnswerResource> new_list;
			PollAnswerResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("PollAnswerResource")) {
					jsonToValue(&inst, temp_json, "PollAnswerResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			answers = new_list;
		}
		
	}
	const gchar *categoryKey = "category";
	node = json_object_get_member(pJsonObject, categoryKey);
	if (node !=NULL) {
	

		if (isprimitive("NestedCategory")) {
			jsonToValue(&category, node, "NestedCategory", "NestedCategory");
		} else {
			
			NestedCategory* obj = static_cast<NestedCategory*> (&category);
			obj->fromJson(json_to_string(node, false));
			
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
	

		if (isprimitive("std::string")) {
			jsonToValue(&id, node, "std::string", "");
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
	const gchar *textKey = "text";
	node = json_object_get_member(pJsonObject, textKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&text, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *typeKey = "type";
	node = json_object_get_member(pJsonObject, typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type, node, "std::string", "");
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

PollResource::PollResource(char* json)
{
	this->fromJson(json);
}

char*
PollResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getActive();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *activeKey = "active";
	json_object_set_member(pJsonObject, activeKey, node);


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
	if (isprimitive("PollAnswerResource")) {
		list<PollAnswerResource> new_list = static_cast<list <PollAnswerResource> > (getAnswers());
		node = converttoJson(&new_list, "PollAnswerResource", "array");
	} else {
		node = json_node_alloc();
		list<PollAnswerResource> new_list = static_cast<list <PollAnswerResource> > (getAnswers());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<PollAnswerResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			PollAnswerResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *answersKey = "answers";
	json_object_set_member(pJsonObject, answersKey, node);
	if (isprimitive("NestedCategory")) {
		NestedCategory obj = getCategory();
		node = converttoJson(&obj, "NestedCategory", "");
	}
	else {
		
		NestedCategory obj = static_cast<NestedCategory> (getCategory());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
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
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
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
		std::string obj = getText();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *textKey = "text";
	json_object_set_member(pJsonObject, textKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
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

bool
PollResource::getActive()
{
	return active;
}

void
PollResource::setActive(bool  active)
{
	this->active = active;
}

std::map<string, string>
PollResource::getAdditionalProperties()
{
	return additional_properties;
}

void
PollResource::setAdditionalProperties(std::map <string, string> additional_properties)
{
	this->additional_properties = additional_properties;
}

std::list<PollAnswerResource>
PollResource::getAnswers()
{
	return answers;
}

void
PollResource::setAnswers(std::list <PollAnswerResource> answers)
{
	this->answers = answers;
}

NestedCategory
PollResource::getCategory()
{
	return category;
}

void
PollResource::setCategory(NestedCategory  category)
{
	this->category = category;
}

long long
PollResource::getCreatedDate()
{
	return created_date;
}

void
PollResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

std::string
PollResource::getId()
{
	return id;
}

void
PollResource::setId(std::string  id)
{
	this->id = id;
}

std::list<std::string>
PollResource::getTags()
{
	return tags;
}

void
PollResource::setTags(std::list <std::string> tags)
{
	this->tags = tags;
}

std::string
PollResource::getTemplate()
{
	return _template;
}

void
PollResource::setTemplate(std::string  _template)
{
	this->_template = _template;
}

std::string
PollResource::getText()
{
	return text;
}

void
PollResource::setText(std::string  text)
{
	this->text = text;
}

std::string
PollResource::getType()
{
	return type;
}

void
PollResource::setType(std::string  type)
{
	this->type = type;
}

long long
PollResource::getUpdatedDate()
{
	return updated_date;
}

void
PollResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}


