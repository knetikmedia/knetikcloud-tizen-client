
#include "SamiFinalizePayPalPaymentRequest.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiFinalizePayPalPaymentRequest::SamiFinalizePayPalPaymentRequest() {
    init();
}

SamiFinalizePayPalPaymentRequest::~SamiFinalizePayPalPaymentRequest() {
    this->cleanup();
}

void
SamiFinalizePayPalPaymentRequest::init() {
    pInvoice_id = null;
pPayer_id = null;
pToken = null;
}

void
SamiFinalizePayPalPaymentRequest::cleanup() {
    if(pInvoice_id != null) {
        
        delete pInvoice_id;
        pInvoice_id = null;
    }
if(pPayer_id != null) {
        
        delete pPayer_id;
        pPayer_id = null;
    }
if(pToken != null) {
        
        delete pToken;
        pToken = null;
    }
}


SamiFinalizePayPalPaymentRequest*
SamiFinalizePayPalPaymentRequest::fromJson(String* json) {
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
SamiFinalizePayPalPaymentRequest::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pInvoice_idKey = new JsonString(L"invoice_id");
        IJsonValue* pInvoice_idVal = null;
        pJsonObject->GetValue(pInvoice_idKey, pInvoice_idVal);
        if(pInvoice_idVal != null) {
            
            pInvoice_id = new Integer();
            jsonToValue(pInvoice_id, pInvoice_idVal, L"Integer", L"Integer");
        }
        delete pInvoice_idKey;
JsonString* pPayer_idKey = new JsonString(L"payer_id");
        IJsonValue* pPayer_idVal = null;
        pJsonObject->GetValue(pPayer_idKey, pPayer_idVal);
        if(pPayer_idVal != null) {
            
            pPayer_id = new String();
            jsonToValue(pPayer_id, pPayer_idVal, L"String", L"String");
        }
        delete pPayer_idKey;
JsonString* pTokenKey = new JsonString(L"token");
        IJsonValue* pTokenVal = null;
        pJsonObject->GetValue(pTokenKey, pTokenVal);
        if(pTokenVal != null) {
            
            pToken = new String();
            jsonToValue(pToken, pTokenVal, L"String", L"String");
        }
        delete pTokenKey;
    }
}

SamiFinalizePayPalPaymentRequest::SamiFinalizePayPalPaymentRequest(String* json) {
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
SamiFinalizePayPalPaymentRequest::asJson ()
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
SamiFinalizePayPalPaymentRequest::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pInvoice_idKey = new JsonString(L"invoice_id");
    pJsonObject->Add(pInvoice_idKey, toJson(getPInvoiceId(), "Integer", ""));

    JsonString *pPayer_idKey = new JsonString(L"payer_id");
    pJsonObject->Add(pPayer_idKey, toJson(getPPayerId(), "String", ""));

    JsonString *pTokenKey = new JsonString(L"token");
    pJsonObject->Add(pTokenKey, toJson(getPToken(), "String", ""));

    return pJsonObject;
}

Integer*
SamiFinalizePayPalPaymentRequest::getPInvoiceId() {
    return pInvoice_id;
}
void
SamiFinalizePayPalPaymentRequest::setPInvoiceId(Integer* pInvoice_id) {
    this->pInvoice_id = pInvoice_id;
}

String*
SamiFinalizePayPalPaymentRequest::getPPayerId() {
    return pPayer_id;
}
void
SamiFinalizePayPalPaymentRequest::setPPayerId(String* pPayer_id) {
    this->pPayer_id = pPayer_id;
}

String*
SamiFinalizePayPalPaymentRequest::getPToken() {
    return pToken;
}
void
SamiFinalizePayPalPaymentRequest::setPToken(String* pToken) {
    this->pToken = pToken;
}



} /* namespace Swagger */

