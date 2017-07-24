
#include "SamiUserBaseResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUserBaseResource::SamiUserBaseResource() {
    init();
}

SamiUserBaseResource::~SamiUserBaseResource() {
    this->cleanup();
}

void
SamiUserBaseResource::init() {
    pAvatar_url = null;
pDisplay_name = null;
pEmail = null;
pFullname = null;
pId = null;
pLast_activity = null;
pLast_updated = null;
pMember_since = null;
pUsername = null;
}

void
SamiUserBaseResource::cleanup() {
    if(pAvatar_url != null) {
        
        delete pAvatar_url;
        pAvatar_url = null;
    }
if(pDisplay_name != null) {
        
        delete pDisplay_name;
        pDisplay_name = null;
    }
if(pEmail != null) {
        
        delete pEmail;
        pEmail = null;
    }
if(pFullname != null) {
        
        delete pFullname;
        pFullname = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pLast_activity != null) {
        
        delete pLast_activity;
        pLast_activity = null;
    }
if(pLast_updated != null) {
        
        delete pLast_updated;
        pLast_updated = null;
    }
if(pMember_since != null) {
        
        delete pMember_since;
        pMember_since = null;
    }
if(pUsername != null) {
        
        delete pUsername;
        pUsername = null;
    }
}


SamiUserBaseResource*
SamiUserBaseResource::fromJson(String* json) {
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
SamiUserBaseResource::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pDisplay_nameKey = new JsonString(L"display_name");
        IJsonValue* pDisplay_nameVal = null;
        pJsonObject->GetValue(pDisplay_nameKey, pDisplay_nameVal);
        if(pDisplay_nameVal != null) {
            
            pDisplay_name = new String();
            jsonToValue(pDisplay_name, pDisplay_nameVal, L"String", L"String");
        }
        delete pDisplay_nameKey;
JsonString* pEmailKey = new JsonString(L"email");
        IJsonValue* pEmailVal = null;
        pJsonObject->GetValue(pEmailKey, pEmailVal);
        if(pEmailVal != null) {
            
            pEmail = new String();
            jsonToValue(pEmail, pEmailVal, L"String", L"String");
        }
        delete pEmailKey;
JsonString* pFullnameKey = new JsonString(L"fullname");
        IJsonValue* pFullnameVal = null;
        pJsonObject->GetValue(pFullnameKey, pFullnameVal);
        if(pFullnameVal != null) {
            
            pFullname = new String();
            jsonToValue(pFullname, pFullnameVal, L"String", L"String");
        }
        delete pFullnameKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
JsonString* pLast_activityKey = new JsonString(L"last_activity");
        IJsonValue* pLast_activityVal = null;
        pJsonObject->GetValue(pLast_activityKey, pLast_activityVal);
        if(pLast_activityVal != null) {
            
            pLast_activity = new Long();
            jsonToValue(pLast_activity, pLast_activityVal, L"Long", L"Long");
        }
        delete pLast_activityKey;
JsonString* pLast_updatedKey = new JsonString(L"last_updated");
        IJsonValue* pLast_updatedVal = null;
        pJsonObject->GetValue(pLast_updatedKey, pLast_updatedVal);
        if(pLast_updatedVal != null) {
            
            pLast_updated = new Long();
            jsonToValue(pLast_updated, pLast_updatedVal, L"Long", L"Long");
        }
        delete pLast_updatedKey;
JsonString* pMember_sinceKey = new JsonString(L"member_since");
        IJsonValue* pMember_sinceVal = null;
        pJsonObject->GetValue(pMember_sinceKey, pMember_sinceVal);
        if(pMember_sinceVal != null) {
            
            pMember_since = new Long();
            jsonToValue(pMember_since, pMember_sinceVal, L"Long", L"Long");
        }
        delete pMember_sinceKey;
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

SamiUserBaseResource::SamiUserBaseResource(String* json) {
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
SamiUserBaseResource::asJson ()
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
SamiUserBaseResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pAvatar_urlKey = new JsonString(L"avatar_url");
    pJsonObject->Add(pAvatar_urlKey, toJson(getPAvatarUrl(), "String", ""));

    JsonString *pDisplay_nameKey = new JsonString(L"display_name");
    pJsonObject->Add(pDisplay_nameKey, toJson(getPDisplayName(), "String", ""));

    JsonString *pEmailKey = new JsonString(L"email");
    pJsonObject->Add(pEmailKey, toJson(getPEmail(), "String", ""));

    JsonString *pFullnameKey = new JsonString(L"fullname");
    pJsonObject->Add(pFullnameKey, toJson(getPFullname(), "String", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pLast_activityKey = new JsonString(L"last_activity");
    pJsonObject->Add(pLast_activityKey, toJson(getPLastActivity(), "Long", ""));

    JsonString *pLast_updatedKey = new JsonString(L"last_updated");
    pJsonObject->Add(pLast_updatedKey, toJson(getPLastUpdated(), "Long", ""));

    JsonString *pMember_sinceKey = new JsonString(L"member_since");
    pJsonObject->Add(pMember_sinceKey, toJson(getPMemberSince(), "Long", ""));

    JsonString *pUsernameKey = new JsonString(L"username");
    pJsonObject->Add(pUsernameKey, toJson(getPUsername(), "String", ""));

    return pJsonObject;
}

String*
SamiUserBaseResource::getPAvatarUrl() {
    return pAvatar_url;
}
void
SamiUserBaseResource::setPAvatarUrl(String* pAvatar_url) {
    this->pAvatar_url = pAvatar_url;
}

String*
SamiUserBaseResource::getPDisplayName() {
    return pDisplay_name;
}
void
SamiUserBaseResource::setPDisplayName(String* pDisplay_name) {
    this->pDisplay_name = pDisplay_name;
}

String*
SamiUserBaseResource::getPEmail() {
    return pEmail;
}
void
SamiUserBaseResource::setPEmail(String* pEmail) {
    this->pEmail = pEmail;
}

String*
SamiUserBaseResource::getPFullname() {
    return pFullname;
}
void
SamiUserBaseResource::setPFullname(String* pFullname) {
    this->pFullname = pFullname;
}

Integer*
SamiUserBaseResource::getPId() {
    return pId;
}
void
SamiUserBaseResource::setPId(Integer* pId) {
    this->pId = pId;
}

Long*
SamiUserBaseResource::getPLastActivity() {
    return pLast_activity;
}
void
SamiUserBaseResource::setPLastActivity(Long* pLast_activity) {
    this->pLast_activity = pLast_activity;
}

Long*
SamiUserBaseResource::getPLastUpdated() {
    return pLast_updated;
}
void
SamiUserBaseResource::setPLastUpdated(Long* pLast_updated) {
    this->pLast_updated = pLast_updated;
}

Long*
SamiUserBaseResource::getPMemberSince() {
    return pMember_since;
}
void
SamiUserBaseResource::setPMemberSince(Long* pMember_since) {
    this->pMember_since = pMember_since;
}

String*
SamiUserBaseResource::getPUsername() {
    return pUsername;
}
void
SamiUserBaseResource::setPUsername(String* pUsername) {
    this->pUsername = pUsername;
}



} /* namespace Swagger */

