#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "FileGroupProperty.h"

using namespace std;
using namespace Tizen::ArtikCloud;

FileGroupProperty::FileGroupProperty()
{
	//__init();
}

FileGroupProperty::~FileGroupProperty()
{
	//__cleanup();
}

void
FileGroupProperty::__init()
{
	//
	//
	//type = std::string();
	//
	//new std::list()std::list> files;
	//
	//
}

void
FileGroupProperty::__cleanup()
{
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(files != NULL) {
	//files.RemoveAll(true);
	//delete files;
	//files = NULL;
	//}
	//
}

void
FileGroupProperty::fromJson(char* jsonStr)
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
	const gchar *filesKey = "files";
	node = json_object_get_member(pJsonObject, filesKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<FileProperty> new_list;
			FileProperty inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("FileProperty")) {
					jsonToValue(&inst, temp_json, "FileProperty", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			files = new_list;
		}
		
	}
}

FileGroupProperty::FileGroupProperty(char* json)
{
	this->fromJson(json);
}

char*
FileGroupProperty::toJson()
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
	if (isprimitive("FileProperty")) {
		list<FileProperty> new_list = static_cast<list <FileProperty> > (getFiles());
		node = converttoJson(&new_list, "FileProperty", "array");
	} else {
		node = json_node_alloc();
		list<FileProperty> new_list = static_cast<list <FileProperty> > (getFiles());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<FileProperty>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			FileProperty obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *filesKey = "files";
	json_object_set_member(pJsonObject, filesKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
FileGroupProperty::getType()
{
	return type;
}

void
FileGroupProperty::setType(std::string  type)
{
	this->type = type;
}

std::list<FileProperty>
FileGroupProperty::getFiles()
{
	return files;
}

void
FileGroupProperty::setFiles(std::list <FileProperty> files)
{
	this->files = files;
}


