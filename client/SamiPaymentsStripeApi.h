#ifndef SamiPaymentsStripeApi_H_
#define SamiPaymentsStripeApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiPaymentMethodResource.h"
#include "SamiStripeCreatePaymentMethod.h"
#include "SamiStripePaymentRequest.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiPaymentsStripeApi {
public:
  SamiPaymentsStripeApi();
  virtual ~SamiPaymentsStripeApi();

  SamiPaymentMethodResource* 
  createStripePaymentMethodWithCompletion(SamiStripeCreatePaymentMethod* request, void (* handler)(SamiPaymentMethodResource*, SamiError*));
  void 
  payStripeInvoiceWithCompletion(SamiStripePaymentRequest* request, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiPaymentsStripeApi_H_ */
