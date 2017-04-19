#ifndef SamiActivitiesApi_H_
#define SamiActivitiesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Boolean;
using Tizen::Base::Integer;
using Tizen::Base::Long;
#include "SamiActivityOccurrenceCreationFailure.h"
#include "SamiActivityOccurrenceResource.h"
#include "SamiActivityOccurrenceResults.h"
#include "SamiActivityResource.h"
#include "SamiPageResource«BareActivityResource».h"
#include "SamiPageResource«TemplateResource».h"
#include "SamiResult.h"
#include "SamiTemplateResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiActivitiesApi {
public:
  SamiActivitiesApi();
  virtual ~SamiActivitiesApi();

  SamiActivityResource* 
  createActivityWithCompletion(SamiActivityResource* activityResource, void (* handler)(SamiActivityResource*, SamiError*));
  SamiActivityOccurrenceResource* 
  createActivityOccurrenceWithCompletion(Boolean* test, SamiActivityOccurrenceResource* activityOccurrenceResource, void (* handler)(SamiActivityOccurrenceResource*, SamiError*));
  SamiTemplateResource* 
  createActivityTemplateWithCompletion(SamiTemplateResource* activityTemplateResource, void (* handler)(SamiTemplateResource*, SamiError*));
  void 
  deleteActivityWithCompletion(Long* _id, void(* handler)(SamiError*));
  void 
  deleteActivityTemplateWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  SamiPageResource«BareActivityResource»* 
  getActivitiesWithCompletion(Boolean* filterTemplate, String* filterName, String* filterId, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«BareActivityResource»*, SamiError*));
  SamiActivityResource* 
  getActivityWithCompletion(Long* _id, void (* handler)(SamiActivityResource*, SamiError*));
  SamiTemplateResource* 
  getActivityTemplateWithCompletion(String* _id, void (* handler)(SamiTemplateResource*, SamiError*));
  SamiPageResource«TemplateResource»* 
  getActivityTemplatesWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«TemplateResource»*, SamiError*));
  SamiActivityOccurrenceResults* 
  setActivityOccurrenceResultsWithCompletion(Long* activityOccurrenceId, SamiActivityOccurrenceResults* activityOccurrenceResults, void (* handler)(SamiActivityOccurrenceResults*, SamiError*));
  SamiActivityResource* 
  updateActivityWithCompletion(Long* _id, SamiActivityResource* activityResource, void (* handler)(SamiActivityResource*, SamiError*));
  void 
  updateActivityOccurrenceWithCompletion(Long* activityOccurrenceId, String* activityCccurrenceStatus, void(* handler)(SamiError*));
  SamiTemplateResource* 
  updateActivityTemplateWithCompletion(String* _id, SamiTemplateResource* activityTemplateResource, void (* handler)(SamiTemplateResource*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiActivitiesApi_H_ */
