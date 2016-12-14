#include "SamiAuthClientsApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiAuthClientsApi::SamiAuthClientsApi() {

}

SamiAuthClientsApi::~SamiAuthClientsApi() {

}

void
assignClientGrantTypesUsingPUTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiAuthClientsApi::assignClientGrantTypesUsingPUTWithCompletion(String* clientKey, IList* grantList, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&assignClientGrantTypesUsingPUTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(grantList != null) {
    mBody = new String("");
    int sz = grantList->GetCount();
    for(int i = 0; i < sz; i++) {
      SamiObject * obj = (SamiObject*)grantList->GetAt(i);
      String json = obj->asJson();
      if(i > 0)
        mBody->Append(",");
      mBody->Append(json);
    }
    mBody->Append("]");
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/auth/clients/{client_key}/grant-types");

  String s_clientKey(L"{");
  s_clientKey.Append(L"client_key");
  s_clientKey.Append(L"}");
  url.Replace(s_clientKey, stringify(clientKey, L"String*"));

  client->execute(SamiAuthClientsApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
assignClientRedirectUrisUsingPUTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiAuthClientsApi::assignClientRedirectUrisUsingPUTWithCompletion(String* clientKey, IList* redirectList, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&assignClientRedirectUrisUsingPUTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(redirectList != null) {
    mBody = new String("");
    int sz = redirectList->GetCount();
    for(int i = 0; i < sz; i++) {
      SamiObject * obj = (SamiObject*)redirectList->GetAt(i);
      String json = obj->asJson();
      if(i > 0)
        mBody->Append(",");
      mBody->Append(json);
    }
    mBody->Append("]");
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/auth/clients/{client_key}/redirect-uris");

  String s_clientKey(L"{");
  s_clientKey.Append(L"client_key");
  s_clientKey.Append(L"}");
  url.Replace(s_clientKey, stringify(clientKey, L"String*"));

  client->execute(SamiAuthClientsApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
createClientUsingPOSTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiClientResource* out = new SamiClientResource();
    jsonToValue(out, pJson, L"SamiClientResource*", L"SamiClientResource");

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

SamiClientResource* 
SamiAuthClientsApi::createClientUsingPOSTWithCompletion(SamiClientResource* clientResource, void (* success)(SamiClientResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&createClientUsingPOSTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(clientResource != null) {
    mBody = new String(clientResource->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/auth/clients");


  client->execute(SamiAuthClientsApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
deleteClientUsingDELETEProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiAuthClientsApi::deleteClientUsingDELETEWithCompletion(String* clientKey, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteClientUsingDELETEProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/auth/clients/{client_key}");

  String s_clientKey(L"{");
  s_clientKey.Append(L"client_key");
  s_clientKey.Append(L"}");
  url.Replace(s_clientKey, stringify(clientKey, L"String*"));

  client->execute(SamiAuthClientsApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
getClientUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiClientResource* out = new SamiClientResource();
    jsonToValue(out, pJson, L"SamiClientResource*", L"SamiClientResource");

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

SamiClientResource* 
SamiAuthClientsApi::getClientUsingGETWithCompletion(String* clientKey, void (* success)(SamiClientResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getClientUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/auth/clients/{client_key}");

  String s_clientKey(L"{");
  s_clientKey.Append(L"client_key");
  s_clientKey.Append(L"}");
  url.Replace(s_clientKey, stringify(clientKey, L"String*"));

  client->execute(SamiAuthClientsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getClientsUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPage«ClientResource»* out = new SamiPage«ClientResource»();
    jsonToValue(out, pJson, L"SamiPage«ClientResource»*", L"SamiPage«ClientResource»");

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

SamiPage«ClientResource»* 
SamiAuthClientsApi::getClientsUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* success)(SamiPage«ClientResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getClientsUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("order"), order);

  String* mBody = null;


  String url(L"/auth/clients");


  client->execute(SamiAuthClientsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
listAvailableGrantTypesUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiGrantTypeResource");

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
SamiAuthClientsApi::listAvailableGrantTypesUsingGETWithCompletion( void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&listAvailableGrantTypesUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/auth/clients/grant-types");


  client->execute(SamiAuthClientsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
updateClientUsingPUTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiAuthClientsApi::updateClientUsingPUTWithCompletion(String* clientKey, SamiClientResource* clientResource, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateClientUsingPUTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(clientResource != null) {
    mBody = new String(clientResource->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/auth/clients/{client_key}");

  String s_clientKey(L"{");
  s_clientKey.Append(L"client_key");
  s_clientKey.Append(L"}");
  url.Replace(s_clientKey, stringify(clientKey, L"String*"));

  client->execute(SamiAuthClientsApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}


} /* namespace Swagger */
