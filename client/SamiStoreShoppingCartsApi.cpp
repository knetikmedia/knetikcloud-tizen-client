#include "SamiStoreShoppingCartsApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiStoreShoppingCartsApi::SamiStoreShoppingCartsApi() {

}

SamiStoreShoppingCartsApi::~SamiStoreShoppingCartsApi() {

}

void
addCustomDiscountProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiStoreShoppingCartsApi::addCustomDiscountWithCompletion(String* _id, SamiCouponDefinition* customDiscount, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&addCustomDiscountProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(customDiscount != null) {
    mBody = new String(customDiscount->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/carts/{id}/custom-discounts");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"String*"));

  client->execute(SamiStoreShoppingCartsApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
addDiscountToCartProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiStoreShoppingCartsApi::addDiscountToCartWithCompletion(String* _id, SamiSkuRequest* skuRequest, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&addDiscountToCartProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(skuRequest != null) {
    mBody = new String(skuRequest->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/carts/{id}/discounts");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"String*"));

  client->execute(SamiStoreShoppingCartsApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
addItemToCartProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiStoreShoppingCartsApi::addItemToCartWithCompletion(String* _id, SamiCartItemRequest* cartItemRequest, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&addItemToCartProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(cartItemRequest != null) {
    mBody = new String(cartItemRequest->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/carts/{id}/items");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"String*"));

  client->execute(SamiStoreShoppingCartsApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
createCartProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    String* out = new String();
    jsonToValue(out, pJson, L"String*", L"String");

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

String* 
SamiStoreShoppingCartsApi::createCartWithCompletion(Integer* owner, String* currencyCode, void (* success)(String*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&createCartProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("owner"), owner);

    queryParams->Add(new String("currency_code"), currencyCode);

  String* mBody = null;


  String url(L"/carts");


  client->execute(SamiStoreShoppingCartsApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getCartProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiCart* out = new SamiCart();
    jsonToValue(out, pJson, L"SamiCart*", L"SamiCart");

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

SamiCart* 
SamiStoreShoppingCartsApi::getCartWithCompletion(String* _id, void (* success)(SamiCart*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getCartProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/carts/{id}");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"String*"));

  client->execute(SamiStoreShoppingCartsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getCartsProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«CartSummary»* out = new SamiPageResource«CartSummary»();
    jsonToValue(out, pJson, L"SamiPageResource«CartSummary»*", L"SamiPageResource«CartSummary»");

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

SamiPageResource«CartSummary»* 
SamiStoreShoppingCartsApi::getCartsWithCompletion(Integer* filterOwnerId, Integer* size, Integer* page, String* order, void (* success)(SamiPageResource«CartSummary»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getCartsProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("filter_owner_id"), filterOwnerId);

    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("order"), order);

  String* mBody = null;


  String url(L"/carts");


  client->execute(SamiStoreShoppingCartsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getShippableProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiCartShippableResponse* out = new SamiCartShippableResponse();
    jsonToValue(out, pJson, L"SamiCartShippableResponse*", L"SamiCartShippableResponse");

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

SamiCartShippableResponse* 
SamiStoreShoppingCartsApi::getShippableWithCompletion(String* _id, void (* success)(SamiCartShippableResponse*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getShippableProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/carts/{id}/shippable");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"String*"));

  client->execute(SamiStoreShoppingCartsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getShippingCountriesProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiSampleCountriesResponse* out = new SamiSampleCountriesResponse();
    jsonToValue(out, pJson, L"SamiSampleCountriesResponse*", L"SamiSampleCountriesResponse");

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

SamiSampleCountriesResponse* 
SamiStoreShoppingCartsApi::getShippingCountriesWithCompletion(String* _id, void (* success)(SamiSampleCountriesResponse*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getShippingCountriesProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/carts/{id}/countries");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"String*"));

  client->execute(SamiStoreShoppingCartsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
removeDiscountFromCartProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiStoreShoppingCartsApi::removeDiscountFromCartWithCompletion(String* _id, String* code, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&removeDiscountFromCartProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/carts/{id}/discounts/{code}");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"String*"));
  String s_code(L"{");
  s_code.Append(L"code");
  s_code.Append(L"}");
  url.Replace(s_code, stringify(code, L"String*"));

  client->execute(SamiStoreShoppingCartsApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
setCartCurrencyProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiStoreShoppingCartsApi::setCartCurrencyWithCompletion(String* _id, String* currencyCode, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&setCartCurrencyProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(currencyCode != null) {
    mBody = new String(currencyCode->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/carts/{id}/currency");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"String*"));

  client->execute(SamiStoreShoppingCartsApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
setCartOwnerProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiStoreShoppingCartsApi::setCartOwnerWithCompletion(String* _id, Integer* userId, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&setCartOwnerProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(userId != null) {
    mBody = new String(userId->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/carts/{id}/owner");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"String*"));

  client->execute(SamiStoreShoppingCartsApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
updateItemInCartProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiStoreShoppingCartsApi::updateItemInCartWithCompletion(String* _id, SamiCartItemRequest* cartItemRequest, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateItemInCartProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(cartItemRequest != null) {
    mBody = new String(cartItemRequest->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/carts/{id}/items");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"String*"));

  client->execute(SamiStoreShoppingCartsApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
updateShippingAddressProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiStoreShoppingCartsApi::updateShippingAddressWithCompletion(String* _id, SamiCartShippingAddressRequest* cartShippingAddressRequest, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateShippingAddressProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(cartShippingAddressRequest != null) {
    mBody = new String(cartShippingAddressRequest->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/carts/{id}/shipping-address");

  String s__id(L"{");
  s__id.Append(L"id");
  s__id.Append(L"}");
  url.Replace(s__id, stringify(_id, L"String*"));

  client->execute(SamiStoreShoppingCartsApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}


} /* namespace Swagger */
