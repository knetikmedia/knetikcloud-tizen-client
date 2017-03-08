#ifndef SamiReportingOrdersApi_H_
#define SamiReportingOrdersApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Long;
#include "SamiPageResource«AggregateInvoiceReportResource».h"
#include "SamiResult.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiReportingOrdersApi {
public:
  SamiReportingOrdersApi();
  virtual ~SamiReportingOrdersApi();

  SamiPageResource«AggregateInvoiceReportResource»* 
  getInvoiceReportsWithCompletion(String* currencyCode, String* granularity, String* filterPaymentStatus, String* filterFulfillmentStatus, Long* startDate, Long* endDate, void (* handler)(SamiPageResource«AggregateInvoiceReportResource»*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiReportingOrdersApi_H_ */
