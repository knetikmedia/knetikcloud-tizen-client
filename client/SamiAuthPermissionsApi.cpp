#include "SamiAuthPermissionsApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiAuthPermissionsApi::SamiAuthPermissionsApi() {

}

SamiAuthPermissionsApi::~SamiAuthPermissionsApi() {

}

void
createPermissionUsingPOSTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPermissionResource* out = new SamiPermissionResource();
    jsonToValue(out, pJson, L"SamiPermissionResource*", L"SamiPermissionResource");

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

SamiPermissionResource* 
SamiAuthPermissionsApi::createPermissionUsingPOSTWithCompletion(SamiPermissionResource* permissionResource, void (* success)(SamiPermissionResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&createPermissionUsingPOSTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(permissionResource != null) {
    mBody = new String(permissionResource->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/auth/permissions");


  client->execute(SamiAuthPermissionsApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
deletePermissionUsingDELETEProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiAuthPermissionsApi::deletePermissionUsingDELETEWithCompletion(String* permission, Boolean* force, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&deletePermissionUsingDELETEProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("force"), force);

  String* mBody = null;


  String url(L"/auth/permissions/{permission}");

  String s_permission(L"{");
  s_permission.Append(L"permission");
  s_permission.Append(L"}");
  url.Replace(s_permission, stringify(permission, L"String*"));

  client->execute(SamiAuthPermissionsApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
getPermissionUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPermissionResource* out = new SamiPermissionResource();
    jsonToValue(out, pJson, L"SamiPermissionResource*", L"SamiPermissionResource");

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

SamiPermissionResource* 
SamiAuthPermissionsApi::getPermissionUsingGETWithCompletion(String* permission, void (* success)(SamiPermissionResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getPermissionUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/auth/permissions/{permission}");

  String s_permission(L"{");
  s_permission.Append(L"permission");
  s_permission.Append(L"}");
  url.Replace(s_permission, stringify(permission, L"String*"));

  client->execute(SamiAuthPermissionsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getPermissionUsingGET1Processor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«PermissionResource»* out = new SamiPageResource«PermissionResource»();
    jsonToValue(out, pJson, L"SamiPageResource«PermissionResource»*", L"SamiPageResource«PermissionResource»");

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

SamiPageResource«PermissionResource»* 
SamiAuthPermissionsApi::getPermissionUsingGET1WithCompletion(Integer* size, Integer* page, String* order, void (* success)(SamiPageResource«PermissionResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getPermissionUsingGET1Processor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("order"), order);

  String* mBody = null;


  String url(L"/auth/permissions");


  client->execute(SamiAuthPermissionsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
updatePermissionUsingPUTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiAuthPermissionsApi::updatePermissionUsingPUTWithCompletion(String* permission, SamiPermissionResource* permissionResource, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&updatePermissionUsingPUTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(permissionResource != null) {
    mBody = new String(permissionResource->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/auth/permissions/{permission}");

  String s_permission(L"{");
  s_permission.Append(L"permission");
  s_permission.Append(L"}");
  url.Replace(s_permission, stringify(permission, L"String*"));

  client->execute(SamiAuthPermissionsApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}


} /* namespace Swagger */
