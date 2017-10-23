#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "FattMerchantPaymentMethod.h"

using namespace std;
using namespace Tizen::ArtikCloud;

FattMerchantPaymentMethod::FattMerchantPaymentMethod()
{
	//__init();
}

FattMerchantPaymentMethod::~FattMerchantPaymentMethod()
{
	//__cleanup();
}

void
FattMerchantPaymentMethod::__init()
{
	//
	//
	//address1 = std::string();
	//
	//
	//address2 = std::string();
	//
	//
	//address_city = std::string();
	//
	//
	//address_country = std::string();
	//
	//
	//address_state = std::string();
	//
	//
	//address_zip = std::string();
	//
	//
	//card_last_four = std::string();
	//
	//
	//created_at = std::string();
	//
	//
	//customer_id = std::string();
	//
	//
	//deleted_at = std::string();
	//
	//
	//id = std::string();
	//
	//
	//nickname = std::string();
	//
	//
	//updated_at = std::string();
	//
}

void
FattMerchantPaymentMethod::__cleanup()
{
	//if(address1 != NULL) {
	//
	//delete address1;
	//address1 = NULL;
	//}
	//if(address2 != NULL) {
	//
	//delete address2;
	//address2 = NULL;
	//}
	//if(address_city != NULL) {
	//
	//delete address_city;
	//address_city = NULL;
	//}
	//if(address_country != NULL) {
	//
	//delete address_country;
	//address_country = NULL;
	//}
	//if(address_state != NULL) {
	//
	//delete address_state;
	//address_state = NULL;
	//}
	//if(address_zip != NULL) {
	//
	//delete address_zip;
	//address_zip = NULL;
	//}
	//if(card_last_four != NULL) {
	//
	//delete card_last_four;
	//card_last_four = NULL;
	//}
	//if(created_at != NULL) {
	//
	//delete created_at;
	//created_at = NULL;
	//}
	//if(customer_id != NULL) {
	//
	//delete customer_id;
	//customer_id = NULL;
	//}
	//if(deleted_at != NULL) {
	//
	//delete deleted_at;
	//deleted_at = NULL;
	//}
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(nickname != NULL) {
	//
	//delete nickname;
	//nickname = NULL;
	//}
	//if(updated_at != NULL) {
	//
	//delete updated_at;
	//updated_at = NULL;
	//}
	//
}

void
FattMerchantPaymentMethod::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *address1Key = "address1";
	node = json_object_get_member(pJsonObject, address1Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&address1, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *address2Key = "address2";
	node = json_object_get_member(pJsonObject, address2Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&address2, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *address_cityKey = "address_city";
	node = json_object_get_member(pJsonObject, address_cityKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&address_city, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *address_countryKey = "address_country";
	node = json_object_get_member(pJsonObject, address_countryKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&address_country, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *address_stateKey = "address_state";
	node = json_object_get_member(pJsonObject, address_stateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&address_state, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *address_zipKey = "address_zip";
	node = json_object_get_member(pJsonObject, address_zipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&address_zip, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *card_last_fourKey = "card_last_four";
	node = json_object_get_member(pJsonObject, card_last_fourKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&card_last_four, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *created_atKey = "created_at";
	node = json_object_get_member(pJsonObject, created_atKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&created_at, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *customer_idKey = "customer_id";
	node = json_object_get_member(pJsonObject, customer_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&customer_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *deleted_atKey = "deleted_at";
	node = json_object_get_member(pJsonObject, deleted_atKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&deleted_at, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *nicknameKey = "nickname";
	node = json_object_get_member(pJsonObject, nicknameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&nickname, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *updated_atKey = "updated_at";
	node = json_object_get_member(pJsonObject, updated_atKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&updated_at, node, "std::string", "");
		} else {
			
		}
	}
}

FattMerchantPaymentMethod::FattMerchantPaymentMethod(char* json)
{
	this->fromJson(json);
}

char*
FattMerchantPaymentMethod::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getAddress1();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *address1Key = "address1";
	json_object_set_member(pJsonObject, address1Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getAddress2();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *address2Key = "address2";
	json_object_set_member(pJsonObject, address2Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getAddressCity();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *address_cityKey = "address_city";
	json_object_set_member(pJsonObject, address_cityKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAddressCountry();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *address_countryKey = "address_country";
	json_object_set_member(pJsonObject, address_countryKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAddressState();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *address_stateKey = "address_state";
	json_object_set_member(pJsonObject, address_stateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAddressZip();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *address_zipKey = "address_zip";
	json_object_set_member(pJsonObject, address_zipKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCardLastFour();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *card_last_fourKey = "card_last_four";
	json_object_set_member(pJsonObject, card_last_fourKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCreatedAt();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *created_atKey = "created_at";
	json_object_set_member(pJsonObject, created_atKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCustomerId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *customer_idKey = "customer_id";
	json_object_set_member(pJsonObject, customer_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDeletedAt();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *deleted_atKey = "deleted_at";
	json_object_set_member(pJsonObject, deleted_atKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getNickname();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nicknameKey = "nickname";
	json_object_set_member(pJsonObject, nicknameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUpdatedAt();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *updated_atKey = "updated_at";
	json_object_set_member(pJsonObject, updated_atKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
FattMerchantPaymentMethod::getAddress1()
{
	return address1;
}

void
FattMerchantPaymentMethod::setAddress1(std::string  address1)
{
	this->address1 = address1;
}

std::string
FattMerchantPaymentMethod::getAddress2()
{
	return address2;
}

void
FattMerchantPaymentMethod::setAddress2(std::string  address2)
{
	this->address2 = address2;
}

std::string
FattMerchantPaymentMethod::getAddressCity()
{
	return address_city;
}

void
FattMerchantPaymentMethod::setAddressCity(std::string  address_city)
{
	this->address_city = address_city;
}

std::string
FattMerchantPaymentMethod::getAddressCountry()
{
	return address_country;
}

void
FattMerchantPaymentMethod::setAddressCountry(std::string  address_country)
{
	this->address_country = address_country;
}

std::string
FattMerchantPaymentMethod::getAddressState()
{
	return address_state;
}

void
FattMerchantPaymentMethod::setAddressState(std::string  address_state)
{
	this->address_state = address_state;
}

std::string
FattMerchantPaymentMethod::getAddressZip()
{
	return address_zip;
}

void
FattMerchantPaymentMethod::setAddressZip(std::string  address_zip)
{
	this->address_zip = address_zip;
}

std::string
FattMerchantPaymentMethod::getCardLastFour()
{
	return card_last_four;
}

void
FattMerchantPaymentMethod::setCardLastFour(std::string  card_last_four)
{
	this->card_last_four = card_last_four;
}

std::string
FattMerchantPaymentMethod::getCreatedAt()
{
	return created_at;
}

void
FattMerchantPaymentMethod::setCreatedAt(std::string  created_at)
{
	this->created_at = created_at;
}

std::string
FattMerchantPaymentMethod::getCustomerId()
{
	return customer_id;
}

void
FattMerchantPaymentMethod::setCustomerId(std::string  customer_id)
{
	this->customer_id = customer_id;
}

std::string
FattMerchantPaymentMethod::getDeletedAt()
{
	return deleted_at;
}

void
FattMerchantPaymentMethod::setDeletedAt(std::string  deleted_at)
{
	this->deleted_at = deleted_at;
}

std::string
FattMerchantPaymentMethod::getId()
{
	return id;
}

void
FattMerchantPaymentMethod::setId(std::string  id)
{
	this->id = id;
}

std::string
FattMerchantPaymentMethod::getNickname()
{
	return nickname;
}

void
FattMerchantPaymentMethod::setNickname(std::string  nickname)
{
	this->nickname = nickname;
}

std::string
FattMerchantPaymentMethod::getUpdatedAt()
{
	return updated_at;
}

void
FattMerchantPaymentMethod::setUpdatedAt(std::string  updated_at)
{
	this->updated_at = updated_at;
}


