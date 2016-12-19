#include "SamiAuthRolesApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiAuthRolesApi::SamiAuthRolesApi() {

}

SamiAuthRolesApi::~SamiAuthRolesApi() {

}

void
assignClientRolesUsingPUTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiAuthRolesApi::assignClientRolesUsingPUTWithCompletion(String* clientKey, IList* rolesList, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&assignClientRolesUsingPUTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(rolesList != null) {
    mBody = new String("");
    int sz = rolesList->GetCount();
    for(int i = 0; i < sz; i++) {
      SamiObject * obj = (SamiObject*)rolesList->GetAt(i);
      String json = obj->asJson();
      if(i > 0)
        mBody->Append(",");
      mBody->Append(json);
    }
    mBody->Append("]");
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/auth/clients/{client_key}/roles");

  String s_clientKey(L"{");
  s_clientKey.Append(L"client_key");
  s_clientKey.Append(L"}");
  url.Replace(s_clientKey, stringify(clientKey, L"String*"));

  client->execute(SamiAuthRolesApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
assignPermissionsUsingPUTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiAuthRolesApi::assignPermissionsUsingPUTWithCompletion(String* role, IList* permissionsList, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&assignPermissionsUsingPUTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(permissionsList != null) {
    mBody = new String("");
    int sz = permissionsList->GetCount();
    for(int i = 0; i < sz; i++) {
      SamiObject * obj = (SamiObject*)permissionsList->GetAt(i);
      String json = obj->asJson();
      if(i > 0)
        mBody->Append(",");
      mBody->Append(json);
    }
    mBody->Append("]");
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/auth/roles/{role}/permissions");

  String s_role(L"{");
  s_role.Append(L"role");
  s_role.Append(L"}");
  url.Replace(s_role, stringify(role, L"String*"));

  client->execute(SamiAuthRolesApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
assignUserRolesExternalUsingPUTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiAuthRolesApi::assignUserRolesExternalUsingPUTWithCompletion(Integer* userId, IList* rolesList, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&assignUserRolesExternalUsingPUTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(rolesList != null) {
    mBody = new String("");
    int sz = rolesList->GetCount();
    for(int i = 0; i < sz; i++) {
      SamiObject * obj = (SamiObject*)rolesList->GetAt(i);
      String json = obj->asJson();
      if(i > 0)
        mBody->Append(",");
      mBody->Append(json);
    }
    mBody->Append("]");
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/auth/users/{user_id}/roles");

  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));

  client->execute(SamiAuthRolesApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
createRoleUsingPOSTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiRoleResource* out = new SamiRoleResource();
    jsonToValue(out, pJson, L"SamiRoleResource*", L"SamiRoleResource");

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

SamiRoleResource* 
SamiAuthRolesApi::createRoleUsingPOSTWithCompletion(SamiRoleResource* roleResource, void (* success)(SamiRoleResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&createRoleUsingPOSTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(roleResource != null) {
    mBody = new String(roleResource->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/auth/roles");


  client->execute(SamiAuthRolesApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
deleteRoleUsingDELETEProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiAuthRolesApi::deleteRoleUsingDELETEWithCompletion(String* role, Boolean* force, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteRoleUsingDELETEProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("force"), force);

  String* mBody = null;


  String url(L"/auth/roles/{role}");

  String s_role(L"{");
  s_role.Append(L"role");
  s_role.Append(L"}");
  url.Replace(s_role, stringify(role, L"String*"));

  client->execute(SamiAuthRolesApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
getClientRolesUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiRoleResource");

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
SamiAuthRolesApi::getClientRolesUsingGETWithCompletion(String* clientKey, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getClientRolesUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/auth/clients/{client_key}/roles");

  String s_clientKey(L"{");
  s_clientKey.Append(L"client_key");
  s_clientKey.Append(L"}");
  url.Replace(s_clientKey, stringify(clientKey, L"String*"));

  client->execute(SamiAuthRolesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getRoleUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiRoleResource* out = new SamiRoleResource();
    jsonToValue(out, pJson, L"SamiRoleResource*", L"SamiRoleResource");

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

SamiRoleResource* 
SamiAuthRolesApi::getRoleUsingGETWithCompletion(String* role, void (* success)(SamiRoleResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getRoleUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/auth/roles/{role}");

  String s_role(L"{");
  s_role.Append(L"role");
  s_role.Append(L"}");
  url.Replace(s_role, stringify(role, L"String*"));

  client->execute(SamiAuthRolesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getRolesUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPage«RoleResource»* out = new SamiPage«RoleResource»();
    jsonToValue(out, pJson, L"SamiPage«RoleResource»*", L"SamiPage«RoleResource»");

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

SamiPage«RoleResource»* 
SamiAuthRolesApi::getRolesUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* success)(SamiPage«RoleResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getRolesUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("order"), order);

  String* mBody = null;


  String url(L"/auth/roles");


  client->execute(SamiAuthRolesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getUserRolesUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiRoleResource");

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
SamiAuthRolesApi::getUserRolesUsingGETWithCompletion(Integer* userId, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getUserRolesUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/auth/users/{user_id}/roles");

  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));

  client->execute(SamiAuthRolesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
updateRoleUsingPUTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiAuthRolesApi::updateRoleUsingPUTWithCompletion(String* role, SamiRoleResource* roleResource, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateRoleUsingPUTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(roleResource != null) {
    mBody = new String(roleResource->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/auth/roles/{role}");

  String s_role(L"{");
  s_role.Append(L"role");
  s_role.Append(L"}");
  url.Replace(s_role, stringify(role, L"String*"));

  client->execute(SamiAuthRolesApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}


} /* namespace Swagger */
