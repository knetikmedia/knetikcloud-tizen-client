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
  sendBREEventWithCompletion(SamiBreEvent* breEvent, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiBRERuleEngineEventsApi_H_ */
