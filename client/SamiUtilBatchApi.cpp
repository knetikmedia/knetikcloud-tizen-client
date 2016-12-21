#include "SamiUtilBatchApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiUtilBatchApi::SamiUtilBatchApi() {

}

SamiUtilBatchApi::~SamiUtilBatchApi() {

}

void
getBatchPOSTUsingPOSTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiUtilBatchApi::getBatchPOSTUsingPOSTWithCompletion(SamiBatch* batch, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&getBatchPOSTUsingPOSTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(batch != null) {
    mBody = new String(batch->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/batch");


  client->execute(SamiUtilBatchApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}


} /* namespace Swagger */
