#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "GoogleToken.h"

using namespace std;
using namespace Tizen::ArtikCloud;

GoogleToken::GoogleToken()
{
	//__init();
}

GoogleToken::~GoogleToken()
{
	//__cleanup();
}

void
GoogleToken::__init()
{
	//
	//
	//authorization_code = std::string();
	//
}

void
GoogleToken::__cleanup()
{
	//if(authorization_code != NULL) {
	//
	//delete authorization_code;
	//authorization_code = NULL;
	//}
	//
}

void
GoogleToken::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *authorization_codeKey = "authorization_code";
	node = json_object_get_member(pJsonObject, authorization_codeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&authorization_code, node, "std::string", "");
		} else {
			
		}
	}
}

GoogleToken::GoogleToken(char* json)
{
	this->fromJson(json);
}

char*
GoogleToken::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getAuthorizationCode();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *authorization_codeKey = "authorization_code";
	json_object_set_member(pJsonObject, authorization_codeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
GoogleToken::getAuthorizationCode()
{
	return authorization_code;
}

void
GoogleToken::setAuthorizationCode(std::string  authorization_code)
{
	this->authorization_code = authorization_code;
}


