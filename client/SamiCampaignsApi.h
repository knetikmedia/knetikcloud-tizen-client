#ifndef SamiCampaignsApi_H_
#define SamiCampaignsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Boolean;
using Tizen::Base::Integer;
using Tizen::Base::Long;
#include "SamiCampaignResource.h"
#include "SamiPageResource«CampaignResource».h"
#include "SamiPageResource«ChallengeResource».h"
#include "SamiPageResource«TemplateResource».h"
#include "SamiResult.h"
#include "SamiTemplateResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiCampaignsApi {
public:
  SamiCampaignsApi();
  virtual ~SamiCampaignsApi();

  void 
  addChallengeToCampaignWithCompletion(Long* _id, Long* challengeId, void(* handler)(SamiError*));
  SamiCampaignResource* 
  createCampaignWithCompletion(SamiCampaignResource* campaignResource, void (* handler)(SamiCampaignResource*, SamiError*));
  SamiTemplateResource* 
  createCampaignTemplateWithCompletion(SamiTemplateResource* campaignTemplateResource, void (* handler)(SamiTemplateResource*, SamiError*));
  void 
  deleteCampaignWithCompletion(Long* _id, void(* handler)(SamiError*));
  void 
  deleteCampaignTemplateWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  SamiCampaignResource* 
  getCampaignWithCompletion(Long* _id, void (* handler)(SamiCampaignResource*, SamiError*));
  SamiPageResource«ChallengeResource»* 
  getCampaignChallengesWithCompletion(Long* _id, String* filterStartDate, String* filterEndDate, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«ChallengeResource»*, SamiError*));
  SamiTemplateResource* 
  getCampaignTemplateWithCompletion(String* _id, void (* handler)(SamiTemplateResource*, SamiError*));
  SamiPageResource«TemplateResource»* 
  getCampaignTemplatesWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«TemplateResource»*, SamiError*));
  SamiPageResource«CampaignResource»* 
  getCampaignsWithCompletion(Boolean* filterActive, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«CampaignResource»*, SamiError*));
  void 
  removeChallengeFromCampaignWithCompletion(Long* campaignId, Long* _id, void(* handler)(SamiError*));
  SamiCampaignResource* 
  updateCampaignWithCompletion(Long* _id, SamiCampaignResource* campaignResource, void (* handler)(SamiCampaignResource*, SamiError*));
  SamiTemplateResource* 
  updateCampaignTemplateWithCompletion(String* _id, SamiTemplateResource* campaignTemplateResource, void (* handler)(SamiTemplateResource*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiCampaignsApi_H_ */
