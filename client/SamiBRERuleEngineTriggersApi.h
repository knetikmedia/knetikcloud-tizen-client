#ifndef SamiBRERuleEngineTriggersApi_H_
#define SamiBRERuleEngineTriggersApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Boolean;
using Tizen::Base::Integer;
#include "SamiBreTriggerResource.h"
#include "SamiPage«BreTriggerResource».h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiBRERuleEngineTriggersApi {
public:
  SamiBRERuleEngineTriggersApi();
  virtual ~SamiBRERuleEngineTriggersApi();

  SamiBreTriggerResource* 
  createTriggerUsingPOSTWithCompletion(SamiBreTriggerResource* breTriggerResource, void (* handler)(SamiBreTriggerResource*, SamiError*));
  void 
  deleteTriggerUsingDELETEWithCompletion(String* eventName, void(* handler)(SamiError*));
  SamiBreTriggerResource* 
  getTriggerUsingGETWithCompletion(String* eventName, void (* handler)(SamiBreTriggerResource*, SamiError*));
  SamiPage«BreTriggerResource»* 
  getTriggersUsingGETWithCompletion(Boolean* filterSystem, String* filterCategory, String* filterName, Integer* size, Integer* page, void (* handler)(SamiPage«BreTriggerResource»*, SamiError*));
  void 
  updateTriggerUsingPUTWithCompletion(String* eventName, SamiBreTriggerResource* breTriggerResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiBRERuleEngineTriggersApi_H_ */
