#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "LeaderboardEntryResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

LeaderboardEntryResource::LeaderboardEntryResource()
{
	//__init();
}

LeaderboardEntryResource::~LeaderboardEntryResource()
{
	//__cleanup();
}

void
LeaderboardEntryResource::__init()
{
	//
	//
	//rank = long(0);
	//
	//
	//score = long(0);
	//
	//
	//updated_date = long(0);
	//
	//
	//user = new SimpleUserResource();
	//
}

void
LeaderboardEntryResource::__cleanup()
{
	//if(rank != NULL) {
	//
	//delete rank;
	//rank = NULL;
	//}
	//if(score != NULL) {
	//
	//delete score;
	//score = NULL;
	//}
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//if(user != NULL) {
	//
	//delete user;
	//user = NULL;
	//}
	//
}

void
LeaderboardEntryResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *rankKey = "rank";
	node = json_object_get_member(pJsonObject, rankKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&rank, node, "long long", "");
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
	const gchar *updated_dateKey = "updated_date";
	node = json_object_get_member(pJsonObject, updated_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&updated_date, node, "long long", "");
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

LeaderboardEntryResource::LeaderboardEntryResource(char* json)
{
	this->fromJson(json);
}

char*
LeaderboardEntryResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getRank();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *rankKey = "rank";
	json_object_set_member(pJsonObject, rankKey, node);
	if (isprimitive("long long")) {
		long long obj = getScore();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *scoreKey = "score";
	json_object_set_member(pJsonObject, scoreKey, node);
	if (isprimitive("long long")) {
		long long obj = getUpdatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *updated_dateKey = "updated_date";
	json_object_set_member(pJsonObject, updated_dateKey, node);
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

long long
LeaderboardEntryResource::getRank()
{
	return rank;
}

void
LeaderboardEntryResource::setRank(long long  rank)
{
	this->rank = rank;
}

long long
LeaderboardEntryResource::getScore()
{
	return score;
}

void
LeaderboardEntryResource::setScore(long long  score)
{
	this->score = score;
}

long long
LeaderboardEntryResource::getUpdatedDate()
{
	return updated_date;
}

void
LeaderboardEntryResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}

SimpleUserResource
LeaderboardEntryResource::getUser()
{
	return user;
}

void
LeaderboardEntryResource::setUser(SimpleUserResource  user)
{
	this->user = user;
}


