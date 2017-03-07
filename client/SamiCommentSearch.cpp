
#include "SamiCommentSearch.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiCommentSearch::SamiCommentSearch() {
    init();
}

SamiCommentSearch::~SamiCommentSearch() {
    this->cleanup();
}

void
SamiCommentSearch::init() {
    pContent = null;
pContext = null;
pContext_id = null;
pId = null;
pOwner_id = null;
pOwner_username = null;
}

void
SamiCommentSearch::cleanup() {
    if(pContent != null) {
        
        delete pContent;
        pContent = null;
    }
if(pContext != null) {
        
        delete pContext;
        pContext = null;
    }
if(pContext_id != null) {
        
        delete pContext_id;
        pContext_id = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pOwner_id != null) {
        
        delete pOwner_id;
        pOwner_id = null;
    }
if(pOwner_username != null) {
        
        delete pOwner_username;
        pOwner_username = null;
    }
}


SamiCommentSearch*
SamiCommentSearch::fromJson(String* json) {
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
SamiCommentSearch::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pContentKey = new JsonString(L"content");
        IJsonValue* pContentVal = null;
        pJsonObject->GetValue(pContentKey, pContentVal);
        if(pContentVal != null) {
            
            pContent = new String();
            jsonToValue(pContent, pContentVal, L"String", L"String");
        }
        delete pContentKey;
JsonString* pContextKey = new JsonString(L"context");
        IJsonValue* pContextVal = null;
        pJsonObject->GetValue(pContextKey, pContextVal);
        if(pContextVal != null) {
            
            pContext = new String();
            jsonToValue(pContext, pContextVal, L"String", L"String");
        }
        delete pContextKey;
JsonString* pContext_idKey = new JsonString(L"context_id");
        IJsonValue* pContext_idVal = null;
        pJsonObject->GetValue(pContext_idKey, pContext_idVal);
        if(pContext_idVal != null) {
            
            pContext_id = new Integer();
            jsonToValue(pContext_id, pContext_idVal, L"Integer", L"Integer");
        }
        delete pContext_idKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Long();
            jsonToValue(pId, pIdVal, L"Long", L"Long");
        }
        delete pIdKey;
JsonString* pOwner_idKey = new JsonString(L"owner_id");
        IJsonValue* pOwner_idVal = null;
        pJsonObject->GetValue(pOwner_idKey, pOwner_idVal);
        if(pOwner_idVal != null) {
            
            pOwner_id = new Integer();
            jsonToValue(pOwner_id, pOwner_idVal, L"Integer", L"Integer");
        }
        delete pOwner_idKey;
JsonString* pOwner_usernameKey = new JsonString(L"owner_username");
        IJsonValue* pOwner_usernameVal = null;
        pJsonObject->GetValue(pOwner_usernameKey, pOwner_usernameVal);
        if(pOwner_usernameVal != null) {
            
            pOwner_username = new String();
            jsonToValue(pOwner_username, pOwner_usernameVal, L"String", L"String");
        }
        delete pOwner_usernameKey;
    }
}

SamiCommentSearch::SamiCommentSearch(String* json) {
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
SamiCommentSearch::asJson ()
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
SamiCommentSearch::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pContentKey = new JsonString(L"content");
    pJsonObject->Add(pContentKey, toJson(getPContent(), "String", ""));

    JsonString *pContextKey = new JsonString(L"context");
    pJsonObject->Add(pContextKey, toJson(getPContext(), "String", ""));

    JsonString *pContext_idKey = new JsonString(L"context_id");
    pJsonObject->Add(pContext_idKey, toJson(getPContextId(), "Integer", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Long", ""));

    JsonString *pOwner_idKey = new JsonString(L"owner_id");
    pJsonObject->Add(pOwner_idKey, toJson(getPOwnerId(), "Integer", ""));

    JsonString *pOwner_usernameKey = new JsonString(L"owner_username");
    pJsonObject->Add(pOwner_usernameKey, toJson(getPOwnerUsername(), "String", ""));

    return pJsonObject;
}

String*
SamiCommentSearch::getPContent() {
    return pContent;
}
void
SamiCommentSearch::setPContent(String* pContent) {
    this->pContent = pContent;
}

String*
SamiCommentSearch::getPContext() {
    return pContext;
}
void
SamiCommentSearch::setPContext(String* pContext) {
    this->pContext = pContext;
}

Integer*
SamiCommentSearch::getPContextId() {
    return pContext_id;
}
void
SamiCommentSearch::setPContextId(Integer* pContext_id) {
    this->pContext_id = pContext_id;
}

Long*
SamiCommentSearch::getPId() {
    return pId;
}
void
SamiCommentSearch::setPId(Long* pId) {
    this->pId = pId;
}

Integer*
SamiCommentSearch::getPOwnerId() {
    return pOwner_id;
}
void
SamiCommentSearch::setPOwnerId(Integer* pOwner_id) {
    this->pOwner_id = pOwner_id;
}

String*
SamiCommentSearch::getPOwnerUsername() {
    return pOwner_username;
}
void
SamiCommentSearch::setPOwnerUsername(String* pOwner_username) {
    this->pOwner_username = pOwner_username;
}



} /* namespace Swagger */

