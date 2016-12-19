
#include "SamiNewPasswordRequest.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiNewPasswordRequest::SamiNewPasswordRequest() {
    init();
}

SamiNewPasswordRequest::~SamiNewPasswordRequest() {
    this->cleanup();
}

void
SamiNewPasswordRequest::init() {
    pPassword = null;
pSecret = null;
}

void
SamiNewPasswordRequest::cleanup() {
    if(pPassword != null) {
        
        delete pPassword;
        pPassword = null;
    }
if(pSecret != null) {
        
        delete pSecret;
        pSecret = null;
    }
}


SamiNewPasswordRequest*
SamiNewPasswordRequest::fromJson(String* json) {
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
SamiNewPasswordRequest::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pPasswordKey = new JsonString(L"password");
        IJsonValue* pPasswordVal = null;
        pJsonObject->GetValue(pPasswordKey, pPasswordVal);
        if(pPasswordVal != null) {
            
            pPassword = new String();
            jsonToValue(pPassword, pPasswordVal, L"String", L"String");
        }
        delete pPasswordKey;
JsonString* pSecretKey = new JsonString(L"secret");
        IJsonValue* pSecretVal = null;
        pJsonObject->GetValue(pSecretKey, pSecretVal);
        if(pSecretVal != null) {
            
            pSecret = new String();
            jsonToValue(pSecret, pSecretVal, L"String", L"String");
        }
        delete pSecretKey;
    }
}

SamiNewPasswordRequest::SamiNewPasswordRequest(String* json) {
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
SamiNewPasswordRequest::asJson ()
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
SamiNewPasswordRequest::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pPasswordKey = new JsonString(L"password");
    pJsonObject->Add(pPasswordKey, toJson(getPPassword(), "String", ""));

    JsonString *pSecretKey = new JsonString(L"secret");
    pJsonObject->Add(pSecretKey, toJson(getPSecret(), "String", ""));

    return pJsonObject;
}

String*
SamiNewPasswordRequest::getPPassword() {
    return pPassword;
}
void
SamiNewPasswordRequest::setPPassword(String* pPassword) {
    this->pPassword = pPassword;
}

String*
SamiNewPasswordRequest::getPSecret() {
    return pSecret;
}
void
SamiNewPasswordRequest::setPSecret(String* pSecret) {
    this->pSecret = pSecret;
}



} /* namespace Swagger */

