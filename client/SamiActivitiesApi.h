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
#include "SamiPage«BareActivityResource».h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiActivitiesApi {
public:
  SamiActivitiesApi();
  virtual ~SamiActivitiesApi();

  void 
  completeActivityOccurrenceUsingPUTWithCompletion(Long* activityOccurrenceId, String* activityCccurrenceStatus, void(* handler)(SamiError*));
  SamiActivityOccurrenceResource* 
  createActivityOccurrenceUsingPOSTWithCompletion(Boolean* test, SamiActivityOccurrenceResource* activityOccurrenceResource, void (* handler)(SamiActivityOccurrenceResource*, SamiError*));
  SamiActivityResource* 
  createActivityUsingPOSTWithCompletion(SamiActivityResource* activityResource, void (* handler)(SamiActivityResource*, SamiError*));
  void 
  deleteActivityUsingDELETEWithCompletion(Long* _id, void(* handler)(SamiError*));
  SamiPage«BareActivityResource»* 
  getActivitiesUsingGETWithCompletion(Boolean* filterTemplate, Integer* size, Integer* page, String* order, void (* handler)(SamiPage«BareActivityResource»*, SamiError*));
  SamiActivityResource* 
  getActivityUsingGETWithCompletion(Long* _id, void (* handler)(SamiActivityResource*, SamiError*));
  SamiActivityOccurrenceResults* 
  postResultsUsingPOSTWithCompletion(Long* activityOccurrenceId, SamiActivityOccurrenceResults* activityOccurrenceResults, void (* handler)(SamiActivityOccurrenceResults*, SamiError*));
  void 
  updateActivityUsingPUTWithCompletion(Long* _id, SamiActivityResource* activityResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiActivitiesApi_H_ */
