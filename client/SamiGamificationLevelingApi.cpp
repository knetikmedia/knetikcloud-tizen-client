#include "SamiGamificationLevelingApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiGamificationLevelingApi::SamiGamificationLevelingApi() {

}

SamiGamificationLevelingApi::~SamiGamificationLevelingApi() {

}

void
createLevelProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiLevelingResource* out = new SamiLevelingResource();
    jsonToValue(out, pJson, L"SamiLevelingResource*", L"SamiLevelingResource");

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

SamiLevelingResource* 
SamiGamificationLevelingApi::createLevelWithCompletion(SamiLevelingResource* level, void (* success)(SamiLevelingResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&createLevelProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(level != null) {
    mBody = new String(level->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/leveling");


  client->execute(SamiGamificationLevelingApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
deleteLevelProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiGamificationLevelingApi::deleteLevelWithCompletion(String* name, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteLevelProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/leveling/{name}");

  String s_name(L"{");
  s_name.Append(L"name");
  s_name.Append(L"}");
  url.Replace(s_name, stringify(name, L"String*"));

  client->execute(SamiGamificationLevelingApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
getLevelProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiLevelingResource* out = new SamiLevelingResource();
    jsonToValue(out, pJson, L"SamiLevelingResource*", L"SamiLevelingResource");

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

SamiLevelingResource* 
SamiGamificationLevelingApi::getLevelWithCompletion(String* name, void (* success)(SamiLevelingResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getLevelProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/leveling/{name}");

  String s_name(L"{");
  s_name.Append(L"name");
  s_name.Append(L"}");
  url.Replace(s_name, stringify(name, L"String*"));

  client->execute(SamiGamificationLevelingApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getLevelTriggersProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiBreTriggerResource");

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
SamiGamificationLevelingApi::getLevelTriggersWithCompletion( void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getLevelTriggersProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/leveling/triggers");


  client->execute(SamiGamificationLevelingApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getLevelsProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«LevelingResource»* out = new SamiPageResource«LevelingResource»();
    jsonToValue(out, pJson, L"SamiPageResource«LevelingResource»*", L"SamiPageResource«LevelingResource»");

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

SamiPageResource«LevelingResource»* 
SamiGamificationLevelingApi::getLevelsWithCompletion(String* filterName, Integer* size, Integer* page, String* order, void (* success)(SamiPageResource«LevelingResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getLevelsProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("filter_name"), filterName);

    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("order"), order);

  String* mBody = null;


  String url(L"/leveling");


  client->execute(SamiGamificationLevelingApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getUserLevelProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiUserLevelingResource* out = new SamiUserLevelingResource();
    jsonToValue(out, pJson, L"SamiUserLevelingResource*", L"SamiUserLevelingResource");

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

SamiUserLevelingResource* 
SamiGamificationLevelingApi::getUserLevelWithCompletion(Integer* userId, String* name, void (* success)(SamiUserLevelingResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getUserLevelProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/users/{user_id}/leveling/{name}");

  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));
  String s_name(L"{");
  s_name.Append(L"name");
  s_name.Append(L"}");
  url.Replace(s_name, stringify(name, L"String*"));

  client->execute(SamiGamificationLevelingApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getUserLevelsProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«UserLevelingResource»* out = new SamiPageResource«UserLevelingResource»();
    jsonToValue(out, pJson, L"SamiPageResource«UserLevelingResource»*", L"SamiPageResource«UserLevelingResource»");

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

SamiPageResource«UserLevelingResource»* 
SamiGamificationLevelingApi::getUserLevelsWithCompletion(Integer* userId, String* filterName, Integer* size, Integer* page, String* order, void (* success)(SamiPageResource«UserLevelingResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getUserLevelsProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("filter_name"), filterName);

    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("order"), order);

  String* mBody = null;


  String url(L"/users/{user_id}/leveling");

  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));

  client->execute(SamiGamificationLevelingApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
incrementProgressProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiGamificationLevelingApi::incrementProgressWithCompletion(Integer* userId, String* name, Integer* progress, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&incrementProgressProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(progress != null) {
    mBody = new String(progress->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/users/{user_id}/leveling/{name}/progress");

  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));
  String s_name(L"{");
  s_name.Append(L"name");
  s_name.Append(L"}");
  url.Replace(s_name, stringify(name, L"String*"));

  client->execute(SamiGamificationLevelingApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
setProgressProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiGamificationLevelingApi::setProgressWithCompletion(Integer* userId, String* name, Integer* progress, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&setProgressProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(progress != null) {
    mBody = new String(progress->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/users/{user_id}/leveling/{name}/progress");

  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));
  String s_name(L"{");
  s_name.Append(L"name");
  s_name.Append(L"}");
  url.Replace(s_name, stringify(name, L"String*"));

  client->execute(SamiGamificationLevelingApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
updateLevelProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiLevelingResource* out = new SamiLevelingResource();
    jsonToValue(out, pJson, L"SamiLevelingResource*", L"SamiLevelingResource");

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

SamiLevelingResource* 
SamiGamificationLevelingApi::updateLevelWithCompletion(String* name, SamiLevelingResource* newLevel, void (* success)(SamiLevelingResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateLevelProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(newLevel != null) {
    mBody = new String(newLevel->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/leveling/{name}");

  String s_name(L"{");
  s_name.Append(L"name");
  s_name.Append(L"}");
  url.Replace(s_name, stringify(name, L"String*"));

  client->execute(SamiGamificationLevelingApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
