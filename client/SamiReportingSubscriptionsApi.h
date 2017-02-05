#ifndef SamiReportingSubscriptionsApi_H_
#define SamiReportingSubscriptionsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiPageResource«BillingReport».h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiReportingSubscriptionsApi {
public:
  SamiReportingSubscriptionsApi();
  virtual ~SamiReportingSubscriptionsApi();

  SamiPageResource«BillingReport»* 
  listBillingReportsUsingGETWithCompletion(Integer* size, Integer* page, void (* handler)(SamiPageResource«BillingReport»*, SamiError*));
  static String getBasePath() {
    return L"https://integration.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiReportingSubscriptionsApi_H_ */
