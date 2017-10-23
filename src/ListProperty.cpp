#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ListProperty.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ListProperty::ListProperty()
{
	//__init();
}

ListProperty::~ListProperty()
{
	//__cleanup();
}

void
ListProperty::__init()
{
	//
	//
	//type = std::string();
	//
	//new std::list()std::list> values;
	//
	//
}

void
ListProperty::__cleanup()
{
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(values != NULL) {
	//values.RemoveAll(true);
	//delete values;
	//values = NULL;
	//}
	//
}

void
ListProperty::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *typeKey = "type";
	node = json_object_get_member(pJsonObject, typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *valuesKey = "values";
	node = json_object_get_member(pJsonObject, valuesKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<Property> new_list;
			Property inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("Property")) {
					jsonToValue(&inst, temp_json, "Property", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			values = new_list;
		}
		
	}
}

ListProperty::ListProperty(char* json)
{
	this->fromJson(json);
}

char*
ListProperty::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	if (isprimitive("Property")) {
		list<Property> new_list = static_cast<list <Property> > (getValues());
		node = converttoJson(&new_list, "Property", "array");
	} else {
		node = json_node_alloc();
		list<Property> new_list = static_cast<list <Property> > (getValues());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<Property>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			Property obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *valuesKey = "values";
	json_object_set_member(pJsonObject, valuesKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
ListProperty::getType()
{
	return type;
}

void
ListProperty::setType(std::string  type)
{
	this->type = type;
}

std::list<Property>
ListProperty::getValues()
{
	return values;
}

void
ListProperty::setValues(std::list <Property> values)
{
	this->values = values;
}


