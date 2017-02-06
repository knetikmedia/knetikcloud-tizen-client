#ifndef SamiReportingUsageApi_H_
#define SamiReportingUsageApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Boolean;
using Tizen::Base::Integer;
using Tizen::Base::Long;
#include "SamiPageResource«UsageInfo».h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiReportingUsageApi {
public:
  SamiReportingUsageApi();
  virtual ~SamiReportingUsageApi();

  SamiPageResource«UsageInfo»* 
  getUsageByDayWithCompletion(Long* startDate, Long* endDate, Boolean* combineEndpoints, Integer* size, Integer* page, void (* handler)(SamiPageResource«UsageInfo»*, SamiError*));
  SamiPageResource«UsageInfo»* 
  getUsageByHourWithCompletion(Long* startDate, Long* endDate, Boolean* combineEndpoints, Integer* size, Integer* page, void (* handler)(SamiPageResource«UsageInfo»*, SamiError*));
  SamiPageResource«UsageInfo»* 
  getUsageByMinuteWithCompletion(Long* startDate, Long* endDate, Boolean* combineEndpoints, Integer* size, Integer* page, void (* handler)(SamiPageResource«UsageInfo»*, SamiError*));
  SamiPageResource«UsageInfo»* 
  getUsageByMonthWithCompletion(Long* startDate, Long* endDate, Boolean* combineEndpoints, Integer* size, Integer* page, void (* handler)(SamiPageResource«UsageInfo»*, SamiError*));
  SamiPageResource«UsageInfo»* 
  getUsageByYearWithCompletion(Long* startDate, Long* endDate, Boolean* combineEndpoints, Integer* size, Integer* page, void (* handler)(SamiPageResource«UsageInfo»*, SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiReportingUsageApi_H_ */
