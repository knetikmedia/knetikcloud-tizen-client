#ifndef SamiMediaModerationApi_H_
#define SamiMediaModerationApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Boolean;
using Tizen::Base::Integer;
using Tizen::Base::Long;
#include "SamiFlagReportResource.h"
#include "SamiPageResource«FlagReportResource».h"
#include "SamiResult.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiMediaModerationApi {
public:
  SamiMediaModerationApi();
  virtual ~SamiMediaModerationApi();

  SamiFlagReportResource* 
  getModerationReportWithCompletion(Long* _id, void (* handler)(SamiFlagReportResource*, SamiError*));
  SamiPageResource«FlagReportResource»* 
  getModerationReportsWithCompletion(Boolean* excludeResolved, String* filterContext, Integer* size, Integer* page, void (* handler)(SamiPageResource«FlagReportResource»*, SamiError*));
  void 
  updateModerationReportWithCompletion(Long* _id, SamiFlagReportResource* flagReportResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiMediaModerationApi_H_ */
