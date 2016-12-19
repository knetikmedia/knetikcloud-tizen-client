
#include "SamiUserInventoryAddRequest.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUserInventoryAddRequest::SamiUserInventoryAddRequest() {
    init();
}

SamiUserInventoryAddRequest::~SamiUserInventoryAddRequest() {
    this->cleanup();
}

void
SamiUserInventoryAddRequest::init() {
    pNote = null;
pOverrides = null;
pSkip_invoice = null;
pSku = null;
}

void
SamiUserInventoryAddRequest::cleanup() {
    if(pNote != null) {
        
        delete pNote;
        pNote = null;
    }
if(pOverrides != null) {
        pOverrides->RemoveAll(true);
        delete pOverrides;
        pOverrides = null;
    }
if(pSkip_invoice != null) {
        
        delete pSkip_invoice;
        pSkip_invoice = null;
    }
if(pSku != null) {
        
        delete pSku;
        pSku = null;
    }
}


SamiUserInventoryAddRequest*
SamiUserInventoryAddRequest::fromJson(String* json) {
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
SamiUserInventoryAddRequest::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pNoteKey = new JsonString(L"note");
        IJsonValue* pNoteVal = null;
        pJsonObject->GetValue(pNoteKey, pNoteVal);
        if(pNoteVal != null) {
            
            pNote = new String();
            jsonToValue(pNote, pNoteVal, L"String", L"String");
        }
        delete pNoteKey;
JsonString* pOverridesKey = new JsonString(L"overrides");
        IJsonValue* pOverridesVal = null;
        pJsonObject->GetValue(pOverridesKey, pOverridesVal);
        if(pOverridesVal != null) {
            pOverrides = new ArrayList();
            
            jsonToValue(pOverrides, pOverridesVal, L"IList", L"String");
        }
        delete pOverridesKey;
JsonString* pSkip_invoiceKey = new JsonString(L"skip_invoice");
        IJsonValue* pSkip_invoiceVal = null;
        pJsonObject->GetValue(pSkip_invoiceKey, pSkip_invoiceVal);
        if(pSkip_invoiceVal != null) {
            
            pSkip_invoice = new Boolean(false);
            jsonToValue(pSkip_invoice, pSkip_invoiceVal, L"Boolean", L"Boolean");
        }
        delete pSkip_invoiceKey;
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

SamiUserInventoryAddRequest::SamiUserInventoryAddRequest(String* json) {
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
SamiUserInventoryAddRequest::asJson ()
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
SamiUserInventoryAddRequest::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pNoteKey = new JsonString(L"note");
    pJsonObject->Add(pNoteKey, toJson(getPNote(), "String", ""));

    JsonString *pOverridesKey = new JsonString(L"overrides");
    pJsonObject->Add(pOverridesKey, toJson(getPOverrides(), "String", "array"));

    JsonString *pSkip_invoiceKey = new JsonString(L"skip_invoice");
    pJsonObject->Add(pSkip_invoiceKey, toJson(getPSkipInvoice(), "Boolean", ""));

    JsonString *pSkuKey = new JsonString(L"sku");
    pJsonObject->Add(pSkuKey, toJson(getPSku(), "String", ""));

    return pJsonObject;
}

String*
SamiUserInventoryAddRequest::getPNote() {
    return pNote;
}
void
SamiUserInventoryAddRequest::setPNote(String* pNote) {
    this->pNote = pNote;
}

IList*
SamiUserInventoryAddRequest::getPOverrides() {
    return pOverrides;
}
void
SamiUserInventoryAddRequest::setPOverrides(IList* pOverrides) {
    this->pOverrides = pOverrides;
}

Boolean*
SamiUserInventoryAddRequest::getPSkipInvoice() {
    return pSkip_invoice;
}
void
SamiUserInventoryAddRequest::setPSkipInvoice(Boolean* pSkip_invoice) {
    this->pSkip_invoice = pSkip_invoice;
}

String*
SamiUserInventoryAddRequest::getPSku() {
    return pSku;
}
void
SamiUserInventoryAddRequest::setPSku(String* pSku) {
    this->pSku = pSku;
}



} /* namespace Swagger */

