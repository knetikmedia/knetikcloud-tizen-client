#ifndef SamiReportingUsageApi_H_
#define SamiReportingUsageApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Boolean;
using Tizen::Base::Integer;
using Tizen::Base::Long;
#include "SamiPage«UsageInfo».h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiReportingUsageApi {
public:
  SamiReportingUsageApi();
  virtual ~SamiReportingUsageApi();

  SamiPage«UsageInfo»* 
  getUsageByDayUsingGETWithCompletion(Long* startDate, Long* endDate, Boolean* combineEndpoints, Integer* size, Integer* page, void (* handler)(SamiPage«UsageInfo»*, SamiError*));
  SamiPage«UsageInfo»* 
  getUsageByHourUsingGETWithCompletion(Long* startDate, Long* endDate, Boolean* combineEndpoints, Integer* size, Integer* page, void (* handler)(SamiPage«UsageInfo»*, SamiError*));
  SamiPage«UsageInfo»* 
  getUsageByMinuteUsingGETWithCompletion(Long* startDate, Long* endDate, Boolean* combineEndpoints, Integer* size, Integer* page, void (* handler)(SamiPage«UsageInfo»*, SamiError*));
  SamiPage«UsageInfo»* 
  getUsageByMonthUsingGETWithCompletion(Long* startDate, Long* endDate, Boolean* combineEndpoints, Integer* size, Integer* page, void (* handler)(SamiPage«UsageInfo»*, SamiError*));
  SamiPage«UsageInfo»* 
  getUsageByYearUsingGETWithCompletion(Long* startDate, Long* endDate, Boolean* combineEndpoints, Integer* size, Integer* page, void (* handler)(SamiPage«UsageInfo»*, SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiReportingUsageApi_H_ */
