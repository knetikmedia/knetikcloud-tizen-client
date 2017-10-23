#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PollResponseResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

PollResponseResource::PollResponseResource()
{
	//__init();
}

PollResponseResource::~PollResponseResource()
{
	//__cleanup();
}

void
PollResponseResource::__init()
{
	//
	//
	//answer = std::string();
	//
	//
	//answered_date = long(0);
	//
	//
	//id = std::string();
	//
	//
	//poll_id = std::string();
	//
	//
	//user = new SimpleUserResource();
	//
}

void
PollResponseResource::__cleanup()
{
	//if(answer != NULL) {
	//
	//delete answer;
	//answer = NULL;
	//}
	//if(answered_date != NULL) {
	//
	//delete answered_date;
	//answered_date = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(poll_id != NULL) {
	//
	//delete poll_id;
	//poll_id = NULL;
	//}
	//if(user != NULL) {
	//
	//delete user;
	//user = NULL;
	//}
	//
}

void
PollResponseResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *answerKey = "answer";
	node = json_object_get_member(pJsonObject, answerKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&answer, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *answered_dateKey = "answered_date";
	node = json_object_get_member(pJsonObject, answered_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&answered_date, node, "long long", "");
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
	const gchar *poll_idKey = "poll_id";
	node = json_object_get_member(pJsonObject, poll_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&poll_id, node, "std::string", "");
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

PollResponseResource::PollResponseResource(char* json)
{
	this->fromJson(json);
}

char*
PollResponseResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getAnswer();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *answerKey = "answer";
	json_object_set_member(pJsonObject, answerKey, node);
	if (isprimitive("long long")) {
		long long obj = getAnsweredDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *answered_dateKey = "answered_date";
	json_object_set_member(pJsonObject, answered_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPollId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *poll_idKey = "poll_id";
	json_object_set_member(pJsonObject, poll_idKey, node);
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

std::string
PollResponseResource::getAnswer()
{
	return answer;
}

void
PollResponseResource::setAnswer(std::string  answer)
{
	this->answer = answer;
}

long long
PollResponseResource::getAnsweredDate()
{
	return answered_date;
}

void
PollResponseResource::setAnsweredDate(long long  answered_date)
{
	this->answered_date = answered_date;
}

std::string
PollResponseResource::getId()
{
	return id;
}

void
PollResponseResource::setId(std::string  id)
{
	this->id = id;
}

std::string
PollResponseResource::getPollId()
{
	return poll_id;
}

void
PollResponseResource::setPollId(std::string  poll_id)
{
	this->poll_id = poll_id;
}

SimpleUserResource
PollResponseResource::getUser()
{
	return user;
}

void
PollResponseResource::setUser(SimpleUserResource  user)
{
	this->user = user;
}


