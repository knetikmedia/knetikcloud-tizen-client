
#include "SamiBillingReport.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiBillingReport::SamiBillingReport() {
    init();
}

SamiBillingReport::~SamiBillingReport() {
    this->cleanup();
}

void
SamiBillingReport::init() {
    pCreated = null;
pId = null;
pLast_known_failures = null;
pScheduled = null;
pStatistics = null;
}

void
SamiBillingReport::cleanup() {
    if(pCreated != null) {
        
        delete pCreated;
        pCreated = null;
    }
if(pId != null) {
        
        delete pId;
        pId = null;
    }
if(pLast_known_failures != null) {
        pLast_known_failures->RemoveAll(true);
        delete pLast_known_failures;
        pLast_known_failures = null;
    }
if(pScheduled != null) {
        
        delete pScheduled;
        pScheduled = null;
    }
if(pStatistics != null) {
        pStatistics->RemoveAll(true);
        delete pStatistics;
        pStatistics = null;
    }
}


SamiBillingReport*
SamiBillingReport::fromJson(String* json) {
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
SamiBillingReport::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCreatedKey = new JsonString(L"created");
        IJsonValue* pCreatedVal = null;
        pJsonObject->GetValue(pCreatedKey, pCreatedVal);
        if(pCreatedVal != null) {
            
            pCreated = new Long();
            jsonToValue(pCreated, pCreatedVal, L"Long", L"Long");
        }
        delete pCreatedKey;
JsonString* pIdKey = new JsonString(L"id");
        IJsonValue* pIdVal = null;
        pJsonObject->GetValue(pIdKey, pIdVal);
        if(pIdVal != null) {
            
            pId = new String();
            jsonToValue(pId, pIdVal, L"String", L"String");
        }
        delete pIdKey;
JsonString* pLast_known_failuresKey = new JsonString(L"last_known_failures");
        IJsonValue* pLast_known_failuresVal = null;
        pJsonObject->GetValue(pLast_known_failuresKey, pLast_known_failuresVal);
        if(pLast_known_failuresVal != null) {
            pLast_known_failures = new ArrayList();
            
            jsonToValue(pLast_known_failures, pLast_known_failuresVal, L"IList", L"String");
        }
        delete pLast_known_failuresKey;
JsonString* pScheduledKey = new JsonString(L"scheduled");
        IJsonValue* pScheduledVal = null;
        pJsonObject->GetValue(pScheduledKey, pScheduledVal);
        if(pScheduledVal != null) {
            
            pScheduled = new Long();
            jsonToValue(pScheduled, pScheduledVal, L"Long", L"Long");
        }
        delete pScheduledKey;
JsonString* pStatisticsKey = new JsonString(L"statistics");
        IJsonValue* pStatisticsVal = null;
        pJsonObject->GetValue(pStatisticsKey, pStatisticsVal);
        if(pStatisticsVal != null) {
            pStatistics = new HashMap();
            
            jsonToValue(pStatistics, pStatisticsVal, L"HashMap", L"Integer");
        }
        delete pStatisticsKey;
    }
}

SamiBillingReport::SamiBillingReport(String* json) {
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
SamiBillingReport::asJson ()
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
SamiBillingReport::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCreatedKey = new JsonString(L"created");
    pJsonObject->Add(pCreatedKey, toJson(getPCreated(), "Long", ""));

    JsonString *pIdKey = new JsonString(L"id");
    pJsonObject->Add(pIdKey, toJson(getPId(), "String", ""));

    JsonString *pLast_known_failuresKey = new JsonString(L"last_known_failures");
    pJsonObject->Add(pLast_known_failuresKey, toJson(getPLastKnownFailures(), "String", "array"));

    JsonString *pScheduledKey = new JsonString(L"scheduled");
    pJsonObject->Add(pScheduledKey, toJson(getPScheduled(), "Long", ""));

    JsonString *pStatisticsKey = new JsonString(L"statistics");
    pJsonObject->Add(pStatisticsKey, toJson(getPStatistics(), "Integer", "map"));

    return pJsonObject;
}

Long*
SamiBillingReport::getPCreated() {
    return pCreated;
}
void
SamiBillingReport::setPCreated(Long* pCreated) {
    this->pCreated = pCreated;
}

String*
SamiBillingReport::getPId() {
    return pId;
}
void
SamiBillingReport::setPId(String* pId) {
    this->pId = pId;
}

IList*
SamiBillingReport::getPLastKnownFailures() {
    return pLast_known_failures;
}
void
SamiBillingReport::setPLastKnownFailures(IList* pLast_known_failures) {
    this->pLast_known_failures = pLast_known_failures;
}

Long*
SamiBillingReport::getPScheduled() {
    return pScheduled;
}
void
SamiBillingReport::setPScheduled(Long* pScheduled) {
    this->pScheduled = pScheduled;
}

HashMap*
SamiBillingReport::getPStatistics() {
    return pStatistics;
}
void
SamiBillingReport::setPStatistics(HashMap* pStatistics) {
    this->pStatistics = pStatistics;
}



} /* namespace Swagger */

