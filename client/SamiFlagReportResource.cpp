
#include "SamiFlagReportResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiFlagReportResource::SamiFlagReportResource() {
    init();
}

SamiFlagReportResource::~SamiFlagReportResource() {
    this->cleanup();
}

void
SamiFlagReportResource::init() {
    pContext = null;
pContext_id = null;
pCreated_date = null;
pId = null;
pReason = null;
pResolution = null;
pResolved = null;
pUpdated_date = null;
}

void
SamiFlagReportResource::cleanup() {
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
if(pResolution != null) {
        
        delete pResolution;
        pResolution = null;
    }
if(pResolved != null) {
        
        delete pResolved;
        pResolved = null;
    }
if(pUpdated_date != null) {
        
        delete pUpdated_date;
        pUpdated_date = null;
    }
}


SamiFlagReportResource*
SamiFlagReportResource::fromJson(String* json) {
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
SamiFlagReportResource::fromJsonObject(IJsonValue* pJson) {
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
JsonString* pResolutionKey = new JsonString(L"resolution");
        IJsonValue* pResolutionVal = null;
        pJsonObject->GetValue(pResolutionKey, pResolutionVal);
        if(pResolutionVal != null) {
            
            pResolution = new String();
            jsonToValue(pResolution, pResolutionVal, L"String", L"String");
        }
        delete pResolutionKey;
JsonString* pResolvedKey = new JsonString(L"resolved");
        IJsonValue* pResolvedVal = null;
        pJsonObject->GetValue(pResolvedKey, pResolvedVal);
        if(pResolvedVal != null) {
            
            pResolved = new Long();
            jsonToValue(pResolved, pResolvedVal, L"Long", L"Long");
        }
        delete pResolvedKey;
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

SamiFlagReportResource::SamiFlagReportResource(String* json) {
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
SamiFlagReportResource::asJson ()
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
SamiFlagReportResource::asJsonObject() {
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

    JsonString *pResolutionKey = new JsonString(L"resolution");
    pJsonObject->Add(pResolutionKey, toJson(getPResolution(), "String", ""));

    JsonString *pResolvedKey = new JsonString(L"resolved");
    pJsonObject->Add(pResolvedKey, toJson(getPResolved(), "Long", ""));

    JsonString *pUpdated_dateKey = new JsonString(L"updated_date");
    pJsonObject->Add(pUpdated_dateKey, toJson(getPUpdatedDate(), "Long", ""));

    return pJsonObject;
}

String*
SamiFlagReportResource::getPContext() {
    return pContext;
}
void
SamiFlagReportResource::setPContext(String* pContext) {
    this->pContext = pContext;
}

String*
SamiFlagReportResource::getPContextId() {
    return pContext_id;
}
void
SamiFlagReportResource::setPContextId(String* pContext_id) {
    this->pContext_id = pContext_id;
}

Long*
SamiFlagReportResource::getPCreatedDate() {
    return pCreated_date;
}
void
SamiFlagReportResource::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

Long*
SamiFlagReportResource::getPId() {
    return pId;
}
void
SamiFlagReportResource::setPId(Long* pId) {
    this->pId = pId;
}

String*
SamiFlagReportResource::getPReason() {
    return pReason;
}
void
SamiFlagReportResource::setPReason(String* pReason) {
    this->pReason = pReason;
}

String*
SamiFlagReportResource::getPResolution() {
    return pResolution;
}
void
SamiFlagReportResource::setPResolution(String* pResolution) {
    this->pResolution = pResolution;
}

Long*
SamiFlagReportResource::getPResolved() {
    return pResolved;
}
void
SamiFlagReportResource::setPResolved(Long* pResolved) {
    this->pResolved = pResolved;
}

Long*
SamiFlagReportResource::getPUpdatedDate() {
    return pUpdated_date;
}
void
SamiFlagReportResource::setPUpdatedDate(Long* pUpdated_date) {
    this->pUpdated_date = pUpdated_date;
}



} /* namespace Swagger */

