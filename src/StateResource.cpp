#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "StateResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

StateResource::StateResource()
{
	//__init();
}

StateResource::~StateResource()
{
	//__cleanup();
}

void
StateResource::__init()
{
	//
	//
	//code = std::string();
	//
	//
	//country_code_iso3 = std::string();
	//
	//
	//id = int(0);
	//
	//
	//name = std::string();
	//
}

void
StateResource::__cleanup()
{
	//if(code != NULL) {
	//
	//delete code;
	//code = NULL;
	//}
	//if(country_code_iso3 != NULL) {
	//
	//delete country_code_iso3;
	//country_code_iso3 = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//
}

void
StateResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *codeKey = "code";
	node = json_object_get_member(pJsonObject, codeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&code, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *country_code_iso3Key = "country_code_iso3";
	node = json_object_get_member(pJsonObject, country_code_iso3Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&country_code_iso3, node, "std::string", "");
		} else {
			
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
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
		} else {
			
		}
	}
}

StateResource::StateResource(char* json)
{
	this->fromJson(json);
}

char*
StateResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getCode();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *codeKey = "code";
	json_object_set_member(pJsonObject, codeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCountryCodeIso3();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *country_code_iso3Key = "country_code_iso3";
	json_object_set_member(pJsonObject, country_code_iso3Key, node);
	if (isprimitive("int")) {
		int obj = getId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
StateResource::getCode()
{
	return code;
}

void
StateResource::setCode(std::string  code)
{
	this->code = code;
}

std::string
StateResource::getCountryCodeIso3()
{
	return country_code_iso3;
}

void
StateResource::setCountryCodeIso3(std::string  country_code_iso3)
{
	this->country_code_iso3 = country_code_iso3;
}

int
StateResource::getId()
{
	return id;
}

void
StateResource::setId(int  id)
{
	this->id = id;
}

std::string
StateResource::getName()
{
	return name;
}

void
StateResource::setName(std::string  name)
{
	this->name = name;
}


