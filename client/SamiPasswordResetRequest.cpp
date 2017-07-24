
#include "SamiPasswordResetRequest.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiPasswordResetRequest::SamiPasswordResetRequest() {
    init();
}

SamiPasswordResetRequest::~SamiPasswordResetRequest() {
    this->cleanup();
}

void
SamiPasswordResetRequest::init() {
    pEmail = null;
pMobile_number = null;
pUsername = null;
}

void
SamiPasswordResetRequest::cleanup() {
    if(pEmail != null) {
        
        delete pEmail;
        pEmail = null;
    }
if(pMobile_number != null) {
        
        delete pMobile_number;
        pMobile_number = null;
    }
if(pUsername != null) {
        
        delete pUsername;
        pUsername = null;
    }
}


SamiPasswordResetRequest*
SamiPasswordResetRequest::fromJson(String* json) {
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
SamiPasswordResetRequest::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pEmailKey = new JsonString(L"email");
        IJsonValue* pEmailVal = null;
        pJsonObject->GetValue(pEmailKey, pEmailVal);
        if(pEmailVal != null) {
            
            pEmail = new String();
            jsonToValue(pEmail, pEmailVal, L"String", L"String");
        }
        delete pEmailKey;
JsonString* pMobile_numberKey = new JsonString(L"mobile_number");
        IJsonValue* pMobile_numberVal = null;
        pJsonObject->GetValue(pMobile_numberKey, pMobile_numberVal);
        if(pMobile_numberVal != null) {
            
            pMobile_number = new String();
            jsonToValue(pMobile_number, pMobile_numberVal, L"String", L"String");
        }
        delete pMobile_numberKey;
JsonString* pUsernameKey = new JsonString(L"username");
        IJsonValue* pUsernameVal = null;
        pJsonObject->GetValue(pUsernameKey, pUsernameVal);
        if(pUsernameVal != null) {
            
            pUsername = new String();
            jsonToValue(pUsername, pUsernameVal, L"String", L"String");
        }
        delete pUsernameKey;
    }
}

SamiPasswordResetRequest::SamiPasswordResetRequest(String* json) {
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
SamiPasswordResetRequest::asJson ()
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
SamiPasswordResetRequest::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pEmailKey = new JsonString(L"email");
    pJsonObject->Add(pEmailKey, toJson(getPEmail(), "String", ""));

    JsonString *pMobile_numberKey = new JsonString(L"mobile_number");
    pJsonObject->Add(pMobile_numberKey, toJson(getPMobileNumber(), "String", ""));

    JsonString *pUsernameKey = new JsonString(L"username");
    pJsonObject->Add(pUsernameKey, toJson(getPUsername(), "String", ""));

    return pJsonObject;
}

String*
SamiPasswordResetRequest::getPEmail() {
    return pEmail;
}
void
SamiPasswordResetRequest::setPEmail(String* pEmail) {
    this->pEmail = pEmail;
}

String*
SamiPasswordResetRequest::getPMobileNumber() {
    return pMobile_number;
}
void
SamiPasswordResetRequest::setPMobileNumber(String* pMobile_number) {
    this->pMobile_number = pMobile_number;
}

String*
SamiPasswordResetRequest::getPUsername() {
    return pUsername;
}
void
SamiPasswordResetRequest::setPUsername(String* pUsername) {
    this->pUsername = pUsername;
}



} /* namespace Swagger */

