#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "SqlDatabaseConfig.h"

using namespace std;
using namespace Tizen::ArtikCloud;

SqlDatabaseConfig::SqlDatabaseConfig()
{
	//__init();
}

SqlDatabaseConfig::~SqlDatabaseConfig()
{
	//__cleanup();
}

void
SqlDatabaseConfig::__init()
{
	//
	//
	//connection_pool_size = int(0);
	//
	//
	//db_name = std::string();
	//
	//
	//hostname = std::string();
	//
	//
	//password = std::string();
	//
	//
	//port = int(0);
	//
	//
	//username = std::string();
	//
}

void
SqlDatabaseConfig::__cleanup()
{
	//if(connection_pool_size != NULL) {
	//
	//delete connection_pool_size;
	//connection_pool_size = NULL;
	//}
	//if(db_name != NULL) {
	//
	//delete db_name;
	//db_name = NULL;
	//}
	//if(hostname != NULL) {
	//
	//delete hostname;
	//hostname = NULL;
	//}
	//if(password != NULL) {
	//
	//delete password;
	//password = NULL;
	//}
	//if(port != NULL) {
	//
	//delete port;
	//port = NULL;
	//}
	//if(username != NULL) {
	//
	//delete username;
	//username = NULL;
	//}
	//
}

void
SqlDatabaseConfig::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *connection_pool_sizeKey = "connection_pool_size";
	node = json_object_get_member(pJsonObject, connection_pool_sizeKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&connection_pool_size, node, "int", "");
		} else {
			
		}
	}
	const gchar *db_nameKey = "db_name";
	node = json_object_get_member(pJsonObject, db_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&db_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *hostnameKey = "hostname";
	node = json_object_get_member(pJsonObject, hostnameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&hostname, node, "std::string", "");
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
	const gchar *portKey = "port";
	node = json_object_get_member(pJsonObject, portKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&port, node, "int", "");
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

SqlDatabaseConfig::SqlDatabaseConfig(char* json)
{
	this->fromJson(json);
}

char*
SqlDatabaseConfig::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getConnectionPoolSize();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *connection_pool_sizeKey = "connection_pool_size";
	json_object_set_member(pJsonObject, connection_pool_sizeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDbName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *db_nameKey = "db_name";
	json_object_set_member(pJsonObject, db_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getHostname();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *hostnameKey = "hostname";
	json_object_set_member(pJsonObject, hostnameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPassword();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *passwordKey = "password";
	json_object_set_member(pJsonObject, passwordKey, node);
	if (isprimitive("int")) {
		int obj = getPort();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *portKey = "port";
	json_object_set_member(pJsonObject, portKey, node);
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

int
SqlDatabaseConfig::getConnectionPoolSize()
{
	return connection_pool_size;
}

void
SqlDatabaseConfig::setConnectionPoolSize(int  connection_pool_size)
{
	this->connection_pool_size = connection_pool_size;
}

std::string
SqlDatabaseConfig::getDbName()
{
	return db_name;
}

void
SqlDatabaseConfig::setDbName(std::string  db_name)
{
	this->db_name = db_name;
}

std::string
SqlDatabaseConfig::getHostname()
{
	return hostname;
}

void
SqlDatabaseConfig::setHostname(std::string  hostname)
{
	this->hostname = hostname;
}

std::string
SqlDatabaseConfig::getPassword()
{
	return password;
}

void
SqlDatabaseConfig::setPassword(std::string  password)
{
	this->password = password;
}

int
SqlDatabaseConfig::getPort()
{
	return port;
}

void
SqlDatabaseConfig::setPort(int  port)
{
	this->port = port;
}

std::string
SqlDatabaseConfig::getUsername()
{
	return username;
}

void
SqlDatabaseConfig::setUsername(std::string  username)
{
	this->username = username;
}


