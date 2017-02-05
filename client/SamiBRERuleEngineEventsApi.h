#ifndef SamiBRERuleEngineEventsApi_H_
#define SamiBRERuleEngineEventsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiBreEvent.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiBRERuleEngineEventsApi {
public:
  SamiBRERuleEngineEventsApi();
  virtual ~SamiBRERuleEngineEventsApi();

  void 
  fireEventUsingPOSTWithCompletion(SamiBreEvent* breEvent, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://integration.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiBRERuleEngineEventsApi_H_ */
