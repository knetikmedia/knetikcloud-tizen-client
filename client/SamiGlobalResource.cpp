
#include "SamiGlobalResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiGlobalResource::SamiGlobalResource() {
    init();
}

SamiGlobalResource::~SamiGlobalResource() {
    this->cleanup();
}

void
SamiGlobalResource::init() {
    pGlobal_def_id = null;
pScopes = null;
pType = null;
}

void
SamiGlobalResource::cleanup() {
    if(pGlobal_def_id != null) {
        
        delete pGlobal_def_id;
        pGlobal_def_id = null;
    }
if(pScopes != null) {
        pScopes->RemoveAll(true);
        delete pScopes;
        pScopes = null;
    }
if(pType != null) {
        
        delete pType;
        pType = null;
    }
}


SamiGlobalResource*
SamiGlobalResource::fromJson(String* json) {
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
SamiGlobalResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pGlobal_def_idKey = new JsonString(L"global_def_id");
        IJsonValue* pGlobal_def_idVal = null;
        pJsonObject->GetValue(pGlobal_def_idKey, pGlobal_def_idVal);
        if(pGlobal_def_idVal != null) {
            
            pGlobal_def_id = new String();
            jsonToValue(pGlobal_def_id, pGlobal_def_idVal, L"String", L"String");
        }
        delete pGlobal_def_idKey;
JsonString* pScopesKey = new JsonString(L"scopes");
        IJsonValue* pScopesVal = null;
        pJsonObject->GetValue(pScopesKey, pScopesVal);
        if(pScopesVal != null) {
            pScopes = new HashMap();
            
            jsonToValue(pScopes, pScopesVal, L"HashMap", L"SamiExpressionResource");
        }
        delete pScopesKey;
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

SamiGlobalResource::SamiGlobalResource(String* json) {
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
SamiGlobalResource::asJson ()
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
SamiGlobalResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pGlobal_def_idKey = new JsonString(L"global_def_id");
    pJsonObject->Add(pGlobal_def_idKey, toJson(getPGlobalDefId(), "String", ""));

    JsonString *pScopesKey = new JsonString(L"scopes");
    pJsonObject->Add(pScopesKey, toJson(getPScopes(), "SamiExpressionResource", "map"));

    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    return pJsonObject;
}

String*
SamiGlobalResource::getPGlobalDefId() {
    return pGlobal_def_id;
}
void
SamiGlobalResource::setPGlobalDefId(String* pGlobal_def_id) {
    this->pGlobal_def_id = pGlobal_def_id;
}

HashMap*
SamiGlobalResource::getPScopes() {
    return pScopes;
}
void
SamiGlobalResource::setPScopes(HashMap* pScopes) {
    this->pScopes = pScopes;
}

String*
SamiGlobalResource::getPType() {
    return pType;
}
void
SamiGlobalResource::setPType(String* pType) {
    this->pType = pType;
}



} /* namespace Swagger */

