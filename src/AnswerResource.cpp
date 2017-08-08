#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "AnswerResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

AnswerResource::AnswerResource()
{
	//__init();
}

AnswerResource::~AnswerResource()
{
	//__cleanup();
}

void
AnswerResource::__init()
{
	//
	//
	//answer = new Property();
	//
	//
	//correct = bool(false);
	//
	//
	//id = std::string();
	//
}

void
AnswerResource::__cleanup()
{
	//if(answer != NULL) {
	//
	//delete answer;
	//answer = NULL;
	//}
	//if(correct != NULL) {
	//
	//delete correct;
	//correct = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//
}

void
AnswerResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *answerKey = "answer";
	node = json_object_get_member(pJsonObject, answerKey);
	if (node !=NULL) {
	

		if (isprimitive("Property")) {
			jsonToValue(&answer, node, "Property", "Property");
		} else {
			
			Property* obj = static_cast<Property*> (&answer);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *correctKey = "correct";
	node = json_object_get_member(pJsonObject, correctKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&correct, node, "bool", "");
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
}

AnswerResource::AnswerResource(char* json)
{
	this->fromJson(json);
}

char*
AnswerResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("Property")) {
		Property obj = getAnswer();
		node = converttoJson(&obj, "Property", "");
	}
	else {
		
		Property obj = static_cast<Property> (getAnswer());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *answerKey = "answer";
	json_object_set_member(pJsonObject, answerKey, node);
	if (isprimitive("bool")) {
		bool obj = getCorrect();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *correctKey = "correct";
	json_object_set_member(pJsonObject, correctKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

Property
AnswerResource::getAnswer()
{
	return answer;
}

void
AnswerResource::setAnswer(Property  answer)
{
	this->answer = answer;
}

bool
AnswerResource::getCorrect()
{
	return correct;
}

void
AnswerResource::setCorrect(bool  correct)
{
	this->correct = correct;
}

std::string
AnswerResource::getId()
{
	return id;
}

void
AnswerResource::setId(std::string  id)
{
	this->id = id;
}


