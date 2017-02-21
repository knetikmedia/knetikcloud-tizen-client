
#include "SamiAggregateInvoiceReportResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiAggregateInvoiceReportResource::SamiAggregateInvoiceReportResource() {
    init();
}

SamiAggregateInvoiceReportResource::~SamiAggregateInvoiceReportResource() {
    this->cleanup();
}

void
SamiAggregateInvoiceReportResource::init() {
    pCount = null;
pDate = null;
pRevenue = null;
pUser_count = null;
}

void
SamiAggregateInvoiceReportResource::cleanup() {
    if(pCount != null) {
        
        delete pCount;
        pCount = null;
    }
if(pDate != null) {
        
        delete pDate;
        pDate = null;
    }
if(pRevenue != null) {
        
        delete pRevenue;
        pRevenue = null;
    }
if(pUser_count != null) {
        
        delete pUser_count;
        pUser_count = null;
    }
}


SamiAggregateInvoiceReportResource*
SamiAggregateInvoiceReportResource::fromJson(String* json) {
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
SamiAggregateInvoiceReportResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCountKey = new JsonString(L"count");
        IJsonValue* pCountVal = null;
        pJsonObject->GetValue(pCountKey, pCountVal);
        if(pCountVal != null) {
            
            pCount = new Long();
            jsonToValue(pCount, pCountVal, L"Long", L"Long");
        }
        delete pCountKey;
JsonString* pDateKey = new JsonString(L"date");
        IJsonValue* pDateVal = null;
        pJsonObject->GetValue(pDateKey, pDateVal);
        if(pDateVal != null) {
            
            pDate = new String();
            jsonToValue(pDate, pDateVal, L"String", L"String");
        }
        delete pDateKey;
JsonString* pRevenueKey = new JsonString(L"revenue");
        IJsonValue* pRevenueVal = null;
        pJsonObject->GetValue(pRevenueKey, pRevenueVal);
        if(pRevenueVal != null) {
            
            pRevenue = new Double();
            jsonToValue(pRevenue, pRevenueVal, L"Double", L"Double");
        }
        delete pRevenueKey;
JsonString* pUser_countKey = new JsonString(L"user_count");
        IJsonValue* pUser_countVal = null;
        pJsonObject->GetValue(pUser_countKey, pUser_countVal);
        if(pUser_countVal != null) {
            
            pUser_count = new Long();
            jsonToValue(pUser_count, pUser_countVal, L"Long", L"Long");
        }
        delete pUser_countKey;
    }
}

SamiAggregateInvoiceReportResource::SamiAggregateInvoiceReportResource(String* json) {
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
SamiAggregateInvoiceReportResource::asJson ()
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
SamiAggregateInvoiceReportResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCountKey = new JsonString(L"count");
    pJsonObject->Add(pCountKey, toJson(getPCount(), "Long", ""));

    JsonString *pDateKey = new JsonString(L"date");
    pJsonObject->Add(pDateKey, toJson(getPDate(), "String", ""));

    JsonString *pRevenueKey = new JsonString(L"revenue");
    pJsonObject->Add(pRevenueKey, toJson(getPRevenue(), "Double", ""));

    JsonString *pUser_countKey = new JsonString(L"user_count");
    pJsonObject->Add(pUser_countKey, toJson(getPUserCount(), "Long", ""));

    return pJsonObject;
}

Long*
SamiAggregateInvoiceReportResource::getPCount() {
    return pCount;
}
void
SamiAggregateInvoiceReportResource::setPCount(Long* pCount) {
    this->pCount = pCount;
}

String*
SamiAggregateInvoiceReportResource::getPDate() {
    return pDate;
}
void
SamiAggregateInvoiceReportResource::setPDate(String* pDate) {
    this->pDate = pDate;
}

Double*
SamiAggregateInvoiceReportResource::getPRevenue() {
    return pRevenue;
}
void
SamiAggregateInvoiceReportResource::setPRevenue(Double* pRevenue) {
    this->pRevenue = pRevenue;
}

Long*
SamiAggregateInvoiceReportResource::getPUserCount() {
    return pUser_count;
}
void
SamiAggregateInvoiceReportResource::setPUserCount(Long* pUser_count) {
    this->pUser_count = pUser_count;
}



} /* namespace Swagger */

