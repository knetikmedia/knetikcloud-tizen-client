#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "QuestionTemplateResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

QuestionTemplateResource::QuestionTemplateResource()
{
	//__init();
}

QuestionTemplateResource::~QuestionTemplateResource()
{
	//__cleanup();
}

void
QuestionTemplateResource::__init()
{
	//
	//
	//answer_property = new PropertyDefinitionResource();
	//
	//
	//created_date = long(0);
	//
	//
	//id = std::string();
	//
	//
	//name = std::string();
	//
	//new std::list()std::list> properties;
	//
	//
	//
	//question_property = new PropertyDefinitionResource();
	//
	//
	//updated_date = long(0);
	//
}

void
QuestionTemplateResource::__cleanup()
{
	//if(answer_property != NULL) {
	//
	//delete answer_property;
	//answer_property = NULL;
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
	//if(properties != NULL) {
	//properties.RemoveAll(true);
	//delete properties;
	//properties = NULL;
	//}
	//if(question_property != NULL) {
	//
	//delete question_property;
	//question_property = NULL;
	//}
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//
}

void
QuestionTemplateResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *answer_propertyKey = "answer_property";
	node = json_object_get_member(pJsonObject, answer_propertyKey);
	if (node !=NULL) {
	

		if (isprimitive("PropertyDefinitionResource")) {
			jsonToValue(&answer_property, node, "PropertyDefinitionResource", "PropertyDefinitionResource");
		} else {
			
			PropertyDefinitionResource* obj = static_cast<PropertyDefinitionResource*> (&answer_property);
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
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *propertiesKey = "properties";
	node = json_object_get_member(pJsonObject, propertiesKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<PropertyDefinitionResource> new_list;
			PropertyDefinitionResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("PropertyDefinitionResource")) {
					jsonToValue(&inst, temp_json, "PropertyDefinitionResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			properties = new_list;
		}
		
	}
	const gchar *question_propertyKey = "question_property";
	node = json_object_get_member(pJsonObject, question_propertyKey);
	if (node !=NULL) {
	

		if (isprimitive("PropertyDefinitionResource")) {
			jsonToValue(&question_property, node, "PropertyDefinitionResource", "PropertyDefinitionResource");
		} else {
			
			PropertyDefinitionResource* obj = static_cast<PropertyDefinitionResource*> (&question_property);
			obj->fromJson(json_to_string(node, false));
			
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

QuestionTemplateResource::QuestionTemplateResource(char* json)
{
	this->fromJson(json);
}

char*
QuestionTemplateResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("PropertyDefinitionResource")) {
		PropertyDefinitionResource obj = getAnswerProperty();
		node = converttoJson(&obj, "PropertyDefinitionResource", "");
	}
	else {
		
		PropertyDefinitionResource obj = static_cast<PropertyDefinitionResource> (getAnswerProperty());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *answer_propertyKey = "answer_property";
	json_object_set_member(pJsonObject, answer_propertyKey, node);
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
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("PropertyDefinitionResource")) {
		list<PropertyDefinitionResource> new_list = static_cast<list <PropertyDefinitionResource> > (getProperties());
		node = converttoJson(&new_list, "PropertyDefinitionResource", "array");
	} else {
		node = json_node_alloc();
		list<PropertyDefinitionResource> new_list = static_cast<list <PropertyDefinitionResource> > (getProperties());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<PropertyDefinitionResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			PropertyDefinitionResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *propertiesKey = "properties";
	json_object_set_member(pJsonObject, propertiesKey, node);
	if (isprimitive("PropertyDefinitionResource")) {
		PropertyDefinitionResource obj = getQuestionProperty();
		node = converttoJson(&obj, "PropertyDefinitionResource", "");
	}
	else {
		
		PropertyDefinitionResource obj = static_cast<PropertyDefinitionResource> (getQuestionProperty());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *question_propertyKey = "question_property";
	json_object_set_member(pJsonObject, question_propertyKey, node);
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

PropertyDefinitionResource
QuestionTemplateResource::getAnswerProperty()
{
	return answer_property;
}

void
QuestionTemplateResource::setAnswerProperty(PropertyDefinitionResource  answer_property)
{
	this->answer_property = answer_property;
}

long long
QuestionTemplateResource::getCreatedDate()
{
	return created_date;
}

void
QuestionTemplateResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

std::string
QuestionTemplateResource::getId()
{
	return id;
}

void
QuestionTemplateResource::setId(std::string  id)
{
	this->id = id;
}

std::string
QuestionTemplateResource::getName()
{
	return name;
}

void
QuestionTemplateResource::setName(std::string  name)
{
	this->name = name;
}

std::list<PropertyDefinitionResource>
QuestionTemplateResource::getProperties()
{
	return properties;
}

void
QuestionTemplateResource::setProperties(std::list <PropertyDefinitionResource> properties)
{
	this->properties = properties;
}

PropertyDefinitionResource
QuestionTemplateResource::getQuestionProperty()
{
	return question_property;
}

void
QuestionTemplateResource::setQuestionProperty(PropertyDefinitionResource  question_property)
{
	this->question_property = question_property;
}

long long
QuestionTemplateResource::getUpdatedDate()
{
	return updated_date;
}

void
QuestionTemplateResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}


