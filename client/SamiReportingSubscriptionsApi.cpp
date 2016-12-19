#include "SamiReportingSubscriptionsApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiReportingSubscriptionsApi::SamiReportingSubscriptionsApi() {

}

SamiReportingSubscriptionsApi::~SamiReportingSubscriptionsApi() {

}

void
listBillingReportsUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPage«BillingReport»* out = new SamiPage«BillingReport»();
    jsonToValue(out, pJson, L"SamiPage«BillingReport»*", L"SamiPage«BillingReport»");

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

SamiPage«BillingReport»* 
SamiReportingSubscriptionsApi::listBillingReportsUsingGETWithCompletion(Integer* size, Integer* page, void (* success)(SamiPage«BillingReport»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&listBillingReportsUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("size"), size);

    queryParams->Add(new String("page"), page);

  String* mBody = null;


  String url(L"/reporting/subscription");


  client->execute(SamiReportingSubscriptionsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
