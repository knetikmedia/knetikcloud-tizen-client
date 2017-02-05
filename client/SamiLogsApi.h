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
#include "SamiUserActionLog.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiLogsApi {
public:
  SamiLogsApi();
  virtual ~SamiLogsApi();

  void 
  addUserLogUsingPOSTWithCompletion(SamiUserActionLog* logEntry, void(* handler)(SamiError*));
  SamiBreEventLog* 
  getEventLogUsingGETWithCompletion(String* _id, void (* handler)(SamiBreEventLog*, SamiError*));
  SamiPageResource«BreEventLog»* 
  getEventsLogsUsingGETWithCompletion(String* filterStartDate, String* filterEventName, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«BreEventLog»*, SamiError*));
  SamiForwardLog* 
  getForwardLogUsingGETWithCompletion(String* _id, void (* handler)(SamiForwardLog*, SamiError*));
  SamiPageResource«ForwardLog»* 
  getForwardLogsUsingGETWithCompletion(String* filterStartDate, String* filterEndDate, Integer* filterStatusCode, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«ForwardLog»*, SamiError*));
  SamiUserActionLog* 
  getUserLogsUsingGETWithCompletion(String* _id, void (* handler)(SamiUserActionLog*, SamiError*));
  SamiPageResource«UserActionLog»* 
  getUserLogsUsingGET1WithCompletion(Integer* filterUser, String* filterActionName, Integer* size, Integer* page, void (* handler)(SamiPageResource«UserActionLog»*, SamiError*));
  static String getBasePath() {
    return L"https://integration.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiLogsApi_H_ */
