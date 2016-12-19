#ifndef SamiReportingUsersApi_H_
#define SamiReportingUsersApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Long;
#include "SamiPage«AggregateCountResource».h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiReportingUsersApi {
public:
  SamiReportingUsersApi();
  virtual ~SamiReportingUsersApi();

  SamiPage«AggregateCountResource»* 
  executiveRevenueItemSalesUsingGET1WithCompletion(String* granularity, Long* startDate, Long* endDate, void (* handler)(SamiPage«AggregateCountResource»*, SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiReportingUsersApi_H_ */
