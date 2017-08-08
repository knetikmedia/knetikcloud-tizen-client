#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PreReqEntitlement.h"

using namespace std;
using namespace Tizen::ArtikCloud;

PreReqEntitlement::PreReqEntitlement()
{
	//__init();
}

PreReqEntitlement::~PreReqEntitlement()
{
	//__cleanup();
}

void
PreReqEntitlement::__init()
{
	//
	//
	//description = std::string();
	//
	//
	//type_hint = std::string();
	//
	//new std::list()std::list> item_ids;
	//
	//
}

void
PreReqEntitlement::__cleanup()
{
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
	//}
	//if(type_hint != NULL) {
	//
	//delete type_hint;
	//type_hint = NULL;
	//}
	//if(item_ids != NULL) {
	//item_ids.RemoveAll(true);
	//delete item_ids;
	//item_ids = NULL;
	//}
	//
}

void
PreReqEntitlement::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *descriptionKey = "description";
	node = json_object_get_member(pJsonObject, descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *type_hintKey = "type_hint";
	node = json_object_get_member(pJsonObject, type_hintKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type_hint, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *item_idsKey = "item_ids";
	node = json_object_get_member(pJsonObject, item_idsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<int> new_list;
			int inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("int")) {
					jsonToValue(&inst, temp_json, "int", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			item_ids = new_list;
		}
		
	}
}

PreReqEntitlement::PreReqEntitlement(char* json)
{
	this->fromJson(json);
}

char*
PreReqEntitlement::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *descriptionKey = "description";
	json_object_set_member(pJsonObject, descriptionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTypeHint();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *type_hintKey = "type_hint";
	json_object_set_member(pJsonObject, type_hintKey, node);
	if (isprimitive("int")) {
		list<int> new_list = static_cast<list <int> > (getItemIds());
		node = converttoJson(&new_list, "int", "array");
	} else {
		node = json_node_alloc();
		list<int> new_list = static_cast<list <int> > (getItemIds());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *item_idsKey = "item_ids";
	json_object_set_member(pJsonObject, item_idsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
PreReqEntitlement::getDescription()
{
	return description;
}

void
PreReqEntitlement::setDescription(std::string  description)
{
	this->description = description;
}

std::string
PreReqEntitlement::getTypeHint()
{
	return type_hint;
}

void
PreReqEntitlement::setTypeHint(std::string  type_hint)
{
	this->type_hint = type_hint;
}

std::list<int>
PreReqEntitlement::getItemIds()
{
	return item_ids;
}

void
PreReqEntitlement::setItemIds(std::list <int> item_ids)
{
	this->item_ids = item_ids;
}


