#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ItemIdRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ItemIdRequest::ItemIdRequest()
{
	//__init();
}

ItemIdRequest::~ItemIdRequest()
{
	//__cleanup();
}

void
ItemIdRequest::__init()
{
	//
	//
	//item_id = int(0);
	//
}

void
ItemIdRequest::__cleanup()
{
	//if(item_id != NULL) {
	//
	//delete item_id;
	//item_id = NULL;
	//}
	//
}

void
ItemIdRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *item_idKey = "item_id";
	node = json_object_get_member(pJsonObject, item_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&item_id, node, "int", "");
		} else {
			
		}
	}
}

ItemIdRequest::ItemIdRequest(char* json)
{
	this->fromJson(json);
}

char*
ItemIdRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getItemId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *item_idKey = "item_id";
	json_object_set_member(pJsonObject, item_idKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
ItemIdRequest::getItemId()
{
	return item_id;
}

void
ItemIdRequest::setItemId(int  item_id)
{
	this->item_id = item_id;
}


