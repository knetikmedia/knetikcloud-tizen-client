
#include "SamiCartItemRequest.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCartItemRequest::SamiCartItemRequest() {
    init();
}

SamiCartItemRequest::~SamiCartItemRequest() {
    this->cleanup();
}

void
SamiCartItemRequest::init() {
    pAffiliate_key = null;
pCatalog_sku = null;
pPrice_override = null;
pQuantity = null;
}

void
SamiCartItemRequest::cleanup() {
    if(pAffiliate_key != null) {
        
        delete pAffiliate_key;
        pAffiliate_key = null;
    }
if(pCatalog_sku != null) {
        
        delete pCatalog_sku;
        pCatalog_sku = null;
    }
if(pPrice_override != null) {
        
        delete pPrice_override;
        pPrice_override = null;
    }
if(pQuantity != null) {
        
        delete pQuantity;
        pQuantity = null;
    }
}


SamiCartItemRequest*
SamiCartItemRequest::fromJson(String* json) {
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
SamiCartItemRequest::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pAffiliate_keyKey = new JsonString(L"affiliate_key");
        IJsonValue* pAffiliate_keyVal = null;
        pJsonObject->GetValue(pAffiliate_keyKey, pAffiliate_keyVal);
        if(pAffiliate_keyVal != null) {
            
            pAffiliate_key = new String();
            jsonToValue(pAffiliate_key, pAffiliate_keyVal, L"String", L"String");
        }
        delete pAffiliate_keyKey;
JsonString* pCatalog_skuKey = new JsonString(L"catalog_sku");
        IJsonValue* pCatalog_skuVal = null;
        pJsonObject->GetValue(pCatalog_skuKey, pCatalog_skuVal);
        if(pCatalog_skuVal != null) {
            
            pCatalog_sku = new String();
            jsonToValue(pCatalog_sku, pCatalog_skuVal, L"String", L"String");
        }
        delete pCatalog_skuKey;
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
    }
}

SamiCartItemRequest::SamiCartItemRequest(String* json) {
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
SamiCartItemRequest::asJson ()
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
SamiCartItemRequest::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAffiliate_keyKey = new JsonString(L"affiliate_key");
    pJsonObject->Add(pAffiliate_keyKey, toJson(getPAffiliateKey(), "String", ""));

    JsonString *pCatalog_skuKey = new JsonString(L"catalog_sku");
    pJsonObject->Add(pCatalog_skuKey, toJson(getPCatalogSku(), "String", ""));

    JsonString *pPrice_overrideKey = new JsonString(L"price_override");
    pJsonObject->Add(pPrice_overrideKey, toJson(getPPriceOverride(), "Double", ""));

    JsonString *pQuantityKey = new JsonString(L"quantity");
    pJsonObject->Add(pQuantityKey, toJson(getPQuantity(), "Integer", ""));

    return pJsonObject;
}

String*
SamiCartItemRequest::getPAffiliateKey() {
    return pAffiliate_key;
}
void
SamiCartItemRequest::setPAffiliateKey(String* pAffiliate_key) {
    this->pAffiliate_key = pAffiliate_key;
}

String*
SamiCartItemRequest::getPCatalogSku() {
    return pCatalog_sku;
}
void
SamiCartItemRequest::setPCatalogSku(String* pCatalog_sku) {
    this->pCatalog_sku = pCatalog_sku;
}

Double*
SamiCartItemRequest::getPPriceOverride() {
    return pPrice_override;
}
void
SamiCartItemRequest::setPPriceOverride(Double* pPrice_override) {
    this->pPrice_override = pPrice_override;
}

Integer*
SamiCartItemRequest::getPQuantity() {
    return pQuantity;
}
void
SamiCartItemRequest::setPQuantity(Integer* pQuantity) {
    this->pQuantity = pQuantity;
}



} /* namespace Swagger */

