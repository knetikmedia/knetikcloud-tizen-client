#ifndef SamiBRERuleEngineGlobalsApi_H_
#define SamiBRERuleEngineGlobalsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Boolean;
using Tizen::Base::Integer;
#include "SamiBreGlobalResource.h"
#include "SamiPage«BreGlobalResource».h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiBRERuleEngineGlobalsApi {
public:
  SamiBRERuleEngineGlobalsApi();
  virtual ~SamiBRERuleEngineGlobalsApi();

  SamiBreGlobalResource* 
  createGlobalUsingPOSTWithCompletion(SamiBreGlobalResource* breGlobalResource, void (* handler)(SamiBreGlobalResource*, SamiError*));
  void 
  deleteGlobalUsingDELETEWithCompletion(String* _id, void(* handler)(SamiError*));
  SamiBreGlobalResource* 
  getGlobalUsingGETWithCompletion(String* _id, void (* handler)(SamiBreGlobalResource*, SamiError*));
  SamiPage«BreGlobalResource»* 
  getGlobalsUsingGETWithCompletion(Boolean* filterSystem, Integer* size, Integer* page, void (* handler)(SamiPage«BreGlobalResource»*, SamiError*));
  void 
  updateGlobalUsingPUTWithCompletion(String* _id, SamiBreGlobalResource* breGlobalResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiBRERuleEngineGlobalsApi_H_ */
