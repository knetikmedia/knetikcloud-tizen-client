#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "UserResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

UserResource::UserResource()
{
	//__init();
}

UserResource::~UserResource()
{
	//__cleanup();
}

void
UserResource::__init()
{
	//
	//new std::map()std::map> additional_properties;
	//
	//
	//
	//address = std::string();
	//
	//
	//address2 = std::string();
	//
	//
	//avatar_url = std::string();
	//
	//new std::list()std::list> children;
	//
	//
	//
	//city = std::string();
	//
	//
	//country_code = std::string();
	//
	//
	//currency_code = std::string();
	//
	//
	//date_of_birth = long(0);
	//
	//
	//description = std::string();
	//
	//
	//display_name = std::string();
	//
	//
	//email = std::string();
	//
	//
	//first_name = std::string();
	//
	//
	//fullname = std::string();
	//
	//
	//gender = std::string();
	//
	//
	//id = int(0);
	//
	//
	//language_code = std::string();
	//
	//
	//last_activity = long(0);
	//
	//
	//last_name = std::string();
	//
	//
	//last_updated = long(0);
	//
	//
	//member_since = long(0);
	//
	//
	//mobile_number = std::string();
	//
	//new std::list()std::list> parents;
	//
	//
	//
	//password = std::string();
	//
	//
	//postal_code = std::string();
	//
	//
	//state = std::string();
	//
	//new std::list()std::list> tags;
	//
	//
	//
	//_template = std::string();
	//
	//
	//timezone_code = std::string();
	//
	//
	//username = std::string();
	//
}

void
UserResource::__cleanup()
{
	//if(additional_properties != NULL) {
	//additional_properties.RemoveAll(true);
	//delete additional_properties;
	//additional_properties = NULL;
	//}
	//if(address != NULL) {
	//
	//delete address;
	//address = NULL;
	//}
	//if(address2 != NULL) {
	//
	//delete address2;
	//address2 = NULL;
	//}
	//if(avatar_url != NULL) {
	//
	//delete avatar_url;
	//avatar_url = NULL;
	//}
	//if(children != NULL) {
	//children.RemoveAll(true);
	//delete children;
	//children = NULL;
	//}
	//if(city != NULL) {
	//
	//delete city;
	//city = NULL;
	//}
	//if(country_code != NULL) {
	//
	//delete country_code;
	//country_code = NULL;
	//}
	//if(currency_code != NULL) {
	//
	//delete currency_code;
	//currency_code = NULL;
	//}
	//if(date_of_birth != NULL) {
	//
	//delete date_of_birth;
	//date_of_birth = NULL;
	//}
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
	//}
	//if(display_name != NULL) {
	//
	//delete display_name;
	//display_name = NULL;
	//}
	//if(email != NULL) {
	//
	//delete email;
	//email = NULL;
	//}
	//if(first_name != NULL) {
	//
	//delete first_name;
	//first_name = NULL;
	//}
	//if(fullname != NULL) {
	//
	//delete fullname;
	//fullname = NULL;
	//}
	//if(gender != NULL) {
	//
	//delete gender;
	//gender = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(language_code != NULL) {
	//
	//delete language_code;
	//language_code = NULL;
	//}
	//if(last_activity != NULL) {
	//
	//delete last_activity;
	//last_activity = NULL;
	//}
	//if(last_name != NULL) {
	//
	//delete last_name;
	//last_name = NULL;
	//}
	//if(last_updated != NULL) {
	//
	//delete last_updated;
	//last_updated = NULL;
	//}
	//if(member_since != NULL) {
	//
	//delete member_since;
	//member_since = NULL;
	//}
	//if(mobile_number != NULL) {
	//
	//delete mobile_number;
	//mobile_number = NULL;
	//}
	//if(parents != NULL) {
	//parents.RemoveAll(true);
	//delete parents;
	//parents = NULL;
	//}
	//if(password != NULL) {
	//
	//delete password;
	//password = NULL;
	//}
	//if(postal_code != NULL) {
	//
	//delete postal_code;
	//postal_code = NULL;
	//}
	//if(state != NULL) {
	//
	//delete state;
	//state = NULL;
	//}
	//if(tags != NULL) {
	//tags.RemoveAll(true);
	//delete tags;
	//tags = NULL;
	//}
	//if(_template != NULL) {
	//
	//delete _template;
	//_template = NULL;
	//}
	//if(timezone_code != NULL) {
	//
	//delete timezone_code;
	//timezone_code = NULL;
	//}
	//if(username != NULL) {
	//
	//delete username;
	//username = NULL;
	//}
	//
}

void
UserResource::fromJson(char* jsonStr)
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
	const gchar *addressKey = "address";
	node = json_object_get_member(pJsonObject, addressKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&address, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *address2Key = "address2";
	node = json_object_get_member(pJsonObject, address2Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&address2, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *avatar_urlKey = "avatar_url";
	node = json_object_get_member(pJsonObject, avatar_urlKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&avatar_url, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *childrenKey = "children";
	node = json_object_get_member(pJsonObject, childrenKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<UserRelationshipReferenceResource> new_list;
			UserRelationshipReferenceResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("UserRelationshipReferenceResource")) {
					jsonToValue(&inst, temp_json, "UserRelationshipReferenceResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			children = new_list;
		}
		
	}
	const gchar *cityKey = "city";
	node = json_object_get_member(pJsonObject, cityKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&city, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *country_codeKey = "country_code";
	node = json_object_get_member(pJsonObject, country_codeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&country_code, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *currency_codeKey = "currency_code";
	node = json_object_get_member(pJsonObject, currency_codeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&currency_code, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *date_of_birthKey = "date_of_birth";
	node = json_object_get_member(pJsonObject, date_of_birthKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&date_of_birth, node, "long long", "");
		} else {
			
		}
	}
	const gchar *descriptionKey = "description";
	node = json_object_get_member(pJsonObject, descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *display_nameKey = "display_name";
	node = json_object_get_member(pJsonObject, display_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&display_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *emailKey = "email";
	node = json_object_get_member(pJsonObject, emailKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&email, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *first_nameKey = "first_name";
	node = json_object_get_member(pJsonObject, first_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&first_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *fullnameKey = "fullname";
	node = json_object_get_member(pJsonObject, fullnameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&fullname, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *genderKey = "gender";
	node = json_object_get_member(pJsonObject, genderKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&gender, node, "std::string", "");
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
	const gchar *language_codeKey = "language_code";
	node = json_object_get_member(pJsonObject, language_codeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&language_code, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *last_activityKey = "last_activity";
	node = json_object_get_member(pJsonObject, last_activityKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&last_activity, node, "long long", "");
		} else {
			
		}
	}
	const gchar *last_nameKey = "last_name";
	node = json_object_get_member(pJsonObject, last_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&last_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *last_updatedKey = "last_updated";
	node = json_object_get_member(pJsonObject, last_updatedKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&last_updated, node, "long long", "");
		} else {
			
		}
	}
	const gchar *member_sinceKey = "member_since";
	node = json_object_get_member(pJsonObject, member_sinceKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&member_since, node, "long long", "");
		} else {
			
		}
	}
	const gchar *mobile_numberKey = "mobile_number";
	node = json_object_get_member(pJsonObject, mobile_numberKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&mobile_number, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *parentsKey = "parents";
	node = json_object_get_member(pJsonObject, parentsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<UserRelationshipReferenceResource> new_list;
			UserRelationshipReferenceResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("UserRelationshipReferenceResource")) {
					jsonToValue(&inst, temp_json, "UserRelationshipReferenceResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			parents = new_list;
		}
		
	}
	const gchar *passwordKey = "password";
	node = json_object_get_member(pJsonObject, passwordKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&password, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *postal_codeKey = "postal_code";
	node = json_object_get_member(pJsonObject, postal_codeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&postal_code, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *stateKey = "state";
	node = json_object_get_member(pJsonObject, stateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&state, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *tagsKey = "tags";
	node = json_object_get_member(pJsonObject, tagsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<std::string> new_list;
			std::string inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("std::string")) {
					jsonToValue(&inst, temp_json, "std::string", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			tags = new_list;
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
	const gchar *timezone_codeKey = "timezone_code";
	node = json_object_get_member(pJsonObject, timezone_codeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&timezone_code, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *usernameKey = "username";
	node = json_object_get_member(pJsonObject, usernameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&username, node, "std::string", "");
		} else {
			
		}
	}
}

UserResource::UserResource(char* json)
{
	this->fromJson(json);
}

char*
UserResource::toJson()
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
		std::string obj = getAddress();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *addressKey = "address";
	json_object_set_member(pJsonObject, addressKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAddress2();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *address2Key = "address2";
	json_object_set_member(pJsonObject, address2Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getAvatarUrl();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *avatar_urlKey = "avatar_url";
	json_object_set_member(pJsonObject, avatar_urlKey, node);
	if (isprimitive("UserRelationshipReferenceResource")) {
		list<UserRelationshipReferenceResource> new_list = static_cast<list <UserRelationshipReferenceResource> > (getChildren());
		node = converttoJson(&new_list, "UserRelationshipReferenceResource", "array");
	} else {
		node = json_node_alloc();
		list<UserRelationshipReferenceResource> new_list = static_cast<list <UserRelationshipReferenceResource> > (getChildren());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<UserRelationshipReferenceResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			UserRelationshipReferenceResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *childrenKey = "children";
	json_object_set_member(pJsonObject, childrenKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCity();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *cityKey = "city";
	json_object_set_member(pJsonObject, cityKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCountryCode();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *country_codeKey = "country_code";
	json_object_set_member(pJsonObject, country_codeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCurrencyCode();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *currency_codeKey = "currency_code";
	json_object_set_member(pJsonObject, currency_codeKey, node);
	if (isprimitive("long long")) {
		long long obj = getDateOfBirth();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *date_of_birthKey = "date_of_birth";
	json_object_set_member(pJsonObject, date_of_birthKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *descriptionKey = "description";
	json_object_set_member(pJsonObject, descriptionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDisplayName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *display_nameKey = "display_name";
	json_object_set_member(pJsonObject, display_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getEmail();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *emailKey = "email";
	json_object_set_member(pJsonObject, emailKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getFirstName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *first_nameKey = "first_name";
	json_object_set_member(pJsonObject, first_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getFullname();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *fullnameKey = "fullname";
	json_object_set_member(pJsonObject, fullnameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getGender();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *genderKey = "gender";
	json_object_set_member(pJsonObject, genderKey, node);
	if (isprimitive("int")) {
		int obj = getId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLanguageCode();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *language_codeKey = "language_code";
	json_object_set_member(pJsonObject, language_codeKey, node);
	if (isprimitive("long long")) {
		long long obj = getLastActivity();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *last_activityKey = "last_activity";
	json_object_set_member(pJsonObject, last_activityKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLastName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *last_nameKey = "last_name";
	json_object_set_member(pJsonObject, last_nameKey, node);
	if (isprimitive("long long")) {
		long long obj = getLastUpdated();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *last_updatedKey = "last_updated";
	json_object_set_member(pJsonObject, last_updatedKey, node);
	if (isprimitive("long long")) {
		long long obj = getMemberSince();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *member_sinceKey = "member_since";
	json_object_set_member(pJsonObject, member_sinceKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMobileNumber();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *mobile_numberKey = "mobile_number";
	json_object_set_member(pJsonObject, mobile_numberKey, node);
	if (isprimitive("UserRelationshipReferenceResource")) {
		list<UserRelationshipReferenceResource> new_list = static_cast<list <UserRelationshipReferenceResource> > (getParents());
		node = converttoJson(&new_list, "UserRelationshipReferenceResource", "array");
	} else {
		node = json_node_alloc();
		list<UserRelationshipReferenceResource> new_list = static_cast<list <UserRelationshipReferenceResource> > (getParents());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<UserRelationshipReferenceResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			UserRelationshipReferenceResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *parentsKey = "parents";
	json_object_set_member(pJsonObject, parentsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPassword();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *passwordKey = "password";
	json_object_set_member(pJsonObject, passwordKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPostalCode();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *postal_codeKey = "postal_code";
	json_object_set_member(pJsonObject, postal_codeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getState();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *stateKey = "state";
	json_object_set_member(pJsonObject, stateKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getTags());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getTags());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *tagsKey = "tags";
	json_object_set_member(pJsonObject, tagsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTemplate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *_templateKey = "template";
	json_object_set_member(pJsonObject, _templateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTimezoneCode();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *timezone_codeKey = "timezone_code";
	json_object_set_member(pJsonObject, timezone_codeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUsername();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *usernameKey = "username";
	json_object_set_member(pJsonObject, usernameKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::map<string, string>
UserResource::getAdditionalProperties()
{
	return additional_properties;
}

void
UserResource::setAdditionalProperties(std::map <string, string> additional_properties)
{
	this->additional_properties = additional_properties;
}

std::string
UserResource::getAddress()
{
	return address;
}

void
UserResource::setAddress(std::string  address)
{
	this->address = address;
}

std::string
UserResource::getAddress2()
{
	return address2;
}

void
UserResource::setAddress2(std::string  address2)
{
	this->address2 = address2;
}

std::string
UserResource::getAvatarUrl()
{
	return avatar_url;
}

void
UserResource::setAvatarUrl(std::string  avatar_url)
{
	this->avatar_url = avatar_url;
}

std::list<UserRelationshipReferenceResource>
UserResource::getChildren()
{
	return children;
}

void
UserResource::setChildren(std::list <UserRelationshipReferenceResource> children)
{
	this->children = children;
}

std::string
UserResource::getCity()
{
	return city;
}

void
UserResource::setCity(std::string  city)
{
	this->city = city;
}

std::string
UserResource::getCountryCode()
{
	return country_code;
}

void
UserResource::setCountryCode(std::string  country_code)
{
	this->country_code = country_code;
}

std::string
UserResource::getCurrencyCode()
{
	return currency_code;
}

void
UserResource::setCurrencyCode(std::string  currency_code)
{
	this->currency_code = currency_code;
}

long long
UserResource::getDateOfBirth()
{
	return date_of_birth;
}

void
UserResource::setDateOfBirth(long long  date_of_birth)
{
	this->date_of_birth = date_of_birth;
}

std::string
UserResource::getDescription()
{
	return description;
}

void
UserResource::setDescription(std::string  description)
{
	this->description = description;
}

std::string
UserResource::getDisplayName()
{
	return display_name;
}

void
UserResource::setDisplayName(std::string  display_name)
{
	this->display_name = display_name;
}

std::string
UserResource::getEmail()
{
	return email;
}

void
UserResource::setEmail(std::string  email)
{
	this->email = email;
}

std::string
UserResource::getFirstName()
{
	return first_name;
}

void
UserResource::setFirstName(std::string  first_name)
{
	this->first_name = first_name;
}

std::string
UserResource::getFullname()
{
	return fullname;
}

void
UserResource::setFullname(std::string  fullname)
{
	this->fullname = fullname;
}

std::string
UserResource::getGender()
{
	return gender;
}

void
UserResource::setGender(std::string  gender)
{
	this->gender = gender;
}

int
UserResource::getId()
{
	return id;
}

void
UserResource::setId(int  id)
{
	this->id = id;
}

std::string
UserResource::getLanguageCode()
{
	return language_code;
}

void
UserResource::setLanguageCode(std::string  language_code)
{
	this->language_code = language_code;
}

long long
UserResource::getLastActivity()
{
	return last_activity;
}

void
UserResource::setLastActivity(long long  last_activity)
{
	this->last_activity = last_activity;
}

std::string
UserResource::getLastName()
{
	return last_name;
}

void
UserResource::setLastName(std::string  last_name)
{
	this->last_name = last_name;
}

long long
UserResource::getLastUpdated()
{
	return last_updated;
}

void
UserResource::setLastUpdated(long long  last_updated)
{
	this->last_updated = last_updated;
}

long long
UserResource::getMemberSince()
{
	return member_since;
}

void
UserResource::setMemberSince(long long  member_since)
{
	this->member_since = member_since;
}

std::string
UserResource::getMobileNumber()
{
	return mobile_number;
}

void
UserResource::setMobileNumber(std::string  mobile_number)
{
	this->mobile_number = mobile_number;
}

std::list<UserRelationshipReferenceResource>
UserResource::getParents()
{
	return parents;
}

void
UserResource::setParents(std::list <UserRelationshipReferenceResource> parents)
{
	this->parents = parents;
}

std::string
UserResource::getPassword()
{
	return password;
}

void
UserResource::setPassword(std::string  password)
{
	this->password = password;
}

std::string
UserResource::getPostalCode()
{
	return postal_code;
}

void
UserResource::setPostalCode(std::string  postal_code)
{
	this->postal_code = postal_code;
}

std::string
UserResource::getState()
{
	return state;
}

void
UserResource::setState(std::string  state)
{
	this->state = state;
}

std::list<std::string>
UserResource::getTags()
{
	return tags;
}

void
UserResource::setTags(std::list <std::string> tags)
{
	this->tags = tags;
}

std::string
UserResource::getTemplate()
{
	return _template;
}

void
UserResource::setTemplate(std::string  _template)
{
	this->_template = _template;
}

std::string
UserResource::getTimezoneCode()
{
	return timezone_code;
}

void
UserResource::setTimezoneCode(std::string  timezone_code)
{
	this->timezone_code = timezone_code;
}

std::string
UserResource::getUsername()
{
	return username;
}

void
UserResource::setUsername(std::string  username)
{
	this->username = username;
}


