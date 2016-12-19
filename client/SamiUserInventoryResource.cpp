
#include "SamiUserInventoryResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiUserInventoryResource::SamiUserInventoryResource() {
    init();
}

SamiUserInventoryResource::~SamiUserInventoryResource() {
    this->cleanup();
}

void
SamiUserInventoryResource::init() {
    pBehavior_data = null;
pCreated_date = null;
pExpires = null;
pId = null;
pInvoice_id = null;
pItem_id = null;
pItem_name = null;
pItem_type_hint = null;
pStatus = null;
pUpdated_date = null;
pUser = null;
}

void
SamiUserInventoryResource::cleanup() {
    if(pBehavior_data != null) {
        
        delete pBehavior_data;
        pBehavior_data = null;
    }
if(pCreated_date != null) {
        
        delete pCreated_date;
        pCreated_date = null;
    }
if(pExpires != null) {
        
        delete pExpires;
        pExpires = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pInvoice_id != null) {
        
        delete pInvoice_id;
        pInvoice_id = null;
    }
if(pItem_id != null) {
        
        delete pItem_id;
        pItem_id = null;
    }
if(pItem_name != null) {
        
        delete pItem_name;
        pItem_name = null;
    }
if(pItem_type_hint != null) {
        
        delete pItem_type_hint;
        pItem_type_hint = null;
    }
if(pStatus != null) {
        
        delete pStatus;
        pStatus = null;
    }
if(pUpdated_date != null) {
        
        delete pUpdated_date;
        pUpdated_date = null;
    }
if(pUser != null) {
        
        delete pUser;
        pUser = null;
    }
}


SamiUserInventoryResource*
SamiUserInventoryResource::fromJson(String* json) {
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
SamiUserInventoryResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pBehavior_dataKey = new JsonString(L"behavior_data");
        IJsonValue* pBehavior_dataVal = null;
        pJsonObject->GetValue(pBehavior_dataKey, pBehavior_dataVal);
        if(pBehavior_dataVal != null) {
            
            pBehavior_data = null;
            jsonToValue(pBehavior_data, pBehavior_dataVal, L"SamiObject", L"SamiObject");
        }
        delete pBehavior_dataKey;
JsonString* pCreated_dateKey = new JsonString(L"created_date");
        IJsonValue* pCreated_dateVal = null;
        pJsonObject->GetValue(pCreated_dateKey, pCreated_dateVal);
        if(pCreated_dateVal != null) {
            
            pCreated_date = new Long();
            jsonToValue(pCreated_date, pCreated_dateVal, L"Long", L"Long");
        }
        delete pCreated_dateKey;
JsonString* pExpiresKey = new JsonString(L"expires");
        IJsonValue* pExpiresVal = null;
        pJsonObject->GetValue(pExpiresKey, pExpiresVal);
        if(pExpiresVal != null) {
            
            pExpires = new Long();
            jsonToValue(pExpires, pExpiresVal, L"Long", L"Long");
        }
        delete pExpiresKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Integer();
            jsonToValue(pId, pIdVal, L"Integer", L"Integer");
        }
        delete pIdKey;
JsonString* pInvoice_idKey = new JsonString(L"invoice_id");
        IJsonValue* pInvoice_idVal = null;
        pJsonObject->GetValue(pInvoice_idKey, pInvoice_idVal);
        if(pInvoice_idVal != null) {
            
            pInvoice_id = new Integer();
            jsonToValue(pInvoice_id, pInvoice_idVal, L"Integer", L"Integer");
        }
        delete pInvoice_idKey;
JsonString* pItem_idKey = new JsonString(L"item_id");
        IJsonValue* pItem_idVal = null;
        pJsonObject->GetValue(pItem_idKey, pItem_idVal);
        if(pItem_idVal != null) {
            
            pItem_id = new Integer();
            jsonToValue(pItem_id, pItem_idVal, L"Integer", L"Integer");
        }
        delete pItem_idKey;
JsonString* pItem_nameKey = new JsonString(L"item_name");
        IJsonValue* pItem_nameVal = null;
        pJsonObject->GetValue(pItem_nameKey, pItem_nameVal);
        if(pItem_nameVal != null) {
            
            pItem_name = new String();
            jsonToValue(pItem_name, pItem_nameVal, L"String", L"String");
        }
        delete pItem_nameKey;
JsonString* pItem_type_hintKey = new JsonString(L"item_type_hint");
        IJsonValue* pItem_type_hintVal = null;
        pJsonObject->GetValue(pItem_type_hintKey, pItem_type_hintVal);
        if(pItem_type_hintVal != null) {
            
            pItem_type_hint = new String();
            jsonToValue(pItem_type_hint, pItem_type_hintVal, L"String", L"String");
        }
        delete pItem_type_hintKey;
JsonString* pStatusKey = new JsonString(L"status");
        IJsonValue* pStatusVal = null;
        pJsonObject->GetValue(pStatusKey, pStatusVal);
        if(pStatusVal != null) {
            
            pStatus = new String();
            jsonToValue(pStatus, pStatusVal, L"String", L"String");
        }
        delete pStatusKey;
JsonString* pUpdated_dateKey = new JsonString(L"updated_date");
        IJsonValue* pUpdated_dateVal = null;
        pJsonObject->GetValue(pUpdated_dateKey, pUpdated_dateVal);
        if(pUpdated_dateVal != null) {
            
            pUpdated_date = new Long();
            jsonToValue(pUpdated_date, pUpdated_dateVal, L"Long", L"Long");
        }
        delete pUpdated_dateKey;
JsonString* pUserKey = new JsonString(L"user");
        IJsonValue* pUserVal = null;
        pJsonObject->GetValue(pUserKey, pUserVal);
        if(pUserVal != null) {
            
            pUser = new SamiSimpleUserResource();
            jsonToValue(pUser, pUserVal, L"SamiSimpleUserResource", L"SamiSimpleUserResource");
        }
        delete pUserKey;
    }
}

SamiUserInventoryResource::SamiUserInventoryResource(String* json) {
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
SamiUserInventoryResource::asJson ()
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
SamiUserInventoryResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pBehavior_dataKey = new JsonString(L"behavior_data");
    pJsonObject->Add(pBehavior_dataKey, toJson(getPBehaviorData(), "SamiObject", ""));

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

    JsonString *pExpiresKey = new JsonString(L"expires");
    pJsonObject->Add(pExpiresKey, toJson(getPExpires(), "Long", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Integer", ""));

    JsonString *pInvoice_idKey = new JsonString(L"invoice_id");
    pJsonObject->Add(pInvoice_idKey, toJson(getPInvoiceId(), "Integer", ""));

    JsonString *pItem_idKey = new JsonString(L"item_id");
    pJsonObject->Add(pItem_idKey, toJson(getPItemId(), "Integer", ""));

    JsonString *pItem_nameKey = new JsonString(L"item_name");
    pJsonObject->Add(pItem_nameKey, toJson(getPItemName(), "String", ""));

    JsonString *pItem_type_hintKey = new JsonString(L"item_type_hint");
    pJsonObject->Add(pItem_type_hintKey, toJson(getPItemTypeHint(), "String", ""));

    JsonString *pStatusKey = new JsonString(L"status");
    pJsonObject->Add(pStatusKey, toJson(getPStatus(), "String", ""));

    JsonString *pUpdated_dateKey = new JsonString(L"updated_date");
    pJsonObject->Add(pUpdated_dateKey, toJson(getPUpdatedDate(), "Long", ""));

    JsonString *pUserKey = new JsonString(L"user");
    pJsonObject->Add(pUserKey, toJson(getPUser(), "SamiSimpleUserResource", ""));

    return pJsonObject;
}

SamiObject*
SamiUserInventoryResource::getPBehaviorData() {
    return pBehavior_data;
}
void
SamiUserInventoryResource::setPBehaviorData(SamiObject* pBehavior_data) {
    this->pBehavior_data = pBehavior_data;
}

Long*
SamiUserInventoryResource::getPCreatedDate() {
    return pCreated_date;
}
void
SamiUserInventoryResource::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

Long*
SamiUserInventoryResource::getPExpires() {
    return pExpires;
}
void
SamiUserInventoryResource::setPExpires(Long* pExpires) {
    this->pExpires = pExpires;
}

Integer*
SamiUserInventoryResource::getPId() {
    return pId;
}
void
SamiUserInventoryResource::setPId(Integer* pId) {
    this->pId = pId;
}

Integer*
SamiUserInventoryResource::getPInvoiceId() {
    return pInvoice_id;
}
void
SamiUserInventoryResource::setPInvoiceId(Integer* pInvoice_id) {
    this->pInvoice_id = pInvoice_id;
}

Integer*
SamiUserInventoryResource::getPItemId() {
    return pItem_id;
}
void
SamiUserInventoryResource::setPItemId(Integer* pItem_id) {
    this->pItem_id = pItem_id;
}

String*
SamiUserInventoryResource::getPItemName() {
    return pItem_name;
}
void
SamiUserInventoryResource::setPItemName(String* pItem_name) {
    this->pItem_name = pItem_name;
}

String*
SamiUserInventoryResource::getPItemTypeHint() {
    return pItem_type_hint;
}
void
SamiUserInventoryResource::setPItemTypeHint(String* pItem_type_hint) {
    this->pItem_type_hint = pItem_type_hint;
}

String*
SamiUserInventoryResource::getPStatus() {
    return pStatus;
}
void
SamiUserInventoryResource::setPStatus(String* pStatus) {
    this->pStatus = pStatus;
}

Long*
SamiUserInventoryResource::getPUpdatedDate() {
    return pUpdated_date;
}
void
SamiUserInventoryResource::setPUpdatedDate(Long* pUpdated_date) {
    this->pUpdated_date = pUpdated_date;
}

SamiSimpleUserResource*
SamiUserInventoryResource::getPUser() {
    return pUser;
}
void
SamiUserInventoryResource::setPUser(SamiSimpleUserResource* pUser) {
    this->pUser = pUser;
}



} /* namespace Swagger */

