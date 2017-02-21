
#include "SamiOAuth2Resource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiOAuth2Resource::SamiOAuth2Resource() {
    init();
}

SamiOAuth2Resource::~SamiOAuth2Resource() {
    this->cleanup();
}

void
SamiOAuth2Resource::init() {
    pAccess_token = null;
pExpires_in = null;
pScope = null;
pToken_type = null;
}

void
SamiOAuth2Resource::cleanup() {
    if(pAccess_token != null) {
        
        delete pAccess_token;
        pAccess_token = null;
    }
if(pExpires_in != null) {
        
        delete pExpires_in;
        pExpires_in = null;
    }
if(pScope != null) {
        
        delete pScope;
        pScope = null;
    }
if(pToken_type != null) {
        
        delete pToken_type;
        pToken_type = null;
    }
}


SamiOAuth2Resource*
SamiOAuth2Resource::fromJson(String* json) {
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
SamiOAuth2Resource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pAccess_tokenKey = new JsonString(L"access_token");
        IJsonValue* pAccess_tokenVal = null;
        pJsonObject->GetValue(pAccess_tokenKey, pAccess_tokenVal);
        if(pAccess_tokenVal != null) {
            
            pAccess_token = new String();
            jsonToValue(pAccess_token, pAccess_tokenVal, L"String", L"String");
        }
        delete pAccess_tokenKey;
JsonString* pExpires_inKey = new JsonString(L"expires_in");
        IJsonValue* pExpires_inVal = null;
        pJsonObject->GetValue(pExpires_inKey, pExpires_inVal);
        if(pExpires_inVal != null) {
            
            pExpires_in = new String();
            jsonToValue(pExpires_in, pExpires_inVal, L"String", L"String");
        }
        delete pExpires_inKey;
JsonString* pScopeKey = new JsonString(L"scope");
        IJsonValue* pScopeVal = null;
        pJsonObject->GetValue(pScopeKey, pScopeVal);
        if(pScopeVal != null) {
            
            pScope = new String();
            jsonToValue(pScope, pScopeVal, L"String", L"String");
        }
        delete pScopeKey;
JsonString* pToken_typeKey = new JsonString(L"token_type");
        IJsonValue* pToken_typeVal = null;
        pJsonObject->GetValue(pToken_typeKey, pToken_typeVal);
        if(pToken_typeVal != null) {
            
            pToken_type = new String();
            jsonToValue(pToken_type, pToken_typeVal, L"String", L"String");
        }
        delete pToken_typeKey;
    }
}

SamiOAuth2Resource::SamiOAuth2Resource(String* json) {
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
SamiOAuth2Resource::asJson ()
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
SamiOAuth2Resource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAccess_tokenKey = new JsonString(L"access_token");
    pJsonObject->Add(pAccess_tokenKey, toJson(getPAccessToken(), "String", ""));

    JsonString *pExpires_inKey = new JsonString(L"expires_in");
    pJsonObject->Add(pExpires_inKey, toJson(getPExpiresIn(), "String", ""));

    JsonString *pScopeKey = new JsonString(L"scope");
    pJsonObject->Add(pScopeKey, toJson(getPScope(), "String", ""));

    JsonString *pToken_typeKey = new JsonString(L"token_type");
    pJsonObject->Add(pToken_typeKey, toJson(getPTokenType(), "String", ""));

    return pJsonObject;
}

String*
SamiOAuth2Resource::getPAccessToken() {
    return pAccess_token;
}
void
SamiOAuth2Resource::setPAccessToken(String* pAccess_token) {
    this->pAccess_token = pAccess_token;
}

String*
SamiOAuth2Resource::getPExpiresIn() {
    return pExpires_in;
}
void
SamiOAuth2Resource::setPExpiresIn(String* pExpires_in) {
    this->pExpires_in = pExpires_in;
}

String*
SamiOAuth2Resource::getPScope() {
    return pScope;
}
void
SamiOAuth2Resource::setPScope(String* pScope) {
    this->pScope = pScope;
}

String*
SamiOAuth2Resource::getPTokenType() {
    return pToken_type;
}
void
SamiOAuth2Resource::setPTokenType(String* pToken_type) {
    this->pToken_type = pToken_type;
}



} /* namespace Swagger */

