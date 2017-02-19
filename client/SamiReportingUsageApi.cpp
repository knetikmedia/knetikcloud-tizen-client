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
getUsageByDayProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiReportingUsageApi::getUsageByDayWithCompletion(Long* startDate, Long* endDate, Boolean* combineEndpoints, String* method, String* url, Integer* size, Integer* page, void (* success)(SamiPageResource«UsageInfo»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getUsageByDayProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("start_date"), startDate);

    queryParams->Add(new String("end_date"), endDate);

    queryParams->Add(new String("combine_endpoints"), combineEndpoints);

    queryParams->Add(new String("method"), method);

    queryParams->Add(new String("url"), url);

    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

  String* mBody = null;


  String url(L"/reporting/usage/day");


  client->execute(SamiReportingUsageApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getUsageByHourProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiReportingUsageApi::getUsageByHourWithCompletion(Long* startDate, Long* endDate, Boolean* combineEndpoints, String* method, String* url, Integer* size, Integer* page, void (* success)(SamiPageResource«UsageInfo»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getUsageByHourProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("start_date"), startDate);

    queryParams->Add(new String("end_date"), endDate);

    queryParams->Add(new String("combine_endpoints"), combineEndpoints);

    queryParams->Add(new String("method"), method);

    queryParams->Add(new String("url"), url);

    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

  String* mBody = null;


  String url(L"/reporting/usage/hour");


  client->execute(SamiReportingUsageApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getUsageByMinuteProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiReportingUsageApi::getUsageByMinuteWithCompletion(Long* startDate, Long* endDate, Boolean* combineEndpoints, String* method, String* url, Integer* size, Integer* page, void (* success)(SamiPageResource«UsageInfo»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getUsageByMinuteProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("start_date"), startDate);

    queryParams->Add(new String("end_date"), endDate);

    queryParams->Add(new String("combine_endpoints"), combineEndpoints);

    queryParams->Add(new String("method"), method);

    queryParams->Add(new String("url"), url);

    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

  String* mBody = null;


  String url(L"/reporting/usage/minute");


  client->execute(SamiReportingUsageApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getUsageByMonthProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiReportingUsageApi::getUsageByMonthWithCompletion(Long* startDate, Long* endDate, Boolean* combineEndpoints, String* method, String* url, Integer* size, Integer* page, void (* success)(SamiPageResource«UsageInfo»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getUsageByMonthProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("start_date"), startDate);

    queryParams->Add(new String("end_date"), endDate);

    queryParams->Add(new String("combine_endpoints"), combineEndpoints);

    queryParams->Add(new String("method"), method);

    queryParams->Add(new String("url"), url);

    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

  String* mBody = null;


  String url(L"/reporting/usage/month");


  client->execute(SamiReportingUsageApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getUsageByYearProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiReportingUsageApi::getUsageByYearWithCompletion(Long* startDate, Long* endDate, Boolean* combineEndpoints, String* method, String* url, Integer* size, Integer* page, void (* success)(SamiPageResource«UsageInfo»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getUsageByYearProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("start_date"), startDate);

    queryParams->Add(new String("end_date"), endDate);

    queryParams->Add(new String("combine_endpoints"), combineEndpoints);

    queryParams->Add(new String("method"), method);

    queryParams->Add(new String("url"), url);

    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

  String* mBody = null;


  String url(L"/reporting/usage/year");


  client->execute(SamiReportingUsageApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getUsageEndpointsProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"String");

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

IList* 
SamiReportingUsageApi::getUsageEndpointsWithCompletion(Long* startDate, Long* endDate, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getUsageEndpointsProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("start_date"), startDate);

    queryParams->Add(new String("end_date"), endDate);

  String* mBody = null;


  String url(L"/reporting/usage/endpoints");


  client->execute(SamiReportingUsageApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
