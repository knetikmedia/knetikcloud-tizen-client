
#include "SamiRoleResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiRoleResource::SamiRoleResource() {
    init();
}

SamiRoleResource::~SamiRoleResource() {
    this->cleanup();
}

void
SamiRoleResource::init() {
    pClient_count = null;
pCreated_date = null;
pLocked = null;
pName = null;
pRole = null;
pRole_permission = null;
pUser_count = null;
}

void
SamiRoleResource::cleanup() {
    if(pClient_count != null) {
        
        delete pClient_count;
        pClient_count = null;
    }
if(pCreated_date != null) {
        
        delete pCreated_date;
        pCreated_date = null;
    }
if(pLocked != null) {
        
        delete pLocked;
        pLocked = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pRole != null) {
        
        delete pRole;
        pRole = null;
    }
if(pRole_permission != null) {
        pRole_permission->RemoveAll(true);
        delete pRole_permission;
        pRole_permission = null;
    }
if(pUser_count != null) {
        
        delete pUser_count;
        pUser_count = null;
    }
}


SamiRoleResource*
SamiRoleResource::fromJson(String* json) {
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
SamiRoleResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pClient_countKey = new JsonString(L"client_count");
        IJsonValue* pClient_countVal = null;
        pJsonObject->GetValue(pClient_countKey, pClient_countVal);
        if(pClient_countVal != null) {
            
            pClient_count = new Integer();
            jsonToValue(pClient_count, pClient_countVal, L"Integer", L"Integer");
        }
        delete pClient_countKey;
JsonString* pCreated_dateKey = new JsonString(L"created_date");
        IJsonValue* pCreated_dateVal = null;
        pJsonObject->GetValue(pCreated_dateKey, pCreated_dateVal);
        if(pCreated_dateVal != null) {
            
            pCreated_date = new Long();
            jsonToValue(pCreated_date, pCreated_dateVal, L"Long", L"Long");
        }
        delete pCreated_dateKey;
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
JsonString* pRoleKey = new JsonString(L"role");
        IJsonValue* pRoleVal = null;
        pJsonObject->GetValue(pRoleKey, pRoleVal);
        if(pRoleVal != null) {
            
            pRole = new String();
            jsonToValue(pRole, pRoleVal, L"String", L"String");
        }
        delete pRoleKey;
JsonString* pRole_permissionKey = new JsonString(L"role_permission");
        IJsonValue* pRole_permissionVal = null;
        pJsonObject->GetValue(pRole_permissionKey, pRole_permissionVal);
        if(pRole_permissionVal != null) {
            pRole_permission = new ArrayList();
            
            jsonToValue(pRole_permission, pRole_permissionVal, L"IList", L"SamiPermissionResource");
        }
        delete pRole_permissionKey;
JsonString* pUser_countKey = new JsonString(L"user_count");
        IJsonValue* pUser_countVal = null;
        pJsonObject->GetValue(pUser_countKey, pUser_countVal);
        if(pUser_countVal != null) {
            
            pUser_count = new Integer();
            jsonToValue(pUser_count, pUser_countVal, L"Integer", L"Integer");
        }
        delete pUser_countKey;
    }
}

SamiRoleResource::SamiRoleResource(String* json) {
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
SamiRoleResource::asJson ()
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
SamiRoleResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pClient_countKey = new JsonString(L"client_count");
    pJsonObject->Add(pClient_countKey, toJson(getPClientCount(), "Integer", ""));

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

    JsonString *pLockedKey = new JsonString(L"locked");
    pJsonObject->Add(pLockedKey, toJson(getPLocked(), "Boolean", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pRoleKey = new JsonString(L"role");
    pJsonObject->Add(pRoleKey, toJson(getPRole(), "String", ""));

    JsonString *pRole_permissionKey = new JsonString(L"role_permission");
    pJsonObject->Add(pRole_permissionKey, toJson(getPRolePermission(), "SamiPermissionResource", "array"));

    JsonString *pUser_countKey = new JsonString(L"user_count");
    pJsonObject->Add(pUser_countKey, toJson(getPUserCount(), "Integer", ""));

    return pJsonObject;
}

Integer*
SamiRoleResource::getPClientCount() {
    return pClient_count;
}
void
SamiRoleResource::setPClientCount(Integer* pClient_count) {
    this->pClient_count = pClient_count;
}

Long*
SamiRoleResource::getPCreatedDate() {
    return pCreated_date;
}
void
SamiRoleResource::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

Boolean*
SamiRoleResource::getPLocked() {
    return pLocked;
}
void
SamiRoleResource::setPLocked(Boolean* pLocked) {
    this->pLocked = pLocked;
}

String*
SamiRoleResource::getPName() {
    return pName;
}
void
SamiRoleResource::setPName(String* pName) {
    this->pName = pName;
}

String*
SamiRoleResource::getPRole() {
    return pRole;
}
void
SamiRoleResource::setPRole(String* pRole) {
    this->pRole = pRole;
}

IList*
SamiRoleResource::getPRolePermission() {
    return pRole_permission;
}
void
SamiRoleResource::setPRolePermission(IList* pRole_permission) {
    this->pRole_permission = pRole_permission;
}

Integer*
SamiRoleResource::getPUserCount() {
    return pUser_count;
}
void
SamiRoleResource::setPUserCount(Integer* pUser_count) {
    this->pUser_count = pUser_count;
}



} /* namespace Swagger */

