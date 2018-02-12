#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "TemplatedEmail.h"

using namespace std;
using namespace Tizen::ArtikCloud;

TemplatedEmail::TemplatedEmail()
{
	//__init();
}

TemplatedEmail::~TemplatedEmail()
{
	//__cleanup();
}

void
TemplatedEmail::__init()
{
	//
	//
	//external_template_id = std::string();
	//
	//
	//template_data = null;
	//
}

void
TemplatedEmail::__cleanup()
{
	//if(external_template_id != NULL) {
	//
	//delete external_template_id;
	//external_template_id = NULL;
	//}
	//if(template_data != NULL) {
	//
	//delete template_data;
	//template_data = NULL;
	//}
	//
}

void
TemplatedEmail::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *external_template_idKey = "external_template_id";
	node = json_object_get_member(pJsonObject, external_template_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&external_template_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *template_dataKey = "template_data";
	node = json_object_get_member(pJsonObject, template_dataKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&template_data, node, "std::string", "");
		} else {
			
			std::string* obj = static_cast<std::string*> (&template_data);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

TemplatedEmail::TemplatedEmail(char* json)
{
	this->fromJson(json);
}

char*
TemplatedEmail::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getExternalTemplateId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *external_template_idKey = "external_template_id";
	json_object_set_member(pJsonObject, external_template_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTemplateData();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
		std::string obj = static_cast<std::string> (getTemplateData());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *template_dataKey = "template_data";
	json_object_set_member(pJsonObject, template_dataKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
TemplatedEmail::getExternalTemplateId()
{
	return external_template_id;
}

void
TemplatedEmail::setExternalTemplateId(std::string  external_template_id)
{
	this->external_template_id = external_template_id;
}

std::string
TemplatedEmail::getTemplateData()
{
	return template_data;
}

void
TemplatedEmail::setTemplateData(std::string  template_data)
{
	this->template_data = template_data;
}


