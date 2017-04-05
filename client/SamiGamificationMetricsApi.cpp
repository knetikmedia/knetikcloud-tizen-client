#include "SamiGamificationMetricsApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiGamificationMetricsApi::SamiGamificationMetricsApi() {

}

SamiGamificationMetricsApi::~SamiGamificationMetricsApi() {

}

void
addMetricProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiGamificationMetricsApi::addMetricWithCompletion(SamiMetricResource* metric, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&addMetricProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(metric != null) {
    mBody = new String(metric->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/metrics");


  client->execute(SamiGamificationMetricsApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}


} /* namespace Swagger */
