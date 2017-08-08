#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ChallengeEventParticipantResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ChallengeEventParticipantResource::ChallengeEventParticipantResource()
{
	//__init();
}

ChallengeEventParticipantResource::~ChallengeEventParticipantResource()
{
	//__cleanup();
}

void
ChallengeEventParticipantResource::__init()
{
	//
	//
	//email = std::string();
	//
	//
	//fullname = std::string();
	//
	//
	//score = long(0);
	//
	//
	//user_id = int(0);
	//
	//
	//username = std::string();
	//
}

void
ChallengeEventParticipantResource::__cleanup()
{
	//if(email != NULL) {
	//
	//delete email;
	//email = NULL;
	//}
	//if(fullname != NULL) {
	//
	//delete fullname;
	//fullname = NULL;
	//}
	//if(score != NULL) {
	//
	//delete score;
	//score = NULL;
	//}
	//if(user_id != NULL) {
	//
	//delete user_id;
	//user_id = NULL;
	//}
	//if(username != NULL) {
	//
	//delete username;
	//username = NULL;
	//}
	//
}

void
ChallengeEventParticipantResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *emailKey = "email";
	node = json_object_get_member(pJsonObject, emailKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&email, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *fullnameKey = "fullname";
	node = json_object_get_member(pJsonObject, fullnameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&fullname, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *scoreKey = "score";
	node = json_object_get_member(pJsonObject, scoreKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&score, node, "long long", "");
		} else {
			
		}
	}
	const gchar *user_idKey = "user_id";
	node = json_object_get_member(pJsonObject, user_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&user_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *usernameKey = "username";
	node = json_object_get_member(pJsonObject, usernameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&username, node, "std::string", "");
		} else {
			
		}
	}
}

ChallengeEventParticipantResource::ChallengeEventParticipantResource(char* json)
{
	this->fromJson(json);
}

char*
ChallengeEventParticipantResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getEmail();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *emailKey = "email";
	json_object_set_member(pJsonObject, emailKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getFullname();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *fullnameKey = "fullname";
	json_object_set_member(pJsonObject, fullnameKey, node);
	if (isprimitive("long long")) {
		long long obj = getScore();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *scoreKey = "score";
	json_object_set_member(pJsonObject, scoreKey, node);
	if (isprimitive("int")) {
		int obj = getUserId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *user_idKey = "user_id";
	json_object_set_member(pJsonObject, user_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUsername();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *usernameKey = "username";
	json_object_set_member(pJsonObject, usernameKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
ChallengeEventParticipantResource::getEmail()
{
	return email;
}

void
ChallengeEventParticipantResource::setEmail(std::string  email)
{
	this->email = email;
}

std::string
ChallengeEventParticipantResource::getFullname()
{
	return fullname;
}

void
ChallengeEventParticipantResource::setFullname(std::string  fullname)
{
	this->fullname = fullname;
}

long long
ChallengeEventParticipantResource::getScore()
{
	return score;
}

void
ChallengeEventParticipantResource::setScore(long long  score)
{
	this->score = score;
}

int
ChallengeEventParticipantResource::getUserId()
{
	return user_id;
}

void
ChallengeEventParticipantResource::setUserId(int  user_id)
{
	this->user_id = user_id;
}

std::string
ChallengeEventParticipantResource::getUsername()
{
	return username;
}

void
ChallengeEventParticipantResource::setUsername(std::string  username)
{
	this->username = username;
}


