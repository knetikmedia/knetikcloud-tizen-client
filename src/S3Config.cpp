#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "S3Config.h"

using namespace std;
using namespace Tizen::ArtikCloud;

S3Config::S3Config()
{
	//__init();
}

S3Config::~S3Config()
{
	//__cleanup();
}

void
S3Config::__init()
{
	//
	//
	//bucket_name = std::string();
	//
	//
	//cdn_url = std::string();
	//
	//
	//region = std::string();
	//
	//
	//upload_prefix = std::string();
	//
}

void
S3Config::__cleanup()
{
	//if(bucket_name != NULL) {
	//
	//delete bucket_name;
	//bucket_name = NULL;
	//}
	//if(cdn_url != NULL) {
	//
	//delete cdn_url;
	//cdn_url = NULL;
	//}
	//if(region != NULL) {
	//
	//delete region;
	//region = NULL;
	//}
	//if(upload_prefix != NULL) {
	//
	//delete upload_prefix;
	//upload_prefix = NULL;
	//}
	//
}

void
S3Config::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *bucket_nameKey = "bucket_name";
	node = json_object_get_member(pJsonObject, bucket_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&bucket_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *cdn_urlKey = "cdn_url";
	node = json_object_get_member(pJsonObject, cdn_urlKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&cdn_url, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *regionKey = "region";
	node = json_object_get_member(pJsonObject, regionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&region, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *upload_prefixKey = "upload_prefix";
	node = json_object_get_member(pJsonObject, upload_prefixKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&upload_prefix, node, "std::string", "");
		} else {
			
		}
	}
}

S3Config::S3Config(char* json)
{
	this->fromJson(json);
}

char*
S3Config::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getBucketName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *bucket_nameKey = "bucket_name";
	json_object_set_member(pJsonObject, bucket_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCdnUrl();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *cdn_urlKey = "cdn_url";
	json_object_set_member(pJsonObject, cdn_urlKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRegion();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *regionKey = "region";
	json_object_set_member(pJsonObject, regionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUploadPrefix();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *upload_prefixKey = "upload_prefix";
	json_object_set_member(pJsonObject, upload_prefixKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
S3Config::getBucketName()
{
	return bucket_name;
}

void
S3Config::setBucketName(std::string  bucket_name)
{
	this->bucket_name = bucket_name;
}

std::string
S3Config::getCdnUrl()
{
	return cdn_url;
}

void
S3Config::setCdnUrl(std::string  cdn_url)
{
	this->cdn_url = cdn_url;
}

std::string
S3Config::getRegion()
{
	return region;
}

void
S3Config::setRegion(std::string  region)
{
	this->region = region;
}

std::string
S3Config::getUploadPrefix()
{
	return upload_prefix;
}

void
S3Config::setUploadPrefix(std::string  upload_prefix)
{
	this->upload_prefix = upload_prefix;
}


