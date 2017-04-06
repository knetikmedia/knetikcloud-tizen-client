#ifndef SamiSocialFacebookApi_H_
#define SamiSocialFacebookApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiFacebookToken.h"
#include "SamiResult.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiSocialFacebookApi {
public:
  SamiSocialFacebookApi();
  virtual ~SamiSocialFacebookApi();

  void 
  linkAccountsWithCompletion(SamiFacebookToken* facebookToken, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiSocialFacebookApi_H_ */
