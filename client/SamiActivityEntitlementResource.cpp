
#include "SamiActivityEntitlementResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiActivityEntitlementResource::SamiActivityEntitlementResource() {
    init();
}

SamiActivityEntitlementResource::~SamiActivityEntitlementResource() {
    this->cleanup();
}

void
SamiActivityEntitlementResource::init() {
    pCurrency_code = null;
pItem_id = null;
pName = null;
pPrice = null;
pSku = null;
}

void
SamiActivityEntitlementResource::cleanup() {
    if(pCurrency_code != null) {
        
        delete pCurrency_code;
        pCurrency_code = null;
    }
if(pItem_id != null) {
        
        delete pItem_id;
        pItem_id = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pPrice != null) {
        
        delete pPrice;
        pPrice = null;
    }
if(pSku != null) {
        
        delete pSku;
        pSku = null;
    }
}


SamiActivityEntitlementResource*
SamiActivityEntitlementResource::fromJson(String* json) {
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
SamiActivityEntitlementResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCurrency_codeKey = new JsonString(L"currency_code");
        IJsonValue* pCurrency_codeVal = null;
        pJsonObject->GetValue(pCurrency_codeKey, pCurrency_codeVal);
        if(pCurrency_codeVal != null) {
            
            pCurrency_code = new String();
            jsonToValue(pCurrency_code, pCurrency_codeVal, L"String", L"String");
        }
        delete pCurrency_codeKey;
JsonString* pItem_idKey = new JsonString(L"item_id");
        IJsonValue* pItem_idVal = null;
        pJsonObject->GetValue(pItem_idKey, pItem_idVal);
        if(pItem_idVal != null) {
            
            pItem_id = new Integer();
            jsonToValue(pItem_id, pItem_idVal, L"Integer", L"Integer");
        }
        delete pItem_idKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pPriceKey = new JsonString(L"price");
        IJsonValue* pPriceVal = null;
        pJsonObject->GetValue(pPriceKey, pPriceVal);
        if(pPriceVal != null) {
            
            pPrice = new Double();
            jsonToValue(pPrice, pPriceVal, L"Double", L"Double");
        }
        delete pPriceKey;
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

SamiActivityEntitlementResource::SamiActivityEntitlementResource(String* json) {
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
SamiActivityEntitlementResource::asJson ()
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
SamiActivityEntitlementResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCurrency_codeKey = new JsonString(L"currency_code");
    pJsonObject->Add(pCurrency_codeKey, toJson(getPCurrencyCode(), "String", ""));

    JsonString *pItem_idKey = new JsonString(L"item_id");
    pJsonObject->Add(pItem_idKey, toJson(getPItemId(), "Integer", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pPriceKey = new JsonString(L"price");
    pJsonObject->Add(pPriceKey, toJson(getPPrice(), "Double", ""));

    JsonString *pSkuKey = new JsonString(L"sku");
    pJsonObject->Add(pSkuKey, toJson(getPSku(), "String", ""));

    return pJsonObject;
}

String*
SamiActivityEntitlementResource::getPCurrencyCode() {
    return pCurrency_code;
}
void
SamiActivityEntitlementResource::setPCurrencyCode(String* pCurrency_code) {
    this->pCurrency_code = pCurrency_code;
}

Integer*
SamiActivityEntitlementResource::getPItemId() {
    return pItem_id;
}
void
SamiActivityEntitlementResource::setPItemId(Integer* pItem_id) {
    this->pItem_id = pItem_id;
}

String*
SamiActivityEntitlementResource::getPName() {
    return pName;
}
void
SamiActivityEntitlementResource::setPName(String* pName) {
    this->pName = pName;
}

Double*
SamiActivityEntitlementResource::getPPrice() {
    return pPrice;
}
void
SamiActivityEntitlementResource::setPPrice(Double* pPrice) {
    this->pPrice = pPrice;
}

String*
SamiActivityEntitlementResource::getPSku() {
    return pSku;
}
void
SamiActivityEntitlementResource::setPSku(String* pSku) {
    this->pSku = pSku;
}



} /* namespace Swagger */

