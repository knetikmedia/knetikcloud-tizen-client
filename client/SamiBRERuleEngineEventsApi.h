#ifndef SamiBRERuleEngineEventsApi_H_
#define SamiBRERuleEngineEventsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiBreEvent.h"
#include "SamiOAuth2Authentication.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiBRERuleEngineEventsApi {
public:
  SamiBRERuleEngineEventsApi();
  virtual ~SamiBRERuleEngineEventsApi();

  void 
  fireEventUsingPOSTWithCompletion(SamiBreEvent* breEvent, SamiOAuth2Authentication* authentication, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiBRERuleEngineEventsApi_H_ */
