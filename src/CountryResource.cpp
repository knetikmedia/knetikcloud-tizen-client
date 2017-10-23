#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CountryResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CountryResource::CountryResource()
{
	//__init();
}

CountryResource::~CountryResource()
{
	//__cleanup();
}

void
CountryResource::__init()
{
	//
	//
	//iso2 = std::string();
	//
	//
	//iso3 = std::string();
	//
	//
	//name = std::string();
	//
}

void
CountryResource::__cleanup()
{
	//if(iso2 != NULL) {
	//
	//delete iso2;
	//iso2 = NULL;
	//}
	//if(iso3 != NULL) {
	//
	//delete iso3;
	//iso3 = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//
}

void
CountryResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *iso2Key = "iso2";
	node = json_object_get_member(pJsonObject, iso2Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&iso2, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *iso3Key = "iso3";
	node = json_object_get_member(pJsonObject, iso3Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&iso3, node, "std::string", "");
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

CountryResource::CountryResource(char* json)
{
	this->fromJson(json);
}

char*
CountryResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getIso2();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *iso2Key = "iso2";
	json_object_set_member(pJsonObject, iso2Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getIso3();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *iso3Key = "iso3";
	json_object_set_member(pJsonObject, iso3Key, node);
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
CountryResource::getIso2()
{
	return iso2;
}

void
CountryResource::setIso2(std::string  iso2)
{
	this->iso2 = iso2;
}

std::string
CountryResource::getIso3()
{
	return iso3;
}

void
CountryResource::setIso3(std::string  iso3)
{
	this->iso3 = iso3;
}

std::string
CountryResource::getName()
{
	return name;
}

void
CountryResource::setName(std::string  name)
{
	this->name = name;
}


