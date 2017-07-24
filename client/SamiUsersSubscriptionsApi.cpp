#include "SamiUsersSubscriptionsApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiUsersSubscriptionsApi::SamiUsersSubscriptionsApi() {

}

SamiUsersSubscriptionsApi::~SamiUsersSubscriptionsApi() {

}

void
getUserSubscriptionDetailsProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiInventorySubscriptionResource* out = new SamiInventorySubscriptionResource();
    jsonToValue(out, pJson, L"SamiInventorySubscriptionResource*", L"SamiInventorySubscriptionResource");

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

SamiInventorySubscriptionResource* 
SamiUsersSubscriptionsApi::getUserSubscriptionDetailsWithCompletion(Integer* userId, Integer* inventoryId, void (* success)(SamiInventorySubscriptionResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getUserSubscriptionDetailsProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/users/{user_id}/subscriptions/{inventory_id}");

  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));
  String s_inventoryId(L"{");
  s_inventoryId.Append(L"inventory_id");
  s_inventoryId.Append(L"}");
  url.Replace(s_inventoryId, stringify(inventoryId, L"Integer*"));

  client->execute(SamiUsersSubscriptionsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getUsersSubscriptionDetailsProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiInventorySubscriptionResource");

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
SamiUsersSubscriptionsApi::getUsersSubscriptionDetailsWithCompletion(Integer* userId, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getUsersSubscriptionDetailsProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/users/{user_id}/subscriptions");

  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));

  client->execute(SamiUsersSubscriptionsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
reactivateUserSubscriptionProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiUsersSubscriptionsApi::reactivateUserSubscriptionWithCompletion(Integer* userId, Integer* inventoryId, SamiReactivateSubscriptionRequest* reactivateSubscriptionRequest, void (* success)(SamiInvoiceResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&reactivateUserSubscriptionProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(reactivateSubscriptionRequest != null) {
    mBody = new String(reactivateSubscriptionRequest->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/users/{user_id}/subscriptions/{inventory_id}/reactivate");

  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));
  String s_inventoryId(L"{");
  s_inventoryId.Append(L"inventory_id");
  s_inventoryId.Append(L"}");
  url.Replace(s_inventoryId, stringify(inventoryId, L"Integer*"));

  client->execute(SamiUsersSubscriptionsApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
setSubscriptionBillDateProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiUsersSubscriptionsApi::setSubscriptionBillDateWithCompletion(Integer* userId, Integer* inventoryId, Long* billDate, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&setSubscriptionBillDateProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(billDate != null) {
    mBody = new String(billDate->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/users/{user_id}/subscriptions/{inventory_id}/bill-date");

  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));
  String s_inventoryId(L"{");
  s_inventoryId.Append(L"inventory_id");
  s_inventoryId.Append(L"}");
  url.Replace(s_inventoryId, stringify(inventoryId, L"Integer*"));

  client->execute(SamiUsersSubscriptionsApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
setSubscriptionPaymentMethodProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiUsersSubscriptionsApi::setSubscriptionPaymentMethodWithCompletion(Integer* userId, Integer* inventoryId, Integer* paymentMethodId, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&setSubscriptionPaymentMethodProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(paymentMethodId != null) {
    mBody = new String(paymentMethodId->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/users/{user_id}/subscriptions/{inventory_id}/payment-method");

  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));
  String s_inventoryId(L"{");
  s_inventoryId.Append(L"inventory_id");
  s_inventoryId.Append(L"}");
  url.Replace(s_inventoryId, stringify(inventoryId, L"Integer*"));

  client->execute(SamiUsersSubscriptionsApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
setSubscriptionStatusProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiUsersSubscriptionsApi::setSubscriptionStatusWithCompletion(Integer* userId, Integer* inventoryId, String* status, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&setSubscriptionStatusProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(status != null) {
    mBody = new String(status->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/users/{user_id}/subscriptions/{inventory_id}/status");

  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));
  String s_inventoryId(L"{");
  s_inventoryId.Append(L"inventory_id");
  s_inventoryId.Append(L"}");
  url.Replace(s_inventoryId, stringify(inventoryId, L"Integer*"));

  client->execute(SamiUsersSubscriptionsApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
setUserSubscriptionPlanProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiUsersSubscriptionsApi::setUserSubscriptionPlanWithCompletion(Integer* userId, Integer* inventoryId, String* planId, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&setUserSubscriptionPlanProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(planId != null) {
    mBody = new String(planId->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/users/{user_id}/subscriptions/{inventory_id}/plan");

  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));
  String s_inventoryId(L"{");
  s_inventoryId.Append(L"inventory_id");
  s_inventoryId.Append(L"}");
  url.Replace(s_inventoryId, stringify(inventoryId, L"Integer*"));

  client->execute(SamiUsersSubscriptionsApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
setUserSubscriptionPriceProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiUsersSubscriptionsApi::setUserSubscriptionPriceWithCompletion(Integer* userId, Integer* inventoryId, SamiSubscriptionPriceOverrideRequest* the override details, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&setUserSubscriptionPriceProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(the override details != null) {
    mBody = new String(the override details->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/users/{user_id}/subscriptions/{inventory_id}/price-override");

  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));
  String s_inventoryId(L"{");
  s_inventoryId.Append(L"inventory_id");
  s_inventoryId.Append(L"}");
  url.Replace(s_inventoryId, stringify(inventoryId, L"Integer*"));

  client->execute(SamiUsersSubscriptionsApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}


} /* namespace Swagger */
