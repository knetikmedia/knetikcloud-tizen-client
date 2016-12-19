#ifndef SamiReportingChallengesApi_H_
#define SamiReportingChallengesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Long;
#include "SamiPage«ChallengeEventParticipantResource».h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiReportingChallengesApi {
public:
  SamiReportingChallengesApi();
  virtual ~SamiReportingChallengesApi();

  SamiPage«ChallengeEventParticipantResource»* 
  getChallengeEventLeaderboardUsingGETWithCompletion(Long* filterEvent, void (* handler)(SamiPage«ChallengeEventParticipantResource»*, SamiError*));
  SamiPage«ChallengeEventParticipantResource»* 
  getChallengeEventParticipantsUsingGETWithCompletion(Long* filterEvent, void (* handler)(SamiPage«ChallengeEventParticipantResource»*, SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiReportingChallengesApi_H_ */
