#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ContributionResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ContributionResource::ContributionResource()
{
	//__init();
}

ContributionResource::~ContributionResource()
{
	//__cleanup();
}

void
ContributionResource::__init()
{
	//
	//
	//artist = new SimpleReferenceResource«long»();
	//
	//
	//media = new SimpleReferenceResource«long»();
	//
	//
	//role = std::string();
	//
}

void
ContributionResource::__cleanup()
{
	//if(artist != NULL) {
	//
	//delete artist;
	//artist = NULL;
	//}
	//if(media != NULL) {
	//
	//delete media;
	//media = NULL;
	//}
	//if(role != NULL) {
	//
	//delete role;
	//role = NULL;
	//}
	//
}

void
ContributionResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *artistKey = "artist";
	node = json_object_get_member(pJsonObject, artistKey);
	if (node !=NULL) {
	

		if (isprimitive("SimpleReferenceResource«long»")) {
			jsonToValue(&artist, node, "SimpleReferenceResource«long»", "SimpleReferenceResource«long»");
		} else {
			
			SimpleReferenceResource«long»* obj = static_cast<SimpleReferenceResource«long»*> (&artist);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *mediaKey = "media";
	node = json_object_get_member(pJsonObject, mediaKey);
	if (node !=NULL) {
	

		if (isprimitive("SimpleReferenceResource«long»")) {
			jsonToValue(&media, node, "SimpleReferenceResource«long»", "SimpleReferenceResource«long»");
		} else {
			
			SimpleReferenceResource«long»* obj = static_cast<SimpleReferenceResource«long»*> (&media);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *roleKey = "role";
	node = json_object_get_member(pJsonObject, roleKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&role, node, "std::string", "");
		} else {
			
		}
	}
}

ContributionResource::ContributionResource(char* json)
{
	this->fromJson(json);
}

char*
ContributionResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("SimpleReferenceResource«long»")) {
		SimpleReferenceResource«long» obj = getArtist();
		node = converttoJson(&obj, "SimpleReferenceResource«long»", "");
	}
	else {
		
		SimpleReferenceResource«long» obj = static_cast<SimpleReferenceResource«long»> (getArtist());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *artistKey = "artist";
	json_object_set_member(pJsonObject, artistKey, node);
	if (isprimitive("SimpleReferenceResource«long»")) {
		SimpleReferenceResource«long» obj = getMedia();
		node = converttoJson(&obj, "SimpleReferenceResource«long»", "");
	}
	else {
		
		SimpleReferenceResource«long» obj = static_cast<SimpleReferenceResource«long»> (getMedia());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *mediaKey = "media";
	json_object_set_member(pJsonObject, mediaKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRole();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *roleKey = "role";
	json_object_set_member(pJsonObject, roleKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

SimpleReferenceResource«long»
ContributionResource::getArtist()
{
	return artist;
}

void
ContributionResource::setArtist(SimpleReferenceResource«long»  artist)
{
	this->artist = artist;
}

SimpleReferenceResource«long»
ContributionResource::getMedia()
{
	return media;
}

void
ContributionResource::setMedia(SimpleReferenceResource«long»  media)
{
	this->media = media;
}

std::string
ContributionResource::getRole()
{
	return role;
}

void
ContributionResource::setRole(std::string  role)
{
	this->role = role;
}


