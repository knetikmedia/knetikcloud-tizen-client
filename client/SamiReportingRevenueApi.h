#ifndef SamiReportingRevenueApi_H_
#define SamiReportingRevenueApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
using Tizen::Base::Long;
#include "SamiPageResource«RevenueCountryReportResource».h"
#include "SamiPageResource«RevenueProductReportResource».h"
#include "SamiResult.h"
#include "SamiRevenueReportResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiReportingRevenueApi {
public:
  SamiReportingRevenueApi();
  virtual ~SamiReportingRevenueApi();

  SamiRevenueReportResource* 
  getItemRevenueWithCompletion(String* currencyCode, Long* startDate, Long* endDate, void (* handler)(SamiRevenueReportResource*, SamiError*));
  SamiRevenueReportResource* 
  getRefundRevenueWithCompletion(String* currencyCode, Long* startDate, Long* endDate, void (* handler)(SamiRevenueReportResource*, SamiError*));
  SamiPageResource«RevenueCountryReportResource»* 
  getRevenueByCountryWithCompletion(String* currencyCode, Long* startDate, Long* endDate, Integer* size, Integer* page, void (* handler)(SamiPageResource«RevenueCountryReportResource»*, SamiError*));
  SamiPageResource«RevenueProductReportResource»* 
  getRevenueByItemWithCompletion(String* currencyCode, Long* startDate, Long* endDate, Integer* size, Integer* page, void (* handler)(SamiPageResource«RevenueProductReportResource»*, SamiError*));
  SamiRevenueReportResource* 
  getSubscriptionRevenueWithCompletion(String* currencyCode, Long* startDate, Long* endDate, void (* handler)(SamiRevenueReportResource*, SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiReportingRevenueApi_H_ */
