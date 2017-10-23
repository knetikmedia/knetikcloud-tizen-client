#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "GuestPlayable.h"

using namespace std;
using namespace Tizen::ArtikCloud;

GuestPlayable::GuestPlayable()
{
	//__init();
}

GuestPlayable::~GuestPlayable()
{
	//__cleanup();
}

void
GuestPlayable::__init()
{
	//
	//
	//description = std::string();
	//
	//
	//type_hint = std::string();
	//
	//
	//allowed = bool(false);
	//
	//
	//leaderboard = bool(false);
	//
}

void
GuestPlayable::__cleanup()
{
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
	//}
	//if(type_hint != NULL) {
	//
	//delete type_hint;
	//type_hint = NULL;
	//}
	//if(allowed != NULL) {
	//
	//delete allowed;
	//allowed = NULL;
	//}
	//if(leaderboard != NULL) {
	//
	//delete leaderboard;
	//leaderboard = NULL;
	//}
	//
}

void
GuestPlayable::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *descriptionKey = "description";
	node = json_object_get_member(pJsonObject, descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *type_hintKey = "type_hint";
	node = json_object_get_member(pJsonObject, type_hintKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type_hint, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *allowedKey = "allowed";
	node = json_object_get_member(pJsonObject, allowedKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&allowed, node, "bool", "");
		} else {
			
		}
	}
	const gchar *leaderboardKey = "leaderboard";
	node = json_object_get_member(pJsonObject, leaderboardKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&leaderboard, node, "bool", "");
		} else {
			
		}
	}
}

GuestPlayable::GuestPlayable(char* json)
{
	this->fromJson(json);
}

char*
GuestPlayable::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *descriptionKey = "description";
	json_object_set_member(pJsonObject, descriptionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTypeHint();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *type_hintKey = "type_hint";
	json_object_set_member(pJsonObject, type_hintKey, node);
	if (isprimitive("bool")) {
		bool obj = getAllowed();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *allowedKey = "allowed";
	json_object_set_member(pJsonObject, allowedKey, node);
	if (isprimitive("bool")) {
		bool obj = getLeaderboard();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *leaderboardKey = "leaderboard";
	json_object_set_member(pJsonObject, leaderboardKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
GuestPlayable::getDescription()
{
	return description;
}

void
GuestPlayable::setDescription(std::string  description)
{
	this->description = description;
}

std::string
GuestPlayable::getTypeHint()
{
	return type_hint;
}

void
GuestPlayable::setTypeHint(std::string  type_hint)
{
	this->type_hint = type_hint;
}

bool
GuestPlayable::getAllowed()
{
	return allowed;
}

void
GuestPlayable::setAllowed(bool  allowed)
{
	this->allowed = allowed;
}

bool
GuestPlayable::getLeaderboard()
{
	return leaderboard;
}

void
GuestPlayable::setLeaderboard(bool  leaderboard)
{
	this->leaderboard = leaderboard;
}


