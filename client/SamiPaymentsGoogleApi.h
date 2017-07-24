#ifndef SamiPaymentsGoogleApi_H_
#define SamiPaymentsGoogleApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiGooglePaymentRequest.h"
#include "SamiResult.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiPaymentsGoogleApi {
public:
  SamiPaymentsGoogleApi();
  virtual ~SamiPaymentsGoogleApi();

  Integer* 
  handleGooglePaymentWithCompletion(SamiGooglePaymentRequest* request, void (* handler)(Integer*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiPaymentsGoogleApi_H_ */
