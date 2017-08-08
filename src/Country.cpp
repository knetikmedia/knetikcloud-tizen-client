#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Country.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Country::Country()
{
	//__init();
}

Country::~Country()
{
	//__cleanup();
}

void
Country::__init()
{
	//
	//
	//id = int(0);
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
Country::__cleanup()
{
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
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
Country::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&id, node, "int", "");
		} else {
			
		}
	}
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

Country::Country(char* json)
{
	this->fromJson(json);
}

char*
Country::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
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

int
Country::getId()
{
	return id;
}

void
Country::setId(int  id)
{
	this->id = id;
}

std::string
Country::getIso2()
{
	return iso2;
}

void
Country::setIso2(std::string  iso2)
{
	this->iso2 = iso2;
}

std::string
Country::getIso3()
{
	return iso3;
}

void
Country::setIso3(std::string  iso3)
{
	this->iso3 = iso3;
}

std::string
Country::getName()
{
	return name;
}

void
Country::setName(std::string  name)
{
	this->name = name;
}


