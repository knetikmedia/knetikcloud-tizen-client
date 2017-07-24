#include "SamiBRERuleEngineActionsApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiBRERuleEngineActionsApi::SamiBRERuleEngineActionsApi() {

}

SamiBRERuleEngineActionsApi::~SamiBRERuleEngineActionsApi() {

}

void
getBREActionsProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    IList* out = new ArrayList();
    jsonToValue(out, pJson, L"IList*", L"SamiActionResource");

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
SamiBRERuleEngineActionsApi::getBREActionsWithCompletion(String* filterCategory, String* filterName, String* filterTags, String* filterSearch, void (* success)(IList*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getBREActionsProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("filter_category"), filterCategory);

    queryParams->Add(new String("filter_name"), filterName);

    queryParams->Add(new String("filter_tags"), filterTags);

    queryParams->Add(new String("filter_search"), filterSearch);

  String* mBody = null;


  String url(L"/bre/actions");


  client->execute(SamiBRERuleEngineActionsApi::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
