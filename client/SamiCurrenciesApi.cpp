#include "SamiCurrenciesApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiCurrenciesApi::SamiCurrenciesApi() {

}

SamiCurrenciesApi::~SamiCurrenciesApi() {

}

void
createCurrencyProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiCurrencyResource* out = new SamiCurrencyResource();
    jsonToValue(out, pJson, L"SamiCurrencyResource*", L"SamiCurrencyResource");

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

SamiCurrencyResource* 
SamiCurrenciesApi::createCurrencyWithCompletion(SamiCurrencyResource* currency, void (* success)(SamiCurrencyResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&createCurrencyProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(currency != null) {
    mBody = new String(currency->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/currencies");


  client->execute(SamiCurrenciesApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
deleteCurrencyProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiCurrenciesApi::deleteCurrencyWithCompletion(String* code, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteCurrencyProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/currencies/{code}");

  String s_code(L"{");
  s_code.Append(L"code");
  s_code.Append(L"}");
  url.Replace(s_code, stringify(code, L"String*"));

  client->execute(SamiCurrenciesApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
getCurrenciesProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«CurrencyResource»* out = new SamiPageResource«CurrencyResource»();
    jsonToValue(out, pJson, L"SamiPageResource«CurrencyResource»*", L"SamiPageResource«CurrencyResource»");

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

SamiPageResource«CurrencyResource»* 
SamiCurrenciesApi::getCurrenciesWithCompletion(Boolean* filterEnabledCurrencies, String* filterType, Integer* size, Integer* page, String* order, void (* success)(SamiPageResource«CurrencyResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getCurrenciesProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("filter_enabled_currencies"), filterEnabledCurrencies);

    queryParams->Add(new String("filter_type"), filterType);

    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("order"), order);

  String* mBody = null;


  String url(L"/currencies");


  client->execute(SamiCurrenciesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getCurrencyProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiCurrencyResource* out = new SamiCurrencyResource();
    jsonToValue(out, pJson, L"SamiCurrencyResource*", L"SamiCurrencyResource");

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

SamiCurrencyResource* 
SamiCurrenciesApi::getCurrencyWithCompletion(String* code, void (* success)(SamiCurrencyResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getCurrencyProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/currencies/{code}");

  String s_code(L"{");
  s_code.Append(L"code");
  s_code.Append(L"}");
  url.Replace(s_code, stringify(code, L"String*"));

  client->execute(SamiCurrenciesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
updateCurrencyProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    handler(null, null);
  }
  else {
    SamiError* error = new SamiError(code, new String(pHttpResponse->GetStatusText()));
    
    handler(error, null);
  }
}

void 
SamiCurrenciesApi::updateCurrencyWithCompletion(String* code, SamiCurrencyResource* currency, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateCurrencyProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(currency != null) {
    mBody = new String(currency->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/currencies/{code}");

  String s_code(L"{");
  s_code.Append(L"code");
  s_code.Append(L"}");
  url.Replace(s_code, stringify(code, L"String*"));

  client->execute(SamiCurrenciesApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}


} /* namespace Swagger */
