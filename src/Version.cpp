#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Version.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Version::Version()
{
	//__init();
}

Version::~Version()
{
	//__cleanup();
}

void
Version::__init()
{
	//
	//
	//version = std::string();
	//
}

void
Version::__cleanup()
{
	//if(version != NULL) {
	//
	//delete version;
	//version = NULL;
	//}
	//
}

void
Version::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *versionKey = "version";
	node = json_object_get_member(pJsonObject, versionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&version, node, "std::string", "");
		} else {
			
		}
	}
}

Version::Version(char* json)
{
	this->fromJson(json);
}

char*
Version::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getVersion();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *versionKey = "version";
	json_object_set_member(pJsonObject, versionKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
Version::getVersion()
{
	return version;
}

void
Version::setVersion(std::string  version)
{
	this->version = version;
}


