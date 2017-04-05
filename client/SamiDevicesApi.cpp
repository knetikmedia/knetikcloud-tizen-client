#include "SamiDevicesApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiDevicesApi::SamiDevicesApi() {

}

SamiDevicesApi::~SamiDevicesApi() {

}

void
createDeviceProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiDeviceResource* out = new SamiDeviceResource();
    jsonToValue(out, pJson, L"SamiDeviceResource*", L"SamiDeviceResource");

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

SamiDeviceResource* 
SamiDevicesApi::createDeviceWithCompletion(SamiDeviceResource* device, void (* success)(SamiDeviceResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&createDeviceProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(device != null) {
    mBody = new String(device->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/devices");


  client->execute(SamiDevicesApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
deleteDeviceProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiDevicesApi::deleteDeviceWithCompletion(Integer* _id, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteDeviceProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/devices/{id}");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Integer*"));

  client->execute(SamiDevicesApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
getDeviceProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiDeviceResource* out = new SamiDeviceResource();
    jsonToValue(out, pJson, L"SamiDeviceResource*", L"SamiDeviceResource");

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

SamiDeviceResource* 
SamiDevicesApi::getDeviceWithCompletion(Integer* _id, void (* success)(SamiDeviceResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getDeviceProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/devices/{id}");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Integer*"));

  client->execute(SamiDevicesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getDevicesProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«DeviceResource»* out = new SamiPageResource«DeviceResource»();
    jsonToValue(out, pJson, L"SamiPageResource«DeviceResource»*", L"SamiPageResource«DeviceResource»");

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

SamiPageResource«DeviceResource»* 
SamiDevicesApi::getDevicesWithCompletion(String* filterMake, String* filterModel, Integer* size, Integer* page, String* order, void (* success)(SamiPageResource«DeviceResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getDevicesProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("filter_make"), filterMake);

    queryParams->Add(new String("filter_model"), filterModel);

    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("order"), order);

  String* mBody = null;


  String url(L"/devices");


  client->execute(SamiDevicesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
updateDeviceProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiDeviceResource* out = new SamiDeviceResource();
    jsonToValue(out, pJson, L"SamiDeviceResource*", L"SamiDeviceResource");

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

SamiDeviceResource* 
SamiDevicesApi::updateDeviceWithCompletion(SamiDeviceResource* device, Integer* _id, void (* success)(SamiDeviceResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateDeviceProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(device != null) {
    mBody = new String(device->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/devices/{id}");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Integer*"));

  client->execute(SamiDevicesApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
