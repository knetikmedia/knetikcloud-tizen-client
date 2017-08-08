#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DatabaseConfig.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DatabaseConfig::DatabaseConfig()
{
	//__init();
}

DatabaseConfig::~DatabaseConfig()
{
	//__cleanup();
}

void
DatabaseConfig::__init()
{
	//
	//
	//mongo = new MongoDatabaseConfig();
	//
	//
	//sql = new SqlDatabaseConfig();
	//
}

void
DatabaseConfig::__cleanup()
{
	//if(mongo != NULL) {
	//
	//delete mongo;
	//mongo = NULL;
	//}
	//if(sql != NULL) {
	//
	//delete sql;
	//sql = NULL;
	//}
	//
}

void
DatabaseConfig::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *mongoKey = "mongo";
	node = json_object_get_member(pJsonObject, mongoKey);
	if (node !=NULL) {
	

		if (isprimitive("MongoDatabaseConfig")) {
			jsonToValue(&mongo, node, "MongoDatabaseConfig", "MongoDatabaseConfig");
		} else {
			
			MongoDatabaseConfig* obj = static_cast<MongoDatabaseConfig*> (&mongo);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *sqlKey = "sql";
	node = json_object_get_member(pJsonObject, sqlKey);
	if (node !=NULL) {
	

		if (isprimitive("SqlDatabaseConfig")) {
			jsonToValue(&sql, node, "SqlDatabaseConfig", "SqlDatabaseConfig");
		} else {
			
			SqlDatabaseConfig* obj = static_cast<SqlDatabaseConfig*> (&sql);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

DatabaseConfig::DatabaseConfig(char* json)
{
	this->fromJson(json);
}

char*
DatabaseConfig::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("MongoDatabaseConfig")) {
		MongoDatabaseConfig obj = getMongo();
		node = converttoJson(&obj, "MongoDatabaseConfig", "");
	}
	else {
		
		MongoDatabaseConfig obj = static_cast<MongoDatabaseConfig> (getMongo());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *mongoKey = "mongo";
	json_object_set_member(pJsonObject, mongoKey, node);
	if (isprimitive("SqlDatabaseConfig")) {
		SqlDatabaseConfig obj = getSql();
		node = converttoJson(&obj, "SqlDatabaseConfig", "");
	}
	else {
		
		SqlDatabaseConfig obj = static_cast<SqlDatabaseConfig> (getSql());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *sqlKey = "sql";
	json_object_set_member(pJsonObject, sqlKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

MongoDatabaseConfig
DatabaseConfig::getMongo()
{
	return mongo;
}

void
DatabaseConfig::setMongo(MongoDatabaseConfig  mongo)
{
	this->mongo = mongo;
}

SqlDatabaseConfig
DatabaseConfig::getSql()
{
	return sql;
}

void
DatabaseConfig::setSql(SqlDatabaseConfig  sql)
{
	this->sql = sql;
}


