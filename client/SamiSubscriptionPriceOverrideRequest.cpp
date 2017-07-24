
#include "SamiSubscriptionPriceOverrideRequest.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiSubscriptionPriceOverrideRequest::SamiSubscriptionPriceOverrideRequest() {
    init();
}

SamiSubscriptionPriceOverrideRequest::~SamiSubscriptionPriceOverrideRequest() {
    this->cleanup();
}

void
SamiSubscriptionPriceOverrideRequest::init() {
    pNew_price = null;
pReason = null;
}

void
SamiSubscriptionPriceOverrideRequest::cleanup() {
    if(pNew_price != null) {
        
        delete pNew_price;
        pNew_price = null;
    }
if(pReason != null) {
        
        delete pReason;
        pReason = null;
    }
}


SamiSubscriptionPriceOverrideRequest*
SamiSubscriptionPriceOverrideRequest::fromJson(String* json) {
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
SamiSubscriptionPriceOverrideRequest::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pNew_priceKey = new JsonString(L"new_price");
        IJsonValue* pNew_priceVal = null;
        pJsonObject->GetValue(pNew_priceKey, pNew_priceVal);
        if(pNew_priceVal != null) {
            
            pNew_price = new Double();
            jsonToValue(pNew_price, pNew_priceVal, L"Double", L"Double");
        }
        delete pNew_priceKey;
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

SamiSubscriptionPriceOverrideRequest::SamiSubscriptionPriceOverrideRequest(String* json) {
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
SamiSubscriptionPriceOverrideRequest::asJson ()
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
SamiSubscriptionPriceOverrideRequest::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pNew_priceKey = new JsonString(L"new_price");
    pJsonObject->Add(pNew_priceKey, toJson(getPNewPrice(), "Double", ""));

    JsonString *pReasonKey = new JsonString(L"reason");
    pJsonObject->Add(pReasonKey, toJson(getPReason(), "String", ""));

    return pJsonObject;
}

Double*
SamiSubscriptionPriceOverrideRequest::getPNewPrice() {
    return pNew_price;
}
void
SamiSubscriptionPriceOverrideRequest::setPNewPrice(Double* pNew_price) {
    this->pNew_price = pNew_price;
}

String*
SamiSubscriptionPriceOverrideRequest::getPReason() {
    return pReason;
}
void
SamiSubscriptionPriceOverrideRequest::setPReason(String* pReason) {
    this->pReason = pReason;
}



} /* namespace Swagger */

