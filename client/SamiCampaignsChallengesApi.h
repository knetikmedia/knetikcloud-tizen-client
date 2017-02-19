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
#include "SamiPageResource«BareChallengeActivityResource».h"
#include "SamiPageResource«ChallengeEventResource».h"
#include "SamiPageResource«ChallengeResource».h"
#include "SamiPageResource«TemplateResource».h"
#include "SamiResult.h"
#include "SamiTemplateResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiCampaignsChallengesApi {
public:
  SamiCampaignsChallengesApi();
  virtual ~SamiCampaignsChallengesApi();

  SamiChallengeResource* 
  createChallengeWithCompletion(SamiChallengeResource* challengeResource, void (* handler)(SamiChallengeResource*, SamiError*));
  SamiChallengeActivityResource* 
  createChallengeActivityWithCompletion(Long* challengeId, SamiChallengeActivityResource* challengeActivityResource, Boolean* validateSettings, void (* handler)(SamiChallengeActivityResource*, SamiError*));
  SamiTemplateResource* 
  createChallengeTemplateWithCompletion(SamiTemplateResource* challengeTemplateResource, void (* handler)(SamiTemplateResource*, SamiError*));
  void 
  deleteChallengeWithCompletion(Long* _id, void(* handler)(SamiError*));
  void 
  deleteChallengeActivityWithCompletion(Long* activityId, Long* challengeId, void(* handler)(SamiError*));
  void 
  deleteChallengeEventWithCompletion(Long* _id, void(* handler)(SamiError*));
  void 
  deleteChallengeTemplateWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  SamiChallengeResource* 
  getChallengeWithCompletion(Long* _id, void (* handler)(SamiChallengeResource*, SamiError*));
  SamiPageResource«BareChallengeActivityResource»* 
  getChallengeActivitiesWithCompletion(Long* challengeId, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«BareChallengeActivityResource»*, SamiError*));
  SamiChallengeActivityResource* 
  getChallengeActivityWithCompletion(Long* activityId, void (* handler)(SamiChallengeActivityResource*, SamiError*));
  SamiChallengeEventResource* 
  getChallengeEventWithCompletion(Long* _id, void (* handler)(SamiChallengeEventResource*, SamiError*));
  SamiPageResource«ChallengeEventResource»* 
  getChallengeEventsWithCompletion(String* filterStartDate, String* filterEndDate, Boolean* filterCampaigns, Long* filterChallenge, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«ChallengeEventResource»*, SamiError*));
  SamiTemplateResource* 
  getChallengeTemplateWithCompletion(String* _id, void (* handler)(SamiTemplateResource*, SamiError*));
  SamiPageResource«TemplateResource»* 
  getChallengeTemplatesWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«TemplateResource»*, SamiError*));
  SamiPageResource«ChallengeResource»* 
  getChallengesWithCompletion(Boolean* filterTemplate, Boolean* filterActiveCampaign, void (* handler)(SamiPageResource«ChallengeResource»*, SamiError*));
  SamiChallengeResource* 
  updateChallengeWithCompletion(Long* _id, SamiChallengeResource* challengeResource, void (* handler)(SamiChallengeResource*, SamiError*));
  SamiChallengeActivityResource* 
  updateChallengeActivityWithCompletion(Long* activityId, Long* challengeId, SamiChallengeActivityResource* challengeActivityResource, void (* handler)(SamiChallengeActivityResource*, SamiError*));
  SamiTemplateResource* 
  updateChallengeTemplateWithCompletion(String* _id, SamiTemplateResource* challengeTemplateResource, void (* handler)(SamiTemplateResource*, SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiCampaignsChallengesApi_H_ */
