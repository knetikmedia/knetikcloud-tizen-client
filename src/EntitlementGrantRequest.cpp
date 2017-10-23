#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "EntitlementGrantRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

EntitlementGrantRequest::EntitlementGrantRequest()
{
	//__init();
}

EntitlementGrantRequest::~EntitlementGrantRequest()
{
	//__cleanup();
}

void
EntitlementGrantRequest::__init()
{
	//
	//
	//entitlement_id = int(0);
	//
}

void
EntitlementGrantRequest::__cleanup()
{
	//if(entitlement_id != NULL) {
	//
	//delete entitlement_id;
	//entitlement_id = NULL;
	//}
	//
}

void
EntitlementGrantRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *entitlement_idKey = "entitlement_id";
	node = json_object_get_member(pJsonObject, entitlement_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&entitlement_id, node, "int", "");
		} else {
			
		}
	}
}

EntitlementGrantRequest::EntitlementGrantRequest(char* json)
{
	this->fromJson(json);
}

char*
EntitlementGrantRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getEntitlementId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *entitlement_idKey = "entitlement_id";
	json_object_set_member(pJsonObject, entitlement_idKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
EntitlementGrantRequest::getEntitlementId()
{
	return entitlement_id;
}

void
EntitlementGrantRequest::setEntitlementId(int  entitlement_id)
{
	this->entitlement_id = entitlement_id;
}


