#ifndef SamiSocialGoogleApi_H_
#define SamiSocialGoogleApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiGoogleToken.h"
#include "SamiResult.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiSocialGoogleApi {
public:
  SamiSocialGoogleApi();
  virtual ~SamiSocialGoogleApi();

  void 
  linkAccounts1WithCompletion(SamiGoogleToken* googleToken, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiSocialGoogleApi_H_ */
