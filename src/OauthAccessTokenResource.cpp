#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "OauthAccessTokenResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

OauthAccessTokenResource::OauthAccessTokenResource()
{
	//__init();
}

OauthAccessTokenResource::~OauthAccessTokenResource()
{
	//__cleanup();
}

void
OauthAccessTokenResource::__init()
{
	//
	//
	//client_id = std::string();
	//
	//
	//token = std::string();
	//
	//
	//username = std::string();
	//
}

void
OauthAccessTokenResource::__cleanup()
{
	//if(client_id != NULL) {
	//
	//delete client_id;
	//client_id = NULL;
	//}
	//if(token != NULL) {
	//
	//delete token;
	//token = NULL;
	//}
	//if(username != NULL) {
	//
	//delete username;
	//username = NULL;
	//}
	//
}

void
OauthAccessTokenResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *client_idKey = "client_id";
	node = json_object_get_member(pJsonObject, client_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&client_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *tokenKey = "token";
	node = json_object_get_member(pJsonObject, tokenKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&token, node, "std::string", "");
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

OauthAccessTokenResource::OauthAccessTokenResource(char* json)
{
	this->fromJson(json);
}

char*
OauthAccessTokenResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getClientId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *client_idKey = "client_id";
	json_object_set_member(pJsonObject, client_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getToken();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *tokenKey = "token";
	json_object_set_member(pJsonObject, tokenKey, node);
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
OauthAccessTokenResource::getClientId()
{
	return client_id;
}

void
OauthAccessTokenResource::setClientId(std::string  client_id)
{
	this->client_id = client_id;
}

std::string
OauthAccessTokenResource::getToken()
{
	return token;
}

void
OauthAccessTokenResource::setToken(std::string  token)
{
	this->token = token;
}

std::string
OauthAccessTokenResource::getUsername()
{
	return username;
}

void
OauthAccessTokenResource::setUsername(std::string  username)
{
	this->username = username;
}


