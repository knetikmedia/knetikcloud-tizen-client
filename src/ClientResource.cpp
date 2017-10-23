#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ClientResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ClientResource::ClientResource()
{
	//__init();
}

ClientResource::~ClientResource()
{
	//__cleanup();
}

void
ClientResource::__init()
{
	//
	//
	//access_token_validity_seconds = int(0);
	//
	//
	//client_key = std::string();
	//
	//new std::list()std::list> grant_types;
	//
	//
	//
	//id = int(0);
	//
	//
	//is_public = bool(false);
	//
	//
	//locked = bool(false);
	//
	//
	//name = std::string();
	//
	//new std::list()std::list> redirect_uris;
	//
	//
	//
	//refresh_token_validity_seconds = int(0);
	//
	//
	//secret = std::string();
	//
}

void
ClientResource::__cleanup()
{
	//if(access_token_validity_seconds != NULL) {
	//
	//delete access_token_validity_seconds;
	//access_token_validity_seconds = NULL;
	//}
	//if(client_key != NULL) {
	//
	//delete client_key;
	//client_key = NULL;
	//}
	//if(grant_types != NULL) {
	//grant_types.RemoveAll(true);
	//delete grant_types;
	//grant_types = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(is_public != NULL) {
	//
	//delete is_public;
	//is_public = NULL;
	//}
	//if(locked != NULL) {
	//
	//delete locked;
	//locked = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(redirect_uris != NULL) {
	//redirect_uris.RemoveAll(true);
	//delete redirect_uris;
	//redirect_uris = NULL;
	//}
	//if(refresh_token_validity_seconds != NULL) {
	//
	//delete refresh_token_validity_seconds;
	//refresh_token_validity_seconds = NULL;
	//}
	//if(secret != NULL) {
	//
	//delete secret;
	//secret = NULL;
	//}
	//
}

void
ClientResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *access_token_validity_secondsKey = "access_token_validity_seconds";
	node = json_object_get_member(pJsonObject, access_token_validity_secondsKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&access_token_validity_seconds, node, "int", "");
		} else {
			
		}
	}
	const gchar *client_keyKey = "client_key";
	node = json_object_get_member(pJsonObject, client_keyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&client_key, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *grant_typesKey = "grant_types";
	node = json_object_get_member(pJsonObject, grant_typesKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<std::string> new_list;
			std::string inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("std::string")) {
					jsonToValue(&inst, temp_json, "std::string", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			grant_types = new_list;
		}
		
	}
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&id, node, "int", "");
		} else {
			
		}
	}
	const gchar *is_publicKey = "is_public";
	node = json_object_get_member(pJsonObject, is_publicKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&is_public, node, "bool", "");
		} else {
			
		}
	}
	const gchar *lockedKey = "locked";
	node = json_object_get_member(pJsonObject, lockedKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&locked, node, "bool", "");
		} else {
			
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
	const gchar *redirect_urisKey = "redirect_uris";
	node = json_object_get_member(pJsonObject, redirect_urisKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<std::string> new_list;
			std::string inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("std::string")) {
					jsonToValue(&inst, temp_json, "std::string", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			redirect_uris = new_list;
		}
		
	}
	const gchar *refresh_token_validity_secondsKey = "refresh_token_validity_seconds";
	node = json_object_get_member(pJsonObject, refresh_token_validity_secondsKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&refresh_token_validity_seconds, node, "int", "");
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

ClientResource::ClientResource(char* json)
{
	this->fromJson(json);
}

char*
ClientResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getAccessTokenValiditySeconds();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *access_token_validity_secondsKey = "access_token_validity_seconds";
	json_object_set_member(pJsonObject, access_token_validity_secondsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getClientKey();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *client_keyKey = "client_key";
	json_object_set_member(pJsonObject, client_keyKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getGrantTypes());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getGrantTypes());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *grant_typesKey = "grant_types";
	json_object_set_member(pJsonObject, grant_typesKey, node);
	if (isprimitive("int")) {
		int obj = getId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("bool")) {
		bool obj = getIsPublic();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *is_publicKey = "is_public";
	json_object_set_member(pJsonObject, is_publicKey, node);
	if (isprimitive("bool")) {
		bool obj = getLocked();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *lockedKey = "locked";
	json_object_set_member(pJsonObject, lockedKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getRedirectUris());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getRedirectUris());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *redirect_urisKey = "redirect_uris";
	json_object_set_member(pJsonObject, redirect_urisKey, node);
	if (isprimitive("int")) {
		int obj = getRefreshTokenValiditySeconds();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *refresh_token_validity_secondsKey = "refresh_token_validity_seconds";
	json_object_set_member(pJsonObject, refresh_token_validity_secondsKey, node);
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

int
ClientResource::getAccessTokenValiditySeconds()
{
	return access_token_validity_seconds;
}

void
ClientResource::setAccessTokenValiditySeconds(int  access_token_validity_seconds)
{
	this->access_token_validity_seconds = access_token_validity_seconds;
}

std::string
ClientResource::getClientKey()
{
	return client_key;
}

void
ClientResource::setClientKey(std::string  client_key)
{
	this->client_key = client_key;
}

std::list<std::string>
ClientResource::getGrantTypes()
{
	return grant_types;
}

void
ClientResource::setGrantTypes(std::list <std::string> grant_types)
{
	this->grant_types = grant_types;
}

int
ClientResource::getId()
{
	return id;
}

void
ClientResource::setId(int  id)
{
	this->id = id;
}

bool
ClientResource::getIsPublic()
{
	return is_public;
}

void
ClientResource::setIsPublic(bool  is_public)
{
	this->is_public = is_public;
}

bool
ClientResource::getLocked()
{
	return locked;
}

void
ClientResource::setLocked(bool  locked)
{
	this->locked = locked;
}

std::string
ClientResource::getName()
{
	return name;
}

void
ClientResource::setName(std::string  name)
{
	this->name = name;
}

std::list<std::string>
ClientResource::getRedirectUris()
{
	return redirect_uris;
}

void
ClientResource::setRedirectUris(std::list <std::string> redirect_uris)
{
	this->redirect_uris = redirect_uris;
}

int
ClientResource::getRefreshTokenValiditySeconds()
{
	return refresh_token_validity_seconds;
}

void
ClientResource::setRefreshTokenValiditySeconds(int  refresh_token_validity_seconds)
{
	this->refresh_token_validity_seconds = refresh_token_validity_seconds;
}

std::string
ClientResource::getSecret()
{
	return secret;
}

void
ClientResource::setSecret(std::string  secret)
{
	this->secret = secret;
}


