
#include "SamiCreateBillingAgreementRequest.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCreateBillingAgreementRequest::SamiCreateBillingAgreementRequest() {
    init();
}

SamiCreateBillingAgreementRequest::~SamiCreateBillingAgreementRequest() {
    this->cleanup();
}

void
SamiCreateBillingAgreementRequest::init() {
    pCancel_url = null;
pReturn_url = null;
pUser_id = null;
}

void
SamiCreateBillingAgreementRequest::cleanup() {
    if(pCancel_url != null) {
        
        delete pCancel_url;
        pCancel_url = null;
    }
if(pReturn_url != null) {
        
        delete pReturn_url;
        pReturn_url = null;
    }
if(pUser_id != null) {
        
        delete pUser_id;
        pUser_id = null;
    }
}


SamiCreateBillingAgreementRequest*
SamiCreateBillingAgreementRequest::fromJson(String* json) {
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
SamiCreateBillingAgreementRequest::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCancel_urlKey = new JsonString(L"cancel_url");
        IJsonValue* pCancel_urlVal = null;
        pJsonObject->GetValue(pCancel_urlKey, pCancel_urlVal);
        if(pCancel_urlVal != null) {
            
            pCancel_url = new String();
            jsonToValue(pCancel_url, pCancel_urlVal, L"String", L"String");
        }
        delete pCancel_urlKey;
JsonString* pReturn_urlKey = new JsonString(L"return_url");
        IJsonValue* pReturn_urlVal = null;
        pJsonObject->GetValue(pReturn_urlKey, pReturn_urlVal);
        if(pReturn_urlVal != null) {
            
            pReturn_url = new String();
            jsonToValue(pReturn_url, pReturn_urlVal, L"String", L"String");
        }
        delete pReturn_urlKey;
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

SamiCreateBillingAgreementRequest::SamiCreateBillingAgreementRequest(String* json) {
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
SamiCreateBillingAgreementRequest::asJson ()
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
SamiCreateBillingAgreementRequest::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCancel_urlKey = new JsonString(L"cancel_url");
    pJsonObject->Add(pCancel_urlKey, toJson(getPCancelUrl(), "String", ""));

    JsonString *pReturn_urlKey = new JsonString(L"return_url");
    pJsonObject->Add(pReturn_urlKey, toJson(getPReturnUrl(), "String", ""));

    JsonString *pUser_idKey = new JsonString(L"user_id");
    pJsonObject->Add(pUser_idKey, toJson(getPUserId(), "Integer", ""));

    return pJsonObject;
}

String*
SamiCreateBillingAgreementRequest::getPCancelUrl() {
    return pCancel_url;
}
void
SamiCreateBillingAgreementRequest::setPCancelUrl(String* pCancel_url) {
    this->pCancel_url = pCancel_url;
}

String*
SamiCreateBillingAgreementRequest::getPReturnUrl() {
    return pReturn_url;
}
void
SamiCreateBillingAgreementRequest::setPReturnUrl(String* pReturn_url) {
    this->pReturn_url = pReturn_url;
}

Integer*
SamiCreateBillingAgreementRequest::getPUserId() {
    return pUser_id;
}
void
SamiCreateBillingAgreementRequest::setPUserId(Integer* pUser_id) {
    this->pUser_id = pUser_id;
}



} /* namespace Swagger */

