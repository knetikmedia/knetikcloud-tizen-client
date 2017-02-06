
#include "SamiRevenueReportResource.h"
#include <FLocales.h>

using namespace Tizen::Base;
using namespace Tizen::System;
using namespace Tizen::Base::Utility;
using namespace Tizen::Base::Collection;
using namespace Tizen::Web::Json;
using namespace Tizen::Locales;


namespace Swagger {

SamiRevenueReportResource::SamiRevenueReportResource() {
    init();
}

SamiRevenueReportResource::~SamiRevenueReportResource() {
    this->cleanup();
}

void
SamiRevenueReportResource::init() {
    pCustomer_count = null;
pSale_count = null;
pSales_average = null;
pSales_total = null;
}

void
SamiRevenueReportResource::cleanup() {
    if(pCustomer_count != null) {
        
        delete pCustomer_count;
        pCustomer_count = null;
    }
if(pSale_count != null) {
        
        delete pSale_count;
        pSale_count = null;
    }
if(pSales_average != null) {
        
        delete pSales_average;
        pSales_average = null;
    }
if(pSales_total != null) {
        
        delete pSales_total;
        pSales_total = null;
    }
}


SamiRevenueReportResource*
SamiRevenueReportResource::fromJson(String* json) {
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
SamiRevenueReportResource::fromJsonObject(IJsonValue* pJson) {
    JsonObject* pJsonObject = static_cast< JsonObject* >(pJson);

    if(pJsonObject != null) {
        JsonString* pCustomer_countKey = new JsonString(L"customer_count");
        IJsonValue* pCustomer_countVal = null;
        pJsonObject->GetValue(pCustomer_countKey, pCustomer_countVal);
        if(pCustomer_countVal != null) {
            
            pCustomer_count = new Long();
            jsonToValue(pCustomer_count, pCustomer_countVal, L"Long", L"Long");
        }
        delete pCustomer_countKey;
JsonString* pSale_countKey = new JsonString(L"sale_count");
        IJsonValue* pSale_countVal = null;
        pJsonObject->GetValue(pSale_countKey, pSale_countVal);
        if(pSale_countVal != null) {
            
            pSale_count = new Long();
            jsonToValue(pSale_count, pSale_countVal, L"Long", L"Long");
        }
        delete pSale_countKey;
JsonString* pSales_averageKey = new JsonString(L"sales_average");
        IJsonValue* pSales_averageVal = null;
        pJsonObject->GetValue(pSales_averageKey, pSales_averageVal);
        if(pSales_averageVal != null) {
            
            pSales_average = new Double();
            jsonToValue(pSales_average, pSales_averageVal, L"Double", L"Double");
        }
        delete pSales_averageKey;
JsonString* pSales_totalKey = new JsonString(L"sales_total");
        IJsonValue* pSales_totalVal = null;
        pJsonObject->GetValue(pSales_totalKey, pSales_totalVal);
        if(pSales_totalVal != null) {
            
            pSales_total = new Double();
            jsonToValue(pSales_total, pSales_totalVal, L"Double", L"Double");
        }
        delete pSales_totalKey;
    }
}

SamiRevenueReportResource::SamiRevenueReportResource(String* json) {
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
SamiRevenueReportResource::asJson ()
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
SamiRevenueReportResource::asJsonObject() {
    JsonObject *pJsonObject = new JsonObject();
    pJsonObject->Construct();

    JsonString *pCustomer_countKey = new JsonString(L"customer_count");
    pJsonObject->Add(pCustomer_countKey, toJson(getPCustomerCount(), "Long", ""));

    JsonString *pSale_countKey = new JsonString(L"sale_count");
    pJsonObject->Add(pSale_countKey, toJson(getPSaleCount(), "Long", ""));

    JsonString *pSales_averageKey = new JsonString(L"sales_average");
    pJsonObject->Add(pSales_averageKey, toJson(getPSalesAverage(), "Double", ""));

    JsonString *pSales_totalKey = new JsonString(L"sales_total");
    pJsonObject->Add(pSales_totalKey, toJson(getPSalesTotal(), "Double", ""));

    return pJsonObject;
}

Long*
SamiRevenueReportResource::getPCustomerCount() {
    return pCustomer_count;
}
void
SamiRevenueReportResource::setPCustomerCount(Long* pCustomer_count) {
    this->pCustomer_count = pCustomer_count;
}

Long*
SamiRevenueReportResource::getPSaleCount() {
    return pSale_count;
}
void
SamiRevenueReportResource::setPSaleCount(Long* pSale_count) {
    this->pSale_count = pSale_count;
}

Double*
SamiRevenueReportResource::getPSalesAverage() {
    return pSales_average;
}
void
SamiRevenueReportResource::setPSalesAverage(Double* pSales_average) {
    this->pSales_average = pSales_average;
}

Double*
SamiRevenueReportResource::getPSalesTotal() {
    return pSales_total;
}
void
SamiRevenueReportResource::setPSalesTotal(Double* pSales_total) {
    this->pSales_total = pSales_total;
}



} /* namespace Swagger */

