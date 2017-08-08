#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BareChallengeActivityResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BareChallengeActivityResource::BareChallengeActivityResource()
{
	//__init();
}

BareChallengeActivityResource::~BareChallengeActivityResource()
{
	//__cleanup();
}

void
BareChallengeActivityResource::__init()
{
	//
	//
	//activity_id = long(0);
	//
	//
	//challenge_id = long(0);
	//
	//
	//id = long(0);
	//
}

void
BareChallengeActivityResource::__cleanup()
{
	//if(activity_id != NULL) {
	//
	//delete activity_id;
	//activity_id = NULL;
	//}
	//if(challenge_id != NULL) {
	//
	//delete challenge_id;
	//challenge_id = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//
}

void
BareChallengeActivityResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *activity_idKey = "activity_id";
	node = json_object_get_member(pJsonObject, activity_idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&activity_id, node, "long long", "");
		} else {
			
		}
	}
	const gchar *challenge_idKey = "challenge_id";
	node = json_object_get_member(pJsonObject, challenge_idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&challenge_id, node, "long long", "");
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
}

BareChallengeActivityResource::BareChallengeActivityResource(char* json)
{
	this->fromJson(json);
}

char*
BareChallengeActivityResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getActivityId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *activity_idKey = "activity_id";
	json_object_set_member(pJsonObject, activity_idKey, node);
	if (isprimitive("long long")) {
		long long obj = getChallengeId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *challenge_idKey = "challenge_id";
	json_object_set_member(pJsonObject, challenge_idKey, node);
	if (isprimitive("long long")) {
		long long obj = getId();
		node = converttoJson(&obj, "long long", "");
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

long long
BareChallengeActivityResource::getActivityId()
{
	return activity_id;
}

void
BareChallengeActivityResource::setActivityId(long long  activity_id)
{
	this->activity_id = activity_id;
}

long long
BareChallengeActivityResource::getChallengeId()
{
	return challenge_id;
}

void
BareChallengeActivityResource::setChallengeId(long long  challenge_id)
{
	this->challenge_id = challenge_id;
}

long long
BareChallengeActivityResource::getId()
{
	return id;
}

void
BareChallengeActivityResource::setId(long long  id)
{
	this->id = id;
}


