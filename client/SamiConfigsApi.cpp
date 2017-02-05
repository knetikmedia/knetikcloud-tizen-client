#include "SamiConfigsApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiConfigsApi::SamiConfigsApi() {

}

SamiConfigsApi::~SamiConfigsApi() {

}

void
createConfigUsingPOSTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiConfig* out = new SamiConfig();
    jsonToValue(out, pJson, L"SamiConfig*", L"SamiConfig");

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

SamiConfig* 
SamiConfigsApi::createConfigUsingPOSTWithCompletion(SamiConfig* config, void (* success)(SamiConfig*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&createConfigUsingPOSTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(config != null) {
    mBody = new String(config->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/configs");


  client->execute(SamiConfigsApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
deleteConfigUsingDELETEProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiConfigsApi::deleteConfigUsingDELETEWithCompletion(String* name, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteConfigUsingDELETEProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/configs/{name}");

  String s_name(L"{");
  s_name.Append(L"name");
  s_name.Append(L"}");
  url.Replace(s_name, stringify(name, L"String*"));

  client->execute(SamiConfigsApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
getConfigUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiConfig* out = new SamiConfig();
    jsonToValue(out, pJson, L"SamiConfig*", L"SamiConfig");

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

SamiConfig* 
SamiConfigsApi::getConfigUsingGETWithCompletion(String* name, void (* success)(SamiConfig*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getConfigUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/configs/{name}");

  String s_name(L"{");
  s_name.Append(L"name");
  s_name.Append(L"}");
  url.Replace(s_name, stringify(name, L"String*"));

  client->execute(SamiConfigsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getConfigsUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«Config»* out = new SamiPageResource«Config»();
    jsonToValue(out, pJson, L"SamiPageResource«Config»*", L"SamiPageResource«Config»");

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

SamiPageResource«Config»* 
SamiConfigsApi::getConfigsUsingGETWithCompletion(String* filterSearch, Integer* size, Integer* page, String* order, void (* success)(SamiPageResource«Config»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getConfigsUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("filter_search"), filterSearch);

    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("order"), order);

  String* mBody = null;


  String url(L"/configs");


  client->execute(SamiConfigsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
updateConfigUsingPUTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiConfigsApi::updateConfigUsingPUTWithCompletion(String* name, SamiConfig* config, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateConfigUsingPUTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(config != null) {
    mBody = new String(config->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/configs/{name}");

  String s_name(L"{");
  s_name.Append(L"name");
  s_name.Append(L"}");
  url.Replace(s_name, stringify(name, L"String*"));

  client->execute(SamiConfigsApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}


} /* namespace Swagger */
