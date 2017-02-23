#ifndef SamiLogsApi_H_
#define SamiLogsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiBreEventLog.h"
#include "SamiForwardLog.h"
#include "SamiPageResource«BreEventLog».h"
#include "SamiPageResource«ForwardLog».h"
#include "SamiPageResource«UserActionLog».h"
#include "SamiResult.h"
#include "SamiUserActionLog.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiLogsApi {
public:
  SamiLogsApi();
  virtual ~SamiLogsApi();

  void 
  addUserLogWithCompletion(SamiUserActionLog* logEntry, void(* handler)(SamiError*));
  SamiBreEventLog* 
  getBREEventLogWithCompletion(String* _id, void (* handler)(SamiBreEventLog*, SamiError*));
  SamiPageResource«BreEventLog»* 
  getBREEventLogsWithCompletion(String* filterStartDate, String* filterEventName, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«BreEventLog»*, SamiError*));
  SamiForwardLog* 
  getBREForwardLogWithCompletion(String* _id, void (* handler)(SamiForwardLog*, SamiError*));
  SamiPageResource«ForwardLog»* 
  getBREForwardLogsWithCompletion(String* filterStartDate, String* filterEndDate, Integer* filterStatusCode, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«ForwardLog»*, SamiError*));
  SamiUserActionLog* 
  getUserLogWithCompletion(String* _id, void (* handler)(SamiUserActionLog*, SamiError*));
  SamiPageResource«UserActionLog»* 
  getUserLogsWithCompletion(Integer* filterUser, String* filterActionName, Integer* size, Integer* page, void (* handler)(SamiPageResource«UserActionLog»*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiLogsApi_H_ */
