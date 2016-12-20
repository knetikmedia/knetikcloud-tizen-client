#include "SamiReportingUsersApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiReportingUsersApi::SamiReportingUsersApi() {

}

SamiReportingUsersApi::~SamiReportingUsersApi() {

}

void
executiveRevenueItemSalesUsingGET1Processor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPage«AggregateCountResource»* out = new SamiPage«AggregateCountResource»();
    jsonToValue(out, pJson, L"SamiPage«AggregateCountResource»*", L"SamiPage«AggregateCountResource»");

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

SamiPage«AggregateCountResource»* 
SamiReportingUsersApi::executiveRevenueItemSalesUsingGET1WithCompletion(String* granularity, Long* startDate, Long* endDate, void (* success)(SamiPage«AggregateCountResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&executiveRevenueItemSalesUsingGET1Processor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("granularity"), granularity);

    queryParams->Add(new String("start_date"), startDate);

    queryParams->Add(new String("end_date"), endDate);

  String* mBody = null;


  String url(L"/reporting/users/registrations");


  client->execute(SamiReportingUsersApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
