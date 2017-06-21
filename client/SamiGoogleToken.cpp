
#include "SamiGoogleToken.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiGoogleToken::SamiGoogleToken() {
    init();
}

SamiGoogleToken::~SamiGoogleToken() {
    this->cleanup();
}

void
SamiGoogleToken::init() {
    pAuthorization_code = null;
}

void
SamiGoogleToken::cleanup() {
    if(pAuthorization_code != null) {
        
        delete pAuthorization_code;
        pAuthorization_code = null;
    }
}


SamiGoogleToken*
SamiGoogleToken::fromJson(String* json) {
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
SamiGoogleToken::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pAuthorization_codeKey = new JsonString(L"authorization_code");
        IJsonValue* pAuthorization_codeVal = null;
        pJsonObject->GetValue(pAuthorization_codeKey, pAuthorization_codeVal);
        if(pAuthorization_codeVal != null) {
            
            pAuthorization_code = new String();
            jsonToValue(pAuthorization_code, pAuthorization_codeVal, L"String", L"String");
        }
        delete pAuthorization_codeKey;
    }
}

SamiGoogleToken::SamiGoogleToken(String* json) {
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
SamiGoogleToken::asJson ()
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
SamiGoogleToken::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAuthorization_codeKey = new JsonString(L"authorization_code");
    pJsonObject->Add(pAuthorization_codeKey, toJson(getPAuthorizationCode(), "String", ""));

    return pJsonObject;
}

String*
SamiGoogleToken::getPAuthorizationCode() {
    return pAuthorization_code;
}
void
SamiGoogleToken::setPAuthorizationCode(String* pAuthorization_code) {
    this->pAuthorization_code = pAuthorization_code;
}



} /* namespace Swagger */

