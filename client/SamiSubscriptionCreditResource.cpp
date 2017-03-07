
#include "SamiSubscriptionCreditResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiSubscriptionCreditResource::SamiSubscriptionCreditResource() {
    init();
}

SamiSubscriptionCreditResource::~SamiSubscriptionCreditResource() {
    this->cleanup();
}

void
SamiSubscriptionCreditResource::init() {
    pAmount = null;
pCreated_date = null;
pId = null;
pInventory_id = null;
pReason = null;
}

void
SamiSubscriptionCreditResource::cleanup() {
    if(pAmount != null) {
        
        delete pAmount;
        pAmount = null;
    }
if(pCreated_date != null) {
        
        delete pCreated_date;
        pCreated_date = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pInventory_id != null) {
        
        delete pInventory_id;
        pInventory_id = null;
    }
if(pReason != null) {
        
        delete pReason;
        pReason = null;
    }
}


SamiSubscriptionCreditResource*
SamiSubscriptionCreditResource::fromJson(String* json) {
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
SamiSubscriptionCreditResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pAmountKey = new JsonString(L"amount");
        IJsonValue* pAmountVal = null;
        pJsonObject->GetValue(pAmountKey, pAmountVal);
        if(pAmountVal != null) {
            
            pAmount = new Double();
            jsonToValue(pAmount, pAmountVal, L"Double", L"Double");
        }
        delete pAmountKey;
JsonString* pCreated_dateKey = new JsonString(L"created_date");
        IJsonValue* pCreated_dateVal = null;
        pJsonObject->GetValue(pCreated_dateKey, pCreated_dateVal);
        if(pCreated_dateVal != null) {
            
            pCreated_date = new Long();
            jsonToValue(pCreated_date, pCreated_dateVal, L"Long", L"Long");
        }
        delete pCreated_dateKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
JsonString* pInventory_idKey = new JsonString(L"inventory_id");
        IJsonValue* pInventory_idVal = null;
        pJsonObject->GetValue(pInventory_idKey, pInventory_idVal);
        if(pInventory_idVal != null) {
            
            pInventory_id = new Integer();
            jsonToValue(pInventory_id, pInventory_idVal, L"Integer", L"Integer");
        }
        delete pInventory_idKey;
JsonString* pReasonKey = new JsonString(L"reason");
        IJsonValue* pReasonVal = null;
        pJsonObject->GetValue(pReasonKey, pReasonVal);
        if(pReasonVal != null) {
            
            pReason = new String();
            jsonToValue(pReason, pReasonVal, L"String", L"String");
        }
        delete pReasonKey;
    }
}

SamiSubscriptionCreditResource::SamiSubscriptionCreditResource(String* json) {
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
SamiSubscriptionCreditResource::asJson ()
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
SamiSubscriptionCreditResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAmountKey = new JsonString(L"amount");
    pJsonObject->Add(pAmountKey, toJson(getPAmount(), "Double", ""));

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pInventory_idKey = new JsonString(L"inventory_id");
    pJsonObject->Add(pInventory_idKey, toJson(getPInventoryId(), "Integer", ""));

    JsonString *pReasonKey = new JsonString(L"reason");
    pJsonObject->Add(pReasonKey, toJson(getPReason(), "String", ""));

    return pJsonObject;
}

Double*
SamiSubscriptionCreditResource::getPAmount() {
    return pAmount;
}
void
SamiSubscriptionCreditResource::setPAmount(Double* pAmount) {
    this->pAmount = pAmount;
}

Long*
SamiSubscriptionCreditResource::getPCreatedDate() {
    return pCreated_date;
}
void
SamiSubscriptionCreditResource::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

Integer*
SamiSubscriptionCreditResource::getPId() {
    return pId;
}
void
SamiSubscriptionCreditResource::setPId(Integer* pId) {
    this->pId = pId;
}

Integer*
SamiSubscriptionCreditResource::getPInventoryId() {
    return pInventory_id;
}
void
SamiSubscriptionCreditResource::setPInventoryId(Integer* pInventory_id) {
    this->pInventory_id = pInventory_id;
}

String*
SamiSubscriptionCreditResource::getPReason() {
    return pReason;
}
void
SamiSubscriptionCreditResource::setPReason(String* pReason) {
    this->pReason = pReason;
}



} /* namespace Swagger */

