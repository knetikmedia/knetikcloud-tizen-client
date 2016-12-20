#include "SamiReportingRevenueApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiReportingRevenueApi::SamiReportingRevenueApi() {

}

SamiReportingRevenueApi::~SamiReportingRevenueApi() {

}

void
executiveRevenueCountrySalesUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«RevenueCountryReportResource»* out = new SamiPageResource«RevenueCountryReportResource»();
    jsonToValue(out, pJson, L"SamiPageResource«RevenueCountryReportResource»*", L"SamiPageResource«RevenueCountryReportResource»");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiPageResource«RevenueCountryReportResource»* 
SamiReportingRevenueApi::executiveRevenueCountrySalesUsingGETWithCompletion(String* currencyCode, Long* startDate, Long* endDate, Integer* size, Integer* page, void (* success)(SamiPageResource«RevenueCountryReportResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&executiveRevenueCountrySalesUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("start_date"), startDate);

    queryParams->Add(new String("end_date"), endDate);

    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

  String* mBody = null;


  String url(L"/reporting/revenue/countries/{currency_code}");

  String s_currencyCode(L"{");
  s_currencyCode.Append(L"currency_code");
  s_currencyCode.Append(L"}");
  url.Replace(s_currencyCode, stringify(currencyCode, L"String*"));

  client->execute(SamiReportingRevenueApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
executiveRevenueItemSalesUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiRevenueReportResource* out = new SamiRevenueReportResource();
    jsonToValue(out, pJson, L"SamiRevenueReportResource*", L"SamiRevenueReportResource");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiRevenueReportResource* 
SamiReportingRevenueApi::executiveRevenueItemSalesUsingGETWithCompletion(String* currencyCode, Long* startDate, Long* endDate, void (* success)(SamiRevenueReportResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&executiveRevenueItemSalesUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("start_date"), startDate);

    queryParams->Add(new String("end_date"), endDate);

  String* mBody = null;


  String url(L"/reporting/revenue/item-sales/{currency_code}");

  String s_currencyCode(L"{");
  s_currencyCode.Append(L"currency_code");
  s_currencyCode.Append(L"}");
  url.Replace(s_currencyCode, stringify(currencyCode, L"String*"));

  client->execute(SamiReportingRevenueApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
executiveRevenueProductSalesUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«RevenueProductReportResource»* out = new SamiPageResource«RevenueProductReportResource»();
    jsonToValue(out, pJson, L"SamiPageResource«RevenueProductReportResource»*", L"SamiPageResource«RevenueProductReportResource»");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiPageResource«RevenueProductReportResource»* 
SamiReportingRevenueApi::executiveRevenueProductSalesUsingGETWithCompletion(String* currencyCode, Long* startDate, Long* endDate, Integer* size, Integer* page, void (* success)(SamiPageResource«RevenueProductReportResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&executiveRevenueProductSalesUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("start_date"), startDate);

    queryParams->Add(new String("end_date"), endDate);

    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

  String* mBody = null;


  String url(L"/reporting/revenue/products/{currency_code}");

  String s_currencyCode(L"{");
  s_currencyCode.Append(L"currency_code");
  s_currencyCode.Append(L"}");
  url.Replace(s_currencyCode, stringify(currencyCode, L"String*"));

  client->execute(SamiReportingRevenueApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
executiveRevenueRefundsUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiRevenueReportResource* out = new SamiRevenueReportResource();
    jsonToValue(out, pJson, L"SamiRevenueReportResource*", L"SamiRevenueReportResource");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiRevenueReportResource* 
SamiReportingRevenueApi::executiveRevenueRefundsUsingGETWithCompletion(String* currencyCode, Long* startDate, Long* endDate, void (* success)(SamiRevenueReportResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&executiveRevenueRefundsUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("start_date"), startDate);

    queryParams->Add(new String("end_date"), endDate);

  String* mBody = null;


  String url(L"/reporting/revenue/refunds/{currency_code}");

  String s_currencyCode(L"{");
  s_currencyCode.Append(L"currency_code");
  s_currencyCode.Append(L"}");
  url.Replace(s_currencyCode, stringify(currencyCode, L"String*"));

  client->execute(SamiReportingRevenueApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
executiveRevenueSubscriptionSalesUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiRevenueReportResource* out = new SamiRevenueReportResource();
    jsonToValue(out, pJson, L"SamiRevenueReportResource*", L"SamiRevenueReportResource");

    if (pJson) {
      if (pJson->GetType() == JSON_TYPE_OBJECT) {
         JsonObject* pObject = static_cast< JsonObject* >(pJson);
         pObject->RemoveAll(true);
      }
      else if (pJson->GetType() == JSON_TYPE_ARRAY) {
         JsonArray* pArray = static_cast< JsonArray* >(pJson);
         pArray->RemoveAll(true);
      }
      handler(out, null);
    }
    else {
      SamiError* error = new SamiError(0, new String(L"No parsable response received"));
      handler(null, error);
    }
    
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    handler(null, error);
    
  }
}

SamiRevenueReportResource* 
SamiReportingRevenueApi::executiveRevenueSubscriptionSalesUsingGETWithCompletion(String* currencyCode, Long* startDate, Long* endDate, void (* success)(SamiRevenueReportResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&executiveRevenueSubscriptionSalesUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("start_date"), startDate);

    queryParams->Add(new String("end_date"), endDate);

  String* mBody = null;


  String url(L"/reporting/revenue/subscription-sales/{currency_code}");

  String s_currencyCode(L"{");
  s_currencyCode.Append(L"currency_code");
  s_currencyCode.Append(L"}");
  url.Replace(s_currencyCode, stringify(currencyCode, L"String*"));

  client->execute(SamiReportingRevenueApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
