#include "SamiSearchApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiSearchApi::SamiSearchApi() {

}

SamiSearchApi::~SamiSearchApi() {

}

void
externalAddUsingPOSTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiSearchApi::externalAddUsingPOSTWithCompletion(String* type, String* _id, SamiObject* object, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&externalAddUsingPOSTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(object != null) {
    mBody = new String(object->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/search/index/{type}/{id}");

  String s_type(L"{");
  s_type.Append(L"type");
  s_type.Append(L"}");
  url.Replace(s_type, stringify(type, L"String*"));
  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"String*"));

  client->execute(SamiSearchApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
externalDeleteAllUsingDELETEProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiSearchApi::externalDeleteAllUsingDELETEWithCompletion(String* type, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&externalDeleteAllUsingDELETEProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/search/index/{type}");

  String s_type(L"{");
  s_type.Append(L"type");
  s_type.Append(L"}");
  url.Replace(s_type, stringify(type, L"String*"));

  client->execute(SamiSearchApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
externalDeleteUsingDELETEProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiSearchApi::externalDeleteUsingDELETEWithCompletion(String* type, String* _id, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&externalDeleteUsingDELETEProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/search/index/{type}/{id}");

  String s_type(L"{");
  s_type.Append(L"type");
  s_type.Append(L"}");
  url.Replace(s_type, stringify(type, L"String*"));
  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"String*"));

  client->execute(SamiSearchApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
externalRegisterUsingPOSTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiSearchApi::externalRegisterUsingPOSTWithCompletion(IList* mappings, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&externalRegisterUsingPOSTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(mappings != null) {
    mBody = new String("");
    int sz = mappings->GetCount();
    for(int i = 0; i < sz; i++) {
      SamiObject * obj = (SamiObject*)mappings->GetAt(i);
      String json = obj->asJson();
      if(i > 0)
        mBody->Append(",");
      mBody->Append(json);
    }
    mBody->Append("]");
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/search/mappings");


  client->execute(SamiSearchApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
searchUsingPOSTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«Map«string,object»»* out = new SamiPageResource«Map«string,object»»();
    jsonToValue(out, pJson, L"SamiPageResource«Map«string,object»»*", L"SamiPageResource«Map«string,object»»");

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

SamiPageResource«Map«string,object»»* 
SamiSearchApi::searchUsingPOSTWithCompletion(String* type, SamiObject* query, Integer* size, Integer* page, void (* success)(SamiPageResource«Map«string,object»»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&searchUsingPOSTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

  String* mBody = null;

  if(query != null) {
    mBody = new String(query->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/search/index/{type}");

  String s_type(L"{");
  s_type.Append(L"type");
  s_type.Append(L"}");
  url.Replace(s_type, stringify(type, L"String*"));

  client->execute(SamiSearchApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
