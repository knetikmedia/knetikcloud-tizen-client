#ifndef SamiCampaignsChallengesApi_H_
#define SamiCampaignsChallengesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Boolean;
using Tizen::Base::Integer;
using Tizen::Base::Long;
#include "SamiChallengeActivityResource.h"
#include "SamiChallengeEventResource.h"
#include "SamiChallengeResource.h"
#include "SamiPage«BareChallengeActivityResource».h"
#include "SamiPage«ChallengeEventResource».h"
#include "SamiPage«ChallengeResource».h"
#include "SamiPage«TemplateResource».h"
#include "SamiTemplateResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiCampaignsChallengesApi {
public:
  SamiCampaignsChallengesApi();
  virtual ~SamiCampaignsChallengesApi();

  SamiChallengeActivityResource* 
  createChallengeActivityUsingPOSTWithCompletion(Long* challengeId, SamiChallengeActivityResource* challengeActivityResource, Boolean* validateSettings, void (* handler)(SamiChallengeActivityResource*, SamiError*));
  SamiTemplateResource* 
  createChallengeTemplateUsingPOSTWithCompletion(SamiTemplateResource* challengeTemplateResource, void (* handler)(SamiTemplateResource*, SamiError*));
  SamiChallengeResource* 
  createChallengeUsingPOSTWithCompletion(SamiChallengeResource* challengeResource, void (* handler)(SamiChallengeResource*, SamiError*));
  void 
  deleteChallengeActivityUsingDELETEWithCompletion(Long* activityId, Long* challengeId, void(* handler)(SamiError*));
  void 
  deleteChallengeEventUsingDELETEWithCompletion(Long* _id, void(* handler)(SamiError*));
  void 
  deleteChallengeTemplateUsingDELETEWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  void 
  deleteChallengeUsingDELETEWithCompletion(Long* _id, void(* handler)(SamiError*));
  SamiPage«BareChallengeActivityResource»* 
  getActivitiesUsingGET1WithCompletion(Long* challengeId, Integer* size, Integer* page, String* order, void (* handler)(SamiPage«BareChallengeActivityResource»*, SamiError*));
  SamiChallengeActivityResource* 
  getChallengeActivityUsingGETWithCompletion(Long* activityId, void (* handler)(SamiChallengeActivityResource*, SamiError*));
  SamiChallengeEventResource* 
  getChallengeEventUsingGETWithCompletion(Long* _id, void (* handler)(SamiChallengeEventResource*, SamiError*));
  SamiPage«ChallengeEventResource»* 
  getChallengeEventssUsingGETWithCompletion(Long* filterStartDateMin, Long* filterStartDateMax, Long* filterEndDateMin, Long* filterEndDateMax, Boolean* filterCampaigns, Long* filterChallenge, Integer* size, Integer* page, String* order, void (* handler)(SamiPage«ChallengeEventResource»*, SamiError*));
  SamiTemplateResource* 
  getChallengeTemplateUsingGETWithCompletion(String* _id, void (* handler)(SamiTemplateResource*, SamiError*));
  SamiPage«TemplateResource»* 
  getChallengeTemplatesUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPage«TemplateResource»*, SamiError*));
  SamiChallengeResource* 
  getChallengeUsingGETWithCompletion(Long* _id, void (* handler)(SamiChallengeResource*, SamiError*));
  SamiPage«ChallengeResource»* 
  getChallengesUsingGET1WithCompletion(Boolean* filterTemplate, Boolean* filterActiveCampaign, void (* handler)(SamiPage«ChallengeResource»*, SamiError*));
  void 
  updateChallengeActivityUsingPUTWithCompletion(Long* activityId, Long* challengeId, SamiChallengeActivityResource* challengeActivityResource, void(* handler)(SamiError*));
  void 
  updateChallengeTemplateUsingPUTWithCompletion(String* _id, SamiTemplateResource* challengeTemplateResource, void(* handler)(SamiError*));
  SamiChallengeResource* 
  updateChallengeUsingPUTWithCompletion(Long* _id, SamiChallengeResource* challengeResource, void (* handler)(SamiChallengeResource*, SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiCampaignsChallengesApi_H_ */
