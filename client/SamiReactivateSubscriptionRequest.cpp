
#include "SamiReactivateSubscriptionRequest.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiReactivateSubscriptionRequest::SamiReactivateSubscriptionRequest() {
    init();
}

SamiReactivateSubscriptionRequest::~SamiReactivateSubscriptionRequest() {
    this->cleanup();
}

void
SamiReactivateSubscriptionRequest::init() {
    pInventory_id = null;
pReactivation_fee = null;
}

void
SamiReactivateSubscriptionRequest::cleanup() {
    if(pInventory_id != null) {
        
        delete pInventory_id;
        pInventory_id = null;
    }
if(pReactivation_fee != null) {
        
        delete pReactivation_fee;
        pReactivation_fee = null;
    }
}


SamiReactivateSubscriptionRequest*
SamiReactivateSubscriptionRequest::fromJson(String* json) {
    this->cleanup();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
    return this;
}


void
SamiReactivateSubscriptionRequest::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pInventory_idKey = new JsonString(L"inventory_id");
        IJsonValue* pInventory_idVal = null;
        pJsonObject->GetValue(pInventory_idKey, pInventory_idVal);
        if(pInventory_idVal != null) {
            
            pInventory_id = new Integer();
            jsonToValue(pInventory_id, pInventory_idVal, L"Integer", L"Integer");
        }
        delete pInventory_idKey;
JsonString* pReactivation_feeKey = new JsonString(L"reactivation_fee");
        IJsonValue* pReactivation_feeVal = null;
        pJsonObject->GetValue(pReactivation_feeKey, pReactivation_feeVal);
        if(pReactivation_feeVal != null) {
            
            pReactivation_fee = new Boolean(false);
            jsonToValue(pReactivation_fee, pReactivation_feeVal, L"Boolean", L"Boolean");
        }
        delete pReactivation_feeKey;
    }
}

SamiReactivateSubscriptionRequest::SamiReactivateSubscriptionRequest(String* json) {
    init();
    String str(json->GetPointer());
    int length = str.GetLength();

    ByteBuffer buffer;
    buffer.Construct(length);

    for (int i = 0; i < length; ++i) {
       byte b = str[i];
       buffer.SetByte(b);
    }

    IJsonValue* pJson = JsonParser::ParseN(buffer);
    fromJsonObject(pJson);
    if (pJson->GetType() == JSON_TYPE_OBJECT) {
       JsonObject* pObject = static_cast< JsonObject* >(pJson);
       pObject->RemoveAll(true);
    }
    else if (pJson->GetType() == JSON_TYPE_ARRAY) {
       JsonArray* pArray = static_cast< JsonArray* >(pJson);
       pArray->RemoveAll(true);
    }
    delete pJson;
}

String
SamiReactivateSubscriptionRequest::asJson ()
{
    JsonObject* pJsonObject = asJsonObject();

    char *pComposeBuf = new char[256];
    JsonWriter::Compose(pJsonObject, pComposeBuf, 256);
    String s = String(pComposeBuf);

    delete pComposeBuf;
    pJsonObject->RemoveAll(true);
    delete pJsonObject;

    return s;
}

JsonObject*
SamiReactivateSubscriptionRequest::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pInventory_idKey = new JsonString(L"inventory_id");
    pJsonObject->Add(pInventory_idKey, toJson(getPInventoryId(), "Integer", ""));

    JsonString *pReactivation_feeKey = new JsonString(L"reactivation_fee");
    pJsonObject->Add(pReactivation_feeKey, toJson(getPReactivationFee(), "Boolean", ""));

    return pJsonObject;
}

Integer*
SamiReactivateSubscriptionRequest::getPInventoryId() {
    return pInventory_id;
}
void
SamiReactivateSubscriptionRequest::setPInventoryId(Integer* pInventory_id) {
    this->pInventory_id = pInventory_id;
}

Boolean*
SamiReactivateSubscriptionRequest::getPReactivationFee() {
    return pReactivation_fee;
}
void
SamiReactivateSubscriptionRequest::setPReactivationFee(Boolean* pReactivation_fee) {
    this->pReactivation_fee = pReactivation_fee;
}



} /* namespace Swagger */

