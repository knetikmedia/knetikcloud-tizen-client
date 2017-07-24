#ifndef SamiBRERuleEngineActionsApi_H_
#define SamiBRERuleEngineActionsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiActionResource.h"
#include "SamiResult.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiBRERuleEngineActionsApi {
public:
  SamiBRERuleEngineActionsApi();
  virtual ~SamiBRERuleEngineActionsApi();

  IList* 
  getBREActionsWithCompletion(String* filterCategory, String* filterName, String* filterTags, String* filterSearch, void (* handler)(IList*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiBRERuleEngineActionsApi_H_ */
