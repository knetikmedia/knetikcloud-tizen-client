#ifndef SamiPaymentsOptimalApi_H_
#define SamiPaymentsOptimalApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiOptimalPaymentRequest.h"
#include "SamiResult.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiPaymentsOptimalApi {
public:
  SamiPaymentsOptimalApi();
  virtual ~SamiPaymentsOptimalApi();

  String* 
  silentPostOptimalWithCompletion(SamiOptimalPaymentRequest* request, void (* handler)(String*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiPaymentsOptimalApi_H_ */
