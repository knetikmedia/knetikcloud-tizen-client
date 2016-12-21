#ifndef SamiReportingChallengesApi_H_
#define SamiReportingChallengesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Long;
#include "SamiPageResource«ChallengeEventParticipantResource».h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiReportingChallengesApi {
public:
  SamiReportingChallengesApi();
  virtual ~SamiReportingChallengesApi();

  SamiPageResource«ChallengeEventParticipantResource»* 
  getChallengeEventLeaderboardUsingGETWithCompletion(Long* filterEvent, void (* handler)(SamiPageResource«ChallengeEventParticipantResource»*, SamiError*));
  SamiPageResource«ChallengeEventParticipantResource»* 
  getChallengeEventParticipantsUsingGETWithCompletion(Long* filterEvent, void (* handler)(SamiPageResource«ChallengeEventParticipantResource»*, SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiReportingChallengesApi_H_ */
