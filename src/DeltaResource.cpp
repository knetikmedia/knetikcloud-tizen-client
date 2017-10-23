#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DeltaResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DeltaResource::DeltaResource()
{
	//__init();
}

DeltaResource::~DeltaResource()
{
	//__cleanup();
}

void
DeltaResource::__init()
{
	//
	//
	//category_id = std::string();
	//
	//
	//media_type = std::string();
	//
	//
	//question_id = std::string();
	//
	//
	//state = std::string();
	//
	//new std::list()std::list> tags;
	//
	//
	//
	//updated_date = long(0);
	//
}

void
DeltaResource::__cleanup()
{
	//if(category_id != NULL) {
	//
	//delete category_id;
	//category_id = NULL;
	//}
	//if(media_type != NULL) {
	//
	//delete media_type;
	//media_type = NULL;
	//}
	//if(question_id != NULL) {
	//
	//delete question_id;
	//question_id = NULL;
	//}
	//if(state != NULL) {
	//
	//delete state;
	//state = NULL;
	//}
	//if(tags != NULL) {
	//tags.RemoveAll(true);
	//delete tags;
	//tags = NULL;
	//}
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//
}

void
DeltaResource::fromJson(char* jsonStr)
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
	const gchar *media_typeKey = "media_type";
	node = json_object_get_member(pJsonObject, media_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&media_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *question_idKey = "question_id";
	node = json_object_get_member(pJsonObject, question_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&question_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *stateKey = "state";
	node = json_object_get_member(pJsonObject, stateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&state, node, "std::string", "");
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
	const gchar *updated_dateKey = "updated_date";
	node = json_object_get_member(pJsonObject, updated_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&updated_date, node, "long long", "");
		} else {
			
		}
	}
}

DeltaResource::DeltaResource(char* json)
{
	this->fromJson(json);
}

char*
DeltaResource::toJson()
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
	if (isprimitive("std::string")) {
		std::string obj = getMediaType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *media_typeKey = "media_type";
	json_object_set_member(pJsonObject, media_typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getQuestionId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *question_idKey = "question_id";
	json_object_set_member(pJsonObject, question_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getState();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *stateKey = "state";
	json_object_set_member(pJsonObject, stateKey, node);
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

std::string
DeltaResource::getCategoryId()
{
	return category_id;
}

void
DeltaResource::setCategoryId(std::string  category_id)
{
	this->category_id = category_id;
}

std::string
DeltaResource::getMediaType()
{
	return media_type;
}

void
DeltaResource::setMediaType(std::string  media_type)
{
	this->media_type = media_type;
}

std::string
DeltaResource::getQuestionId()
{
	return question_id;
}

void
DeltaResource::setQuestionId(std::string  question_id)
{
	this->question_id = question_id;
}

std::string
DeltaResource::getState()
{
	return state;
}

void
DeltaResource::setState(std::string  state)
{
	this->state = state;
}

std::list<std::string>
DeltaResource::getTags()
{
	return tags;
}

void
DeltaResource::setTags(std::list <std::string> tags)
{
	this->tags = tags;
}

long long
DeltaResource::getUpdatedDate()
{
	return updated_date;
}

void
DeltaResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}


