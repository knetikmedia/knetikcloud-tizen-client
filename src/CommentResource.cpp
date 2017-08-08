#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CommentResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CommentResource::CommentResource()
{
	//__init();
}

CommentResource::~CommentResource()
{
	//__cleanup();
}

void
CommentResource::__init()
{
	//
	//
	//content = std::string();
	//
	//
	//context = std::string();
	//
	//
	//context_id = int(0);
	//
	//
	//created_date = long(0);
	//
	//
	//id = long(0);
	//
	//
	//summary = std::string();
	//
	//
	//updated_date = long(0);
	//
	//
	//user = new SimpleUserResource();
	//
}

void
CommentResource::__cleanup()
{
	//if(content != NULL) {
	//
	//delete content;
	//content = NULL;
	//}
	//if(context != NULL) {
	//
	//delete context;
	//context = NULL;
	//}
	//if(context_id != NULL) {
	//
	//delete context_id;
	//context_id = NULL;
	//}
	//if(created_date != NULL) {
	//
	//delete created_date;
	//created_date = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(summary != NULL) {
	//
	//delete summary;
	//summary = NULL;
	//}
	//if(updated_date != NULL) {
	//
	//delete updated_date;
	//updated_date = NULL;
	//}
	//if(user != NULL) {
	//
	//delete user;
	//user = NULL;
	//}
	//
}

void
CommentResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *contentKey = "content";
	node = json_object_get_member(pJsonObject, contentKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&content, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *contextKey = "context";
	node = json_object_get_member(pJsonObject, contextKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&context, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *context_idKey = "context_id";
	node = json_object_get_member(pJsonObject, context_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&context_id, node, "int", "");
		} else {
			
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
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&id, node, "long long", "");
		} else {
			
		}
	}
	const gchar *summaryKey = "summary";
	node = json_object_get_member(pJsonObject, summaryKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&summary, node, "std::string", "");
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
	const gchar *userKey = "user";
	node = json_object_get_member(pJsonObject, userKey);
	if (node !=NULL) {
	

		if (isprimitive("SimpleUserResource")) {
			jsonToValue(&user, node, "SimpleUserResource", "SimpleUserResource");
		} else {
			
			SimpleUserResource* obj = static_cast<SimpleUserResource*> (&user);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

CommentResource::CommentResource(char* json)
{
	this->fromJson(json);
}

char*
CommentResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getContent();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *contentKey = "content";
	json_object_set_member(pJsonObject, contentKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getContext();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *contextKey = "context";
	json_object_set_member(pJsonObject, contextKey, node);
	if (isprimitive("int")) {
		int obj = getContextId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *context_idKey = "context_id";
	json_object_set_member(pJsonObject, context_idKey, node);
	if (isprimitive("long long")) {
		long long obj = getCreatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *created_dateKey = "created_date";
	json_object_set_member(pJsonObject, created_dateKey, node);
	if (isprimitive("long long")) {
		long long obj = getId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSummary();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *summaryKey = "summary";
	json_object_set_member(pJsonObject, summaryKey, node);
	if (isprimitive("long long")) {
		long long obj = getUpdatedDate();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *updated_dateKey = "updated_date";
	json_object_set_member(pJsonObject, updated_dateKey, node);
	if (isprimitive("SimpleUserResource")) {
		SimpleUserResource obj = getUser();
		node = converttoJson(&obj, "SimpleUserResource", "");
	}
	else {
		
		SimpleUserResource obj = static_cast<SimpleUserResource> (getUser());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *userKey = "user";
	json_object_set_member(pJsonObject, userKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
CommentResource::getContent()
{
	return content;
}

void
CommentResource::setContent(std::string  content)
{
	this->content = content;
}

std::string
CommentResource::getContext()
{
	return context;
}

void
CommentResource::setContext(std::string  context)
{
	this->context = context;
}

int
CommentResource::getContextId()
{
	return context_id;
}

void
CommentResource::setContextId(int  context_id)
{
	this->context_id = context_id;
}

long long
CommentResource::getCreatedDate()
{
	return created_date;
}

void
CommentResource::setCreatedDate(long long  created_date)
{
	this->created_date = created_date;
}

long long
CommentResource::getId()
{
	return id;
}

void
CommentResource::setId(long long  id)
{
	this->id = id;
}

std::string
CommentResource::getSummary()
{
	return summary;
}

void
CommentResource::setSummary(std::string  summary)
{
	this->summary = summary;
}

long long
CommentResource::getUpdatedDate()
{
	return updated_date;
}

void
CommentResource::setUpdatedDate(long long  updated_date)
{
	this->updated_date = updated_date;
}

SimpleUserResource
CommentResource::getUser()
{
	return user;
}

void
CommentResource::setUser(SimpleUserResource  user)
{
	this->user = user;
}


