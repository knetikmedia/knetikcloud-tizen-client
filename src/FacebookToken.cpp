#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "FacebookToken.h"

using namespace std;
using namespace Tizen::ArtikCloud;

FacebookToken::FacebookToken()
{
	//__init();
}

FacebookToken::~FacebookToken()
{
	//__cleanup();
}

void
FacebookToken::__init()
{
	//
	//
	//access_token = std::string();
	//
}

void
FacebookToken::__cleanup()
{
	//if(access_token != NULL) {
	//
	//delete access_token;
	//access_token = NULL;
	//}
	//
}

void
FacebookToken::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *access_tokenKey = "access_token";
	node = json_object_get_member(pJsonObject, access_tokenKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&access_token, node, "std::string", "");
		} else {
			
		}
	}
}

FacebookToken::FacebookToken(char* json)
{
	this->fromJson(json);
}

char*
FacebookToken::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getAccessToken();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *access_tokenKey = "access_token";
	json_object_set_member(pJsonObject, access_tokenKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
FacebookToken::getAccessToken()
{
	return access_token;
}

void
FacebookToken::setAccessToken(std::string  access_token)
{
	this->access_token = access_token;
}


