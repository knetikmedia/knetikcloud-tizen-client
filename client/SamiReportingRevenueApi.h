#ifndef SamiReportingRevenueApi_H_
#define SamiReportingRevenueApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
using Tizen::Base::Long;
#include "SamiPageResource«RevenueCountryReportResource».h"
#include "SamiPageResource«RevenueProductReportResource».h"
#include "SamiRevenueReportResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiReportingRevenueApi {
public:
  SamiReportingRevenueApi();
  virtual ~SamiReportingRevenueApi();

  SamiPageResource«RevenueCountryReportResource»* 
  executiveRevenueCountrySalesUsingGETWithCompletion(String* currencyCode, Long* startDate, Long* endDate, Integer* size, Integer* page, void (* handler)(SamiPageResource«RevenueCountryReportResource»*, SamiError*));
  SamiRevenueReportResource* 
  executiveRevenueItemSalesUsingGETWithCompletion(String* currencyCode, Long* startDate, Long* endDate, void (* handler)(SamiRevenueReportResource*, SamiError*));
  SamiPageResource«RevenueProductReportResource»* 
  executiveRevenueProductSalesUsingGETWithCompletion(String* currencyCode, Long* startDate, Long* endDate, Integer* size, Integer* page, void (* handler)(SamiPageResource«RevenueProductReportResource»*, SamiError*));
  SamiRevenueReportResource* 
  executiveRevenueRefundsUsingGETWithCompletion(String* currencyCode, Long* startDate, Long* endDate, void (* handler)(SamiRevenueReportResource*, SamiError*));
  SamiRevenueReportResource* 
  executiveRevenueSubscriptionSalesUsingGETWithCompletion(String* currencyCode, Long* startDate, Long* endDate, void (* handler)(SamiRevenueReportResource*, SamiError*));
  static String getBasePath() {
    return L"https://integration.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiReportingRevenueApi_H_ */
