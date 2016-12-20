#include "SamiBRERuleEngineTriggersApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiBRERuleEngineTriggersApi::SamiBRERuleEngineTriggersApi() {

}

SamiBRERuleEngineTriggersApi::~SamiBRERuleEngineTriggersApi() {

}

void
createTriggerUsingPOSTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiBreTriggerResource* out = new SamiBreTriggerResource();
    jsonToValue(out, pJson, L"SamiBreTriggerResource*", L"SamiBreTriggerResource");

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

SamiBreTriggerResource* 
SamiBRERuleEngineTriggersApi::createTriggerUsingPOSTWithCompletion(SamiBreTriggerResource* breTriggerResource, void (* success)(SamiBreTriggerResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&createTriggerUsingPOSTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(breTriggerResource != null) {
    mBody = new String(breTriggerResource->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/bre/triggers");


  client->execute(SamiBRERuleEngineTriggersApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
deleteTriggerUsingDELETEProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiBRERuleEngineTriggersApi::deleteTriggerUsingDELETEWithCompletion(String* eventName, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteTriggerUsingDELETEProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/bre/triggers/{event_name}");

  String s_eventName(L"{");
  s_eventName.Append(L"event_name");
  s_eventName.Append(L"}");
  url.Replace(s_eventName, stringify(eventName, L"String*"));

  client->execute(SamiBRERuleEngineTriggersApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
getTriggerUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiBreTriggerResource* out = new SamiBreTriggerResource();
    jsonToValue(out, pJson, L"SamiBreTriggerResource*", L"SamiBreTriggerResource");

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

SamiBreTriggerResource* 
SamiBRERuleEngineTriggersApi::getTriggerUsingGETWithCompletion(String* eventName, void (* success)(SamiBreTriggerResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getTriggerUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/bre/triggers/{event_name}");

  String s_eventName(L"{");
  s_eventName.Append(L"event_name");
  s_eventName.Append(L"}");
  url.Replace(s_eventName, stringify(eventName, L"String*"));

  client->execute(SamiBRERuleEngineTriggersApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getTriggersUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPage«BreTriggerResource»* out = new SamiPage«BreTriggerResource»();
    jsonToValue(out, pJson, L"SamiPage«BreTriggerResource»*", L"SamiPage«BreTriggerResource»");

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

SamiPage«BreTriggerResource»* 
SamiBRERuleEngineTriggersApi::getTriggersUsingGETWithCompletion(Boolean* filterSystem, String* filterCategory, String* filterName, Integer* size, Integer* page, void (* success)(SamiPage«BreTriggerResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getTriggersUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("filter_system"), filterSystem);

    queryParams->Add(new String("filter_category"), filterCategory);

    queryParams->Add(new String("filter_name"), filterName);

    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

  String* mBody = null;


  String url(L"/bre/triggers");


  client->execute(SamiBRERuleEngineTriggersApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
updateTriggerUsingPUTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiBRERuleEngineTriggersApi::updateTriggerUsingPUTWithCompletion(String* eventName, SamiBreTriggerResource* breTriggerResource, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateTriggerUsingPUTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(breTriggerResource != null) {
    mBody = new String(breTriggerResource->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/bre/triggers/{event_name}");

  String s_eventName(L"{");
  s_eventName.Append(L"event_name");
  s_eventName.Append(L"}");
  url.Replace(s_eventName, stringify(eventName, L"String*"));

  client->execute(SamiBRERuleEngineTriggersApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}


} /* namespace Swagger */
