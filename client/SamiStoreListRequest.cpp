
#include "SamiStoreListRequest.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiStoreListRequest::SamiStoreListRequest() {
    init();
}

SamiStoreListRequest::~SamiStoreListRequest() {
    this->cleanup();
}

void
SamiStoreListRequest::init() {
    pIgnore_location = null;
pIn_stock_only = null;
pLimit = null;
pPage = null;
pUse_catalog = null;
}

void
SamiStoreListRequest::cleanup() {
    if(pIgnore_location != null) {
        
        delete pIgnore_location;
        pIgnore_location = null;
    }
if(pIn_stock_only != null) {
        
        delete pIn_stock_only;
        pIn_stock_only = null;
    }
if(pLimit != null) {
        
        delete pLimit;
        pLimit = null;
    }
if(pPage != null) {
        
        delete pPage;
        pPage = null;
    }
if(pUse_catalog != null) {
        
        delete pUse_catalog;
        pUse_catalog = null;
    }
}


SamiStoreListRequest*
SamiStoreListRequest::fromJson(String* json) {
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
SamiStoreListRequest::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pIgnore_locationKey = new JsonString(L"ignore_location");
        IJsonValue* pIgnore_locationVal = null;
        pJsonObject->GetValue(pIgnore_locationKey, pIgnore_locationVal);
        if(pIgnore_locationVal != null) {
            
            pIgnore_location = new Boolean(false);
            jsonToValue(pIgnore_location, pIgnore_locationVal, L"Boolean", L"Boolean");
        }
        delete pIgnore_locationKey;
JsonString* pIn_stock_onlyKey = new JsonString(L"in_stock_only");
        IJsonValue* pIn_stock_onlyVal = null;
        pJsonObject->GetValue(pIn_stock_onlyKey, pIn_stock_onlyVal);
        if(pIn_stock_onlyVal != null) {
            
            pIn_stock_only = new Boolean(false);
            jsonToValue(pIn_stock_only, pIn_stock_onlyVal, L"Boolean", L"Boolean");
        }
        delete pIn_stock_onlyKey;
JsonString* pLimitKey = new JsonString(L"limit");
        IJsonValue* pLimitVal = null;
        pJsonObject->GetValue(pLimitKey, pLimitVal);
        if(pLimitVal != null) {
            
            pLimit = new Integer();
            jsonToValue(pLimit, pLimitVal, L"Integer", L"Integer");
        }
        delete pLimitKey;
JsonString* pPageKey = new JsonString(L"page");
        IJsonValue* pPageVal = null;
        pJsonObject->GetValue(pPageKey, pPageVal);
        if(pPageVal != null) {
            
            pPage = new Integer();
            jsonToValue(pPage, pPageVal, L"Integer", L"Integer");
        }
        delete pPageKey;
JsonString* pUse_catalogKey = new JsonString(L"use_catalog");
        IJsonValue* pUse_catalogVal = null;
        pJsonObject->GetValue(pUse_catalogKey, pUse_catalogVal);
        if(pUse_catalogVal != null) {
            
            pUse_catalog = new Boolean(false);
            jsonToValue(pUse_catalog, pUse_catalogVal, L"Boolean", L"Boolean");
        }
        delete pUse_catalogKey;
    }
}

SamiStoreListRequest::SamiStoreListRequest(String* json) {
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
SamiStoreListRequest::asJson ()
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
SamiStoreListRequest::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pIgnore_locationKey = new JsonString(L"ignore_location");
    pJsonObject->Add(pIgnore_locationKey, toJson(getPIgnoreLocation(), "Boolean", ""));

    JsonString *pIn_stock_onlyKey = new JsonString(L"in_stock_only");
    pJsonObject->Add(pIn_stock_onlyKey, toJson(getPInStockOnly(), "Boolean", ""));

    JsonString *pLimitKey = new JsonString(L"limit");
    pJsonObject->Add(pLimitKey, toJson(getPLimit(), "Integer", ""));

    JsonString *pPageKey = new JsonString(L"page");
    pJsonObject->Add(pPageKey, toJson(getPPage(), "Integer", ""));

    JsonString *pUse_catalogKey = new JsonString(L"use_catalog");
    pJsonObject->Add(pUse_catalogKey, toJson(getPUseCatalog(), "Boolean", ""));

    return pJsonObject;
}

Boolean*
SamiStoreListRequest::getPIgnoreLocation() {
    return pIgnore_location;
}
void
SamiStoreListRequest::setPIgnoreLocation(Boolean* pIgnore_location) {
    this->pIgnore_location = pIgnore_location;
}

Boolean*
SamiStoreListRequest::getPInStockOnly() {
    return pIn_stock_only;
}
void
SamiStoreListRequest::setPInStockOnly(Boolean* pIn_stock_only) {
    this->pIn_stock_only = pIn_stock_only;
}

Integer*
SamiStoreListRequest::getPLimit() {
    return pLimit;
}
void
SamiStoreListRequest::setPLimit(Integer* pLimit) {
    this->pLimit = pLimit;
}

Integer*
SamiStoreListRequest::getPPage() {
    return pPage;
}
void
SamiStoreListRequest::setPPage(Integer* pPage) {
    this->pPage = pPage;
}

Boolean*
SamiStoreListRequest::getPUseCatalog() {
    return pUse_catalog;
}
void
SamiStoreListRequest::setPUseCatalog(Boolean* pUse_catalog) {
    this->pUse_catalog = pUse_catalog;
}



} /* namespace Swagger */

