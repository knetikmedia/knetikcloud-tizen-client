#ifndef SamiBRERuleEngineActionsApi_H_
#define SamiBRERuleEngineActionsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiActionResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiBRERuleEngineActionsApi {
public:
  SamiBRERuleEngineActionsApi();
  virtual ~SamiBRERuleEngineActionsApi();

  IList* 
  getActionsUsingGETWithCompletion(String* filterCategory, String* filterName, void (* handler)(IList*, SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiBRERuleEngineActionsApi_H_ */
