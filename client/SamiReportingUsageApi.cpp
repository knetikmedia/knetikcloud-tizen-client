#include "SamiReportingUsageApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiReportingUsageApi::SamiReportingUsageApi() {

}

SamiReportingUsageApi::~SamiReportingUsageApi() {

}

void
getUsageByDayUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«UsageInfo»* out = new SamiPageResource«UsageInfo»();
    jsonToValue(out, pJson, L"SamiPageResource«UsageInfo»*", L"SamiPageResource«UsageInfo»");

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

SamiPageResource«UsageInfo»* 
SamiReportingUsageApi::getUsageByDayUsingGETWithCompletion(Long* startDate, Long* endDate, Boolean* combineEndpoints, Integer* size, Integer* page, void (* success)(SamiPageResource«UsageInfo»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getUsageByDayUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("start_date"), startDate);

    queryParams->Add(new String("end_date"), endDate);

    queryParams->Add(new String("combine_endpoints"), combineEndpoints);

    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

  String* mBody = null;


  String url(L"/reporting/usage/day");


  client->execute(SamiReportingUsageApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getUsageByHourUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«UsageInfo»* out = new SamiPageResource«UsageInfo»();
    jsonToValue(out, pJson, L"SamiPageResource«UsageInfo»*", L"SamiPageResource«UsageInfo»");

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

SamiPageResource«UsageInfo»* 
SamiReportingUsageApi::getUsageByHourUsingGETWithCompletion(Long* startDate, Long* endDate, Boolean* combineEndpoints, Integer* size, Integer* page, void (* success)(SamiPageResource«UsageInfo»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getUsageByHourUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("start_date"), startDate);

    queryParams->Add(new String("end_date"), endDate);

    queryParams->Add(new String("combine_endpoints"), combineEndpoints);

    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

  String* mBody = null;


  String url(L"/reporting/usage/hour");


  client->execute(SamiReportingUsageApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getUsageByMinuteUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«UsageInfo»* out = new SamiPageResource«UsageInfo»();
    jsonToValue(out, pJson, L"SamiPageResource«UsageInfo»*", L"SamiPageResource«UsageInfo»");

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

SamiPageResource«UsageInfo»* 
SamiReportingUsageApi::getUsageByMinuteUsingGETWithCompletion(Long* startDate, Long* endDate, Boolean* combineEndpoints, Integer* size, Integer* page, void (* success)(SamiPageResource«UsageInfo»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getUsageByMinuteUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("start_date"), startDate);

    queryParams->Add(new String("end_date"), endDate);

    queryParams->Add(new String("combine_endpoints"), combineEndpoints);

    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

  String* mBody = null;


  String url(L"/reporting/usage/minute");


  client->execute(SamiReportingUsageApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getUsageByMonthUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«UsageInfo»* out = new SamiPageResource«UsageInfo»();
    jsonToValue(out, pJson, L"SamiPageResource«UsageInfo»*", L"SamiPageResource«UsageInfo»");

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

SamiPageResource«UsageInfo»* 
SamiReportingUsageApi::getUsageByMonthUsingGETWithCompletion(Long* startDate, Long* endDate, Boolean* combineEndpoints, Integer* size, Integer* page, void (* success)(SamiPageResource«UsageInfo»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getUsageByMonthUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("start_date"), startDate);

    queryParams->Add(new String("end_date"), endDate);

    queryParams->Add(new String("combine_endpoints"), combineEndpoints);

    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

  String* mBody = null;


  String url(L"/reporting/usage/month");


  client->execute(SamiReportingUsageApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getUsageByYearUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«UsageInfo»* out = new SamiPageResource«UsageInfo»();
    jsonToValue(out, pJson, L"SamiPageResource«UsageInfo»*", L"SamiPageResource«UsageInfo»");

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

SamiPageResource«UsageInfo»* 
SamiReportingUsageApi::getUsageByYearUsingGETWithCompletion(Long* startDate, Long* endDate, Boolean* combineEndpoints, Integer* size, Integer* page, void (* success)(SamiPageResource«UsageInfo»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getUsageByYearUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("start_date"), startDate);

    queryParams->Add(new String("end_date"), endDate);

    queryParams->Add(new String("combine_endpoints"), combineEndpoints);

    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

  String* mBody = null;


  String url(L"/reporting/usage/year");


  client->execute(SamiReportingUsageApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
