#ifndef SamiReportingOrdersApi_H_
#define SamiReportingOrdersApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Long;
#include "SamiPage«AggregateInvoiceReportResource».h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiReportingOrdersApi {
public:
  SamiReportingOrdersApi();
  virtual ~SamiReportingOrdersApi();

  SamiPage«AggregateInvoiceReportResource»* 
  getDailyInvoicesUsingGETWithCompletion(String* currencyCode, String* granularity, String* filterPaymentStatus, String* filterFulfillmentStatus, Long* startDate, Long* endDate, void (* handler)(SamiPage«AggregateInvoiceReportResource»*, SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiReportingOrdersApi_H_ */
