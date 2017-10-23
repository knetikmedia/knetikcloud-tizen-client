#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "OAuth2Resource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

OAuth2Resource::OAuth2Resource()
{
	//__init();
}

OAuth2Resource::~OAuth2Resource()
{
	//__cleanup();
}

void
OAuth2Resource::__init()
{
	//
	//
	//access_token = std::string();
	//
	//
	//expires_in = std::string();
	//
	//
	//refresh_token = std::string();
	//
	//
	//scope = std::string();
	//
	//
	//token_type = std::string();
	//
}

void
OAuth2Resource::__cleanup()
{
	//if(access_token != NULL) {
	//
	//delete access_token;
	//access_token = NULL;
	//}
	//if(expires_in != NULL) {
	//
	//delete expires_in;
	//expires_in = NULL;
	//}
	//if(refresh_token != NULL) {
	//
	//delete refresh_token;
	//refresh_token = NULL;
	//}
	//if(scope != NULL) {
	//
	//delete scope;
	//scope = NULL;
	//}
	//if(token_type != NULL) {
	//
	//delete token_type;
	//token_type = NULL;
	//}
	//
}

void
OAuth2Resource::fromJson(char* jsonStr)
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
	const gchar *expires_inKey = "expires_in";
	node = json_object_get_member(pJsonObject, expires_inKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&expires_in, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *refresh_tokenKey = "refresh_token";
	node = json_object_get_member(pJsonObject, refresh_tokenKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&refresh_token, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *scopeKey = "scope";
	node = json_object_get_member(pJsonObject, scopeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&scope, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *token_typeKey = "token_type";
	node = json_object_get_member(pJsonObject, token_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&token_type, node, "std::string", "");
		} else {
			
		}
	}
}

OAuth2Resource::OAuth2Resource(char* json)
{
	this->fromJson(json);
}

char*
OAuth2Resource::toJson()
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
	if (isprimitive("std::string")) {
		std::string obj = getExpiresIn();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *expires_inKey = "expires_in";
	json_object_set_member(pJsonObject, expires_inKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRefreshToken();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *refresh_tokenKey = "refresh_token";
	json_object_set_member(pJsonObject, refresh_tokenKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getScope();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *scopeKey = "scope";
	json_object_set_member(pJsonObject, scopeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTokenType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *token_typeKey = "token_type";
	json_object_set_member(pJsonObject, token_typeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
OAuth2Resource::getAccessToken()
{
	return access_token;
}

void
OAuth2Resource::setAccessToken(std::string  access_token)
{
	this->access_token = access_token;
}

std::string
OAuth2Resource::getExpiresIn()
{
	return expires_in;
}

void
OAuth2Resource::setExpiresIn(std::string  expires_in)
{
	this->expires_in = expires_in;
}

std::string
OAuth2Resource::getRefreshToken()
{
	return refresh_token;
}

void
OAuth2Resource::setRefreshToken(std::string  refresh_token)
{
	this->refresh_token = refresh_token;
}

std::string
OAuth2Resource::getScope()
{
	return scope;
}

void
OAuth2Resource::setScope(std::string  scope)
{
	this->scope = scope;
}

std::string
OAuth2Resource::getTokenType()
{
	return token_type;
}

void
OAuth2Resource::setTokenType(std::string  token_type)
{
	this->token_type = token_type;
}


