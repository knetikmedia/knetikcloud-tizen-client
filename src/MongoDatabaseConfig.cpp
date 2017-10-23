#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MongoDatabaseConfig.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MongoDatabaseConfig::MongoDatabaseConfig()
{
	//__init();
}

MongoDatabaseConfig::~MongoDatabaseConfig()
{
	//__cleanup();
}

void
MongoDatabaseConfig::__init()
{
	//
	//
	//db_name = std::string();
	//
	//
	//options = std::string();
	//
	//
	//password = std::string();
	//
	//
	//servers = std::string();
	//
	//
	//username = std::string();
	//
}

void
MongoDatabaseConfig::__cleanup()
{
	//if(db_name != NULL) {
	//
	//delete db_name;
	//db_name = NULL;
	//}
	//if(options != NULL) {
	//
	//delete options;
	//options = NULL;
	//}
	//if(password != NULL) {
	//
	//delete password;
	//password = NULL;
	//}
	//if(servers != NULL) {
	//
	//delete servers;
	//servers = NULL;
	//}
	//if(username != NULL) {
	//
	//delete username;
	//username = NULL;
	//}
	//
}

void
MongoDatabaseConfig::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *db_nameKey = "db_name";
	node = json_object_get_member(pJsonObject, db_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&db_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *optionsKey = "options";
	node = json_object_get_member(pJsonObject, optionsKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&options, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *passwordKey = "password";
	node = json_object_get_member(pJsonObject, passwordKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&password, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *serversKey = "servers";
	node = json_object_get_member(pJsonObject, serversKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&servers, node, "std::string", "");
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

MongoDatabaseConfig::MongoDatabaseConfig(char* json)
{
	this->fromJson(json);
}

char*
MongoDatabaseConfig::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getDbName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *db_nameKey = "db_name";
	json_object_set_member(pJsonObject, db_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getOptions();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *optionsKey = "options";
	json_object_set_member(pJsonObject, optionsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPassword();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *passwordKey = "password";
	json_object_set_member(pJsonObject, passwordKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServers();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *serversKey = "servers";
	json_object_set_member(pJsonObject, serversKey, node);
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
MongoDatabaseConfig::getDbName()
{
	return db_name;
}

void
MongoDatabaseConfig::setDbName(std::string  db_name)
{
	this->db_name = db_name;
}

std::string
MongoDatabaseConfig::getOptions()
{
	return options;
}

void
MongoDatabaseConfig::setOptions(std::string  options)
{
	this->options = options;
}

std::string
MongoDatabaseConfig::getPassword()
{
	return password;
}

void
MongoDatabaseConfig::setPassword(std::string  password)
{
	this->password = password;
}

std::string
MongoDatabaseConfig::getServers()
{
	return servers;
}

void
MongoDatabaseConfig::setServers(std::string  servers)
{
	this->servers = servers;
}

std::string
MongoDatabaseConfig::getUsername()
{
	return username;
}

void
MongoDatabaseConfig::setUsername(std::string  username)
{
	this->username = username;
}


