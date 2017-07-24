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
sendBREEventProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiBRERuleEngineEventsApi::sendBREEventWithCompletion(SamiBreEvent* breEvent, void (* success)(String*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&sendBREEventProcessor, (void(*)(void*, SamiError*))success);
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
  return null;
}


} /* namespace Swagger */
