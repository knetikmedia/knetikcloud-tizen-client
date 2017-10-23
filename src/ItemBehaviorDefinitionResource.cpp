#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ItemBehaviorDefinitionResource.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ItemBehaviorDefinitionResource::ItemBehaviorDefinitionResource()
{
	//__init();
}

ItemBehaviorDefinitionResource::~ItemBehaviorDefinitionResource()
{
	//__cleanup();
}

void
ItemBehaviorDefinitionResource::__init()
{
	//
	//
	//behavior = new Behavior();
	//
	//
	//modifiable = bool(false);
	//
	//
	//required = bool(false);
	//
}

void
ItemBehaviorDefinitionResource::__cleanup()
{
	//if(behavior != NULL) {
	//
	//delete behavior;
	//behavior = NULL;
	//}
	//if(modifiable != NULL) {
	//
	//delete modifiable;
	//modifiable = NULL;
	//}
	//if(required != NULL) {
	//
	//delete required;
	//required = NULL;
	//}
	//
}

void
ItemBehaviorDefinitionResource::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *behaviorKey = "behavior";
	node = json_object_get_member(pJsonObject, behaviorKey);
	if (node !=NULL) {
	

		if (isprimitive("Behavior")) {
			jsonToValue(&behavior, node, "Behavior", "Behavior");
		} else {
			
			Behavior* obj = static_cast<Behavior*> (&behavior);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *modifiableKey = "modifiable";
	node = json_object_get_member(pJsonObject, modifiableKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&modifiable, node, "bool", "");
		} else {
			
		}
	}
	const gchar *requiredKey = "required";
	node = json_object_get_member(pJsonObject, requiredKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&required, node, "bool", "");
		} else {
			
		}
	}
}

ItemBehaviorDefinitionResource::ItemBehaviorDefinitionResource(char* json)
{
	this->fromJson(json);
}

char*
ItemBehaviorDefinitionResource::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("Behavior")) {
		Behavior obj = getBehavior();
		node = converttoJson(&obj, "Behavior", "");
	}
	else {
		
		Behavior obj = static_cast<Behavior> (getBehavior());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *behaviorKey = "behavior";
	json_object_set_member(pJsonObject, behaviorKey, node);
	if (isprimitive("bool")) {
		bool obj = getModifiable();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *modifiableKey = "modifiable";
	json_object_set_member(pJsonObject, modifiableKey, node);
	if (isprimitive("bool")) {
		bool obj = getRequired();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *requiredKey = "required";
	json_object_set_member(pJsonObject, requiredKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

Behavior
ItemBehaviorDefinitionResource::getBehavior()
{
	return behavior;
}

void
ItemBehaviorDefinitionResource::setBehavior(Behavior  behavior)
{
	this->behavior = behavior;
}

bool
ItemBehaviorDefinitionResource::getModifiable()
{
	return modifiable;
}

void
ItemBehaviorDefinitionResource::setModifiable(bool  modifiable)
{
	this->modifiable = modifiable;
}

bool
ItemBehaviorDefinitionResource::getRequired()
{
	return required;
}

void
ItemBehaviorDefinitionResource::setRequired(bool  required)
{
	this->required = required;
}


