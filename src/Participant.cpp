#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Participant.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Participant::Participant()
{
	//__init();
}

Participant::~Participant()
{
	//__cleanup();
}

void
Participant::__init()
{
	//
	//
	//host = bool(false);
	//
	//
	//status = std::string();
	//
	//
	//user = new IdRef();
	//
}

void
Participant::__cleanup()
{
	//if(host != NULL) {
	//
	//delete host;
	//host = NULL;
	//}
	//if(status != NULL) {
	//
	//delete status;
	//status = NULL;
	//}
	//if(user != NULL) {
	//
	//delete user;
	//user = NULL;
	//}
	//
}

void
Participant::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *hostKey = "host";
	node = json_object_get_member(pJsonObject, hostKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&host, node, "bool", "");
		} else {
			
		}
	}
	const gchar *statusKey = "status";
	node = json_object_get_member(pJsonObject, statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *userKey = "user";
	node = json_object_get_member(pJsonObject, userKey);
	if (node !=NULL) {
	

		if (isprimitive("IdRef")) {
			jsonToValue(&user, node, "IdRef", "IdRef");
		} else {
			
			IdRef* obj = static_cast<IdRef*> (&user);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

Participant::Participant(char* json)
{
	this->fromJson(json);
}

char*
Participant::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getHost();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *hostKey = "host";
	json_object_set_member(pJsonObject, hostKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *statusKey = "status";
	json_object_set_member(pJsonObject, statusKey, node);
	if (isprimitive("IdRef")) {
		IdRef obj = getUser();
		node = converttoJson(&obj, "IdRef", "");
	}
	else {
		
		IdRef obj = static_cast<IdRef> (getUser());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *userKey = "user";
	json_object_set_member(pJsonObject, userKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
Participant::getHost()
{
	return host;
}

void
Participant::setHost(bool  host)
{
	this->host = host;
}

std::string
Participant::getStatus()
{
	return status;
}

void
Participant::setStatus(std::string  status)
{
	this->status = status;
}

IdRef
Participant::getUser()
{
	return user;
}

void
Participant::setUser(IdRef  user)
{
	this->user = user;
}


