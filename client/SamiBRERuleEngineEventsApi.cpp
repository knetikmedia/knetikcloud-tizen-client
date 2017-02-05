#include "SamiBRERuleEngineEventsApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiBRERuleEngineEventsApi::SamiBRERuleEngineEventsApi() {

}

SamiBRERuleEngineEventsApi::~SamiBRERuleEngineEventsApi() {

}

void
fireEventUsingPOSTProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiBRERuleEngineEventsApi::fireEventUsingPOSTWithCompletion(SamiBreEvent* breEvent, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&fireEventUsingPOSTProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(breEvent != null) {
    mBody = new String(breEvent->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/bre/events");


  client->execute(SamiBRERuleEngineEventsApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}


} /* namespace Swagger */
