#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VideoResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VideoResource::VideoResource()
{
	//__init();
}

VideoResource::~VideoResource()
{
	//__cleanup();
}

void
VideoResource::__init()
{
	//
	//
	//active = bool(false);
	//
	//new std::map()std::map> additional_properties;
	//
	//
	//
	//author = new SimpleReferenceResource«long»();
	//
	//
	//authored = long(0);
	//
	//
	//banned = bool(false);
	//
	//
	//category = new SimpleReferenceResource«string»();
	//
	//new std::list()std::list> comments;
	//
	//
	//new std::list()std::list> contributors;
	//
	//
	//
	//created_date = long(0);
	//
	//
	//embed = std::string();
	//
	//
	//extension = std::string();
	//
	//
	//height = int(0);
	//
	//
	//id = long(0);
	//
	//
	//length = int(0);
	//
	//
	//location = std::string();
	//
	//
	//long_description = std::string();
	//
	//
	//mime_type = std::string();
	//
	//
	//name = std::string();
	//
	//
	//priority = int(0);
	//
	//
	//privacy = std::string();
	//
	//
	//published = bool(false);
	//
	//
	//short_description = std::string();
	//
	//
	//size = long(0);
	//
	//new std::list()std::list> tags;
	//
	//
	//
	//_template = std::string();
	//
	//
	//thumbnail = std::string();
	//
	//
	//updated_date = long(0);
	//
	//
	//uploader = new SimpleUserResource();
	//
	//
	//views = long(0);
	//
	//
	//width = int(0);
	//
}

void
VideoResource::__cleanup()
{
	//if(active != NULL) {
	//
	//delete active;
	//active = NULL;
	//}
	//if(additional_properties != NULL) {
	//additional_properties.RemoveAll(true);
	//delete additional_properties;
	//additional_properties = NULL;
	//}
	//if(author != NULL) {
	//
	//delete author;
	//author = NULL;
	//}
	//if(authored != NULL) {
	//
	//delete authored;
	//authored = NULL;
	//}
	//if(banned != NULL) {
	//
	//delete banned;
	//banned = NULL;
	//}
	//if(category != NULL) {
	//
	//delete category;
	//category = NULL;
	//}
	//if(comments != NULL) {
	//comments.RemoveAll(true);
	//delete comments;
	//comments = NULL;
	//}
	//if(contributors != NULL) {
	//contributors.RemoveAll(true);
	//delete contributors;
	//contributors = NULL;
	//}
	//if(created_date != NULL) {
	//
	//delete created_date;
	//created_date = NULL;
	//}
	//if(embed != NULL) {
	//
	//delete embed;
	//embed = NULL;
	//}
	//if(extension != NULL) {
	//
	//delete extension;
	//extension = NULL;
	//}
	//if(height != NULL) {
	//
	//delete height;
	//height = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(length != NULL) {
	//
	//delete length;
	//length = NULL;
	//}
	//if(location != NULL) {
	//
	//delete location;
	//location = NULL;
	//}
	//if(long_description != NULL) {
	//
	//delete long_description;
	//long_description = NULL;
	//}
	//if(mime_type != NULL) {
	//
	//delete mime_type;
	//mime_type = NULL;
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
	//if(privacy != NULL) {
	//
	//delete privacy;
	//privacy = NULL;
	//}
	//if(published != NULL) {
	//
	//delete published;
	//published = NULL;
	//}
	//if(short_description != NULL) {
	//
	//delete short_description;
	//short_description = NULL;
	//}
	//if(size != NULL) {
	//
	//delete size;
	//size = NULL;
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
	//if(thumbnail != NULL) {
	//
	//delete thumbnail;
	//thumbnail = NULL;
	//}
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//if(uploader != NULL) {
	//
	//delete uploader;
	//uploader = NULL;
	//}
	//if(views != NULL) {
	//
	//delete views;
	//views = NULL;
	//}
	//if(width != NULL) {
	//
	//delete width;
	//width = NULL;
	//}
	//
}

void
VideoResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *activeKey = "active";
	node = json_object_get_member(pJsonObject, activeKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&active, node, "bool", "");
		} else {
			
		}
	}
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
	const gchar *authorKey = "author";
	node = json_object_get_member(pJsonObject, authorKey);
	if (node !=NULL) {
	

		if (isprimitive("SimpleReferenceResource«long»")) {
			jsonToValue(&author, node, "SimpleReferenceResource«long»", "SimpleReferenceResource«long»");
		} else {
			
			SimpleReferenceResource«long»* obj = static_cast<SimpleReferenceResource«long»*> (&author);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *authoredKey = "authored";
	node = json_object_get_member(pJsonObject, authoredKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&authored, node, "long long", "");
		} else {
			
		}
	}
	const gchar *bannedKey = "banned";
	node = json_object_get_member(pJsonObject, bannedKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&banned, node, "bool", "");
		} else {
			
		}
	}
	const gchar *categoryKey = "category";
	node = json_object_get_member(pJsonObject, categoryKey);
	if (node !=NULL) {
	

		if (isprimitive("SimpleReferenceResource«string»")) {
			jsonToValue(&category, node, "SimpleReferenceResource«string»", "SimpleReferenceResource«string»");
		} else {
			
			SimpleReferenceResource«string»* obj = static_cast<SimpleReferenceResource«string»*> (&category);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *commentsKey = "comments";
	node = json_object_get_member(pJsonObject, commentsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<CommentResource> new_list;
			CommentResource inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("CommentResource")) {
					jsonToValue(&inst, temp_json, "CommentResource", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			comments = new_list;
		}
		
	}
	const gchar *contributorsKey = "contributors";
	node = json_object_get_member(pJsonObject, contributorsKey);
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
			contributors = new_list;
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
	const gchar *embedKey = "embed";
	node = json_object_get_member(pJsonObject, embedKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&embed, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *extensionKey = "extension";
	node = json_object_get_member(pJsonObject, extensionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&extension, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *heightKey = "height";
	node = json_object_get_member(pJsonObject, heightKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&height, node, "int", "");
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
	const gchar *lengthKey = "length";
	node = json_object_get_member(pJsonObject, lengthKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&length, node, "int", "");
		} else {
			
		}
	}
	const gchar *locationKey = "location";
	node = json_object_get_member(pJsonObject, locationKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&location, node, "std::string", "");
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
	const gchar *mime_typeKey = "mime_type";
	node = json_object_get_member(pJsonObject, mime_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&mime_type, node, "std::string", "");
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
	const gchar *privacyKey = "privacy";
	node = json_object_get_member(pJsonObject, privacyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&privacy, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *publishedKey = "published";
	node = json_object_get_member(pJsonObject, publishedKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&published, node, "bool", "");
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
	const gchar *sizeKey = "size";
	node = json_object_get_member(pJsonObject, sizeKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&size, node, "long long", "");
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
	const gchar *thumbnailKey = "thumbnail";
	node = json_object_get_member(pJsonObject, thumbnailKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&thumbnail, node, "std::string", "");
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
	const gchar *uploaderKey = "uploader";
	node = json_object_get_member(pJsonObject, uploaderKey);
	if (node !=NULL) {
	

		if (isprimitive("SimpleUserResource")) {
			jsonToValue(&uploader, node, "SimpleUserResource", "SimpleUserResource");
		} else {
			
			SimpleUserResource* obj = static_cast<SimpleUserResource*> (&uploader);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *viewsKey = "views";
	node = json_object_get_member(pJsonObject, viewsKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&views, node, "long long", "");
		} else {
			
		}
	}
	const gchar *widthKey = "width";
	node = json_object_get_member(pJsonObject, widthKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&width, node, "int", "");
		} else {
			
		}
	}
}

VideoResource::VideoResource(char* json)
{
	this->fromJson(json);
}

char*
VideoResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getActive();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *activeKey = "active";
	json_object_set_member(pJsonObject, activeKey, node);


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
	if (isprimitive("SimpleReferenceResource«long»")) {
		SimpleReferenceResource«long» obj = getAuthor();
		node = converttoJson(&obj, "SimpleReferenceResource«long»", "");
	}
	else {
		
		SimpleReferenceResource«long» obj = static_cast<SimpleReferenceResource«long»> (getAuthor());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *authorKey = "author";
	json_object_set_member(pJsonObject, authorKey, node);
	if (isprimitive("long long")) {
		long long obj = getAuthored();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *authoredKey = "authored";
	json_object_set_member(pJsonObject, authoredKey, node);
	if (isprimitive("bool")) {
		bool obj = getBanned();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *bannedKey = "banned";
	json_object_set_member(pJsonObject, bannedKey, node);
	if (isprimitive("SimpleReferenceResource«string»")) {
		SimpleReferenceResource«string» obj = getCategory();
		node = converttoJson(&obj, "SimpleReferenceResource«string»", "");
	}
	else {
		
		SimpleReferenceResource«string» obj = static_cast<SimpleReferenceResource«string»> (getCategory());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *categoryKey = "category";
	json_object_set_member(pJsonObject, categoryKey, node);
	if (isprimitive("CommentResource")) {
		list<CommentResource> new_list = static_cast<list <CommentResource> > (getComments());
		node = converttoJson(&new_list, "CommentResource", "array");
	} else {
		node = json_node_alloc();
		list<CommentResource> new_list = static_cast<list <CommentResource> > (getComments());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<CommentResource>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			CommentResource obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *commentsKey = "comments";
	json_object_set_member(pJsonObject, commentsKey, node);
	if (isprimitive("ContributionResource")) {
		list<ContributionResource> new_list = static_cast<list <ContributionResource> > (getContributors());
		node = converttoJson(&new_list, "ContributionResource", "array");
	} else {
		node = json_node_alloc();
		list<ContributionResource> new_list = static_cast<list <ContributionResource> > (getContributors());
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


	
	const gchar *contributorsKey = "contributors";
	json_object_set_member(pJsonObject, contributorsKey, node);
	if (isprimitive("long long")) {
		long long obj = getCreatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *created_dateKey = "created_date";
	json_object_set_member(pJsonObject, created_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getEmbed();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *embedKey = "embed";
	json_object_set_member(pJsonObject, embedKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getExtension();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *extensionKey = "extension";
	json_object_set_member(pJsonObject, extensionKey, node);
	if (isprimitive("int")) {
		int obj = getHeight();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *heightKey = "height";
	json_object_set_member(pJsonObject, heightKey, node);
	if (isprimitive("long long")) {
		long long obj = getId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("int")) {
		int obj = getLength();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *lengthKey = "length";
	json_object_set_member(pJsonObject, lengthKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLocation();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *locationKey = "location";
	json_object_set_member(pJsonObject, locationKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLongDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *long_descriptionKey = "long_description";
	json_object_set_member(pJsonObject, long_descriptionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMimeType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *mime_typeKey = "mime_type";
	json_object_set_member(pJsonObject, mime_typeKey, node);
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
		std::string obj = getPrivacy();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *privacyKey = "privacy";
	json_object_set_member(pJsonObject, privacyKey, node);
	if (isprimitive("bool")) {
		bool obj = getPublished();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *publishedKey = "published";
	json_object_set_member(pJsonObject, publishedKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getShortDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *short_descriptionKey = "short_description";
	json_object_set_member(pJsonObject, short_descriptionKey, node);
	if (isprimitive("long long")) {
		long long obj = getSize();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *sizeKey = "size";
	json_object_set_member(pJsonObject, sizeKey, node);
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
		std::string obj = getThumbnail();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *thumbnailKey = "thumbnail";
	json_object_set_member(pJsonObject, thumbnailKey, node);
	if (isprimitive("long long")) {
		long long obj = getUpdatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *updated_dateKey = "updated_date";
	json_object_set_member(pJsonObject, updated_dateKey, node);
	if (isprimitive("SimpleUserResource")) {
		SimpleUserResource obj = getUploader();
		node = converttoJson(&obj, "SimpleUserResource", "");
	}
	else {
		
		SimpleUserResource obj = static_cast<SimpleUserResource> (getUploader());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *uploaderKey = "uploader";
	json_object_set_member(pJsonObject, uploaderKey, node);
	if (isprimitive("long long")) {
		long long obj = getViews();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *viewsKey = "views";
	json_object_set_member(pJsonObject, viewsKey, node);
	if (isprimitive("int")) {
		int obj = getWidth();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *widthKey = "width";
	json_object_set_member(pJsonObject, widthKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
VideoResource::getActive()
{
	return active;
}

void
VideoResource::setActive(bool  active)
{
	this->active = active;
}

std::map<string, string>
VideoResource::getAdditionalProperties()
{
	return additional_properties;
}

void
VideoResource::setAdditionalProperties(std::map <string, string> additional_properties)
{
	this->additional_properties = additional_properties;
}

SimpleReferenceResource«long»
VideoResource::getAuthor()
{
	return author;
}

void
VideoResource::setAuthor(SimpleReferenceResource«long»  author)
{
	this->author = author;
}

long long
VideoResource::getAuthored()
{
	return authored;
}

void
VideoResource::setAuthored(long long  authored)
{
	this->authored = authored;
}

bool
VideoResource::getBanned()
{
	return banned;
}

void
VideoResource::setBanned(bool  banned)
{
	this->banned = banned;
}

SimpleReferenceResource«string»
VideoResource::getCategory()
{
	return category;
}

void
VideoResource::setCategory(SimpleReferenceResource«string»  category)
{
	this->category = category;
}

std::list<CommentResource>
VideoResource::getComments()
{
	return comments;
}

void
VideoResource::setComments(std::list <CommentResource> comments)
{
	this->comments = comments;
}

std::list<ContributionResource>
VideoResource::getContributors()
{
	return contributors;
}

void
VideoResource::setContributors(std::list <ContributionResource> contributors)
{
	this->contributors = contributors;
}

long long
VideoResource::getCreatedDate()
{
	return created_date;
}

void
VideoResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

std::string
VideoResource::getEmbed()
{
	return embed;
}

void
VideoResource::setEmbed(std::string  embed)
{
	this->embed = embed;
}

std::string
VideoResource::getExtension()
{
	return extension;
}

void
VideoResource::setExtension(std::string  extension)
{
	this->extension = extension;
}

int
VideoResource::getHeight()
{
	return height;
}

void
VideoResource::setHeight(int  height)
{
	this->height = height;
}

long long
VideoResource::getId()
{
	return id;
}

void
VideoResource::setId(long long  id)
{
	this->id = id;
}

int
VideoResource::getLength()
{
	return length;
}

void
VideoResource::setLength(int  length)
{
	this->length = length;
}

std::string
VideoResource::getLocation()
{
	return location;
}

void
VideoResource::setLocation(std::string  location)
{
	this->location = location;
}

std::string
VideoResource::getLongDescription()
{
	return long_description;
}

void
VideoResource::setLongDescription(std::string  long_description)
{
	this->long_description = long_description;
}

std::string
VideoResource::getMimeType()
{
	return mime_type;
}

void
VideoResource::setMimeType(std::string  mime_type)
{
	this->mime_type = mime_type;
}

std::string
VideoResource::getName()
{
	return name;
}

void
VideoResource::setName(std::string  name)
{
	this->name = name;
}

int
VideoResource::getPriority()
{
	return priority;
}

void
VideoResource::setPriority(int  priority)
{
	this->priority = priority;
}

std::string
VideoResource::getPrivacy()
{
	return privacy;
}

void
VideoResource::setPrivacy(std::string  privacy)
{
	this->privacy = privacy;
}

bool
VideoResource::getPublished()
{
	return published;
}

void
VideoResource::setPublished(bool  published)
{
	this->published = published;
}

std::string
VideoResource::getShortDescription()
{
	return short_description;
}

void
VideoResource::setShortDescription(std::string  short_description)
{
	this->short_description = short_description;
}

long long
VideoResource::getSize()
{
	return size;
}

void
VideoResource::setSize(long long  size)
{
	this->size = size;
}

std::list<std::string>
VideoResource::getTags()
{
	return tags;
}

void
VideoResource::setTags(std::list <std::string> tags)
{
	this->tags = tags;
}

std::string
VideoResource::getTemplate()
{
	return _template;
}

void
VideoResource::setTemplate(std::string  _template)
{
	this->_template = _template;
}

std::string
VideoResource::getThumbnail()
{
	return thumbnail;
}

void
VideoResource::setThumbnail(std::string  thumbnail)
{
	this->thumbnail = thumbnail;
}

long long
VideoResource::getUpdatedDate()
{
	return updated_date;
}

void
VideoResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}

SimpleUserResource
VideoResource::getUploader()
{
	return uploader;
}

void
VideoResource::setUploader(SimpleUserResource  uploader)
{
	this->uploader = uploader;
}

long long
VideoResource::getViews()
{
	return views;
}

void
VideoResource::setViews(long long  views)
{
	this->views = views;
}

int
VideoResource::getWidth()
{
	return width;
}

void
VideoResource::setWidth(int  width)
{
	this->width = width;
}


