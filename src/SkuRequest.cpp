#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "SkuRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

SkuRequest::SkuRequest()
{
	//__init();
}

SkuRequest::~SkuRequest()
{
	//__cleanup();
}

void
SkuRequest::__init()
{
	//
	//
	//sku = std::string();
	//
}

void
SkuRequest::__cleanup()
{
	//if(sku != NULL) {
	//
	//delete sku;
	//sku = NULL;
	//}
	//
}

void
SkuRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *skuKey = "sku";
	node = json_object_get_member(pJsonObject, skuKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&sku, node, "std::string", "");
		} else {
			
		}
	}
}

SkuRequest::SkuRequest(char* json)
{
	this->fromJson(json);
}

char*
SkuRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getSku();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *skuKey = "sku";
	json_object_set_member(pJsonObject, skuKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
SkuRequest::getSku()
{
	return sku;
}

void
SkuRequest::setSku(std::string  sku)
{
	this->sku = sku;
}


