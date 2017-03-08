
#include "SamiUserRelationshipReferenceResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUserRelationshipReferenceResource::SamiUserRelationshipReferenceResource() {
    init();
}

SamiUserRelationshipReferenceResource::~SamiUserRelationshipReferenceResource() {
    this->cleanup();
}

void
SamiUserRelationshipReferenceResource::init() {
    pAvatar_url = null;
pContext = null;
pDisplay_name = null;
pId = null;
pRelationship_id = null;
pUsername = null;
}

void
SamiUserRelationshipReferenceResource::cleanup() {
    if(pAvatar_url != null) {
        
        delete pAvatar_url;
        pAvatar_url = null;
    }
if(pContext != null) {
        
        delete pContext;
        pContext = null;
    }
if(pDisplay_name != null) {
        
        delete pDisplay_name;
        pDisplay_name = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pRelationship_id != null) {
        
        delete pRelationship_id;
        pRelationship_id = null;
    }
if(pUsername != null) {
        
        delete pUsername;
        pUsername = null;
    }
}


SamiUserRelationshipReferenceResource*
SamiUserRelationshipReferenceResource::fromJson(String* json) {
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
SamiUserRelationshipReferenceResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pAvatar_urlKey = new JsonString(L"avatar_url");
        IJsonValue* pAvatar_urlVal = null;
        pJsonObject->GetValue(pAvatar_urlKey, pAvatar_urlVal);
        if(pAvatar_urlVal != null) {
            
            pAvatar_url = new String();
            jsonToValue(pAvatar_url, pAvatar_urlVal, L"String", L"String");
        }
        delete pAvatar_urlKey;
JsonString* pContextKey = new JsonString(L"context");
        IJsonValue* pContextVal = null;
        pJsonObject->GetValue(pContextKey, pContextVal);
        if(pContextVal != null) {
            
            pContext = new String();
            jsonToValue(pContext, pContextVal, L"String", L"String");
        }
        delete pContextKey;
JsonString* pDisplay_nameKey = new JsonString(L"display_name");
        IJsonValue* pDisplay_nameVal = null;
        pJsonObject->GetValue(pDisplay_nameKey, pDisplay_nameVal);
        if(pDisplay_nameVal != null) {
            
            pDisplay_name = new String();
            jsonToValue(pDisplay_name, pDisplay_nameVal, L"String", L"String");
        }
        delete pDisplay_nameKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
JsonString* pRelationship_idKey = new JsonString(L"relationship_id");
        IJsonValue* pRelationship_idVal = null;
        pJsonObject->GetValue(pRelationship_idKey, pRelationship_idVal);
        if(pRelationship_idVal != null) {
            
            pRelationship_id = new Long();
            jsonToValue(pRelationship_id, pRelationship_idVal, L"Long", L"Long");
        }
        delete pRelationship_idKey;
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

SamiUserRelationshipReferenceResource::SamiUserRelationshipReferenceResource(String* json) {
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
SamiUserRelationshipReferenceResource::asJson ()
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
SamiUserRelationshipReferenceResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAvatar_urlKey = new JsonString(L"avatar_url");
    pJsonObject->Add(pAvatar_urlKey, toJson(getPAvatarUrl(), "String", ""));

    JsonString *pContextKey = new JsonString(L"context");
    pJsonObject->Add(pContextKey, toJson(getPContext(), "String", ""));

    JsonString *pDisplay_nameKey = new JsonString(L"display_name");
    pJsonObject->Add(pDisplay_nameKey, toJson(getPDisplayName(), "String", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pRelationship_idKey = new JsonString(L"relationship_id");
    pJsonObject->Add(pRelationship_idKey, toJson(getPRelationshipId(), "Long", ""));

    JsonString *pUsernameKey = new JsonString(L"username");
    pJsonObject->Add(pUsernameKey, toJson(getPUsername(), "String", ""));

    return pJsonObject;
}

String*
SamiUserRelationshipReferenceResource::getPAvatarUrl() {
    return pAvatar_url;
}
void
SamiUserRelationshipReferenceResource::setPAvatarUrl(String* pAvatar_url) {
    this->pAvatar_url = pAvatar_url;
}

String*
SamiUserRelationshipReferenceResource::getPContext() {
    return pContext;
}
void
SamiUserRelationshipReferenceResource::setPContext(String* pContext) {
    this->pContext = pContext;
}

String*
SamiUserRelationshipReferenceResource::getPDisplayName() {
    return pDisplay_name;
}
void
SamiUserRelationshipReferenceResource::setPDisplayName(String* pDisplay_name) {
    this->pDisplay_name = pDisplay_name;
}

Integer*
SamiUserRelationshipReferenceResource::getPId() {
    return pId;
}
void
SamiUserRelationshipReferenceResource::setPId(Integer* pId) {
    this->pId = pId;
}

Long*
SamiUserRelationshipReferenceResource::getPRelationshipId() {
    return pRelationship_id;
}
void
SamiUserRelationshipReferenceResource::setPRelationshipId(Long* pRelationship_id) {
    this->pRelationship_id = pRelationship_id;
}

String*
SamiUserRelationshipReferenceResource::getPUsername() {
    return pUsername;
}
void
SamiUserRelationshipReferenceResource::setPUsername(String* pUsername) {
    this->pUsername = pUsername;
}



} /* namespace Swagger */

