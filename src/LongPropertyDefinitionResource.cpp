#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "LongPropertyDefinitionResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

LongPropertyDefinitionResource::LongPropertyDefinitionResource()
{
	//__init();
}

LongPropertyDefinitionResource::~LongPropertyDefinitionResource()
{
	//__cleanup();
}

void
LongPropertyDefinitionResource::__init()
{
	//
	//
	//field_list = new PropertyFieldListResource();
	//
	//
	//name = std::string();
	//
	//
	//required = bool(false);
	//
	//
	//type = std::string();
	//
	//
	//max = long(0);
	//
	//
	//min = long(0);
	//
}

void
LongPropertyDefinitionResource::__cleanup()
{
	//if(field_list != NULL) {
	//
	//delete field_list;
	//field_list = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(required != NULL) {
	//
	//delete required;
	//required = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(max != NULL) {
	//
	//delete max;
	//max = NULL;
	//}
	//if(min != NULL) {
	//
	//delete min;
	//min = NULL;
	//}
	//
}

void
LongPropertyDefinitionResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *field_listKey = "field_list";
	node = json_object_get_member(pJsonObject, field_listKey);
	if (node !=NULL) {
	

		if (isprimitive("PropertyFieldListResource")) {
			jsonToValue(&field_list, node, "PropertyFieldListResource", "PropertyFieldListResource");
		} else {
			
			PropertyFieldListResource* obj = static_cast<PropertyFieldListResource*> (&field_list);
			obj->fromJson(json_to_string(node, false));
			
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
	const gchar *requiredKey = "required";
	node = json_object_get_member(pJsonObject, requiredKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&required, node, "bool", "");
		} else {
			
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
	const gchar *maxKey = "max";
	node = json_object_get_member(pJsonObject, maxKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&max, node, "long long", "");
		} else {
			
		}
	}
	const gchar *minKey = "min";
	node = json_object_get_member(pJsonObject, minKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&min, node, "long long", "");
		} else {
			
		}
	}
}

LongPropertyDefinitionResource::LongPropertyDefinitionResource(char* json)
{
	this->fromJson(json);
}

char*
LongPropertyDefinitionResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("PropertyFieldListResource")) {
		PropertyFieldListResource obj = getFieldList();
		node = converttoJson(&obj, "PropertyFieldListResource", "");
	}
	else {
		
		PropertyFieldListResource obj = static_cast<PropertyFieldListResource> (getFieldList());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *field_listKey = "field_list";
	json_object_set_member(pJsonObject, field_listKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("bool")) {
		bool obj = getRequired();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *requiredKey = "required";
	json_object_set_member(pJsonObject, requiredKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	if (isprimitive("long long")) {
		long long obj = getMax();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *maxKey = "max";
	json_object_set_member(pJsonObject, maxKey, node);
	if (isprimitive("long long")) {
		long long obj = getMin();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *minKey = "min";
	json_object_set_member(pJsonObject, minKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

PropertyFieldListResource
LongPropertyDefinitionResource::getFieldList()
{
	return field_list;
}

void
LongPropertyDefinitionResource::setFieldList(PropertyFieldListResource  field_list)
{
	this->field_list = field_list;
}

std::string
LongPropertyDefinitionResource::getName()
{
	return name;
}

void
LongPropertyDefinitionResource::setName(std::string  name)
{
	this->name = name;
}

bool
LongPropertyDefinitionResource::getRequired()
{
	return required;
}

void
LongPropertyDefinitionResource::setRequired(bool  required)
{
	this->required = required;
}

std::string
LongPropertyDefinitionResource::getType()
{
	return type;
}

void
LongPropertyDefinitionResource::setType(std::string  type)
{
	this->type = type;
}

long long
LongPropertyDefinitionResource::getMax()
{
	return max;
}

void
LongPropertyDefinitionResource::setMax(long long  max)
{
	this->max = max;
}

long long
LongPropertyDefinitionResource::getMin()
{
	return min;
}

void
LongPropertyDefinitionResource::setMin(long long  min)
{
	this->min = min;
}


