
#include "SamiUserRelationship.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUserRelationship::SamiUserRelationship() {
    init();
}

SamiUserRelationship::~SamiUserRelationship() {
    this->cleanup();
}

void
SamiUserRelationship::init() {
    pChild = null;
pContext = null;
pId = null;
pParent = null;
}

void
SamiUserRelationship::cleanup() {
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


SamiUserRelationship*
SamiUserRelationship::fromJson(String* json) {
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
SamiUserRelationship::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pChildKey = new JsonString(L"child");
        IJsonValue* pChildVal = null;
        pJsonObject->GetValue(pChildKey, pChildVal);
        if(pChildVal != null) {
            
            pChild = new SamiUser();
            jsonToValue(pChild, pChildVal, L"SamiUser", L"SamiUser");
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
            
            pParent = new SamiUser();
            jsonToValue(pParent, pParentVal, L"SamiUser", L"SamiUser");
        }
        delete pParentKey;
    }
}

SamiUserRelationship::SamiUserRelationship(String* json) {
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
SamiUserRelationship::asJson ()
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
SamiUserRelationship::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pChildKey = new JsonString(L"child");
    pJsonObject->Add(pChildKey, toJson(getPChild(), "SamiUser", ""));

    JsonString *pContextKey = new JsonString(L"context");
    pJsonObject->Add(pContextKey, toJson(getPContext(), "String", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Long", ""));

    JsonString *pParentKey = new JsonString(L"parent");
    pJsonObject->Add(pParentKey, toJson(getPParent(), "SamiUser", ""));

    return pJsonObject;
}

SamiUser*
SamiUserRelationship::getPChild() {
    return pChild;
}
void
SamiUserRelationship::setPChild(SamiUser* pChild) {
    this->pChild = pChild;
}

String*
SamiUserRelationship::getPContext() {
    return pContext;
}
void
SamiUserRelationship::setPContext(String* pContext) {
    this->pContext = pContext;
}

Long*
SamiUserRelationship::getPId() {
    return pId;
}
void
SamiUserRelationship::setPId(Long* pId) {
    this->pId = pId;
}

SamiUser*
SamiUserRelationship::getPParent() {
    return pParent;
}
void
SamiUserRelationship::setPParent(SamiUser* pParent) {
    this->pParent = pParent;
}



} /* namespace Swagger */

