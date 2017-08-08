#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VideoRelationshipResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VideoRelationshipResource::VideoRelationshipResource()
{
	//__init();
}

VideoRelationshipResource::~VideoRelationshipResource()
{
	//__cleanup();
}

void
VideoRelationshipResource::__init()
{
	//
	//
	//from = new SimpleReferenceResource«long»();
	//
	//
	//id = long(0);
	//
	//
	//relationship_details = std::string();
	//
	//
	//to = new SimpleReferenceResource«long»();
	//
}

void
VideoRelationshipResource::__cleanup()
{
	//if(from != NULL) {
	//
	//delete from;
	//from = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(relationship_details != NULL) {
	//
	//delete relationship_details;
	//relationship_details = NULL;
	//}
	//if(to != NULL) {
	//
	//delete to;
	//to = NULL;
	//}
	//
}

void
VideoRelationshipResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *fromKey = "from";
	node = json_object_get_member(pJsonObject, fromKey);
	if (node !=NULL) {
	

		if (isprimitive("SimpleReferenceResource«long»")) {
			jsonToValue(&from, node, "SimpleReferenceResource«long»", "SimpleReferenceResource«long»");
		} else {
			
			SimpleReferenceResource«long»* obj = static_cast<SimpleReferenceResource«long»*> (&from);
			obj->fromJson(json_to_string(node, false));
			
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
	const gchar *relationship_detailsKey = "relationship_details";
	node = json_object_get_member(pJsonObject, relationship_detailsKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&relationship_details, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *toKey = "to";
	node = json_object_get_member(pJsonObject, toKey);
	if (node !=NULL) {
	

		if (isprimitive("SimpleReferenceResource«long»")) {
			jsonToValue(&to, node, "SimpleReferenceResource«long»", "SimpleReferenceResource«long»");
		} else {
			
			SimpleReferenceResource«long»* obj = static_cast<SimpleReferenceResource«long»*> (&to);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

VideoRelationshipResource::VideoRelationshipResource(char* json)
{
	this->fromJson(json);
}

char*
VideoRelationshipResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("SimpleReferenceResource«long»")) {
		SimpleReferenceResource«long» obj = getFrom();
		node = converttoJson(&obj, "SimpleReferenceResource«long»", "");
	}
	else {
		
		SimpleReferenceResource«long» obj = static_cast<SimpleReferenceResource«long»> (getFrom());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *fromKey = "from";
	json_object_set_member(pJsonObject, fromKey, node);
	if (isprimitive("long long")) {
		long long obj = getId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRelationshipDetails();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *relationship_detailsKey = "relationship_details";
	json_object_set_member(pJsonObject, relationship_detailsKey, node);
	if (isprimitive("SimpleReferenceResource«long»")) {
		SimpleReferenceResource«long» obj = getTo();
		node = converttoJson(&obj, "SimpleReferenceResource«long»", "");
	}
	else {
		
		SimpleReferenceResource«long» obj = static_cast<SimpleReferenceResource«long»> (getTo());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *toKey = "to";
	json_object_set_member(pJsonObject, toKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

SimpleReferenceResource«long»
VideoRelationshipResource::getFrom()
{
	return from;
}

void
VideoRelationshipResource::setFrom(SimpleReferenceResource«long»  from)
{
	this->from = from;
}

long long
VideoRelationshipResource::getId()
{
	return id;
}

void
VideoRelationshipResource::setId(long long  id)
{
	this->id = id;
}

std::string
VideoRelationshipResource::getRelationshipDetails()
{
	return relationship_details;
}

void
VideoRelationshipResource::setRelationshipDetails(std::string  relationship_details)
{
	this->relationship_details = relationship_details;
}

SimpleReferenceResource«long»
VideoRelationshipResource::getTo()
{
	return to;
}

void
VideoRelationshipResource::setTo(SimpleReferenceResource«long»  to)
{
	this->to = to;
}


