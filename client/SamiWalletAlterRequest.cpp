
#include "SamiWalletAlterRequest.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiWalletAlterRequest::SamiWalletAlterRequest() {
    init();
}

SamiWalletAlterRequest::~SamiWalletAlterRequest() {
    this->cleanup();
}

void
SamiWalletAlterRequest::init() {
    pDelta = null;
pInvoice_id = null;
pReason = null;
pType = null;
}

void
SamiWalletAlterRequest::cleanup() {
    if(pDelta != null) {
        
        delete pDelta;
        pDelta = null;
    }
if(pInvoice_id != null) {
        
        delete pInvoice_id;
        pInvoice_id = null;
    }
if(pReason != null) {
        
        delete pReason;
        pReason = null;
    }
if(pType != null) {
        
        delete pType;
        pType = null;
    }
}


SamiWalletAlterRequest*
SamiWalletAlterRequest::fromJson(String* json) {
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
SamiWalletAlterRequest::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pDeltaKey = new JsonString(L"delta");
        IJsonValue* pDeltaVal = null;
        pJsonObject->GetValue(pDeltaKey, pDeltaVal);
        if(pDeltaVal != null) {
            
            pDelta = new Double();
            jsonToValue(pDelta, pDeltaVal, L"Double", L"Double");
        }
        delete pDeltaKey;
JsonString* pInvoice_idKey = new JsonString(L"invoice_id");
        IJsonValue* pInvoice_idVal = null;
        pJsonObject->GetValue(pInvoice_idKey, pInvoice_idVal);
        if(pInvoice_idVal != null) {
            
            pInvoice_id = new Integer();
            jsonToValue(pInvoice_id, pInvoice_idVal, L"Integer", L"Integer");
        }
        delete pInvoice_idKey;
JsonString* pReasonKey = new JsonString(L"reason");
        IJsonValue* pReasonVal = null;
        pJsonObject->GetValue(pReasonKey, pReasonVal);
        if(pReasonVal != null) {
            
            pReason = new String();
            jsonToValue(pReason, pReasonVal, L"String", L"String");
        }
        delete pReasonKey;
JsonString* pTypeKey = new JsonString(L"type");
        IJsonValue* pTypeVal = null;
        pJsonObject->GetValue(pTypeKey, pTypeVal);
        if(pTypeVal != null) {
            
            pType = new String();
            jsonToValue(pType, pTypeVal, L"String", L"String");
        }
        delete pTypeKey;
    }
}

SamiWalletAlterRequest::SamiWalletAlterRequest(String* json) {
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
SamiWalletAlterRequest::asJson ()
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
SamiWalletAlterRequest::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pDeltaKey = new JsonString(L"delta");
    pJsonObject->Add(pDeltaKey, toJson(getPDelta(), "Double", ""));

    JsonString *pInvoice_idKey = new JsonString(L"invoice_id");
    pJsonObject->Add(pInvoice_idKey, toJson(getPInvoiceId(), "Integer", ""));

    JsonString *pReasonKey = new JsonString(L"reason");
    pJsonObject->Add(pReasonKey, toJson(getPReason(), "String", ""));

    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    return pJsonObject;
}

Double*
SamiWalletAlterRequest::getPDelta() {
    return pDelta;
}
void
SamiWalletAlterRequest::setPDelta(Double* pDelta) {
    this->pDelta = pDelta;
}

Integer*
SamiWalletAlterRequest::getPInvoiceId() {
    return pInvoice_id;
}
void
SamiWalletAlterRequest::setPInvoiceId(Integer* pInvoice_id) {
    this->pInvoice_id = pInvoice_id;
}

String*
SamiWalletAlterRequest::getPReason() {
    return pReason;
}
void
SamiWalletAlterRequest::setPReason(String* pReason) {
    this->pReason = pReason;
}

String*
SamiWalletAlterRequest::getPType() {
    return pType;
}
void
SamiWalletAlterRequest::setPType(String* pType) {
    this->pType = pType;
}



} /* namespace Swagger */

