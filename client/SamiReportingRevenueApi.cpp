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
getItemRevenueProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiReportingRevenueApi::getItemRevenueWithCompletion(String* currencyCode, Long* startDate, Long* endDate, void (* success)(SamiRevenueReportResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getItemRevenueProcessor, (void(*)(void*, SamiError*))success);
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
getRefundRevenueProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiReportingRevenueApi::getRefundRevenueWithCompletion(String* currencyCode, Long* startDate, Long* endDate, void (* success)(SamiRevenueReportResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getRefundRevenueProcessor, (void(*)(void*, SamiError*))success);
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
getRevenueByCountryProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiReportingRevenueApi::getRevenueByCountryWithCompletion(String* currencyCode, Long* startDate, Long* endDate, Integer* size, Integer* page, void (* success)(SamiPageResource«RevenueCountryReportResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getRevenueByCountryProcessor, (void(*)(void*, SamiError*))success);
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
getRevenueByItemProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiReportingRevenueApi::getRevenueByItemWithCompletion(String* currencyCode, Long* startDate, Long* endDate, Integer* size, Integer* page, void (* success)(SamiPageResource«RevenueProductReportResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getRevenueByItemProcessor, (void(*)(void*, SamiError*))success);
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
getSubscriptionRevenueProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiReportingRevenueApi::getSubscriptionRevenueWithCompletion(String* currencyCode, Long* startDate, Long* endDate, void (* success)(SamiRevenueReportResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getSubscriptionRevenueProcessor, (void(*)(void*, SamiError*))success);
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
