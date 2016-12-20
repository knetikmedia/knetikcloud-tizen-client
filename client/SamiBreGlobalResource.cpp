
#include "SamiBreGlobalResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiBreGlobalResource::SamiBreGlobalResource() {
    init();
}

SamiBreGlobalResource::~SamiBreGlobalResource() {
    this->cleanup();
}

void
SamiBreGlobalResource::init() {
    pDescription = null;
pId = null;
pKey = null;
pName = null;
pScopes = null;
pSystem_global = null;
pType = null;
}

void
SamiBreGlobalResource::cleanup() {
    if(pDescription != null) {
        
        delete pDescription;
        pDescription = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pKey != null) {
        
        delete pKey;
        pKey = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pScopes != null) {
        pScopes->RemoveAll(true);
        delete pScopes;
        pScopes = null;
    }
if(pSystem_global != null) {
        
        delete pSystem_global;
        pSystem_global = null;
    }
if(pType != null) {
        
        delete pType;
        pType = null;
    }
}


SamiBreGlobalResource*
SamiBreGlobalResource::fromJson(String* json) {
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
SamiBreGlobalResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pDescriptionKey = new JsonString(L"description");
        IJsonValue* pDescriptionVal = null;
        pJsonObject->GetValue(pDescriptionKey, pDescriptionVal);
        if(pDescriptionVal != null) {
            
            pDescription = new String();
            jsonToValue(pDescription, pDescriptionVal, L"String", L"String");
        }
        delete pDescriptionKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new String();
            jsonToValue(pId, pIdVal, L"String", L"String");
        }
        delete pIdKey;
JsonString* pKeyKey = new JsonString(L"key");
        IJsonValue* pKeyVal = null;
        pJsonObject->GetValue(pKeyKey, pKeyVal);
        if(pKeyVal != null) {
            
            pKey = new String();
            jsonToValue(pKey, pKeyVal, L"String", L"String");
        }
        delete pKeyKey;
JsonString* pNameKey = new JsonString(L"name");
        IJsonValue* pNameVal = null;
        pJsonObject->GetValue(pNameKey, pNameVal);
        if(pNameVal != null) {
            
            pName = new String();
            jsonToValue(pName, pNameVal, L"String", L"String");
        }
        delete pNameKey;
JsonString* pScopesKey = new JsonString(L"scopes");
        IJsonValue* pScopesVal = null;
        pJsonObject->GetValue(pScopesKey, pScopesVal);
        if(pScopesVal != null) {
            pScopes = new ArrayList();
            
            jsonToValue(pScopes, pScopesVal, L"IList", L"SamiBreGlobalScopeDefinition");
        }
        delete pScopesKey;
JsonString* pSystem_globalKey = new JsonString(L"system_global");
        IJsonValue* pSystem_globalVal = null;
        pJsonObject->GetValue(pSystem_globalKey, pSystem_globalVal);
        if(pSystem_globalVal != null) {
            
            pSystem_global = new Boolean(false);
            jsonToValue(pSystem_global, pSystem_globalVal, L"Boolean", L"Boolean");
        }
        delete pSystem_globalKey;
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

SamiBreGlobalResource::SamiBreGlobalResource(String* json) {
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
SamiBreGlobalResource::asJson ()
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
SamiBreGlobalResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pDescriptionKey = new JsonString(L"description");
    pJsonObject->Add(pDescriptionKey, toJson(getPDescription(), "String", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "String", ""));

    JsonString *pKeyKey = new JsonString(L"key");
    pJsonObject->Add(pKeyKey, toJson(getPKey(), "String", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pScopesKey = new JsonString(L"scopes");
    pJsonObject->Add(pScopesKey, toJson(getPScopes(), "SamiBreGlobalScopeDefinition", "array"));

    JsonString *pSystem_globalKey = new JsonString(L"system_global");
    pJsonObject->Add(pSystem_globalKey, toJson(getPSystemGlobal(), "Boolean", ""));

    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    return pJsonObject;
}

String*
SamiBreGlobalResource::getPDescription() {
    return pDescription;
}
void
SamiBreGlobalResource::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

String*
SamiBreGlobalResource::getPId() {
    return pId;
}
void
SamiBreGlobalResource::setPId(String* pId) {
    this->pId = pId;
}

String*
SamiBreGlobalResource::getPKey() {
    return pKey;
}
void
SamiBreGlobalResource::setPKey(String* pKey) {
    this->pKey = pKey;
}

String*
SamiBreGlobalResource::getPName() {
    return pName;
}
void
SamiBreGlobalResource::setPName(String* pName) {
    this->pName = pName;
}

IList*
SamiBreGlobalResource::getPScopes() {
    return pScopes;
}
void
SamiBreGlobalResource::setPScopes(IList* pScopes) {
    this->pScopes = pScopes;
}

Boolean*
SamiBreGlobalResource::getPSystemGlobal() {
    return pSystem_global;
}
void
SamiBreGlobalResource::setPSystemGlobal(Boolean* pSystem_global) {
    this->pSystem_global = pSystem_global;
}

String*
SamiBreGlobalResource::getPType() {
    return pType;
}
void
SamiBreGlobalResource::setPType(String* pType) {
    this->pType = pType;
}



} /* namespace Swagger */

