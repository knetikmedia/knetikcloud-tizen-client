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
  deleteTokenWithCompletion(String* username, String* clientId, void(* handler)(SamiError*));
  void 
  deleteTokensWithCompletion(String* username, void(* handler)(SamiError*));
  SamiOauthAccessTokenResource* 
  getTokenWithCompletion(String* username, String* clientId, void (* handler)(SamiOauthAccessTokenResource*, SamiError*));
  SamiPageResource«OauthAccessTokenResource»* 
  getTokensWithCompletion(String* filterClientId, String* filterUsername, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«OauthAccessTokenResource»*, SamiError*));
  static String getBasePath() {
    return L"https://integration.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiAuthTokensApi_H_ */
