#ifndef SamiPaymentsAppleApi_H_
#define SamiPaymentsAppleApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiApplyPaymentRequest.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiPaymentsAppleApi {
public:
  SamiPaymentsAppleApi();
  virtual ~SamiPaymentsAppleApi();

  String* 
  verifyReceiptUsingPOSTWithCompletion(SamiApplyPaymentRequest* request, void (* handler)(String*, SamiError*));
  static String getBasePath() {
    return L"https://integration.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiPaymentsAppleApi_H_ */
