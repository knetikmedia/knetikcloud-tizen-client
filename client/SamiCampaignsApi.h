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
  SamiPageResource«ChallengeResource»* 
  getCampaignChallengesWithCompletion(Long* _id, void (* handler)(SamiPageResource«ChallengeResource»*, SamiError*));
  SamiTemplateResource* 
  getCampaignTemplateWithCompletion(String* _id, void (* handler)(SamiTemplateResource*, SamiError*));
  SamiPageResource«TemplateResource»* 
  getCampaignTemplatesWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«TemplateResource»*, SamiError*));
  SamiCampaignResource* 
  getCampaignUsingGETWithCompletion(Long* _id, void (* handler)(SamiCampaignResource*, SamiError*));
  SamiPageResource«CampaignResource»* 
  getCampaignsWithCompletion(Boolean* filterActive, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«CampaignResource»*, SamiError*));
  void 
  removeChallengeFromCampaignWithCompletion(Long* campaignId, Long* _id, void(* handler)(SamiError*));
  void 
  updateCampaignWithCompletion(Long* _id, SamiCampaignResource* campaignResource, void(* handler)(SamiError*));
  void 
  updateCampaignTemplateWithCompletion(String* _id, SamiTemplateResource* campaignTemplateResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiCampaignsApi_H_ */
