#ifndef SamiPaymentsApi_H_
#define SamiPaymentsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiPaymentAuthorizationResource.h"
#include "SamiPaymentMethodResource.h"
#include "SamiResult.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiPaymentsApi {
public:
  SamiPaymentsApi();
  virtual ~SamiPaymentsApi();

  SamiPaymentMethodResource* 
  createPaymentMethodWithCompletion(Integer* userId, SamiPaymentMethodResource* paymentMethod, void (* handler)(SamiPaymentMethodResource*, SamiError*));
  void 
  deletePaymentMethodWithCompletion(Integer* userId, Integer* _id, void(* handler)(SamiError*));
  SamiPaymentMethodResource* 
  getPaymentMethodWithCompletion(Integer* userId, Integer* _id, void (* handler)(SamiPaymentMethodResource*, SamiError*));
  IList* 
  getPaymentMethodsWithCompletion(Integer* userId, Integer* size, Integer* page, String* order, void (* handler)(IList*, SamiError*));
  SamiPaymentAuthorizationResource* 
  paymentAuthorizationWithCompletion(SamiPaymentAuthorizationResource* request, void (* handler)(SamiPaymentAuthorizationResource*, SamiError*));
  void 
  paymentCaptureWithCompletion(Integer* _id, void(* handler)(SamiError*));
  SamiPaymentMethodResource* 
  updatePaymentMethodWithCompletion(Integer* userId, Integer* _id, SamiPaymentMethodResource* paymentMethod, void (* handler)(SamiPaymentMethodResource*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiPaymentsApi_H_ */
