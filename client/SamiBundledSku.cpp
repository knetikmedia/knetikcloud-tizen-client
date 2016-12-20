
#include "SamiBundledSku.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiBundledSku::SamiBundledSku() {
    init();
}

SamiBundledSku::~SamiBundledSku() {
    this->cleanup();
}

void
SamiBundledSku::init() {
    pPrice_override = null;
pQuantity = null;
pSku = null;
}

void
SamiBundledSku::cleanup() {
    if(pPrice_override != null) {
        
        delete pPrice_override;
        pPrice_override = null;
    }
if(pQuantity != null) {
        
        delete pQuantity;
        pQuantity = null;
    }
if(pSku != null) {
        
        delete pSku;
        pSku = null;
    }
}


SamiBundledSku*
SamiBundledSku::fromJson(String* json) {
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
SamiBundledSku::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pPrice_overrideKey = new JsonString(L"price_override");
        IJsonValue* pPrice_overrideVal = null;
        pJsonObject->GetValue(pPrice_overrideKey, pPrice_overrideVal);
        if(pPrice_overrideVal != null) {
            
            pPrice_override = new Double();
            jsonToValue(pPrice_override, pPrice_overrideVal, L"Double", L"Double");
        }
        delete pPrice_overrideKey;
JsonString* pQuantityKey = new JsonString(L"quantity");
        IJsonValue* pQuantityVal = null;
        pJsonObject->GetValue(pQuantityKey, pQuantityVal);
        if(pQuantityVal != null) {
            
            pQuantity = new Integer();
            jsonToValue(pQuantity, pQuantityVal, L"Integer", L"Integer");
        }
        delete pQuantityKey;
JsonString* pSkuKey = new JsonString(L"sku");
        IJsonValue* pSkuVal = null;
        pJsonObject->GetValue(pSkuKey, pSkuVal);
        if(pSkuVal != null) {
            
            pSku = new String();
            jsonToValue(pSku, pSkuVal, L"String", L"String");
        }
        delete pSkuKey;
    }
}

SamiBundledSku::SamiBundledSku(String* json) {
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
SamiBundledSku::asJson ()
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
SamiBundledSku::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pPrice_overrideKey = new JsonString(L"price_override");
    pJsonObject->Add(pPrice_overrideKey, toJson(getPPriceOverride(), "Double", ""));

    JsonString *pQuantityKey = new JsonString(L"quantity");
    pJsonObject->Add(pQuantityKey, toJson(getPQuantity(), "Integer", ""));

    JsonString *pSkuKey = new JsonString(L"sku");
    pJsonObject->Add(pSkuKey, toJson(getPSku(), "String", ""));

    return pJsonObject;
}

Double*
SamiBundledSku::getPPriceOverride() {
    return pPrice_override;
}
void
SamiBundledSku::setPPriceOverride(Double* pPrice_override) {
    this->pPrice_override = pPrice_override;
}

Integer*
SamiBundledSku::getPQuantity() {
    return pQuantity;
}
void
SamiBundledSku::setPQuantity(Integer* pQuantity) {
    this->pQuantity = pQuantity;
}

String*
SamiBundledSku::getPSku() {
    return pSku;
}
void
SamiBundledSku::setPSku(String* pSku) {
    this->pSku = pSku;
}



} /* namespace Swagger */

