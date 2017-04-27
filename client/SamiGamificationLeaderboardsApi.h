#ifndef SamiGamificationLeaderboardsApi_H_
#define SamiGamificationLeaderboardsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiLeaderboardEntryResource.h"
#include "SamiLeaderboardResource.h"
#include "SamiResult.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiGamificationLeaderboardsApi {
public:
  SamiGamificationLeaderboardsApi();
  virtual ~SamiGamificationLeaderboardsApi();

  SamiLeaderboardResource* 
  getLeaderboardWithCompletion(String* contextType, String* contextId, Integer* size, Integer* page, void (* handler)(SamiLeaderboardResource*, SamiError*));
  SamiLeaderboardEntryResource* 
  getLeaderboardRankWithCompletion(String* contextType, String* contextId, String* _id, void (* handler)(SamiLeaderboardEntryResource*, SamiError*));
  IList* 
  getLeaderboardStrategiesWithCompletion( void (* handler)(IList*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiGamificationLeaderboardsApi_H_ */
