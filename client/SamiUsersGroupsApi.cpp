#include "SamiUsersGroupsApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiUsersGroupsApi::SamiUsersGroupsApi() {

}

SamiUsersGroupsApi::~SamiUsersGroupsApi() {

}

void
addGroupUsingPOSTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiGroupResource* out = new SamiGroupResource();
    jsonToValue(out, pJson, L"SamiGroupResource*", L"SamiGroupResource");

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

SamiGroupResource* 
SamiUsersGroupsApi::addGroupUsingPOSTWithCompletion(SamiGroupResource* groupResource, void (* success)(SamiGroupResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&addGroupUsingPOSTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(groupResource != null) {
    mBody = new String(groupResource->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/users/groups");


  client->execute(SamiUsersGroupsApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
addMemberUsingPOSTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiGroupMemberResource* out = new SamiGroupMemberResource();
    jsonToValue(out, pJson, L"SamiGroupMemberResource*", L"SamiGroupMemberResource");

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

SamiGroupMemberResource* 
SamiUsersGroupsApi::addMemberUsingPOSTWithCompletion(String* uniqueName, SamiGroupMemberResource* username, void (* success)(SamiGroupMemberResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&addMemberUsingPOSTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(username != null) {
    mBody = new String(username->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/users/groups/{unique_name}/members");

  String s_uniqueName(L"{");
  s_uniqueName.Append(L"unique_name");
  s_uniqueName.Append(L"}");
  url.Replace(s_uniqueName, stringify(uniqueName, L"String*"));

  client->execute(SamiUsersGroupsApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
createGroupTemplateUsingPOSTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiTemplateResource* out = new SamiTemplateResource();
    jsonToValue(out, pJson, L"SamiTemplateResource*", L"SamiTemplateResource");

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

SamiTemplateResource* 
SamiUsersGroupsApi::createGroupTemplateUsingPOSTWithCompletion(SamiTemplateResource* groupTemplateResource, void (* success)(SamiTemplateResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&createGroupTemplateUsingPOSTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(groupTemplateResource != null) {
    mBody = new String(groupTemplateResource->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/users/groups/templates");


  client->execute(SamiUsersGroupsApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
deleteGroupMemberUsingDELETEProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiUsersGroupsApi::deleteGroupMemberUsingDELETEWithCompletion(String* uniqueName, Integer* userId, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteGroupMemberUsingDELETEProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/users/groups/{unique_name}/members/{user_id}");

  String s_uniqueName(L"{");
  s_uniqueName.Append(L"unique_name");
  s_uniqueName.Append(L"}");
  url.Replace(s_uniqueName, stringify(uniqueName, L"String*"));
  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));

  client->execute(SamiUsersGroupsApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
deleteGroupTemplateUsingDELETEProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiUsersGroupsApi::deleteGroupTemplateUsingDELETEWithCompletion(String* _id, String* cascade, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteGroupTemplateUsingDELETEProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("cascade"), cascade);

  String* mBody = null;


  String url(L"/users/groups/templates/{id}");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"String*"));

  client->execute(SamiUsersGroupsApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
deleteGroupUsingDELETEProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiUsersGroupsApi::deleteGroupUsingDELETEWithCompletion(String* uniqueName, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteGroupUsingDELETEProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/users/groups/{unique_name}");

  String s_uniqueName(L"{");
  s_uniqueName.Append(L"unique_name");
  s_uniqueName.Append(L"}");
  url.Replace(s_uniqueName, stringify(uniqueName, L"String*"));

  client->execute(SamiUsersGroupsApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
getGroupListUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiUsersGroupsApi::getGroupListUsingGETWithCompletion(Integer* userId, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getGroupListUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/users/{user_id}/groups");

  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));

  client->execute(SamiUsersGroupsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getGroupMemberUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiGroupMemberResource* out = new SamiGroupMemberResource();
    jsonToValue(out, pJson, L"SamiGroupMemberResource*", L"SamiGroupMemberResource");

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

SamiGroupMemberResource* 
SamiUsersGroupsApi::getGroupMemberUsingGETWithCompletion(String* uniqueName, Integer* userId, void (* success)(SamiGroupMemberResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getGroupMemberUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/users/groups/{unique_name}/members/{user_id}");

  String s_uniqueName(L"{");
  s_uniqueName.Append(L"unique_name");
  s_uniqueName.Append(L"}");
  url.Replace(s_uniqueName, stringify(uniqueName, L"String*"));
  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));

  client->execute(SamiUsersGroupsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getGroupTemplateUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiTemplateResource* out = new SamiTemplateResource();
    jsonToValue(out, pJson, L"SamiTemplateResource*", L"SamiTemplateResource");

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

SamiTemplateResource* 
SamiUsersGroupsApi::getGroupTemplateUsingGETWithCompletion(String* _id, void (* success)(SamiTemplateResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getGroupTemplateUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/users/groups/templates/{id}");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"String*"));

  client->execute(SamiUsersGroupsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getGroupTemplatesUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«TemplateResource»* out = new SamiPageResource«TemplateResource»();
    jsonToValue(out, pJson, L"SamiPageResource«TemplateResource»*", L"SamiPageResource«TemplateResource»");

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

SamiPageResource«TemplateResource»* 
SamiUsersGroupsApi::getGroupTemplatesUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* success)(SamiPageResource«TemplateResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getGroupTemplatesUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("order"), order);

  String* mBody = null;


  String url(L"/users/groups/templates");


  client->execute(SamiUsersGroupsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getGroupUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiGroupResource* out = new SamiGroupResource();
    jsonToValue(out, pJson, L"SamiGroupResource*", L"SamiGroupResource");

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

SamiGroupResource* 
SamiUsersGroupsApi::getGroupUsingGETWithCompletion(String* uniqueName, void (* success)(SamiGroupResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getGroupUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/users/groups/{unique_name}");

  String s_uniqueName(L"{");
  s_uniqueName.Append(L"unique_name");
  s_uniqueName.Append(L"}");
  url.Replace(s_uniqueName, stringify(uniqueName, L"String*"));

  client->execute(SamiUsersGroupsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
searchGroupsUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«GroupMemberResource»* out = new SamiPageResource«GroupMemberResource»();
    jsonToValue(out, pJson, L"SamiPageResource«GroupMemberResource»*", L"SamiPageResource«GroupMemberResource»");

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

SamiPageResource«GroupMemberResource»* 
SamiUsersGroupsApi::searchGroupsUsingGETWithCompletion(String* uniqueName, Integer* size, Integer* page, String* order, void (* success)(SamiPageResource«GroupMemberResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&searchGroupsUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("order"), order);

  String* mBody = null;


  String url(L"/users/groups/{unique_name}/members");

  String s_uniqueName(L"{");
  s_uniqueName.Append(L"unique_name");
  s_uniqueName.Append(L"}");
  url.Replace(s_uniqueName, stringify(uniqueName, L"String*"));

  client->execute(SamiUsersGroupsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
searchGroupsUsingGET1Processor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«GroupResource»* out = new SamiPageResource«GroupResource»();
    jsonToValue(out, pJson, L"SamiPageResource«GroupResource»*", L"SamiPageResource«GroupResource»");

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

SamiPageResource«GroupResource»* 
SamiUsersGroupsApi::searchGroupsUsingGET1WithCompletion(Integer* size, Integer* page, String* order, void (* success)(SamiPageResource«GroupResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&searchGroupsUsingGET1Processor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("order"), order);

  String* mBody = null;


  String url(L"/users/groups");


  client->execute(SamiUsersGroupsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
updateGroupTemplateUsingPUTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiUsersGroupsApi::updateGroupTemplateUsingPUTWithCompletion(String* _id, SamiTemplateResource* groupTemplateResource, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateGroupTemplateUsingPUTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(groupTemplateResource != null) {
    mBody = new String(groupTemplateResource->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/users/groups/templates/{id}");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"String*"));

  client->execute(SamiUsersGroupsApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
updateGroupUsingPUTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiUsersGroupsApi::updateGroupUsingPUTWithCompletion(String* uniqueName, SamiGroupResource* groupResource, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateGroupUsingPUTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(groupResource != null) {
    mBody = new String(groupResource->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/users/groups/{unique_name}");

  String s_uniqueName(L"{");
  s_uniqueName.Append(L"unique_name");
  s_uniqueName.Append(L"}");
  url.Replace(s_uniqueName, stringify(uniqueName, L"String*"));

  client->execute(SamiUsersGroupsApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
updateMemberStatusUsingPUTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiUsersGroupsApi::updateMemberStatusUsingPUTWithCompletion(String* uniqueName, Integer* userId, String* status, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateMemberStatusUsingPUTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(status != null) {
    mBody = new String(status->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/users/groups/{unique_name}/members/{user_id}/status");

  String s_uniqueName(L"{");
  s_uniqueName.Append(L"unique_name");
  s_uniqueName.Append(L"}");
  url.Replace(s_uniqueName, stringify(uniqueName, L"String*"));
  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));

  client->execute(SamiUsersGroupsApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}


} /* namespace Swagger */
