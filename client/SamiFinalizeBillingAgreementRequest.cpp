
#include "SamiFinalizeBillingAgreementRequest.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiFinalizeBillingAgreementRequest::SamiFinalizeBillingAgreementRequest() {
    init();
}

SamiFinalizeBillingAgreementRequest::~SamiFinalizeBillingAgreementRequest() {
    this->cleanup();
}

void
SamiFinalizeBillingAgreementRequest::init() {
    pInvoice_id = null;
pNew_default = null;
pPayer_id = null;
pToken = null;
pUser_id = null;
}

void
SamiFinalizeBillingAgreementRequest::cleanup() {
    if(pInvoice_id != null) {
        
        delete pInvoice_id;
        pInvoice_id = null;
    }
if(pNew_default != null) {
        
        delete pNew_default;
        pNew_default = null;
    }
if(pPayer_id != null) {
        
        delete pPayer_id;
        pPayer_id = null;
    }
if(pToken != null) {
        
        delete pToken;
        pToken = null;
    }
if(pUser_id != null) {
        
        delete pUser_id;
        pUser_id = null;
    }
}


SamiFinalizeBillingAgreementRequest*
SamiFinalizeBillingAgreementRequest::fromJson(String* json) {
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
SamiFinalizeBillingAgreementRequest::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pNew_defaultKey = new JsonString(L"new_default");
        IJsonValue* pNew_defaultVal = null;
        pJsonObject->GetValue(pNew_defaultKey, pNew_defaultVal);
        if(pNew_defaultVal != null) {
            
            pNew_default = new Boolean(false);
            jsonToValue(pNew_default, pNew_defaultVal, L"Boolean", L"Boolean");
        }
        delete pNew_defaultKey;
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
JsonString* pUser_idKey = new JsonString(L"user_id");
        IJsonValue* pUser_idVal = null;
        pJsonObject->GetValue(pUser_idKey, pUser_idVal);
        if(pUser_idVal != null) {
            
            pUser_id = new Integer();
            jsonToValue(pUser_id, pUser_idVal, L"Integer", L"Integer");
        }
        delete pUser_idKey;
    }
}

SamiFinalizeBillingAgreementRequest::SamiFinalizeBillingAgreementRequest(String* json) {
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
SamiFinalizeBillingAgreementRequest::asJson ()
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
SamiFinalizeBillingAgreementRequest::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pInvoice_idKey = new JsonString(L"invoice_id");
    pJsonObject->Add(pInvoice_idKey, toJson(getPInvoiceId(), "Integer", ""));

    JsonString *pNew_defaultKey = new JsonString(L"new_default");
    pJsonObject->Add(pNew_defaultKey, toJson(getPNewDefault(), "Boolean", ""));

    JsonString *pPayer_idKey = new JsonString(L"payer_id");
    pJsonObject->Add(pPayer_idKey, toJson(getPPayerId(), "String", ""));

    JsonString *pTokenKey = new JsonString(L"token");
    pJsonObject->Add(pTokenKey, toJson(getPToken(), "String", ""));

    JsonString *pUser_idKey = new JsonString(L"user_id");
    pJsonObject->Add(pUser_idKey, toJson(getPUserId(), "Integer", ""));

    return pJsonObject;
}

Integer*
SamiFinalizeBillingAgreementRequest::getPInvoiceId() {
    return pInvoice_id;
}
void
SamiFinalizeBillingAgreementRequest::setPInvoiceId(Integer* pInvoice_id) {
    this->pInvoice_id = pInvoice_id;
}

Boolean*
SamiFinalizeBillingAgreementRequest::getPNewDefault() {
    return pNew_default;
}
void
SamiFinalizeBillingAgreementRequest::setPNewDefault(Boolean* pNew_default) {
    this->pNew_default = pNew_default;
}

String*
SamiFinalizeBillingAgreementRequest::getPPayerId() {
    return pPayer_id;
}
void
SamiFinalizeBillingAgreementRequest::setPPayerId(String* pPayer_id) {
    this->pPayer_id = pPayer_id;
}

String*
SamiFinalizeBillingAgreementRequest::getPToken() {
    return pToken;
}
void
SamiFinalizeBillingAgreementRequest::setPToken(String* pToken) {
    this->pToken = pToken;
}

Integer*
SamiFinalizeBillingAgreementRequest::getPUserId() {
    return pUser_id;
}
void
SamiFinalizeBillingAgreementRequest::setPUserId(Integer* pUser_id) {
    this->pUser_id = pUser_id;
}



} /* namespace Swagger */

