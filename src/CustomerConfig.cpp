#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CustomerConfig.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CustomerConfig::CustomerConfig()
{
	//__init();
}

CustomerConfig::~CustomerConfig()
{
	//__cleanup();
}

void
CustomerConfig::__init()
{
	//
	//
	//aliases = std::string();
	//
	//
	//database = new DatabaseConfig();
	//
	//
	//name = std::string();
	//
	//
	//s3_config = new S3Config();
	//
}

void
CustomerConfig::__cleanup()
{
	//if(aliases != NULL) {
	//
	//delete aliases;
	//aliases = NULL;
	//}
	//if(database != NULL) {
	//
	//delete database;
	//database = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(s3_config != NULL) {
	//
	//delete s3_config;
	//s3_config = NULL;
	//}
	//
}

void
CustomerConfig::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *aliasesKey = "aliases";
	node = json_object_get_member(pJsonObject, aliasesKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&aliases, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *databaseKey = "database";
	node = json_object_get_member(pJsonObject, databaseKey);
	if (node !=NULL) {
	

		if (isprimitive("DatabaseConfig")) {
			jsonToValue(&database, node, "DatabaseConfig", "DatabaseConfig");
		} else {
			
			DatabaseConfig* obj = static_cast<DatabaseConfig*> (&database);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *s3_configKey = "s3_config";
	node = json_object_get_member(pJsonObject, s3_configKey);
	if (node !=NULL) {
	

		if (isprimitive("S3Config")) {
			jsonToValue(&s3_config, node, "S3Config", "S3Config");
		} else {
			
			S3Config* obj = static_cast<S3Config*> (&s3_config);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

CustomerConfig::CustomerConfig(char* json)
{
	this->fromJson(json);
}

char*
CustomerConfig::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getAliases();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *aliasesKey = "aliases";
	json_object_set_member(pJsonObject, aliasesKey, node);
	if (isprimitive("DatabaseConfig")) {
		DatabaseConfig obj = getDatabase();
		node = converttoJson(&obj, "DatabaseConfig", "");
	}
	else {
		
		DatabaseConfig obj = static_cast<DatabaseConfig> (getDatabase());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *databaseKey = "database";
	json_object_set_member(pJsonObject, databaseKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("S3Config")) {
		S3Config obj = getS3Config();
		node = converttoJson(&obj, "S3Config", "");
	}
	else {
		
		S3Config obj = static_cast<S3Config> (getS3Config());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *s3_configKey = "s3_config";
	json_object_set_member(pJsonObject, s3_configKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
CustomerConfig::getAliases()
{
	return aliases;
}

void
CustomerConfig::setAliases(std::string  aliases)
{
	this->aliases = aliases;
}

DatabaseConfig
CustomerConfig::getDatabase()
{
	return database;
}

void
CustomerConfig::setDatabase(DatabaseConfig  database)
{
	this->database = database;
}

std::string
CustomerConfig::getName()
{
	return name;
}

void
CustomerConfig::setName(std::string  name)
{
	this->name = name;
}

S3Config
CustomerConfig::getS3Config()
{
	return s3_config;
}

void
CustomerConfig::setS3Config(S3Config  s3_config)
{
	this->s3_config = s3_config;
}


