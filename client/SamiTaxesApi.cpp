#include "SamiTaxesApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiTaxesApi::SamiTaxesApi() {

}

SamiTaxesApi::~SamiTaxesApi() {

}

void
createTaxUsingPOSTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiTaxesApi::createTaxUsingPOSTWithCompletion(String* countryCodeIso3, SamiStateTaxResource* taxResource, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&createTaxUsingPOSTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(taxResource != null) {
    mBody = new String(taxResource->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/tax/countries/{country_code_iso3}/states");

  String s_countryCodeIso3(L"{");
  s_countryCodeIso3.Append(L"country_code_iso3");
  s_countryCodeIso3.Append(L"}");
  url.Replace(s_countryCodeIso3, stringify(countryCodeIso3, L"String*"));

  client->execute(SamiTaxesApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
deleteTaxUsingDELETEProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiTaxesApi::deleteTaxUsingDELETEWithCompletion(String* countryCodeIso3, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteTaxUsingDELETEProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/tax/countries/{country_code_iso3}");

  String s_countryCodeIso3(L"{");
  s_countryCodeIso3.Append(L"country_code_iso3");
  s_countryCodeIso3.Append(L"}");
  url.Replace(s_countryCodeIso3, stringify(countryCodeIso3, L"String*"));

  client->execute(SamiTaxesApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
deleteTaxUsingDELETE1Processor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiTaxesApi::deleteTaxUsingDELETE1WithCompletion(String* countryCodeIso3, String* stateCode, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&deleteTaxUsingDELETE1Processor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/tax/countries/{country_code_iso3}/states/{state_code}");

  String s_countryCodeIso3(L"{");
  s_countryCodeIso3.Append(L"country_code_iso3");
  s_countryCodeIso3.Append(L"}");
  url.Replace(s_countryCodeIso3, stringify(countryCodeIso3, L"String*"));
  String s_stateCode(L"{");
  s_stateCode.Append(L"state_code");
  s_stateCode.Append(L"}");
  url.Replace(s_stateCode, stringify(stateCode, L"String*"));

  client->execute(SamiTaxesApi::getBasePath(), url, "DELETE", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
getAllTaxesUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPage«StateTaxResource»* out = new SamiPage«StateTaxResource»();
    jsonToValue(out, pJson, L"SamiPage«StateTaxResource»*", L"SamiPage«StateTaxResource»");

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

SamiPage«StateTaxResource»* 
SamiTaxesApi::getAllTaxesUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* success)(SamiPage«StateTaxResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getAllTaxesUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("order"), order);

  String* mBody = null;


  String url(L"/tax/states");


  client->execute(SamiTaxesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getTaxUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiCountryTaxResource* out = new SamiCountryTaxResource();
    jsonToValue(out, pJson, L"SamiCountryTaxResource*", L"SamiCountryTaxResource");

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

SamiCountryTaxResource* 
SamiTaxesApi::getTaxUsingGETWithCompletion(String* countryCodeIso3, void (* success)(SamiCountryTaxResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getTaxUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/tax/countries/{country_code_iso3}");

  String s_countryCodeIso3(L"{");
  s_countryCodeIso3.Append(L"country_code_iso3");
  s_countryCodeIso3.Append(L"}");
  url.Replace(s_countryCodeIso3, stringify(countryCodeIso3, L"String*"));

  client->execute(SamiTaxesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getTaxUsingGET1Processor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiStateTaxResource* out = new SamiStateTaxResource();
    jsonToValue(out, pJson, L"SamiStateTaxResource*", L"SamiStateTaxResource");

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

SamiStateTaxResource* 
SamiTaxesApi::getTaxUsingGET1WithCompletion(String* countryCodeIso3, String* stateCode, void (* success)(SamiStateTaxResource*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getTaxUsingGET1Processor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/tax/countries/{country_code_iso3}/states/{state_code}");

  String s_countryCodeIso3(L"{");
  s_countryCodeIso3.Append(L"country_code_iso3");
  s_countryCodeIso3.Append(L"}");
  url.Replace(s_countryCodeIso3, stringify(countryCodeIso3, L"String*"));
  String s_stateCode(L"{");
  s_stateCode.Append(L"state_code");
  s_stateCode.Append(L"}");
  url.Replace(s_stateCode, stringify(stateCode, L"String*"));

  client->execute(SamiTaxesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getTaxesUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPage«CountryTaxResource»* out = new SamiPage«CountryTaxResource»();
    jsonToValue(out, pJson, L"SamiPage«CountryTaxResource»*", L"SamiPage«CountryTaxResource»");

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

SamiPage«CountryTaxResource»* 
SamiTaxesApi::getTaxesUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* success)(SamiPage«CountryTaxResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getTaxesUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("order"), order);

  String* mBody = null;


  String url(L"/tax/countries");


  client->execute(SamiTaxesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
getTaxesUsingGET1Processor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPage«StateTaxResource»* out = new SamiPage«StateTaxResource»();
    jsonToValue(out, pJson, L"SamiPage«StateTaxResource»*", L"SamiPage«StateTaxResource»");

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

SamiPage«StateTaxResource»* 
SamiTaxesApi::getTaxesUsingGET1WithCompletion(String* countryCodeIso3, Integer* size, Integer* page, String* order, void (* success)(SamiPage«StateTaxResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getTaxesUsingGET1Processor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

    queryParams->Add(new String("order"), order);

  String* mBody = null;


  String url(L"/tax/countries/{country_code_iso3}/states");

  String s_countryCodeIso3(L"{");
  s_countryCodeIso3.Append(L"country_code_iso3");
  s_countryCodeIso3.Append(L"}");
  url.Replace(s_countryCodeIso3, stringify(countryCodeIso3, L"String*"));

  client->execute(SamiTaxesApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
updateTaxUsingPOSTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiTaxesApi::updateTaxUsingPOSTWithCompletion(SamiCountryTaxResource* taxResource, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateTaxUsingPOSTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(taxResource != null) {
    mBody = new String(taxResource->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/tax/countries");


  client->execute(SamiTaxesApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
updateTaxUsingPUTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiTaxesApi::updateTaxUsingPUTWithCompletion(String* countryCodeIso3, SamiCountryTaxResource* taxResource, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateTaxUsingPUTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(taxResource != null) {
    mBody = new String(taxResource->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/tax/countries/{country_code_iso3}");

  String s_countryCodeIso3(L"{");
  s_countryCodeIso3.Append(L"country_code_iso3");
  s_countryCodeIso3.Append(L"}");
  url.Replace(s_countryCodeIso3, stringify(countryCodeIso3, L"String*"));

  client->execute(SamiTaxesApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}

void
updateTaxUsingPUT1Processor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiTaxesApi::updateTaxUsingPUT1WithCompletion(String* countryCodeIso3, String* stateCode, SamiStateTaxResource* taxResource, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&updateTaxUsingPUT1Processor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(taxResource != null) {
    mBody = new String(taxResource->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/tax/countries/{country_code_iso3}/states/{state_code}");

  String s_countryCodeIso3(L"{");
  s_countryCodeIso3.Append(L"country_code_iso3");
  s_countryCodeIso3.Append(L"}");
  url.Replace(s_countryCodeIso3, stringify(countryCodeIso3, L"String*"));
  String s_stateCode(L"{");
  s_stateCode.Append(L"state_code");
  s_stateCode.Append(L"}");
  url.Replace(s_stateCode, stringify(stateCode, L"String*"));

  client->execute(SamiTaxesApi::getBasePath(), url, "PUT", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}


} /* namespace Swagger */
