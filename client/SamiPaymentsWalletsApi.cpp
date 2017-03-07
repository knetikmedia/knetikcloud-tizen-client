#include "SamiPaymentsWalletsApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiPaymentsWalletsApi::SamiPaymentsWalletsApi() {

}

SamiPaymentsWalletsApi::~SamiPaymentsWalletsApi() {

}

void
getUserWalletProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiSimpleWallet* out = new SamiSimpleWallet();
    jsonToValue(out, pJson, L"SamiSimpleWallet*", L"SamiSimpleWallet");

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

SamiSimpleWallet* 
SamiPaymentsWalletsApi::getUserWalletWithCompletion(Integer* userId, String* currencyCode, void (* success)(SamiSimpleWallet*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getUserWalletProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/users/{user_id}/wallets/{currency_code}");

  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));
  String s_currencyCode(L"{");
  s_currencyCode.Append(L"currency_code");
  s_currencyCode.Append(L"}");
  url.Replace(s_currencyCode, stringify(currencyCode, L"String*"));

  client->execute(SamiPaymentsWalletsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getUserWalletTransactionsProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«WalletTransactionResource»* out = new SamiPageResource«WalletTransactionResource»();
    jsonToValue(out, pJson, L"SamiPageResource«WalletTransactionResource»*", L"SamiPageResource«WalletTransactionResource»");

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

SamiPageResource«WalletTransactionResource»* 
SamiPaymentsWalletsApi::getUserWalletTransactionsWithCompletion(Integer* userId, String* currencyCode, String* filterType, Long* filterMaxDate, Long* filterMinDate, String* filterSign, Integer* size, Integer* page, String* order, void (* success)(SamiPageResource«WalletTransactionResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getUserWalletTransactionsProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("filter_type"), filterType);

    queryParams->Add(new String("filter_max_date"), filterMaxDate);

    queryParams->Add(new String("filter_min_date"), filterMinDate);

    queryParams->Add(new String("filter_sign"), filterSign);

    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("order"), order);

  String* mBody = null;


  String url(L"/users/{user_id}/wallets/{currency_code}/transactions");

  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));
  String s_currencyCode(L"{");
  s_currencyCode.Append(L"currency_code");
  s_currencyCode.Append(L"}");
  url.Replace(s_currencyCode, stringify(currencyCode, L"String*"));

  client->execute(SamiPaymentsWalletsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getUserWalletsProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiSimpleWallet");

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
SamiPaymentsWalletsApi::getUserWalletsWithCompletion(Integer* userId, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getUserWalletsProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/users/{user_id}/wallets");

  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));

  client->execute(SamiPaymentsWalletsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getWalletBalancesProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«WalletTotalResponse»* out = new SamiPageResource«WalletTotalResponse»();
    jsonToValue(out, pJson, L"SamiPageResource«WalletTotalResponse»*", L"SamiPageResource«WalletTotalResponse»");

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

SamiPageResource«WalletTotalResponse»* 
SamiPaymentsWalletsApi::getWalletBalancesWithCompletion( void (* success)(SamiPageResource«WalletTotalResponse»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getWalletBalancesProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/wallets/totals");


  client->execute(SamiPaymentsWalletsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getWalletTransactionsProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«WalletTransactionResource»* out = new SamiPageResource«WalletTransactionResource»();
    jsonToValue(out, pJson, L"SamiPageResource«WalletTransactionResource»*", L"SamiPageResource«WalletTransactionResource»");

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

SamiPageResource«WalletTransactionResource»* 
SamiPaymentsWalletsApi::getWalletTransactionsWithCompletion(Integer* filterInvoice, String* filterType, String* filterDate, String* filterSign, Integer* filterUserId, String* filterUsername, String* filterDetails, String* filterCurrencyCode, Integer* size, Integer* page, String* order, void (* success)(SamiPageResource«WalletTransactionResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getWalletTransactionsProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("filter_invoice"), filterInvoice);

    queryParams->Add(new String("filter_type"), filterType);

    queryParams->Add(new String("filter_date"), filterDate);

    queryParams->Add(new String("filter_sign"), filterSign);

    queryParams->Add(new String("filter_user_id"), filterUserId);

    queryParams->Add(new String("filter_username"), filterUsername);

    queryParams->Add(new String("filter_details"), filterDetails);

    queryParams->Add(new String("filter_currency_code"), filterCurrencyCode);

    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("order"), order);

  String* mBody = null;


  String url(L"/wallets/transactions");


  client->execute(SamiPaymentsWalletsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getWalletsProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«SimpleWallet»* out = new SamiPageResource«SimpleWallet»();
    jsonToValue(out, pJson, L"SamiPageResource«SimpleWallet»*", L"SamiPageResource«SimpleWallet»");

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

SamiPageResource«SimpleWallet»* 
SamiPaymentsWalletsApi::getWalletsWithCompletion(Integer* size, Integer* page, String* order, void (* success)(SamiPageResource«SimpleWallet»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getWalletsProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("order"), order);

  String* mBody = null;


  String url(L"/wallets");


  client->execute(SamiPaymentsWalletsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
updateWalletBalanceProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiWalletTransactionResource* out = new SamiWalletTransactionResource();
    jsonToValue(out, pJson, L"SamiWalletTransactionResource*", L"SamiWalletTransactionResource");

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

SamiWalletTransactionResource* 
SamiPaymentsWalletsApi::updateWalletBalanceWithCompletion(Integer* userId, String* currencyCode, SamiWalletAlterRequest* request, void (* success)(SamiWalletTransactionResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateWalletBalanceProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(request != null) {
    mBody = new String(request->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/users/{user_id}/wallets/{currency_code}/balance");

  String s_userId(L"{");
  s_userId.Append(L"user_id");
  s_userId.Append(L"}");
  url.Replace(s_userId, stringify(userId, L"Integer*"));
  String s_currencyCode(L"{");
  s_currencyCode.Append(L"currency_code");
  s_currencyCode.Append(L"}");
  url.Replace(s_currencyCode, stringify(currencyCode, L"String*"));

  client->execute(SamiPaymentsWalletsApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
