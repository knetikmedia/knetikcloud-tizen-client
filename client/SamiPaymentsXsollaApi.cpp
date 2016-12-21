#include "SamiPaymentsXsollaApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiPaymentsXsollaApi::SamiPaymentsXsollaApi() {

}

SamiPaymentsXsollaApi::~SamiPaymentsXsollaApi() {

}

void
createTokenUrlUsingPOSTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiPaymentsXsollaApi::createTokenUrlUsingPOSTWithCompletion(SamiXsollaPaymentRequest* request, void (* success)(String*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&createTokenUrlUsingPOSTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(request != null) {
    mBody = new String(request->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/payment/provider/xsolla/payment");


  client->execute(SamiPaymentsXsollaApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}

void
receiveNotificationUsingPOSTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiPaymentsXsollaApi::receiveNotificationUsingPOSTWithCompletion( void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&receiveNotificationUsingPOSTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;


  String url(L"/payment/provider/xsolla/notifications");


  client->execute(SamiPaymentsXsollaApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}


} /* namespace Swagger */
