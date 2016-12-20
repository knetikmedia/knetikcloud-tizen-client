#ifndef SamiPaymentsApi_H_
#define SamiPaymentsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiPaymentAuthorizationResource.h"
#include "SamiPaymentMethodResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiPaymentsApi {
public:
  SamiPaymentsApi();
  virtual ~SamiPaymentsApi();

  SamiPaymentMethodResource* 
  createPaymentMethodUsingPOSTWithCompletion(Integer* userId, SamiPaymentMethodResource* paymentMethod, void (* handler)(SamiPaymentMethodResource*, SamiError*));
  void 
  deletePaymentMethodUsingDELETEWithCompletion(Integer* userId, Integer* _id, void(* handler)(SamiError*));
  SamiPaymentMethodResource* 
  getPaymentMethodUsingGETWithCompletion(Integer* userId, Integer* _id, void (* handler)(SamiPaymentMethodResource*, SamiError*));
  IList* 
  getPaymentMethodsUsingGETWithCompletion(Integer* userId, Integer* size, Integer* page, String* order, void (* handler)(IList*, SamiError*));
  SamiPaymentAuthorizationResource* 
  paymentAuthorizationUsingPOSTWithCompletion(SamiPaymentAuthorizationResource* request, void (* handler)(SamiPaymentAuthorizationResource*, SamiError*));
  void 
  paymentCaptureUsingPOSTWithCompletion(Integer* _id, void(* handler)(SamiError*));
  void 
  updatePaymentMethodUsingPUTWithCompletion(Integer* userId, Integer* _id, SamiPaymentMethodResource* paymentMethod, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiPaymentsApi_H_ */
