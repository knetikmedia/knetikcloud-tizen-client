
#include "SamiRefundRequest.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiRefundRequest::SamiRefundRequest() {
    init();
}

SamiRefundRequest::~SamiRefundRequest() {
    this->cleanup();
}

void
SamiRefundRequest::init() {
    pAmount = null;
pBundle_sku = null;
pNotes = null;
pSku = null;
}

void
SamiRefundRequest::cleanup() {
    if(pAmount != null) {
        
        delete pAmount;
        pAmount = null;
    }
if(pBundle_sku != null) {
        
        delete pBundle_sku;
        pBundle_sku = null;
    }
if(pNotes != null) {
        
        delete pNotes;
        pNotes = null;
    }
if(pSku != null) {
        
        delete pSku;
        pSku = null;
    }
}


SamiRefundRequest*
SamiRefundRequest::fromJson(String* json) {
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
SamiRefundRequest::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pBundle_skuKey = new JsonString(L"bundle_sku");
        IJsonValue* pBundle_skuVal = null;
        pJsonObject->GetValue(pBundle_skuKey, pBundle_skuVal);
        if(pBundle_skuVal != null) {
            
            pBundle_sku = new String();
            jsonToValue(pBundle_sku, pBundle_skuVal, L"String", L"String");
        }
        delete pBundle_skuKey;
JsonString* pNotesKey = new JsonString(L"notes");
        IJsonValue* pNotesVal = null;
        pJsonObject->GetValue(pNotesKey, pNotesVal);
        if(pNotesVal != null) {
            
            pNotes = new String();
            jsonToValue(pNotes, pNotesVal, L"String", L"String");
        }
        delete pNotesKey;
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

SamiRefundRequest::SamiRefundRequest(String* json) {
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
SamiRefundRequest::asJson ()
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
SamiRefundRequest::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAmountKey = new JsonString(L"amount");
    pJsonObject->Add(pAmountKey, toJson(getPAmount(), "Double", ""));

    JsonString *pBundle_skuKey = new JsonString(L"bundle_sku");
    pJsonObject->Add(pBundle_skuKey, toJson(getPBundleSku(), "String", ""));

    JsonString *pNotesKey = new JsonString(L"notes");
    pJsonObject->Add(pNotesKey, toJson(getPNotes(), "String", ""));

    JsonString *pSkuKey = new JsonString(L"sku");
    pJsonObject->Add(pSkuKey, toJson(getPSku(), "String", ""));

    return pJsonObject;
}

Double*
SamiRefundRequest::getPAmount() {
    return pAmount;
}
void
SamiRefundRequest::setPAmount(Double* pAmount) {
    this->pAmount = pAmount;
}

String*
SamiRefundRequest::getPBundleSku() {
    return pBundle_sku;
}
void
SamiRefundRequest::setPBundleSku(String* pBundle_sku) {
    this->pBundle_sku = pBundle_sku;
}

String*
SamiRefundRequest::getPNotes() {
    return pNotes;
}
void
SamiRefundRequest::setPNotes(String* pNotes) {
    this->pNotes = pNotes;
}

String*
SamiRefundRequest::getPSku() {
    return pSku;
}
void
SamiRefundRequest::setPSku(String* pSku) {
    this->pSku = pSku;
}



} /* namespace Swagger */

