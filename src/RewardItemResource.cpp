#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "RewardItemResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

RewardItemResource::RewardItemResource()
{
	//__init();
}

RewardItemResource::~RewardItemResource()
{
	//__cleanup();
}

void
RewardItemResource::__init()
{
	//
	//
	//item_id = int(0);
	//
	//
	//item_name = std::string();
	//
	//
	//max_rank = int(0);
	//
	//
	//min_rank = int(0);
	//
	//
	//quantity = int(0);
	//
}

void
RewardItemResource::__cleanup()
{
	//if(item_id != NULL) {
	//
	//delete item_id;
	//item_id = NULL;
	//}
	//if(item_name != NULL) {
	//
	//delete item_name;
	//item_name = NULL;
	//}
	//if(max_rank != NULL) {
	//
	//delete max_rank;
	//max_rank = NULL;
	//}
	//if(min_rank != NULL) {
	//
	//delete min_rank;
	//min_rank = NULL;
	//}
	//if(quantity != NULL) {
	//
	//delete quantity;
	//quantity = NULL;
	//}
	//
}

void
RewardItemResource::fromJson(char* jsonStr)
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
	const gchar *item_nameKey = "item_name";
	node = json_object_get_member(pJsonObject, item_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&item_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *max_rankKey = "max_rank";
	node = json_object_get_member(pJsonObject, max_rankKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&max_rank, node, "int", "");
		} else {
			
		}
	}
	const gchar *min_rankKey = "min_rank";
	node = json_object_get_member(pJsonObject, min_rankKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&min_rank, node, "int", "");
		} else {
			
		}
	}
	const gchar *quantityKey = "quantity";
	node = json_object_get_member(pJsonObject, quantityKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&quantity, node, "int", "");
		} else {
			
		}
	}
}

RewardItemResource::RewardItemResource(char* json)
{
	this->fromJson(json);
}

char*
RewardItemResource::toJson()
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
	if (isprimitive("std::string")) {
		std::string obj = getItemName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *item_nameKey = "item_name";
	json_object_set_member(pJsonObject, item_nameKey, node);
	if (isprimitive("int")) {
		int obj = getMaxRank();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *max_rankKey = "max_rank";
	json_object_set_member(pJsonObject, max_rankKey, node);
	if (isprimitive("int")) {
		int obj = getMinRank();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *min_rankKey = "min_rank";
	json_object_set_member(pJsonObject, min_rankKey, node);
	if (isprimitive("int")) {
		int obj = getQuantity();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *quantityKey = "quantity";
	json_object_set_member(pJsonObject, quantityKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
RewardItemResource::getItemId()
{
	return item_id;
}

void
RewardItemResource::setItemId(int  item_id)
{
	this->item_id = item_id;
}

std::string
RewardItemResource::getItemName()
{
	return item_name;
}

void
RewardItemResource::setItemName(std::string  item_name)
{
	this->item_name = item_name;
}

int
RewardItemResource::getMaxRank()
{
	return max_rank;
}

void
RewardItemResource::setMaxRank(int  max_rank)
{
	this->max_rank = max_rank;
}

int
RewardItemResource::getMinRank()
{
	return min_rank;
}

void
RewardItemResource::setMinRank(int  min_rank)
{
	this->min_rank = min_rank;
}

int
RewardItemResource::getQuantity()
{
	return quantity;
}

void
RewardItemResource::setQuantity(int  quantity)
{
	this->quantity = quantity;
}


