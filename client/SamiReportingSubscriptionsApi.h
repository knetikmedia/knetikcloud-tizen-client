#ifndef SamiReportingSubscriptionsApi_H_
#define SamiReportingSubscriptionsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiPage«BillingReport».h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiReportingSubscriptionsApi {
public:
  SamiReportingSubscriptionsApi();
  virtual ~SamiReportingSubscriptionsApi();

  SamiPage«BillingReport»* 
  listBillingReportsUsingGETWithCompletion(Integer* size, Integer* page, void (* handler)(SamiPage«BillingReport»*, SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiReportingSubscriptionsApi_H_ */
