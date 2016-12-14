#ifndef SamiMediaModerationApi_H_
#define SamiMediaModerationApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Boolean;
using Tizen::Base::Integer;
using Tizen::Base::Long;
#include "SamiFlagReportResource.h"
#include "SamiPage«FlagReportResource».h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiMediaModerationApi {
public:
  SamiMediaModerationApi();
  virtual ~SamiMediaModerationApi();

  void 
  getFlagReportUsingGETWithCompletion(Long* _id, void(* handler)(SamiError*));
  SamiPage«FlagReportResource»* 
  getFlagsReportUsingGETWithCompletion(Boolean* excludeResolved, String* filterContext, Integer* size, Integer* page, void (* handler)(SamiPage«FlagReportResource»*, SamiError*));
  void 
  setFlagResolutionUsingPUTWithCompletion(Long* _id, SamiFlagReportResource* flagReportResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiMediaModerationApi_H_ */
