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
  createBillingAgreementUrlUsingPOSTWithCompletion(SamiCreateBillingAgreementRequest* request, void (* handler)(String*, SamiError*));
  String* 
  expressCheckoutUsingPOSTWithCompletion(SamiCreatePayPalPaymentRequest* request, void (* handler)(String*, SamiError*));
  Integer* 
  finalizeBillingAgreementUsingPOSTWithCompletion(SamiFinalizeBillingAgreementRequest* request, void (* handler)(Integer*, SamiError*));
  void 
  finalizeCheckoutUsingPOSTWithCompletion(SamiFinalizePayPalPaymentRequest* request, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiPaymentsPayPalClassicApi_H_ */
