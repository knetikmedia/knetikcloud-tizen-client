#include "SamiUsersInventoryApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiUsersInventoryApi::SamiUsersInventoryApi() {

}

SamiUsersInventoryApi::~SamiUsersInventoryApi() {

}

void
addItemToUserInventoryProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiInvoiceResource* out = new SamiInvoiceResource();
    jsonToValue(out, pJson, L"SamiInvoiceResource*", L"SamiInvoiceResource");

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

SamiInvoiceResource* 
SamiUsersInventoryApi::addItemToUserInventoryWithCompletion(Integer* _id, SamiUserInventoryAddRequest* userInventoryAddRequest, void (* success)(SamiInvoiceResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&addItemToUserInventoryProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(userInventoryAddRequest != null) {
    mBody = new String(userInventoryAddRequest->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/users/{id}/inventory");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Integer*"));

  client->execute(SamiUsersInventoryApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
checkUserEntitlementItemProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiUsersInventoryApi::checkUserEntitlementItemWithCompletion(String* userId, Integer* itemId, String* sku, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&checkUserEntitlementItemProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("sku"), sku);

  String* mBody = null;


  String url(L"/users/{user_id}/entitlements/{item_id}/check");

  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"String*"));
  String s_itemId(L"{");
  s_itemId.Append(L"item_id");
  s_itemId.Append(L"}");
  url.Replace(s_itemId, stringify(itemId, L"Integer*"));

  client->execute(SamiUsersInventoryApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
createEntitlementItemProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiEntitlementItem* out = new SamiEntitlementItem();
    jsonToValue(out, pJson, L"SamiEntitlementItem*", L"SamiEntitlementItem");

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

SamiEntitlementItem* 
SamiUsersInventoryApi::createEntitlementItemWithCompletion(Boolean* cascade, SamiEntitlementItem* entitlementItem, void (* success)(SamiEntitlementItem*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&createEntitlementItemProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("cascade"), cascade);

  String* mBody = null;

  if(entitlementItem != null) {
    mBody = new String(entitlementItem->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/entitlements");


  client->execute(SamiUsersInventoryApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
createEntitlementTemplateProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiItemTemplateResource* out = new SamiItemTemplateResource();
    jsonToValue(out, pJson, L"SamiItemTemplateResource*", L"SamiItemTemplateResource");

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

SamiItemTemplateResource* 
SamiUsersInventoryApi::createEntitlementTemplateWithCompletion(SamiItemTemplateResource* template, void (* success)(SamiItemTemplateResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&createEntitlementTemplateProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(template != null) {
    mBody = new String(template->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/entitlements/templates");


  client->execute(SamiUsersInventoryApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
deleteEntitlementItemProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiUsersInventoryApi::deleteEntitlementItemWithCompletion(Integer* entitlementId, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteEntitlementItemProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/entitlements/{entitlement_id}");

  String s_entitlementId(L"{");
  s_entitlementId.Append(L"entitlement_id");
  s_entitlementId.Append(L"}");
  url.Replace(s_entitlementId, stringify(entitlementId, L"Integer*"));

  client->execute(SamiUsersInventoryApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
deleteEntitlementTemplateProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiUsersInventoryApi::deleteEntitlementTemplateWithCompletion(String* _id, String* cascade, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteEntitlementTemplateProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("cascade"), cascade);

  String* mBody = null;


  String url(L"/entitlements/templates/{id}");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"String*"));

  client->execute(SamiUsersInventoryApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
getEntitlementItemProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiEntitlementItem* out = new SamiEntitlementItem();
    jsonToValue(out, pJson, L"SamiEntitlementItem*", L"SamiEntitlementItem");

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

SamiEntitlementItem* 
SamiUsersInventoryApi::getEntitlementItemWithCompletion(Integer* entitlementId, void (* success)(SamiEntitlementItem*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getEntitlementItemProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/entitlements/{entitlement_id}");

  String s_entitlementId(L"{");
  s_entitlementId.Append(L"entitlement_id");
  s_entitlementId.Append(L"}");
  url.Replace(s_entitlementId, stringify(entitlementId, L"Integer*"));

  client->execute(SamiUsersInventoryApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getEntitlementItemsProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«EntitlementItem»* out = new SamiPageResource«EntitlementItem»();
    jsonToValue(out, pJson, L"SamiPageResource«EntitlementItem»*", L"SamiPageResource«EntitlementItem»");

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

SamiPageResource«EntitlementItem»* 
SamiUsersInventoryApi::getEntitlementItemsWithCompletion(Integer* size, Integer* page, String* order, void (* success)(SamiPageResource«EntitlementItem»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getEntitlementItemsProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("order"), order);

  String* mBody = null;


  String url(L"/entitlements");


  client->execute(SamiUsersInventoryApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getEntitlementTemplateProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiItemTemplateResource* out = new SamiItemTemplateResource();
    jsonToValue(out, pJson, L"SamiItemTemplateResource*", L"SamiItemTemplateResource");

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

SamiItemTemplateResource* 
SamiUsersInventoryApi::getEntitlementTemplateWithCompletion(String* _id, void (* success)(SamiItemTemplateResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getEntitlementTemplateProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/entitlements/templates/{id}");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"String*"));

  client->execute(SamiUsersInventoryApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getEntitlementTemplatesProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«ItemTemplateResource»* out = new SamiPageResource«ItemTemplateResource»();
    jsonToValue(out, pJson, L"SamiPageResource«ItemTemplateResource»*", L"SamiPageResource«ItemTemplateResource»");

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

SamiPageResource«ItemTemplateResource»* 
SamiUsersInventoryApi::getEntitlementTemplatesWithCompletion(Integer* size, Integer* page, String* order, void (* success)(SamiPageResource«ItemTemplateResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getEntitlementTemplatesProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("order"), order);

  String* mBody = null;


  String url(L"/entitlements/templates");


  client->execute(SamiUsersInventoryApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getUserInventoriesProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«UserInventoryResource»* out = new SamiPageResource«UserInventoryResource»();
    jsonToValue(out, pJson, L"SamiPageResource«UserInventoryResource»*", L"SamiPageResource«UserInventoryResource»");

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

SamiPageResource«UserInventoryResource»* 
SamiUsersInventoryApi::getUserInventoriesWithCompletion(Integer* _id, Boolean* inactive, Integer* size, Integer* page, String* filterItemName, Integer* filterItemId, String* filterUsername, String* filterGroup, String* filterDate, void (* success)(SamiPageResource«UserInventoryResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getUserInventoriesProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("inactive"), inactive);

    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("filter_item_name"), filterItemName);

    queryParams->Add(new String("filter_item_id"), filterItemId);

    queryParams->Add(new String("filter_username"), filterUsername);

    queryParams->Add(new String("filter_group"), filterGroup);

    queryParams->Add(new String("filter_date"), filterDate);

  String* mBody = null;


  String url(L"/users/{id}/inventory");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Integer*"));

  client->execute(SamiUsersInventoryApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getUserInventoryProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiUserInventoryResource* out = new SamiUserInventoryResource();
    jsonToValue(out, pJson, L"SamiUserInventoryResource*", L"SamiUserInventoryResource");

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

SamiUserInventoryResource* 
SamiUsersInventoryApi::getUserInventoryWithCompletion(Integer* userId, Integer* _id, void (* success)(SamiUserInventoryResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getUserInventoryProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/users/{user_id}/inventory/{id}");

  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));
  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Integer*"));

  client->execute(SamiUsersInventoryApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getUserInventoryLogProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«UserItemLogResource»* out = new SamiPageResource«UserItemLogResource»();
    jsonToValue(out, pJson, L"SamiPageResource«UserItemLogResource»*", L"SamiPageResource«UserItemLogResource»");

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

SamiPageResource«UserItemLogResource»* 
SamiUsersInventoryApi::getUserInventoryLogWithCompletion(String* userId, Integer* _id, Integer* size, Integer* page, void (* success)(SamiPageResource«UserItemLogResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getUserInventoryLogProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

  String* mBody = null;


  String url(L"/users/{user_id}/inventory/{id}/log");

  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"String*"));
  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Integer*"));

  client->execute(SamiUsersInventoryApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getUsersInventoryProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«UserInventoryResource»* out = new SamiPageResource«UserInventoryResource»();
    jsonToValue(out, pJson, L"SamiPageResource«UserInventoryResource»*", L"SamiPageResource«UserInventoryResource»");

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

SamiPageResource«UserInventoryResource»* 
SamiUsersInventoryApi::getUsersInventoryWithCompletion(Boolean* inactive, Integer* size, Integer* page, String* filterItemName, Integer* filterItemId, String* filterUsername, String* filterGroup, String* filterDate, void (* success)(SamiPageResource«UserInventoryResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getUsersInventoryProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("inactive"), inactive);

    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("filter_item_name"), filterItemName);

    queryParams->Add(new String("filter_item_id"), filterItemId);

    queryParams->Add(new String("filter_username"), filterUsername);

    queryParams->Add(new String("filter_group"), filterGroup);

    queryParams->Add(new String("filter_date"), filterDate);

  String* mBody = null;


  String url(L"/inventories");


  client->execute(SamiUsersInventoryApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
grantUserEntitlementProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiUsersInventoryApi::grantUserEntitlementWithCompletion(Integer* userId, SamiEntitlementGrantRequest* grantRequest, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&grantUserEntitlementProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(grantRequest != null) {
    mBody = new String(grantRequest->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/users/{user_id}/entitlements");

  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));

  client->execute(SamiUsersInventoryApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
updateEntitlementItemProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiUsersInventoryApi::updateEntitlementItemWithCompletion(Integer* entitlementId, Boolean* cascade, SamiEntitlementItem* entitlementItem, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateEntitlementItemProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("cascade"), cascade);

  String* mBody = null;

  if(entitlementItem != null) {
    mBody = new String(entitlementItem->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/entitlements/{entitlement_id}");

  String s_entitlementId(L"{");
  s_entitlementId.Append(L"entitlement_id");
  s_entitlementId.Append(L"}");
  url.Replace(s_entitlementId, stringify(entitlementId, L"Integer*"));

  client->execute(SamiUsersInventoryApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
updateEntitlementTemplateProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiItemTemplateResource* out = new SamiItemTemplateResource();
    jsonToValue(out, pJson, L"SamiItemTemplateResource*", L"SamiItemTemplateResource");

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

SamiItemTemplateResource* 
SamiUsersInventoryApi::updateEntitlementTemplateWithCompletion(String* _id, SamiItemTemplateResource* template, void (* success)(SamiItemTemplateResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateEntitlementTemplateProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(template != null) {
    mBody = new String(template->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/entitlements/templates/{id}");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"String*"));

  client->execute(SamiUsersInventoryApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
updateUserInventoryBehaviorDataProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiUsersInventoryApi::updateUserInventoryBehaviorDataWithCompletion(Integer* userId, Integer* _id, SamiObject* data, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateUserInventoryBehaviorDataProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(data != null) {
    mBody = new String(data->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/users/{user_id}/inventory/{id}/behavior-data");

  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));
  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Integer*"));

  client->execute(SamiUsersInventoryApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
updateUserInventoryExpiresProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiUsersInventoryApi::updateUserInventoryExpiresWithCompletion(Integer* userId, Integer* _id, Long* timestamp, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateUserInventoryExpiresProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(timestamp != null) {
    mBody = new String(timestamp->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/users/{user_id}/inventory/{id}/expires");

  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));
  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Integer*"));

  client->execute(SamiUsersInventoryApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
updateUserInventoryStatusProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiUsersInventoryApi::updateUserInventoryStatusWithCompletion(Integer* userId, Integer* _id, String* inventoryStatus, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateUserInventoryStatusProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(inventoryStatus != null) {
    mBody = new String(inventoryStatus->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/users/{user_id}/inventory/{id}/status");

  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));
  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"Integer*"));

  client->execute(SamiUsersInventoryApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
useUserEntitlementItemProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiUsersInventoryApi::useUserEntitlementItemWithCompletion(String* userId, Integer* itemId, String* sku, String* info, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&useUserEntitlementItemProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("sku"), sku);

    queryParams->Add(new String("info"), info);

  String* mBody = null;


  String url(L"/users/{user_id}/entitlements/{item_id}/use");

  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"String*"));
  String s_itemId(L"{");
  s_itemId.Append(L"item_id");
  s_itemId.Append(L"}");
  url.Replace(s_itemId, stringify(itemId, L"Integer*"));

  client->execute(SamiUsersInventoryApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}


} /* namespace Swagger */
