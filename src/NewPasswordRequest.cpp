#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "NewPasswordRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

NewPasswordRequest::NewPasswordRequest()
{
	//__init();
}

NewPasswordRequest::~NewPasswordRequest()
{
	//__cleanup();
}

void
NewPasswordRequest::__init()
{
	//
	//
	//password = std::string();
	//
	//
	//secret = std::string();
	//
}

void
NewPasswordRequest::__cleanup()
{
	//if(password != NULL) {
	//
	//delete password;
	//password = NULL;
	//}
	//if(secret != NULL) {
	//
	//delete secret;
	//secret = NULL;
	//}
	//
}

void
NewPasswordRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *passwordKey = "password";
	node = json_object_get_member(pJsonObject, passwordKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&password, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *secretKey = "secret";
	node = json_object_get_member(pJsonObject, secretKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&secret, node, "std::string", "");
		} else {
			
		}
	}
}

NewPasswordRequest::NewPasswordRequest(char* json)
{
	this->fromJson(json);
}

char*
NewPasswordRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getPassword();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *passwordKey = "password";
	json_object_set_member(pJsonObject, passwordKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSecret();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *secretKey = "secret";
	json_object_set_member(pJsonObject, secretKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
NewPasswordRequest::getPassword()
{
	return password;
}

void
NewPasswordRequest::setPassword(std::string  password)
{
	this->password = password;
}

std::string
NewPasswordRequest::getSecret()
{
	return secret;
}

void
NewPasswordRequest::setSecret(std::string  secret)
{
	this->secret = secret;
}


