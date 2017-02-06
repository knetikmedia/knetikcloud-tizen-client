#include "SamiAWSS3Api.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiAWSS3Api::SamiAWSS3Api() {

}

SamiAWSS3Api::~SamiAWSS3Api() {

}

void
getSignedS3URLProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
  int code = pHttpResponse->GetHttpStatusCode();

  if(code >= 200 && code < 300) {
    ByteBuffer* pBuffer = pHttpResponse->ReadBodyN();
    IJsonValue* pJson = JsonParser::ParseN(*pBuffer);

    SamiAmazonS3Activity* out = new SamiAmazonS3Activity();
    jsonToValue(out, pJson, L"SamiAmazonS3Activity*", L"SamiAmazonS3Activity");

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

SamiAmazonS3Activity* 
SamiAWSS3Api::getSignedS3URLWithCompletion(String* filename, String* contentType, void (* success)(SamiAmazonS3Activity*, SamiError*)) {
  client = new SamiApiClient();

  client->success(&getSignedS3URLProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
    queryParams->Add(new String("filename"), filename);

    queryParams->Add(new String("content_type"), contentType);

  String* mBody = null;


  String url(L"/amazon/s3/signedposturl");


  client->execute(SamiAWSS3Api::getBasePath(), url, "GET", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  return null;
}


} /* namespace Swagger */
