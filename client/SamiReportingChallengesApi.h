#ifndef SamiReportingChallengesApi_H_
#define SamiReportingChallengesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
using Tizen::Base::Long;
#include "SamiPageResource«ChallengeEventParticipantResource».h"
#include "SamiResult.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiReportingChallengesApi {
public:
  SamiReportingChallengesApi();
  virtual ~SamiReportingChallengesApi();

  SamiPageResource«ChallengeEventParticipantResource»* 
  getChallengeEventLeaderboardWithCompletion(Long* filterEvent, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«ChallengeEventParticipantResource»*, SamiError*));
  SamiPageResource«ChallengeEventParticipantResource»* 
  getChallengeEventParticipantsWithCompletion(Long* filterEvent, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«ChallengeEventParticipantResource»*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiReportingChallengesApi_H_ */
