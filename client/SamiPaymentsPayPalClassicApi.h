#ifndef SamiPaymentsPayPalClassicApi_H_
#define SamiPaymentsPayPalClassicApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiCreateBillingAgreementRequest.h"
#include "SamiCreatePayPalPaymentRequest.h"
#include "SamiFinalizeBillingAgreementRequest.h"
#include "SamiFinalizePayPalPaymentRequest.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiPaymentsPayPalClassicApi {
public:
  SamiPaymentsPayPalClassicApi();
  virtual ~SamiPaymentsPayPalClassicApi();

  String* 
  createPayPalBillingAgreementUrlWithCompletion(SamiCreateBillingAgreementRequest* request, void (* handler)(String*, SamiError*));
  String* 
  createPayPalExpressCheckoutWithCompletion(SamiCreatePayPalPaymentRequest* request, void (* handler)(String*, SamiError*));
  Integer* 
  finalizePayPalBillingAgreementWithCompletion(SamiFinalizeBillingAgreementRequest* request, void (* handler)(Integer*, SamiError*));
  void 
  finalizePayPalCheckoutWithCompletion(SamiFinalizePayPalPaymentRequest* request, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiPaymentsPayPalClassicApi_H_ */
