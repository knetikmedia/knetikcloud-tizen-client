#ifndef SamiBRERuleEngineTriggersApi_H_
#define SamiBRERuleEngineTriggersApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Boolean;
using Tizen::Base::Integer;
#include "SamiBreTriggerResource.h"
#include "SamiPageResource«BreTriggerResource».h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiBRERuleEngineTriggersApi {
public:
  SamiBRERuleEngineTriggersApi();
  virtual ~SamiBRERuleEngineTriggersApi();

  SamiBreTriggerResource* 
  createBRETriggerWithCompletion(SamiBreTriggerResource* breTriggerResource, void (* handler)(SamiBreTriggerResource*, SamiError*));
  void 
  deleteBRETriggerWithCompletion(String* eventName, void(* handler)(SamiError*));
  SamiBreTriggerResource* 
  getBRETriggerWithCompletion(String* eventName, void (* handler)(SamiBreTriggerResource*, SamiError*));
  SamiPageResource«BreTriggerResource»* 
  getBRETriggersWithCompletion(Boolean* filterSystem, String* filterCategory, String* filterName, Integer* size, Integer* page, void (* handler)(SamiPageResource«BreTriggerResource»*, SamiError*));
  void 
  updateBRETriggerWithCompletion(String* eventName, SamiBreTriggerResource* breTriggerResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://integration.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiBRERuleEngineTriggersApi_H_ */
