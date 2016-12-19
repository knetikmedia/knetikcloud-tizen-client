#include "SamiAuthTokensApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiAuthTokensApi::SamiAuthTokensApi() {

}

SamiAuthTokensApi::~SamiAuthTokensApi() {

}

void
deleteTokenUsingDELETEProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiAuthTokensApi::deleteTokenUsingDELETEWithCompletion(String* username, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteTokenUsingDELETEProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/auth/tokens/{username}");

  String s_username(L"{");
  s_username.Append(L"username");
  s_username.Append(L"}");
  url.Replace(s_username, stringify(username, L"String*"));

  client->execute(SamiAuthTokensApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
deleteTokenWithClientIdUsingDELETEProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiAuthTokensApi::deleteTokenWithClientIdUsingDELETEWithCompletion(String* username, String* clientId, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteTokenWithClientIdUsingDELETEProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/auth/tokens/{username}/{client_id}");

  String s_username(L"{");
  s_username.Append(L"username");
  s_username.Append(L"}");
  url.Replace(s_username, stringify(username, L"String*"));
  String s_clientId(L"{");
  s_clientId.Append(L"client_id");
  s_clientId.Append(L"}");
  url.Replace(s_clientId, stringify(clientId, L"String*"));

  client->execute(SamiAuthTokensApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
getTokenByUserUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiOauthAccessTokenResource* out = new SamiOauthAccessTokenResource();
    jsonToValue(out, pJson, L"SamiOauthAccessTokenResource*", L"SamiOauthAccessTokenResource");

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

SamiOauthAccessTokenResource* 
SamiAuthTokensApi::getTokenByUserUsingGETWithCompletion(String* username, String* clientId, void (* success)(SamiOauthAccessTokenResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getTokenByUserUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/auth/tokens/{username}/{client_id}");

  String s_username(L"{");
  s_username.Append(L"username");
  s_username.Append(L"}");
  url.Replace(s_username, stringify(username, L"String*"));
  String s_clientId(L"{");
  s_clientId.Append(L"client_id");
  s_clientId.Append(L"}");
  url.Replace(s_clientId, stringify(clientId, L"String*"));

  client->execute(SamiAuthTokensApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getTokensUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPage«OauthAccessTokenResource»* out = new SamiPage«OauthAccessTokenResource»();
    jsonToValue(out, pJson, L"SamiPage«OauthAccessTokenResource»*", L"SamiPage«OauthAccessTokenResource»");

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

SamiPage«OauthAccessTokenResource»* 
SamiAuthTokensApi::getTokensUsingGETWithCompletion(String* filterClientId, String* filterUsername, Integer* size, Integer* page, String* order, void (* success)(SamiPage«OauthAccessTokenResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getTokensUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("filter_client_id"), filterClientId);

    queryParams->Add(new String("filter_username"), filterUsername);

    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("order"), order);

  String* mBody = null;


  String url(L"/auth/tokens");


  client->execute(SamiAuthTokensApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
