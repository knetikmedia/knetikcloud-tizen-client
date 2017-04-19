#include "SamiActivitiesApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiActivitiesApi::SamiActivitiesApi() {

}

SamiActivitiesApi::~SamiActivitiesApi() {

}

void
createActivityProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiActivityResource* out = new SamiActivityResource();
    jsonToValue(out, pJson, L"SamiActivityResource*", L"SamiActivityResource");

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

SamiActivityResource* 
SamiActivitiesApi::createActivityWithCompletion(SamiActivityResource* activityResource, void (* success)(SamiActivityResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&createActivityProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(activityResource != null) {
    mBody = new String(activityResource->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/activities");


  client->execute(SamiActivitiesApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
createActivityOccurrenceProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiActivityOccurrenceResource* out = new SamiActivityOccurrenceResource();
    jsonToValue(out, pJson, L"SamiActivityOccurrenceResource*", L"SamiActivityOccurrenceResource");

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

SamiActivityOccurrenceResource* 
SamiActivitiesApi::createActivityOccurrenceWithCompletion(Boolean* test, SamiActivityOccurrenceResource* activityOccurrenceResource, void (* success)(SamiActivityOccurrenceResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&createActivityOccurrenceProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("test"), test);

  String* mBody = null;

  if(activityOccurrenceResource != null) {
    mBody = new String(activityOccurrenceResource->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/activity-occurrences");


  client->execute(SamiActivitiesApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
createActivityTemplateProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiActivitiesApi::createActivityTemplateWithCompletion(SamiTemplateResource* activityTemplateResource, void (* success)(SamiTemplateResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&createActivityTemplateProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(activityTemplateResource != null) {
    mBody = new String(activityTemplateResource->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/activities/templates");


  client->execute(SamiActivitiesApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
deleteActivityProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiActivitiesApi::deleteActivityWithCompletion(Long* _id, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteActivityProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/activities/{id}");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Long*"));

  client->execute(SamiActivitiesApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
deleteActivityTemplateProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiActivitiesApi::deleteActivityTemplateWithCompletion(String* _id, String* cascade, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteActivityTemplateProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("cascade"), cascade);

  String* mBody = null;


  String url(L"/activities/templates/{id}");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"String*"));

  client->execute(SamiActivitiesApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
getActivitiesProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«BareActivityResource»* out = new SamiPageResource«BareActivityResource»();
    jsonToValue(out, pJson, L"SamiPageResource«BareActivityResource»*", L"SamiPageResource«BareActivityResource»");

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

SamiPageResource«BareActivityResource»* 
SamiActivitiesApi::getActivitiesWithCompletion(Boolean* filterTemplate, String* filterName, String* filterId, Integer* size, Integer* page, String* order, void (* success)(SamiPageResource«BareActivityResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getActivitiesProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("filter_template"), filterTemplate);

    queryParams->Add(new String("filter_name"), filterName);

    queryParams->Add(new String("filter_id"), filterId);

    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("order"), order);

  String* mBody = null;


  String url(L"/activities");


  client->execute(SamiActivitiesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getActivityProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiActivityResource* out = new SamiActivityResource();
    jsonToValue(out, pJson, L"SamiActivityResource*", L"SamiActivityResource");

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

SamiActivityResource* 
SamiActivitiesApi::getActivityWithCompletion(Long* _id, void (* success)(SamiActivityResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getActivityProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/activities/{id}");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Long*"));

  client->execute(SamiActivitiesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getActivityTemplateProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiActivitiesApi::getActivityTemplateWithCompletion(String* _id, void (* success)(SamiTemplateResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getActivityTemplateProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/activities/templates/{id}");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"String*"));

  client->execute(SamiActivitiesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getActivityTemplatesProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiActivitiesApi::getActivityTemplatesWithCompletion(Integer* size, Integer* page, String* order, void (* success)(SamiPageResource«TemplateResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getActivityTemplatesProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("order"), order);

  String* mBody = null;


  String url(L"/activities/templates");


  client->execute(SamiActivitiesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
setActivityOccurrenceResultsProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiActivityOccurrenceResults* out = new SamiActivityOccurrenceResults();
    jsonToValue(out, pJson, L"SamiActivityOccurrenceResults*", L"SamiActivityOccurrenceResults");

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

SamiActivityOccurrenceResults* 
SamiActivitiesApi::setActivityOccurrenceResultsWithCompletion(Long* activityOccurrenceId, SamiActivityOccurrenceResults* activityOccurrenceResults, void (* success)(SamiActivityOccurrenceResults*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&setActivityOccurrenceResultsProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(activityOccurrenceResults != null) {
    mBody = new String(activityOccurrenceResults->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/activity-occurrences/{activity_occurrence_id}/results");

  String s_activityOccurrenceId(L"{");
  s_activityOccurrenceId.Append(L"activity_occurrence_id");
  s_activityOccurrenceId.Append(L"}");
  url.Replace(s_activityOccurrenceId, stringify(activityOccurrenceId, L"Long*"));

  client->execute(SamiActivitiesApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
updateActivityProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiActivityResource* out = new SamiActivityResource();
    jsonToValue(out, pJson, L"SamiActivityResource*", L"SamiActivityResource");

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

SamiActivityResource* 
SamiActivitiesApi::updateActivityWithCompletion(Long* _id, SamiActivityResource* activityResource, void (* success)(SamiActivityResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateActivityProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(activityResource != null) {
    mBody = new String(activityResource->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/activities/{id}");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Long*"));

  client->execute(SamiActivitiesApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
updateActivityOccurrenceProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiActivitiesApi::updateActivityOccurrenceWithCompletion(Long* activityOccurrenceId, String* activityCccurrenceStatus, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateActivityOccurrenceProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(activityCccurrenceStatus != null) {
    mBody = new String(activityCccurrenceStatus->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/activity-occurrences/{activity_occurrence_id}/status");

  String s_activityOccurrenceId(L"{");
  s_activityOccurrenceId.Append(L"activity_occurrence_id");
  s_activityOccurrenceId.Append(L"}");
  url.Replace(s_activityOccurrenceId, stringify(activityOccurrenceId, L"Long*"));

  client->execute(SamiActivitiesApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
updateActivityTemplateProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiActivitiesApi::updateActivityTemplateWithCompletion(String* _id, SamiTemplateResource* activityTemplateResource, void (* success)(SamiTemplateResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateActivityTemplateProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(activityTemplateResource != null) {
    mBody = new String(activityTemplateResource->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/activities/templates/{id}");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"String*"));

  client->execute(SamiActivitiesApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
