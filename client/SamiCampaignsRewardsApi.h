#ifndef SamiCampaignsRewardsApi_H_
#define SamiCampaignsRewardsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiPageResource«RewardSetResource».h"
#include "SamiRewardSetResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiCampaignsRewardsApi {
public:
  SamiCampaignsRewardsApi();
  virtual ~SamiCampaignsRewardsApi();

  SamiRewardSetResource* 
  createRewardSetWithCompletion(SamiRewardSetResource* rewardSetResource, void (* handler)(SamiRewardSetResource*, SamiError*));
  void 
  deleteRewardSetWithCompletion(Integer* _id, void(* handler)(SamiError*));
  SamiRewardSetResource* 
  getRewardSetWithCompletion(Integer* _id, void (* handler)(SamiRewardSetResource*, SamiError*));
  SamiPageResource«RewardSetResource»* 
  getRewardSetsWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«RewardSetResource»*, SamiError*));
  void 
  updateRewardSetWithCompletion(Integer* _id, SamiRewardSetResource* rewardSetResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://integration.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiCampaignsRewardsApi_H_ */
