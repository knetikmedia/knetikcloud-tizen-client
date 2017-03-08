#ifndef SamiBRERuleEngineGlobalsApi_H_
#define SamiBRERuleEngineGlobalsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Boolean;
using Tizen::Base::Integer;
#include "SamiBreGlobalResource.h"
#include "SamiPageResource«BreGlobalResource».h"
#include "SamiResult.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiBRERuleEngineGlobalsApi {
public:
  SamiBRERuleEngineGlobalsApi();
  virtual ~SamiBRERuleEngineGlobalsApi();

  SamiBreGlobalResource* 
  createBREGlobalWithCompletion(SamiBreGlobalResource* breGlobalResource, void (* handler)(SamiBreGlobalResource*, SamiError*));
  void 
  deleteBREGlobalWithCompletion(String* _id, void(* handler)(SamiError*));
  SamiBreGlobalResource* 
  getBREGlobalWithCompletion(String* _id, void (* handler)(SamiBreGlobalResource*, SamiError*));
  SamiPageResource«BreGlobalResource»* 
  getBREGlobalsWithCompletion(Boolean* filterSystem, Integer* size, Integer* page, void (* handler)(SamiPageResource«BreGlobalResource»*, SamiError*));
  SamiBreGlobalResource* 
  updateBREGlobalWithCompletion(String* _id, SamiBreGlobalResource* breGlobalResource, void (* handler)(SamiBreGlobalResource*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiBRERuleEngineGlobalsApi_H_ */
