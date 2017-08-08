#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ChallengeEventResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ChallengeEventResource::ChallengeEventResource()
{
	//__init();
}

ChallengeEventResource::~ChallengeEventResource()
{
	//__cleanup();
}

void
ChallengeEventResource::__init()
{
	//
	//
	//challenge_id = long(0);
	//
	//
	//end_date = long(0);
	//
	//
	//id = long(0);
	//
	//
	//reward_status = std::string();
	//
	//
	//start_date = long(0);
	//
}

void
ChallengeEventResource::__cleanup()
{
	//if(challenge_id != NULL) {
	//
	//delete challenge_id;
	//challenge_id = NULL;
	//}
	//if(end_date != NULL) {
	//
	//delete end_date;
	//end_date = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(reward_status != NULL) {
	//
	//delete reward_status;
	//reward_status = NULL;
	//}
	//if(start_date != NULL) {
	//
	//delete start_date;
	//start_date = NULL;
	//}
	//
}

void
ChallengeEventResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *challenge_idKey = "challenge_id";
	node = json_object_get_member(pJsonObject, challenge_idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&challenge_id, node, "long long", "");
		} else {
			
		}
	}
	const gchar *end_dateKey = "end_date";
	node = json_object_get_member(pJsonObject, end_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&end_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&id, node, "long long", "");
		} else {
			
		}
	}
	const gchar *reward_statusKey = "reward_status";
	node = json_object_get_member(pJsonObject, reward_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&reward_status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *start_dateKey = "start_date";
	node = json_object_get_member(pJsonObject, start_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&start_date, node, "long long", "");
		} else {
			
		}
	}
}

ChallengeEventResource::ChallengeEventResource(char* json)
{
	this->fromJson(json);
}

char*
ChallengeEventResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getChallengeId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *challenge_idKey = "challenge_id";
	json_object_set_member(pJsonObject, challenge_idKey, node);
	if (isprimitive("long long")) {
		long long obj = getEndDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *end_dateKey = "end_date";
	json_object_set_member(pJsonObject, end_dateKey, node);
	if (isprimitive("long long")) {
		long long obj = getId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRewardStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *reward_statusKey = "reward_status";
	json_object_set_member(pJsonObject, reward_statusKey, node);
	if (isprimitive("long long")) {
		long long obj = getStartDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *start_dateKey = "start_date";
	json_object_set_member(pJsonObject, start_dateKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
ChallengeEventResource::getChallengeId()
{
	return challenge_id;
}

void
ChallengeEventResource::setChallengeId(long long  challenge_id)
{
	this->challenge_id = challenge_id;
}

long long
ChallengeEventResource::getEndDate()
{
	return end_date;
}

void
ChallengeEventResource::setEndDate(long long  end_date)
{
	this->end_date = end_date;
}

long long
ChallengeEventResource::getId()
{
	return id;
}

void
ChallengeEventResource::setId(long long  id)
{
	this->id = id;
}

std::string
ChallengeEventResource::getRewardStatus()
{
	return reward_status;
}

void
ChallengeEventResource::setRewardStatus(std::string  reward_status)
{
	this->reward_status = reward_status;
}

long long
ChallengeEventResource::getStartDate()
{
	return start_date;
}

void
ChallengeEventResource::setStartDate(long long  start_date)
{
	this->start_date = start_date;
}


