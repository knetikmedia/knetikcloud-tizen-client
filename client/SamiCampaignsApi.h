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
  addChallengesUsingPOSTWithCompletion(Long* _id, Long* challengeId, void(* handler)(SamiError*));
  SamiTemplateResource* 
  createCampaignTemplateUsingPOSTWithCompletion(SamiTemplateResource* campaignTemplateResource, void (* handler)(SamiTemplateResource*, SamiError*));
  SamiCampaignResource* 
  createCampaignUsingPOSTWithCompletion(SamiCampaignResource* campaignResource, void (* handler)(SamiCampaignResource*, SamiError*));
  void 
  deleteCampaignTemplateUsingDELETEWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  void 
  deleteCampaignUsingDELETEWithCompletion(Long* _id, void(* handler)(SamiError*));
  SamiTemplateResource* 
  getCampaignTemplateUsingGETWithCompletion(String* _id, void (* handler)(SamiTemplateResource*, SamiError*));
  SamiPageResource«TemplateResource»* 
  getCampaignTemplatesUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«TemplateResource»*, SamiError*));
  SamiCampaignResource* 
  getCampaignUsingGETWithCompletion(Long* _id, void (* handler)(SamiCampaignResource*, SamiError*));
  SamiPageResource«CampaignResource»* 
  getCampaignsUsingGETWithCompletion(Boolean* filterActive, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«CampaignResource»*, SamiError*));
  SamiPageResource«ChallengeResource»* 
  getChallengesUsingGETWithCompletion(Long* _id, void (* handler)(SamiPageResource«ChallengeResource»*, SamiError*));
  void 
  removeChallengeUsingDELETEWithCompletion(Long* campaignId, Long* _id, void(* handler)(SamiError*));
  void 
  updateCampaignTemplateUsingPUTWithCompletion(String* _id, SamiTemplateResource* campaignTemplateResource, void(* handler)(SamiError*));
  void 
  updateCampaignUsingPUTWithCompletion(Long* _id, SamiCampaignResource* campaignResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiCampaignsApi_H_ */
