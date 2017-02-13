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
  getUserSubscriptionDetailsWithCompletion(Integer* userId, Integer* inventoryId, void (* handler)(SamiInventorySubscriptionResource*, SamiError*));
  IList* 
  getUsersSubscriptionDetailsWithCompletion(Integer* userId, void (* handler)(IList*, SamiError*));
  SamiInvoiceResource* 
  reactivateUserSubscriptionWithCompletion(Integer* userId, Integer* inventoryId, SamiReactivateSubscriptionRequest* reactivateSubscriptionRequest, void (* handler)(SamiInvoiceResource*, SamiError*));
  void 
  setSubscriptionBillDateWithCompletion(Integer* userId, Integer* inventoryId, Long* billDate, void(* handler)(SamiError*));
  void 
  setSubscriptionPaymentMethodWithCompletion(Integer* userId, Integer* inventoryId, Integer* paymentMethodId, void(* handler)(SamiError*));
  void 
  setSubscriptionStatusWithCompletion(Integer* userId, Integer* inventoryId, String* status, void(* handler)(SamiError*));
  void 
  setUserSubscriptionPlanWithCompletion(Integer* userId, Integer* inventoryId, String* planId, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://integration.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUsersSubscriptionsApi_H_ */
