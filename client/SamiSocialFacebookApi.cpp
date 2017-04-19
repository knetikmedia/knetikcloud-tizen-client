#include "SamiSocialFacebookApi.h"

#include "SamiHelpers.h"
#include "SamiError.h"

using namespace Tizen::Base;

namespace Swagger {


SamiSocialFacebookApi::SamiSocialFacebookApi() {

}

SamiSocialFacebookApi::~SamiSocialFacebookApi() {

}

void
linkAccountsProcessor(HttpResponse* pHttpResponse, void (* handler)(void*, SamiError*)) {
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
SamiSocialFacebookApi::linkAccountsWithCompletion(SamiFacebookToken* facebookToken, void(*success)(SamiError*)) {
  client = new SamiApiClient();

  client->success(&linkAccountsProcessor, (void(*)(void*, SamiError*))success);
  HashMap* headerParams = new HashMap(SingleObjectDeleter);
  headerParams->Construct();

  
  HashMap* queryParams = new HashMap(SingleObjectDeleter);
  queryParams->Construct();

  
  String* mBody = null;

  if(facebookToken != null) {
    mBody = new String(facebookToken->asJson());
    headerParams->Add(new String("Content-Type"), new String("application/json"));
  }

  String url(L"/social/facebook/users");


  client->execute(SamiSocialFacebookApi::getBasePath(), url, "POST", (IMap*)queryParams, mBody, (IMap*)headerParams, null, L"application/json");
  
}


} /* namespace Swagger */
