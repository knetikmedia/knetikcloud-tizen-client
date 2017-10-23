#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ArtistResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ArtistResource::ArtistResource()
{
	//__init();
}

ArtistResource::~ArtistResource()
{
	//__cleanup();
}

void
ArtistResource::__init()
{
	//
	//new std::map()std::map> additional_properties;
	//
	//
	//
	//born = std::string();
	//
	//
	//contribution_count = int(0);
	//
	//new std::list()std::list> contributions;
	//
	//
	//
	//created_date = long(0);
	//
	//
	//died = std::string();
	//
	//
	//id = long(0);
	//
	//
	//long_description = std::string();
	//
	//
	//name = std::string();
	//
	//
	//priority = int(0);
	//
	//
	//short_description = std::string();
	//
	//
	//_template = std::string();
	//
	//
	//updated_date = long(0);
	//
}

void
ArtistResource::__cleanup()
{
	//if(additional_properties != NULL) {
	//additional_properties.RemoveAll(true);
	//delete additional_properties;
	//additional_properties = NULL;
	//}
	//if(born != NULL) {
	//
	//delete born;
	//born = NULL;
	//}
	//if(contribution_count != NULL) {
	//
	//delete contribution_count;
	//contribution_count = NULL;
	//}
	//if(contributions != NULL) {
	//contributions.RemoveAll(true);
	//delete contributions;
	//contributions = NULL;
	//}
	//if(created_date != NULL) {
	//
	//delete created_date;
	//created_date = NULL;
	//}
	//if(died != NULL) {
	//
	//delete died;
	//died = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(long_description != NULL) {
	//
	//delete long_description;
	//long_description = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(priority != NULL) {
	//
	//delete priority;
	//priority = NULL;
	//}
	//if(short_description != NULL) {
	//
	//delete short_description;
	//short_description = NULL;
	//}
	//if(_template != NULL) {
	//
	//delete _template;
	//_template = NULL;
	//}
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//
}

void
ArtistResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *additional_propertiesKey = "additional_properties";
	node = json_object_get_member(pJsonObject, additional_propertiesKey);
	if (node !=NULL) {
	
		{
			JsonObject* json_obj = json_node_get_object(node);
			map<string,string> new_map;
			json_object_foreach_member(json_obj,helper_func,&new_map);
			additional_properties = new_map;
		}
		
	}
	const gchar *bornKey = "born";
	node = json_object_get_member(pJsonObject, bornKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&born, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *contribution_countKey = "contribution_count";
	node = json_object_get_member(pJsonObject, contribution_countKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&contribution_count, node, "int", "");
		} else {
			
		}
	}
	const gchar *contributionsKey = "contributions";
	node = json_object_get_member(pJsonObject, contributionsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<ContributionResource> new_list;
			ContributionResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("ContributionResource")) {
					jsonToValue(&inst, temp_json, "ContributionResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			contributions = new_list;
		}
		
	}
	const gchar *created_dateKey = "created_date";
	node = json_object_get_member(pJsonObject, created_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&created_date, node, "long long", "");
		} else {
			
		}
	}
	const gchar *diedKey = "died";
	node = json_object_get_member(pJsonObject, diedKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&died, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&id, node, "long long", "");
		} else {
			
		}
	}
	const gchar *long_descriptionKey = "long_description";
	node = json_object_get_member(pJsonObject, long_descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&long_description, node, "std::string", "");
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
	const gchar *priorityKey = "priority";
	node = json_object_get_member(pJsonObject, priorityKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&priority, node, "int", "");
		} else {
			
		}
	}
	const gchar *short_descriptionKey = "short_description";
	node = json_object_get_member(pJsonObject, short_descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&short_description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *_templateKey = "template";
	node = json_object_get_member(pJsonObject, _templateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&_template, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *updated_dateKey = "updated_date";
	node = json_object_get_member(pJsonObject, updated_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&updated_date, node, "long long", "");
		} else {
			
		}
	}
}

ArtistResource::ArtistResource(char* json)
{
	this->fromJson(json);
}

char*
ArtistResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;


	{
		JsonObject* json_obj;
		map<string, string> new_list = static_cast<map <string, string> > (getAdditionalProperties());
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

	const gchar *additional_propertiesKey = "additional_properties";
	json_object_set_member(pJsonObject, additional_propertiesKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBorn();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *bornKey = "born";
	json_object_set_member(pJsonObject, bornKey, node);
	if (isprimitive("int")) {
		int obj = getContributionCount();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *contribution_countKey = "contribution_count";
	json_object_set_member(pJsonObject, contribution_countKey, node);
	if (isprimitive("ContributionResource")) {
		list<ContributionResource> new_list = static_cast<list <ContributionResource> > (getContributions());
		node = converttoJson(&new_list, "ContributionResource", "array");
	} else {
		node = json_node_alloc();
		list<ContributionResource> new_list = static_cast<list <ContributionResource> > (getContributions());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<ContributionResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			ContributionResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *contributionsKey = "contributions";
	json_object_set_member(pJsonObject, contributionsKey, node);
	if (isprimitive("long long")) {
		long long obj = getCreatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *created_dateKey = "created_date";
	json_object_set_member(pJsonObject, created_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDied();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *diedKey = "died";
	json_object_set_member(pJsonObject, diedKey, node);
	if (isprimitive("long long")) {
		long long obj = getId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLongDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *long_descriptionKey = "long_description";
	json_object_set_member(pJsonObject, long_descriptionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("int")) {
		int obj = getPriority();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *priorityKey = "priority";
	json_object_set_member(pJsonObject, priorityKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getShortDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *short_descriptionKey = "short_description";
	json_object_set_member(pJsonObject, short_descriptionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTemplate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *_templateKey = "template";
	json_object_set_member(pJsonObject, _templateKey, node);
	if (isprimitive("long long")) {
		long long obj = getUpdatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *updated_dateKey = "updated_date";
	json_object_set_member(pJsonObject, updated_dateKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::map<string, string>
ArtistResource::getAdditionalProperties()
{
	return additional_properties;
}

void
ArtistResource::setAdditionalProperties(std::map <string, string> additional_properties)
{
	this->additional_properties = additional_properties;
}

std::string
ArtistResource::getBorn()
{
	return born;
}

void
ArtistResource::setBorn(std::string  born)
{
	this->born = born;
}

int
ArtistResource::getContributionCount()
{
	return contribution_count;
}

void
ArtistResource::setContributionCount(int  contribution_count)
{
	this->contribution_count = contribution_count;
}

std::list<ContributionResource>
ArtistResource::getContributions()
{
	return contributions;
}

void
ArtistResource::setContributions(std::list <ContributionResource> contributions)
{
	this->contributions = contributions;
}

long long
ArtistResource::getCreatedDate()
{
	return created_date;
}

void
ArtistResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

std::string
ArtistResource::getDied()
{
	return died;
}

void
ArtistResource::setDied(std::string  died)
{
	this->died = died;
}

long long
ArtistResource::getId()
{
	return id;
}

void
ArtistResource::setId(long long  id)
{
	this->id = id;
}

std::string
ArtistResource::getLongDescription()
{
	return long_description;
}

void
ArtistResource::setLongDescription(std::string  long_description)
{
	this->long_description = long_description;
}

std::string
ArtistResource::getName()
{
	return name;
}

void
ArtistResource::setName(std::string  name)
{
	this->name = name;
}

int
ArtistResource::getPriority()
{
	return priority;
}

void
ArtistResource::setPriority(int  priority)
{
	this->priority = priority;
}

std::string
ArtistResource::getShortDescription()
{
	return short_description;
}

void
ArtistResource::setShortDescription(std::string  short_description)
{
	this->short_description = short_description;
}

std::string
ArtistResource::getTemplate()
{
	return _template;
}

void
ArtistResource::setTemplate(std::string  _template)
{
	this->_template = _template;
}

long long
ArtistResource::getUpdatedDate()
{
	return updated_date;
}

void
ArtistResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}


