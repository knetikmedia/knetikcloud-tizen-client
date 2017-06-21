
#include "SamiBatchResult.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiBatchResult::SamiBatchResult() {
    init();
}

SamiBatchResult::~SamiBatchResult() {
    this->cleanup();
}

void
SamiBatchResult::init() {
    pBatch_return = null;
pCreated_date = null;
pId = null;
pUpdated_date = null;
}

void
SamiBatchResult::cleanup() {
    if(pBatch_return != null) {
        pBatch_return->RemoveAll(true);
        delete pBatch_return;
        pBatch_return = null;
    }
if(pCreated_date != null) {
        
        delete pCreated_date;
        pCreated_date = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pUpdated_date != null) {
        
        delete pUpdated_date;
        pUpdated_date = null;
    }
}


SamiBatchResult*
SamiBatchResult::fromJson(String* json) {
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
SamiBatchResult::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pBatch_returnKey = new JsonString(L"batch_return");
        IJsonValue* pBatch_returnVal = null;
        pJsonObject->GetValue(pBatch_returnKey, pBatch_returnVal);
        if(pBatch_returnVal != null) {
            pBatch_return = new ArrayList();
            
            jsonToValue(pBatch_return, pBatch_returnVal, L"IList", L"SamiBatchReturn");
        }
        delete pBatch_returnKey;
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
            
            pId = new String();
            jsonToValue(pId, pIdVal, L"String", L"String");
        }
        delete pIdKey;
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

SamiBatchResult::SamiBatchResult(String* json) {
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
SamiBatchResult::asJson ()
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
SamiBatchResult::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pBatch_returnKey = new JsonString(L"batch_return");
    pJsonObject->Add(pBatch_returnKey, toJson(getPBatchReturn(), "SamiBatchReturn", "array"));

    JsonString *pCreated_dateKey = new JsonString(L"created_date");
    pJsonObject->Add(pCreated_dateKey, toJson(getPCreatedDate(), "Long", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "String", ""));

    JsonString *pUpdated_dateKey = new JsonString(L"updated_date");
    pJsonObject->Add(pUpdated_dateKey, toJson(getPUpdatedDate(), "Long", ""));

    return pJsonObject;
}

IList*
SamiBatchResult::getPBatchReturn() {
    return pBatch_return;
}
void
SamiBatchResult::setPBatchReturn(IList* pBatch_return) {
    this->pBatch_return = pBatch_return;
}

Long*
SamiBatchResult::getPCreatedDate() {
    return pCreated_date;
}
void
SamiBatchResult::setPCreatedDate(Long* pCreated_date) {
    this->pCreated_date = pCreated_date;
}

String*
SamiBatchResult::getPId() {
    return pId;
}
void
SamiBatchResult::setPId(String* pId) {
    this->pId = pId;
}

Long*
SamiBatchResult::getPUpdatedDate() {
    return pUpdated_date;
}
void
SamiBatchResult::setPUpdatedDate(Long* pUpdated_date) {
    this->pUpdated_date = pUpdated_date;
}



} /* namespace Swagger */

