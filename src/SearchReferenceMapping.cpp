#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "SearchReferenceMapping.h"

using namespace std;
using namespace Tizen::ArtikCloud;

SearchReferenceMapping::SearchReferenceMapping()
{
	//__init();
}

SearchReferenceMapping::~SearchReferenceMapping()
{
	//__cleanup();
}

void
SearchReferenceMapping::__init()
{
	//
	//
	//id = std::string();
	//
	//
	//ref_id_field = std::string();
	//
	//
	//ref_type = std::string();
	//
	//new std::map()std::map> source_field_to_destination_field;
	//
	//
	//
	//type = std::string();
	//
}

void
SearchReferenceMapping::__cleanup()
{
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(ref_id_field != NULL) {
	//
	//delete ref_id_field;
	//ref_id_field = NULL;
	//}
	//if(ref_type != NULL) {
	//
	//delete ref_type;
	//ref_type = NULL;
	//}
	//if(source_field_to_destination_field != NULL) {
	//source_field_to_destination_field.RemoveAll(true);
	//delete source_field_to_destination_field;
	//source_field_to_destination_field = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//
}

void
SearchReferenceMapping::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *ref_id_fieldKey = "ref_id_field";
	node = json_object_get_member(pJsonObject, ref_id_fieldKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ref_id_field, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *ref_typeKey = "ref_type";
	node = json_object_get_member(pJsonObject, ref_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ref_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *source_field_to_destination_fieldKey = "source_field_to_destination_field";
	node = json_object_get_member(pJsonObject, source_field_to_destination_fieldKey);
	if (node !=NULL) {
	
		{
			JsonObject* json_obj = json_node_get_object(node);
			map<string,string> new_map;
			json_object_foreach_member(json_obj,helper_func,&new_map);
			source_field_to_destination_field = new_map;
		}
		
	}
	const gchar *typeKey = "type";
	node = json_object_get_member(pJsonObject, typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type, node, "std::string", "");
		} else {
			
		}
	}
}

SearchReferenceMapping::SearchReferenceMapping(char* json)
{
	this->fromJson(json);
}

char*
SearchReferenceMapping::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRefIdField();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ref_id_fieldKey = "ref_id_field";
	json_object_set_member(pJsonObject, ref_id_fieldKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRefType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ref_typeKey = "ref_type";
	json_object_set_member(pJsonObject, ref_typeKey, node);


	{
		JsonObject* json_obj;
		map<string, string> new_list = static_cast<map <string, string> > (getSourceFieldToDestinationField());
		json_obj = json_object_new();
		for (map<string, string>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			string obj = (*it).first;
			string obj2 = (*it).second;
			JsonNode* tempnode = json_from_string(obj2.c_str(),NULL);
			json_object_set_member(json_obj, obj.c_str(), tempnode);
		}
	node = json_node_alloc();
	json_node_init_object(node, json_obj);
	json_object_unref(json_obj);
	}

	const gchar *source_field_to_destination_fieldKey = "source_field_to_destination_field";
	json_object_set_member(pJsonObject, source_field_to_destination_fieldKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
SearchReferenceMapping::getId()
{
	return id;
}

void
SearchReferenceMapping::setId(std::string  id)
{
	this->id = id;
}

std::string
SearchReferenceMapping::getRefIdField()
{
	return ref_id_field;
}

void
SearchReferenceMapping::setRefIdField(std::string  ref_id_field)
{
	this->ref_id_field = ref_id_field;
}

std::string
SearchReferenceMapping::getRefType()
{
	return ref_type;
}

void
SearchReferenceMapping::setRefType(std::string  ref_type)
{
	this->ref_type = ref_type;
}

std::map<string, string>
SearchReferenceMapping::getSourceFieldToDestinationField()
{
	return source_field_to_destination_field;
}

void
SearchReferenceMapping::setSourceFieldToDestinationField(std::map <string, string> source_field_to_destination_field)
{
	this->source_field_to_destination_field = source_field_to_destination_field;
}

std::string
SearchReferenceMapping::getType()
{
	return type;
}

void
SearchReferenceMapping::setType(std::string  type)
{
	this->type = type;
}


