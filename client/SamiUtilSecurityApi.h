#ifndef SamiUtilSecurityApi_H_
#define SamiUtilSecurityApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiAuthentication.h"
#include "SamiPage«LocationLogResource».h"
#include "SamiTokenDetailsResource.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUtilSecurityApi {
public:
  SamiUtilSecurityApi();
  virtual ~SamiUtilSecurityApi();

  SamiPage«LocationLogResource»* 
  getUserLocationLogUsingGETWithCompletion(Integer* userId, void (* handler)(SamiPage«LocationLogResource»*, SamiError*));
  SamiTokenDetailsResource* 
  userUsingGETWithCompletion(SamiAuthentication* authentication, void (* handler)(SamiTokenDetailsResource*, SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUtilSecurityApi_H_ */
