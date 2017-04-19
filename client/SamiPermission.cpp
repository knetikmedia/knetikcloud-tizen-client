
#include "SamiPermission.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiPermission::SamiPermission() {
    init();
}

SamiPermission::~SamiPermission() {
    this->cleanup();
}

void
SamiPermission::init() {
    pCreated_date = null;
pDescription = null;
pId = null;
pLocked = null;
pName = null;
pParent = null;
pPermission = null;
pUpdated_date = null;
}

void
SamiPermission::cleanup() {
    if(pCreated_date != null) {
        
        delete pCreated_date;
        pCreated_date = null;
    }
if(pDescription != null) {
        
        delete pDescription;
        pDescription = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pLocked != null) {
        
        delete pLocked;
        pLocked = null;
    }
if(pName != null) {
        
        delete pName;
        pName = null;
    }
if(pParent != null) {
        
        delete pParent;
        pParent = null;
    }
if(pPermission != null) {
        
        delete pPermission;
        pPermission = null;
    }
if(pUpdated_date != null) {
        
        delete pUpdated_date;
        pUpdated_date = null;
    }
}


SamiPermission*
SamiPermission::fromJson(String* json) {
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
SamiPermission::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCreated_dateKey = new JsonString(L"created_date");
        IJsonValue* pCreated_dateVal = null;
        pJsonObject->GetValue(pCreated_dateKey, pCreated_dateVal);
        if(pCreated_dateVal != null) {
            
            pCreated_date = new Long();
            jsonToValue(pCreated_date, pCreated_dateVal, L"Long", L"Long");
        }
        delete pCreated_dateKey;
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
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
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
JsonString* pParentKey = new JsonString(L"parent");
        IJsonValue* pParentVal = null;
        pJsonObject->GetValue(pParentKey, pParentVal);
        if(pParentVal != null) {
            
            pParent = new String();
            jsonToValue(pParent, pParentVal, L"String", L"String");
        }
        delete pParentKey;
JsonString* pPermissionKey = new JsonString(L"permission");
        IJsonValue* pPermissionVal = null;
        pJsonObject->GetValue(pPermissionKey, pPermissionVal);
        if(pPermissionVal != null) {
            
            pPermission = new String();
            jsonToValue(pPermission, pPermissionVal, L"String", L"String");
        }
        delete pPermissionKey;
JsonString* pUpdated_dateKey = new JsonString(L"updated_date");
        IJsonValue* pUpdated_dateVal = null;
        pJsonObject->GetValue(pUpdated_dateKey, pUpdated_dateVal);
        if(pUpdated_dateVal != null) {
            
            pUpdated_date = new Long();
            jsonToValue(pUpdated_date, pUpdated_dateVal, L"Long", L"Long");
        }
        delete pUpdated_dateKey;
    }
}

SamiPermission::SamiPermission(String* json) {
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
SamiPermission::asJson ()
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
SamiPermission::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

    JsonString *pDescriptionKey = new JsonString(L"description");
    pJsonObject->Add(pDescriptionKey, toJson(getPDescription(), "String", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pLockedKey = new JsonString(L"locked");
    pJsonObject->Add(pLockedKey, toJson(getPLocked(), "Boolean", ""));

    JsonString *pNameKey = new JsonString(L"name");
    pJsonObject->Add(pNameKey, toJson(getPName(), "String", ""));

    JsonString *pParentKey = new JsonString(L"parent");
    pJsonObject->Add(pParentKey, toJson(getPParent(), "String", ""));

    JsonString *pPermissionKey = new JsonString(L"permission");
    pJsonObject->Add(pPermissionKey, toJson(getPPermission(), "String", ""));

    JsonString *pUpdated_dateKey = new JsonString(L"updated_date");
    pJsonObject->Add(pUpdated_dateKey, toJson(getPUpdatedDate(), "Long", ""));

    return pJsonObject;
}

Long*
SamiPermission::getPCreatedDate() {
    return pCreated_date;
}
void
SamiPermission::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

String*
SamiPermission::getPDescription() {
    return pDescription;
}
void
SamiPermission::setPDescription(String* pDescription) {
    this->pDescription = pDescription;
}

Integer*
SamiPermission::getPId() {
    return pId;
}
void
SamiPermission::setPId(Integer* pId) {
    this->pId = pId;
}

Boolean*
SamiPermission::getPLocked() {
    return pLocked;
}
void
SamiPermission::setPLocked(Boolean* pLocked) {
    this->pLocked = pLocked;
}

String*
SamiPermission::getPName() {
    return pName;
}
void
SamiPermission::setPName(String* pName) {
    this->pName = pName;
}

String*
SamiPermission::getPParent() {
    return pParent;
}
void
SamiPermission::setPParent(String* pParent) {
    this->pParent = pParent;
}

String*
SamiPermission::getPPermission() {
    return pPermission;
}
void
SamiPermission::setPPermission(String* pPermission) {
    this->pPermission = pPermission;
}

Long*
SamiPermission::getPUpdatedDate() {
    return pUpdated_date;
}
void
SamiPermission::setPUpdatedDate(Long* pUpdated_date) {
    this->pUpdated_date = pUpdated_date;
}



} /* namespace Swagger */

