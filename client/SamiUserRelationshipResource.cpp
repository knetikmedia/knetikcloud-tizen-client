
#include "SamiUserRelationshipResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUserRelationshipResource::SamiUserRelationshipResource() {
    init();
}

SamiUserRelationshipResource::~SamiUserRelationshipResource() {
    this->cleanup();
}

void
SamiUserRelationshipResource::init() {
    pChild = null;
pContext = null;
pId = null;
pParent = null;
}

void
SamiUserRelationshipResource::cleanup() {
    if(pChild != null) {
        
        delete pChild;
        pChild = null;
    }
if(pContext != null) {
        
        delete pContext;
        pContext = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pParent != null) {
        
        delete pParent;
        pParent = null;
    }
}


SamiUserRelationshipResource*
SamiUserRelationshipResource::fromJson(String* json) {
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
SamiUserRelationshipResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pChildKey = new JsonString(L"child");
        IJsonValue* pChildVal = null;
        pJsonObject->GetValue(pChildKey, pChildVal);
        if(pChildVal != null) {
            
            pChild = new SamiSimpleUserResource();
            jsonToValue(pChild, pChildVal, L"SamiSimpleUserResource", L"SamiSimpleUserResource");
        }
        delete pChildKey;
JsonString* pContextKey = new JsonString(L"context");
        IJsonValue* pContextVal = null;
        pJsonObject->GetValue(pContextKey, pContextVal);
        if(pContextVal != null) {
            
            pContext = new String();
            jsonToValue(pContext, pContextVal, L"String", L"String");
        }
        delete pContextKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Long();
            jsonToValue(pId, pIdVal, L"Long", L"Long");
        }
        delete pIdKey;
JsonString* pParentKey = new JsonString(L"parent");
        IJsonValue* pParentVal = null;
        pJsonObject->GetValue(pParentKey, pParentVal);
        if(pParentVal != null) {
            
            pParent = new SamiSimpleUserResource();
            jsonToValue(pParent, pParentVal, L"SamiSimpleUserResource", L"SamiSimpleUserResource");
        }
        delete pParentKey;
    }
}

SamiUserRelationshipResource::SamiUserRelationshipResource(String* json) {
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
SamiUserRelationshipResource::asJson ()
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
SamiUserRelationshipResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pChildKey = new JsonString(L"child");
    pJsonObject->Add(pChildKey, toJson(getPChild(), "SamiSimpleUserResource", ""));

    JsonString *pContextKey = new JsonString(L"context");
    pJsonObject->Add(pContextKey, toJson(getPContext(), "String", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Long", ""));

    JsonString *pParentKey = new JsonString(L"parent");
    pJsonObject->Add(pParentKey, toJson(getPParent(), "SamiSimpleUserResource", ""));

    return pJsonObject;
}

SamiSimpleUserResource*
SamiUserRelationshipResource::getPChild() {
    return pChild;
}
void
SamiUserRelationshipResource::setPChild(SamiSimpleUserResource* pChild) {
    this->pChild = pChild;
}

String*
SamiUserRelationshipResource::getPContext() {
    return pContext;
}
void
SamiUserRelationshipResource::setPContext(String* pContext) {
    this->pContext = pContext;
}

Long*
SamiUserRelationshipResource::getPId() {
    return pId;
}
void
SamiUserRelationshipResource::setPId(Long* pId) {
    this->pId = pId;
}

SamiSimpleUserResource*
SamiUserRelationshipResource::getPParent() {
    return pParent;
}
void
SamiUserRelationshipResource::setPParent(SamiSimpleUserResource* pParent) {
    this->pParent = pParent;
}



} /* namespace Swagger */

