#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "QuestionResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

QuestionResource::QuestionResource()
{
	//__init();
}

QuestionResource::~QuestionResource()
{
	//__cleanup();
}

void
QuestionResource::__init()
{
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
	//difficulty = int(0);
	//
	//
	//id = std::string();
	//
	//
	//import_id = long(0);
	//
	//
	//published_date = long(0);
	//
	//
	//question = new Property();
	//
	//
	//source1 = std::string();
	//
	//
	//source2 = std::string();
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
	//
	//vendor = std::string();
	//
}

void
QuestionResource::__cleanup()
{
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
	//if(difficulty != NULL) {
	//
	//delete difficulty;
	//difficulty = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(import_id != NULL) {
	//
	//delete import_id;
	//import_id = NULL;
	//}
	//if(published_date != NULL) {
	//
	//delete published_date;
	//published_date = NULL;
	//}
	//if(question != NULL) {
	//
	//delete question;
	//question = NULL;
	//}
	//if(source1 != NULL) {
	//
	//delete source1;
	//source1 = NULL;
	//}
	//if(source2 != NULL) {
	//
	//delete source2;
	//source2 = NULL;
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
	//if(vendor != NULL) {
	//
	//delete vendor;
	//vendor = NULL;
	//}
	//
}

void
QuestionResource::fromJson(char* jsonStr)
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
	const gchar *answersKey = "answers";
	node = json_object_get_member(pJsonObject, answersKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<AnswerResource> new_list;
			AnswerResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("AnswerResource")) {
					jsonToValue(&inst, temp_json, "AnswerResource", "");
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
	const gchar *difficultyKey = "difficulty";
	node = json_object_get_member(pJsonObject, difficultyKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&difficulty, node, "int", "");
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
	const gchar *import_idKey = "import_id";
	node = json_object_get_member(pJsonObject, import_idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&import_id, node, "long long", "");
		} else {
			
		}
	}
	const gchar *published_dateKey = "published_date";
	node = json_object_get_member(pJsonObject, published_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&published_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *questionKey = "question";
	node = json_object_get_member(pJsonObject, questionKey);
	if (node !=NULL) {
	

		if (isprimitive("Property")) {
			jsonToValue(&question, node, "Property", "Property");
		} else {
			
			Property* obj = static_cast<Property*> (&question);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *source1Key = "source1";
	node = json_object_get_member(pJsonObject, source1Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&source1, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *source2Key = "source2";
	node = json_object_get_member(pJsonObject, source2Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&source2, node, "std::string", "");
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
	const gchar *vendorKey = "vendor";
	node = json_object_get_member(pJsonObject, vendorKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vendor, node, "std::string", "");
		} else {
			
		}
	}
}

QuestionResource::QuestionResource(char* json)
{
	this->fromJson(json);
}

char*
QuestionResource::toJson()
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
	if (isprimitive("AnswerResource")) {
		list<AnswerResource> new_list = static_cast<list <AnswerResource> > (getAnswers());
		node = converttoJson(&new_list, "AnswerResource", "array");
	} else {
		node = json_node_alloc();
		list<AnswerResource> new_list = static_cast<list <AnswerResource> > (getAnswers());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<AnswerResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			AnswerResource obj = *it;
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
	if (isprimitive("int")) {
		int obj = getDifficulty();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *difficultyKey = "difficulty";
	json_object_set_member(pJsonObject, difficultyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("long long")) {
		long long obj = getImportId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *import_idKey = "import_id";
	json_object_set_member(pJsonObject, import_idKey, node);
	if (isprimitive("long long")) {
		long long obj = getPublishedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *published_dateKey = "published_date";
	json_object_set_member(pJsonObject, published_dateKey, node);
	if (isprimitive("Property")) {
		Property obj = getQuestion();
		node = converttoJson(&obj, "Property", "");
	}
	else {
		
		Property obj = static_cast<Property> (getQuestion());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *questionKey = "question";
	json_object_set_member(pJsonObject, questionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSource1();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *source1Key = "source1";
	json_object_set_member(pJsonObject, source1Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getSource2();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *source2Key = "source2";
	json_object_set_member(pJsonObject, source2Key, node);
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

std::map<string, string>
QuestionResource::getAdditionalProperties()
{
	return additional_properties;
}

void
QuestionResource::setAdditionalProperties(std::map <string, string> additional_properties)
{
	this->additional_properties = additional_properties;
}

std::list<AnswerResource>
QuestionResource::getAnswers()
{
	return answers;
}

void
QuestionResource::setAnswers(std::list <AnswerResource> answers)
{
	this->answers = answers;
}

NestedCategory
QuestionResource::getCategory()
{
	return category;
}

void
QuestionResource::setCategory(NestedCategory  category)
{
	this->category = category;
}

long long
QuestionResource::getCreatedDate()
{
	return created_date;
}

void
QuestionResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

int
QuestionResource::getDifficulty()
{
	return difficulty;
}

void
QuestionResource::setDifficulty(int  difficulty)
{
	this->difficulty = difficulty;
}

std::string
QuestionResource::getId()
{
	return id;
}

void
QuestionResource::setId(std::string  id)
{
	this->id = id;
}

long long
QuestionResource::getImportId()
{
	return import_id;
}

void
QuestionResource::setImportId(long long  import_id)
{
	this->import_id = import_id;
}

long long
QuestionResource::getPublishedDate()
{
	return published_date;
}

void
QuestionResource::setPublishedDate(long long  published_date)
{
	this->published_date = published_date;
}

Property
QuestionResource::getQuestion()
{
	return question;
}

void
QuestionResource::setQuestion(Property  question)
{
	this->question = question;
}

std::string
QuestionResource::getSource1()
{
	return source1;
}

void
QuestionResource::setSource1(std::string  source1)
{
	this->source1 = source1;
}

std::string
QuestionResource::getSource2()
{
	return source2;
}

void
QuestionResource::setSource2(std::string  source2)
{
	this->source2 = source2;
}

std::list<std::string>
QuestionResource::getTags()
{
	return tags;
}

void
QuestionResource::setTags(std::list <std::string> tags)
{
	this->tags = tags;
}

std::string
QuestionResource::getTemplate()
{
	return _template;
}

void
QuestionResource::setTemplate(std::string  _template)
{
	this->_template = _template;
}

long long
QuestionResource::getUpdatedDate()
{
	return updated_date;
}

void
QuestionResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}

std::string
QuestionResource::getVendor()
{
	return vendor;
}

void
QuestionResource::setVendor(std::string  vendor)
{
	this->vendor = vendor;
}


