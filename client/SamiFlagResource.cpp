
#include "SamiFlagResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiFlagResource::SamiFlagResource() {
    init();
}

SamiFlagResource::~SamiFlagResource() {
    this->cleanup();
}

void
SamiFlagResource::init() {
    pContext = null;
pContext_id = null;
pCreated_date = null;
pId = null;
pReason = null;
pUpdated_date = null;
pUser = null;
}

void
SamiFlagResource::cleanup() {
    if(pContext != null) {
        
        delete pContext;
        pContext = null;
    }
if(pContext_id != null) {
        
        delete pContext_id;
        pContext_id = null;
    }
if(pCreated_date != null) {
        
        delete pCreated_date;
        pCreated_date = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pReason != null) {
        
        delete pReason;
        pReason = null;
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


SamiFlagResource*
SamiFlagResource::fromJson(String* json) {
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
SamiFlagResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
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
            
            pContext_id = new String();
            jsonToValue(pContext_id, pContext_idVal, L"String", L"String");
        }
        delete pContext_idKey;
JsonString* pCreated_dateKey = new JsonString(L"created_date");
        IJsonValue* pCreated_dateVal = null;
        pJsonObject->GetValue(pCreated_dateKey, pCreated_dateVal);
        if(pCreated_dateVal != null) {
            
            pCreated_date = new Long();
            jsonToValue(pCreated_date, pCreated_dateVal, L"Long", L"Long");
        }
        delete pCreated_dateKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new Long();
            jsonToValue(pId, pIdVal, L"Long", L"Long");
        }
        delete pIdKey;
JsonString* pReasonKey = new JsonString(L"reason");
        IJsonValue* pReasonVal = null;
        pJsonObject->GetValue(pReasonKey, pReasonVal);
        if(pReasonVal != null) {
            
            pReason = new String();
            jsonToValue(pReason, pReasonVal, L"String", L"String");
        }
        delete pReasonKey;
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

SamiFlagResource::SamiFlagResource(String* json) {
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
SamiFlagResource::asJson ()
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
SamiFlagResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pContextKey = new JsonString(L"context");
    pJsonObject->Add(pContextKey, toJson(getPContext(), "String", ""));

    JsonString *pContext_idKey = new JsonString(L"context_id");
    pJsonObject->Add(pContext_idKey, toJson(getPContextId(), "String", ""));

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "Long", ""));

    JsonString *pReasonKey = new JsonString(L"reason");
    pJsonObject->Add(pReasonKey, toJson(getPReason(), "String", ""));

    JsonString *pUpdated_dateKey = new JsonString(L"updated_date");
    pJsonObject->Add(pUpdated_dateKey, toJson(getPUpdatedDate(), "Long", ""));

    JsonString *pUserKey = new JsonString(L"user");
    pJsonObject->Add(pUserKey, toJson(getPUser(), "SamiSimpleUserResource", ""));

    return pJsonObject;
}

String*
SamiFlagResource::getPContext() {
    return pContext;
}
void
SamiFlagResource::setPContext(String* pContext) {
    this->pContext = pContext;
}

String*
SamiFlagResource::getPContextId() {
    return pContext_id;
}
void
SamiFlagResource::setPContextId(String* pContext_id) {
    this->pContext_id = pContext_id;
}

Long*
SamiFlagResource::getPCreatedDate() {
    return pCreated_date;
}
void
SamiFlagResource::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

Long*
SamiFlagResource::getPId() {
    return pId;
}
void
SamiFlagResource::setPId(Long* pId) {
    this->pId = pId;
}

String*
SamiFlagResource::getPReason() {
    return pReason;
}
void
SamiFlagResource::setPReason(String* pReason) {
    this->pReason = pReason;
}

Long*
SamiFlagResource::getPUpdatedDate() {
    return pUpdated_date;
}
void
SamiFlagResource::setPUpdatedDate(Long* pUpdated_date) {
    this->pUpdated_date = pUpdated_date;
}

SamiSimpleUserResource*
SamiFlagResource::getPUser() {
    return pUser;
}
void
SamiFlagResource::setPUser(SamiSimpleUserResource* pUser) {
    this->pUser = pUser;
}



} /* namespace Swagger */

