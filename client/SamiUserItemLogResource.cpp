
#include "SamiUserItemLogResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUserItemLogResource::SamiUserItemLogResource() {
    init();
}

SamiUserItemLogResource::~SamiUserItemLogResource() {
    this->cleanup();
}

void
SamiUserItemLogResource::init() {
    pId = null;
pInfo = null;
pItem = null;
pLog_date = null;
pType = null;
pUser = null;
pUser_inventory = null;
}

void
SamiUserItemLogResource::cleanup() {
    if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pInfo != null) {
        
        delete pInfo;
        pInfo = null;
    }
if(pItem != null) {
        
        delete pItem;
        pItem = null;
    }
if(pLog_date != null) {
        
        delete pLog_date;
        pLog_date = null;
    }
if(pType != null) {
        
        delete pType;
        pType = null;
    }
if(pUser != null) {
        
        delete pUser;
        pUser = null;
    }
if(pUser_inventory != null) {
        
        delete pUser_inventory;
        pUser_inventory = null;
    }
}


SamiUserItemLogResource*
SamiUserItemLogResource::fromJson(String* json) {
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
SamiUserItemLogResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
JsonString* pInfoKey = new JsonString(L"info");
        IJsonValue* pInfoVal = null;
        pJsonObject->GetValue(pInfoKey, pInfoVal);
        if(pInfoVal != null) {
            
            pInfo = new String();
            jsonToValue(pInfo, pInfoVal, L"String", L"String");
        }
        delete pInfoKey;
JsonString* pItemKey = new JsonString(L"item");
        IJsonValue* pItemVal = null;
        pJsonObject->GetValue(pItemKey, pItemVal);
        if(pItemVal != null) {
            
            pItem = new SamiSimpleReferenceResource«int»();
            jsonToValue(pItem, pItemVal, L"SamiSimpleReferenceResource«int»", L"SamiSimpleReferenceResource«int»");
        }
        delete pItemKey;
JsonString* pLog_dateKey = new JsonString(L"log_date");
        IJsonValue* pLog_dateVal = null;
        pJsonObject->GetValue(pLog_dateKey, pLog_dateVal);
        if(pLog_dateVal != null) {
            
            pLog_date = new Long();
            jsonToValue(pLog_date, pLog_dateVal, L"Long", L"Long");
        }
        delete pLog_dateKey;
JsonString* pTypeKey = new JsonString(L"type");
        IJsonValue* pTypeVal = null;
        pJsonObject->GetValue(pTypeKey, pTypeVal);
        if(pTypeVal != null) {
            
            pType = new String();
            jsonToValue(pType, pTypeVal, L"String", L"String");
        }
        delete pTypeKey;
JsonString* pUserKey = new JsonString(L"user");
        IJsonValue* pUserVal = null;
        pJsonObject->GetValue(pUserKey, pUserVal);
        if(pUserVal != null) {
            
            pUser = new SamiSimpleUserResource();
            jsonToValue(pUser, pUserVal, L"SamiSimpleUserResource", L"SamiSimpleUserResource");
        }
        delete pUserKey;
JsonString* pUser_inventoryKey = new JsonString(L"user_inventory");
        IJsonValue* pUser_inventoryVal = null;
        pJsonObject->GetValue(pUser_inventoryKey, pUser_inventoryVal);
        if(pUser_inventoryVal != null) {
            
            pUser_inventory = new Integer();
            jsonToValue(pUser_inventory, pUser_inventoryVal, L"Integer", L"Integer");
        }
        delete pUser_inventoryKey;
    }
}

SamiUserItemLogResource::SamiUserItemLogResource(String* json) {
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
SamiUserItemLogResource::asJson ()
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
SamiUserItemLogResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pInfoKey = new JsonString(L"info");
    pJsonObject->Add(pInfoKey, toJson(getPInfo(), "String", ""));

    JsonString *pItemKey = new JsonString(L"item");
    pJsonObject->Add(pItemKey, toJson(getPItem(), "SamiSimpleReferenceResource«int»", ""));

    JsonString *pLog_dateKey = new JsonString(L"log_date");
    pJsonObject->Add(pLog_dateKey, toJson(getPLogDate(), "Long", ""));

    JsonString *pTypeKey = new JsonString(L"type");
    pJsonObject->Add(pTypeKey, toJson(getPType(), "String", ""));

    JsonString *pUserKey = new JsonString(L"user");
    pJsonObject->Add(pUserKey, toJson(getPUser(), "SamiSimpleUserResource", ""));

    JsonString *pUser_inventoryKey = new JsonString(L"user_inventory");
    pJsonObject->Add(pUser_inventoryKey, toJson(getPUserInventory(), "Integer", ""));

    return pJsonObject;
}

Integer*
SamiUserItemLogResource::getPId() {
    return pId;
}
void
SamiUserItemLogResource::setPId(Integer* pId) {
    this->pId = pId;
}

String*
SamiUserItemLogResource::getPInfo() {
    return pInfo;
}
void
SamiUserItemLogResource::setPInfo(String* pInfo) {
    this->pInfo = pInfo;
}

SamiSimpleReferenceResource«int»*
SamiUserItemLogResource::getPItem() {
    return pItem;
}
void
SamiUserItemLogResource::setPItem(SamiSimpleReferenceResource«int»* pItem) {
    this->pItem = pItem;
}

Long*
SamiUserItemLogResource::getPLogDate() {
    return pLog_date;
}
void
SamiUserItemLogResource::setPLogDate(Long* pLog_date) {
    this->pLog_date = pLog_date;
}

String*
SamiUserItemLogResource::getPType() {
    return pType;
}
void
SamiUserItemLogResource::setPType(String* pType) {
    this->pType = pType;
}

SamiSimpleUserResource*
SamiUserItemLogResource::getPUser() {
    return pUser;
}
void
SamiUserItemLogResource::setPUser(SamiSimpleUserResource* pUser) {
    this->pUser = pUser;
}

Integer*
SamiUserItemLogResource::getPUserInventory() {
    return pUser_inventory;
}
void
SamiUserItemLogResource::setPUserInventory(Integer* pUser_inventory) {
    this->pUser_inventory = pUser_inventory;
}



} /* namespace Swagger */

