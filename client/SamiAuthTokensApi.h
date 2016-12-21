#ifndef SamiAuthTokensApi_H_
#define SamiAuthTokensApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiOauthAccessTokenResource.h"
#include "SamiPageResource«OauthAccessTokenResource».h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiAuthTokensApi {
public:
  SamiAuthTokensApi();
  virtual ~SamiAuthTokensApi();

  void 
  deleteTokenUsingDELETEWithCompletion(String* username, void(* handler)(SamiError*));
  void 
  deleteTokenWithClientIdUsingDELETEWithCompletion(String* username, String* clientId, void(* handler)(SamiError*));
  SamiOauthAccessTokenResource* 
  getTokenByUserUsingGETWithCompletion(String* username, String* clientId, void (* handler)(SamiOauthAccessTokenResource*, SamiError*));
  SamiPageResource«OauthAccessTokenResource»* 
  getTokensUsingGETWithCompletion(String* filterClientId, String* filterUsername, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«OauthAccessTokenResource»*, SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiAuthTokensApi_H_ */
