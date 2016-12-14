#ifndef SamiUsersSubscriptionsApi_H_
#define SamiUsersSubscriptionsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiInventorySubscriptionResource.h"
#include "SamiInvoiceResource.h"
#include "SamiReactivateSubscriptionRequest.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUsersSubscriptionsApi {
public:
  SamiUsersSubscriptionsApi();
  virtual ~SamiUsersSubscriptionsApi();

  SamiInventorySubscriptionResource* 
  getSubscriptionDetailsUsingGETWithCompletion(Integer* userId, Integer* inventoryId, void (* handler)(SamiInventorySubscriptionResource*, SamiError*));
  IList* 
  getSubscriptionDetailsUsingGET1WithCompletion(Integer* userId, void (* handler)(IList*, SamiError*));
  SamiInvoiceResource* 
  reactivateUsingPOSTWithCompletion(Integer* userId, Integer* inventoryId, SamiReactivateSubscriptionRequest* reactivateSubscriptionRequest, void (* handler)(SamiInvoiceResource*, SamiError*));
  void 
  setBillDateUsingPUTWithCompletion(Integer* userId, Integer* inventoryId, Long* billDate, void(* handler)(SamiError*));
  void 
  setPaymentMethodUsingPUTWithCompletion(Integer* userId, Integer* inventoryId, Integer* paymentMethodId, void(* handler)(SamiError*));
  void 
  setStatusUsingPUTWithCompletion(Integer* userId, Integer* inventoryId, String* status, void(* handler)(SamiError*));
  void 
  setUserPlanUsingPUTWithCompletion(Integer* userId, Integer* inventoryId, String* planId, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUsersSubscriptionsApi_H_ */
