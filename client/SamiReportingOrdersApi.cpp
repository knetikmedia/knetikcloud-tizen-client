#include "SamiReportingOrdersApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiReportingOrdersApi::SamiReportingOrdersApi() {

}

SamiReportingOrdersApi::~SamiReportingOrdersApi() {

}

void
getDailyInvoicesUsingGETProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiPageResource«AggregateInvoiceReportResource»* out = new SamiPageResource«AggregateInvoiceReportResource»();
    jsonToValue(out, pJson, L"SamiPageResource«AggregateInvoiceReportResource»*", L"SamiPageResource«AggregateInvoiceReportResource»");

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

SamiPageResource«AggregateInvoiceReportResource»* 
SamiReportingOrdersApi::getDailyInvoicesUsingGETWithCompletion(String* currencyCode, String* granularity, String* filterPaymentStatus, String* filterFulfillmentStatus, Long* startDate, Long* endDate, void (* success)(SamiPageResource«AggregateInvoiceReportResource»*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getDailyInvoicesUsingGETProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("granularity"), granularity);

    queryParams->Add(new String("filter_payment_status"), filterPaymentStatus);

    queryParams->Add(new String("filter_fulfillment_status"), filterFulfillmentStatus);

    queryParams->Add(new String("start_date"), startDate);

    queryParams->Add(new String("end_date"), endDate);

  String* mBody = null;


  String url(L"/reporting/orders/count/{currency_code}");

  String s_currencyCode(L"{");
  s_currencyCode.Append(L"currency_code");
  s_currencyCode.Append(L"}");
  url.Replace(s_currencyCode, stringify(currencyCode, L"String*"));

  client->execute(SamiReportingOrdersApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
