#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CoreActivitySettings.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CoreActivitySettings::CoreActivitySettings()
{
	//__init();
}

CoreActivitySettings::~CoreActivitySettings()
{
	//__cleanup();
}

void
CoreActivitySettings::__init()
{
	//
	//
	//boot_in_play = bool(false);
	//
	//
	//custom_launch_address_allowed = bool(false);
	//
	//
	//host_option = std::string();
	//
	//
	//host_status_control = bool(false);
	//
	//
	//join_in_play = bool(false);
	//
	//
	//leave_in_play = bool(false);
	//
	//
	//max_players = int(0);
	//
	//
	//min_players = int(0);
	//
	//
	//results_trust = std::string();
	//
}

void
CoreActivitySettings::__cleanup()
{
	//if(boot_in_play != NULL) {
	//
	//delete boot_in_play;
	//boot_in_play = NULL;
	//}
	//if(custom_launch_address_allowed != NULL) {
	//
	//delete custom_launch_address_allowed;
	//custom_launch_address_allowed = NULL;
	//}
	//if(host_option != NULL) {
	//
	//delete host_option;
	//host_option = NULL;
	//}
	//if(host_status_control != NULL) {
	//
	//delete host_status_control;
	//host_status_control = NULL;
	//}
	//if(join_in_play != NULL) {
	//
	//delete join_in_play;
	//join_in_play = NULL;
	//}
	//if(leave_in_play != NULL) {
	//
	//delete leave_in_play;
	//leave_in_play = NULL;
	//}
	//if(max_players != NULL) {
	//
	//delete max_players;
	//max_players = NULL;
	//}
	//if(min_players != NULL) {
	//
	//delete min_players;
	//min_players = NULL;
	//}
	//if(results_trust != NULL) {
	//
	//delete results_trust;
	//results_trust = NULL;
	//}
	//
}

void
CoreActivitySettings::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *boot_in_playKey = "boot_in_play";
	node = json_object_get_member(pJsonObject, boot_in_playKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&boot_in_play, node, "bool", "");
		} else {
			
		}
	}
	const gchar *custom_launch_address_allowedKey = "custom_launch_address_allowed";
	node = json_object_get_member(pJsonObject, custom_launch_address_allowedKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&custom_launch_address_allowed, node, "bool", "");
		} else {
			
		}
	}
	const gchar *host_optionKey = "host_option";
	node = json_object_get_member(pJsonObject, host_optionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&host_option, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *host_status_controlKey = "host_status_control";
	node = json_object_get_member(pJsonObject, host_status_controlKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&host_status_control, node, "bool", "");
		} else {
			
		}
	}
	const gchar *join_in_playKey = "join_in_play";
	node = json_object_get_member(pJsonObject, join_in_playKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&join_in_play, node, "bool", "");
		} else {
			
		}
	}
	const gchar *leave_in_playKey = "leave_in_play";
	node = json_object_get_member(pJsonObject, leave_in_playKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&leave_in_play, node, "bool", "");
		} else {
			
		}
	}
	const gchar *max_playersKey = "max_players";
	node = json_object_get_member(pJsonObject, max_playersKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&max_players, node, "int", "");
		} else {
			
		}
	}
	const gchar *min_playersKey = "min_players";
	node = json_object_get_member(pJsonObject, min_playersKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&min_players, node, "int", "");
		} else {
			
		}
	}
	const gchar *results_trustKey = "results_trust";
	node = json_object_get_member(pJsonObject, results_trustKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&results_trust, node, "std::string", "");
		} else {
			
		}
	}
}

CoreActivitySettings::CoreActivitySettings(char* json)
{
	this->fromJson(json);
}

char*
CoreActivitySettings::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getBootInPlay();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *boot_in_playKey = "boot_in_play";
	json_object_set_member(pJsonObject, boot_in_playKey, node);
	if (isprimitive("bool")) {
		bool obj = getCustomLaunchAddressAllowed();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *custom_launch_address_allowedKey = "custom_launch_address_allowed";
	json_object_set_member(pJsonObject, custom_launch_address_allowedKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getHostOption();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *host_optionKey = "host_option";
	json_object_set_member(pJsonObject, host_optionKey, node);
	if (isprimitive("bool")) {
		bool obj = getHostStatusControl();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *host_status_controlKey = "host_status_control";
	json_object_set_member(pJsonObject, host_status_controlKey, node);
	if (isprimitive("bool")) {
		bool obj = getJoinInPlay();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *join_in_playKey = "join_in_play";
	json_object_set_member(pJsonObject, join_in_playKey, node);
	if (isprimitive("bool")) {
		bool obj = getLeaveInPlay();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *leave_in_playKey = "leave_in_play";
	json_object_set_member(pJsonObject, leave_in_playKey, node);
	if (isprimitive("int")) {
		int obj = getMaxPlayers();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *max_playersKey = "max_players";
	json_object_set_member(pJsonObject, max_playersKey, node);
	if (isprimitive("int")) {
		int obj = getMinPlayers();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *min_playersKey = "min_players";
	json_object_set_member(pJsonObject, min_playersKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getResultsTrust();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *results_trustKey = "results_trust";
	json_object_set_member(pJsonObject, results_trustKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
CoreActivitySettings::getBootInPlay()
{
	return boot_in_play;
}

void
CoreActivitySettings::setBootInPlay(bool  boot_in_play)
{
	this->boot_in_play = boot_in_play;
}

bool
CoreActivitySettings::getCustomLaunchAddressAllowed()
{
	return custom_launch_address_allowed;
}

void
CoreActivitySettings::setCustomLaunchAddressAllowed(bool  custom_launch_address_allowed)
{
	this->custom_launch_address_allowed = custom_launch_address_allowed;
}

std::string
CoreActivitySettings::getHostOption()
{
	return host_option;
}

void
CoreActivitySettings::setHostOption(std::string  host_option)
{
	this->host_option = host_option;
}

bool
CoreActivitySettings::getHostStatusControl()
{
	return host_status_control;
}

void
CoreActivitySettings::setHostStatusControl(bool  host_status_control)
{
	this->host_status_control = host_status_control;
}

bool
CoreActivitySettings::getJoinInPlay()
{
	return join_in_play;
}

void
CoreActivitySettings::setJoinInPlay(bool  join_in_play)
{
	this->join_in_play = join_in_play;
}

bool
CoreActivitySettings::getLeaveInPlay()
{
	return leave_in_play;
}

void
CoreActivitySettings::setLeaveInPlay(bool  leave_in_play)
{
	this->leave_in_play = leave_in_play;
}

int
CoreActivitySettings::getMaxPlayers()
{
	return max_players;
}

void
CoreActivitySettings::setMaxPlayers(int  max_players)
{
	this->max_players = max_players;
}

int
CoreActivitySettings::getMinPlayers()
{
	return min_players;
}

void
CoreActivitySettings::setMinPlayers(int  min_players)
{
	this->min_players = min_players;
}

std::string
CoreActivitySettings::getResultsTrust()
{
	return results_trust;
}

void
CoreActivitySettings::setResultsTrust(std::string  results_trust)
{
	this->results_trust = results_trust;
}


