#ifndef SamiGamificationMetricsApi_H_
#define SamiGamificationMetricsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiMetricResource.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiGamificationMetricsApi {
public:
  SamiGamificationMetricsApi();
  virtual ~SamiGamificationMetricsApi();

  void 
  addMetricUsingPOSTWithCompletion(SamiMetricResource* metric, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiGamificationMetricsApi_H_ */
