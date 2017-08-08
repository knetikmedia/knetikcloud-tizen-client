#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PasswordResetRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

PasswordResetRequest::PasswordResetRequest()
{
	//__init();
}

PasswordResetRequest::~PasswordResetRequest()
{
	//__cleanup();
}

void
PasswordResetRequest::__init()
{
	//
	//
	//email = std::string();
	//
	//
	//mobile_number = std::string();
	//
	//
	//username = std::string();
	//
}

void
PasswordResetRequest::__cleanup()
{
	//if(email != NULL) {
	//
	//delete email;
	//email = NULL;
	//}
	//if(mobile_number != NULL) {
	//
	//delete mobile_number;
	//mobile_number = NULL;
	//}
	//if(username != NULL) {
	//
	//delete username;
	//username = NULL;
	//}
	//
}

void
PasswordResetRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *emailKey = "email";
	node = json_object_get_member(pJsonObject, emailKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&email, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *mobile_numberKey = "mobile_number";
	node = json_object_get_member(pJsonObject, mobile_numberKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&mobile_number, node, "std::string", "");
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

PasswordResetRequest::PasswordResetRequest(char* json)
{
	this->fromJson(json);
}

char*
PasswordResetRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getEmail();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *emailKey = "email";
	json_object_set_member(pJsonObject, emailKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMobileNumber();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *mobile_numberKey = "mobile_number";
	json_object_set_member(pJsonObject, mobile_numberKey, node);
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
PasswordResetRequest::getEmail()
{
	return email;
}

void
PasswordResetRequest::setEmail(std::string  email)
{
	this->email = email;
}

std::string
PasswordResetRequest::getMobileNumber()
{
	return mobile_number;
}

void
PasswordResetRequest::setMobileNumber(std::string  mobile_number)
{
	this->mobile_number = mobile_number;
}

std::string
PasswordResetRequest::getUsername()
{
	return username;
}

void
PasswordResetRequest::setUsername(std::string  username)
{
	this->username = username;
}


