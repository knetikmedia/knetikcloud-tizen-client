#ifndef SamiBRERuleEngineEventsApi_H_
#define SamiBRERuleEngineEventsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiBreEvent.h"
#include "SamiResult.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiBRERuleEngineEventsApi {
public:
  SamiBRERuleEngineEventsApi();
  virtual ~SamiBRERuleEngineEventsApi();

  String* 
  sendBREEventWithCompletion(SamiBreEvent* breEvent, void (* handler)(String*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiBRERuleEngineEventsApi_H_ */
