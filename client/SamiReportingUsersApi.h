#ifndef SamiReportingUsersApi_H_
#define SamiReportingUsersApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Long;
#include "SamiPageResource«AggregateCountResource».h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiReportingUsersApi {
public:
  SamiReportingUsersApi();
  virtual ~SamiReportingUsersApi();

  SamiPageResource«AggregateCountResource»* 
  executiveRevenueItemSalesUsingGET1WithCompletion(String* granularity, Long* startDate, Long* endDate, void (* handler)(SamiPageResource«AggregateCountResource»*, SamiError*));
  static String getBasePath() {
    return L"https://integration.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiReportingUsersApi_H_ */
