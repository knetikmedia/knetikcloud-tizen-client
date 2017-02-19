#ifndef SamiAccessTokenApi_H_
#define SamiAccessTokenApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiOAuth2Resource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiAccessTokenApi {
public:
  SamiAccessTokenApi();
  virtual ~SamiAccessTokenApi();

  SamiOAuth2Resource* 
  getOAuthTokenWithCompletion(String* grantType, String* clientId, String* clientSecret, String* username, String* password, void (* handler)(SamiOAuth2Resource*, SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiAccessTokenApi_H_ */
