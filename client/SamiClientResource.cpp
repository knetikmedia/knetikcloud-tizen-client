
#include "SamiClientResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiClientResource::SamiClientResource() {
    init();
}

SamiClientResource::~SamiClientResource() {
    this->cleanup();
}

void
SamiClientResource::init() {
    pAccess_token_validity_seconds = null;
pClient_key = null;
pGrant_types = null;
pId = null;
pIs_public = null;
pLocked = null;
pName = null;
pRedirect_uris = null;
pRefresh_token_validity_seconds = null;
pSecret = null;
}

void
SamiClientResource::cleanup() {
    if(pAccess_token_validity_seconds != null) {
        
        delete pAccess_token_validity_seconds;
        pAccess_token_validity_seconds = null;
    }
if(pClient_key != null) {
        
        delete pClient_key;
        pClient_key = null;
    }
if(pGrant_types != null) {
        pGrant_types->RemoveAll(true);
        delete pGrant_types;
        pGrant_types = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pIs_public != null) {
        
        delete pIs_public;
        pIs_public = null;
    }
if(pLocked != null) {
        
        delete pLocked;
        pLocked = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pRedirect_uris != null) {
        pRedirect_uris->RemoveAll(true);
        delete pRedirect_uris;
        pRedirect_uris = null;
    }
if(pRefresh_token_validity_seconds != null) {
        
        delete pRefresh_token_validity_seconds;
        pRefresh_token_validity_seconds = null;
    }
if(pSecret != null) {
        
        delete pSecret;
        pSecret = null;
    }
}


SamiClientResource*
SamiClientResource::fromJson(String* json) {
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
SamiClientResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pAccess_token_validity_secondsKey = new JsonString(L"access_token_validity_seconds");
        IJsonValue* pAccess_token_validity_secondsVal = null;
        pJsonObject->GetValue(pAccess_token_validity_secondsKey, pAccess_token_validity_secondsVal);
        if(pAccess_token_validity_secondsVal != null) {
            
            pAccess_token_validity_seconds = new Integer();
            jsonToValue(pAccess_token_validity_seconds, pAccess_token_validity_secondsVal, L"Integer", L"Integer");
        }
        delete pAccess_token_validity_secondsKey;
JsonString* pClient_keyKey = new JsonString(L"client_key");
        IJsonValue* pClient_keyVal = null;
        pJsonObject->GetValue(pClient_keyKey, pClient_keyVal);
        if(pClient_keyVal != null) {
            
            pClient_key = new String();
            jsonToValue(pClient_key, pClient_keyVal, L"String", L"String");
        }
        delete pClient_keyKey;
JsonString* pGrant_typesKey = new JsonString(L"grant_types");
        IJsonValue* pGrant_typesVal = null;
        pJsonObject->GetValue(pGrant_typesKey, pGrant_typesVal);
        if(pGrant_typesVal != null) {
            pGrant_types = new ArrayList();
            
            jsonToValue(pGrant_types, pGrant_typesVal, L"IList", L"String");
        }
        delete pGrant_typesKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
JsonString* pIs_publicKey = new JsonString(L"is_public");
        IJsonValue* pIs_publicVal = null;
        pJsonObject->GetValue(pIs_publicKey, pIs_publicVal);
        if(pIs_publicVal != null) {
            
            pIs_public = new Boolean(false);
            jsonToValue(pIs_public, pIs_publicVal, L"Boolean", L"Boolean");
        }
        delete pIs_publicKey;
JsonString* pLockedKey = new JsonString(L"locked");
        IJsonValue* pLockedVal = null;
        pJsonObject->GetValue(pLockedKey, pLockedVal);
        if(pLockedVal != null) {
            
            pLocked = new Boolean(false);
            jsonToValue(pLocked, pLockedVal, L"Boolean", L"Boolean");
        }
        delete pLockedKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pRedirect_urisKey = new JsonString(L"redirect_uris");
        IJsonValue* pRedirect_urisVal = null;
        pJsonObject->GetValue(pRedirect_urisKey, pRedirect_urisVal);
        if(pRedirect_urisVal != null) {
            pRedirect_uris = new ArrayList();
            
            jsonToValue(pRedirect_uris, pRedirect_urisVal, L"IList", L"String");
        }
        delete pRedirect_urisKey;
JsonString* pRefresh_token_validity_secondsKey = new JsonString(L"refresh_token_validity_seconds");
        IJsonValue* pRefresh_token_validity_secondsVal = null;
        pJsonObject->GetValue(pRefresh_token_validity_secondsKey, pRefresh_token_validity_secondsVal);
        if(pRefresh_token_validity_secondsVal != null) {
            
            pRefresh_token_validity_seconds = new Integer();
            jsonToValue(pRefresh_token_validity_seconds, pRefresh_token_validity_secondsVal, L"Integer", L"Integer");
        }
        delete pRefresh_token_validity_secondsKey;
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

SamiClientResource::SamiClientResource(String* json) {
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
SamiClientResource::asJson ()
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
SamiClientResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAccess_token_validity_secondsKey = new JsonString(L"access_token_validity_seconds");
    pJsonObject->Add(pAccess_token_validity_secondsKey, toJson(getPAccessTokenValiditySeconds(), "Integer", ""));

    JsonString *pClient_keyKey = new JsonString(L"client_key");
    pJsonObject->Add(pClient_keyKey, toJson(getPClientKey(), "String", ""));

    JsonString *pGrant_typesKey = new JsonString(L"grant_types");
    pJsonObject->Add(pGrant_typesKey, toJson(getPGrantTypes(), "String", "array"));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pIs_publicKey = new JsonString(L"is_public");
    pJsonObject->Add(pIs_publicKey, toJson(getPIsPublic(), "Boolean", ""));

    JsonString *pLockedKey = new JsonString(L"locked");
    pJsonObject->Add(pLockedKey, toJson(getPLocked(), "Boolean", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pRedirect_urisKey = new JsonString(L"redirect_uris");
    pJsonObject->Add(pRedirect_urisKey, toJson(getPRedirectUris(), "String", "array"));

    JsonString *pRefresh_token_validity_secondsKey = new JsonString(L"refresh_token_validity_seconds");
    pJsonObject->Add(pRefresh_token_validity_secondsKey, toJson(getPRefreshTokenValiditySeconds(), "Integer", ""));

    JsonString *pSecretKey = new JsonString(L"secret");
    pJsonObject->Add(pSecretKey, toJson(getPSecret(), "String", ""));

    return pJsonObject;
}

Integer*
SamiClientResource::getPAccessTokenValiditySeconds() {
    return pAccess_token_validity_seconds;
}
void
SamiClientResource::setPAccessTokenValiditySeconds(Integer* pAccess_token_validity_seconds) {
    this->pAccess_token_validity_seconds = pAccess_token_validity_seconds;
}

String*
SamiClientResource::getPClientKey() {
    return pClient_key;
}
void
SamiClientResource::setPClientKey(String* pClient_key) {
    this->pClient_key = pClient_key;
}

IList*
SamiClientResource::getPGrantTypes() {
    return pGrant_types;
}
void
SamiClientResource::setPGrantTypes(IList* pGrant_types) {
    this->pGrant_types = pGrant_types;
}

Integer*
SamiClientResource::getPId() {
    return pId;
}
void
SamiClientResource::setPId(Integer* pId) {
    this->pId = pId;
}

Boolean*
SamiClientResource::getPIsPublic() {
    return pIs_public;
}
void
SamiClientResource::setPIsPublic(Boolean* pIs_public) {
    this->pIs_public = pIs_public;
}

Boolean*
SamiClientResource::getPLocked() {
    return pLocked;
}
void
SamiClientResource::setPLocked(Boolean* pLocked) {
    this->pLocked = pLocked;
}

String*
SamiClientResource::getPName() {
    return pName;
}
void
SamiClientResource::setPName(String* pName) {
    this->pName = pName;
}

IList*
SamiClientResource::getPRedirectUris() {
    return pRedirect_uris;
}
void
SamiClientResource::setPRedirectUris(IList* pRedirect_uris) {
    this->pRedirect_uris = pRedirect_uris;
}

Integer*
SamiClientResource::getPRefreshTokenValiditySeconds() {
    return pRefresh_token_validity_seconds;
}
void
SamiClientResource::setPRefreshTokenValiditySeconds(Integer* pRefresh_token_validity_seconds) {
    this->pRefresh_token_validity_seconds = pRefresh_token_validity_seconds;
}

String*
SamiClientResource::getPSecret() {
    return pSecret;
}
void
SamiClientResource::setPSecret(String* pSecret) {
    this->pSecret = pSecret;
}



} /* namespace Swagger */

