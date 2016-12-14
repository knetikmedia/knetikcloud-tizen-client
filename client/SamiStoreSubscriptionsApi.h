#ifndef SamiStoreSubscriptionsApi_H_
#define SamiStoreSubscriptionsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiPage«BillingReport».h"
#include "SamiPage«SubscriptionResource».h"
#include "SamiPage«SubscriptionTemplateResource».h"
#include "SamiSubscriptionResource.h"
#include "SamiSubscriptionTemplateResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiStoreSubscriptionsApi {
public:
  SamiStoreSubscriptionsApi();
  virtual ~SamiStoreSubscriptionsApi();

  SamiSubscriptionTemplateResource* 
  createSubscriptionTemplateUsingPOSTWithCompletion(SamiSubscriptionTemplateResource* subscriptionTemplateResource, void (* handler)(SamiSubscriptionTemplateResource*, SamiError*));
  SamiSubscriptionResource* 
  createSubscriptionUsingPOSTWithCompletion(SamiSubscriptionResource* subscriptionResource, void (* handler)(SamiSubscriptionResource*, SamiError*));
  void 
  deletePlanUsingDELETEWithCompletion(Integer* _id, String* planId, void(* handler)(SamiError*));
  void 
  deleteSubscriptionTemplateUsingDELETEWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  SamiSubscriptionTemplateResource* 
  getSubscriptionTemplateUsingGETWithCompletion(String* _id, void (* handler)(SamiSubscriptionTemplateResource*, SamiError*));
  SamiPage«SubscriptionTemplateResource»* 
  getSubscriptionTemplatesUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPage«SubscriptionTemplateResource»*, SamiError*));
  SamiSubscriptionResource* 
  getSubscriptionUsingGETWithCompletion(Integer* _id, void (* handler)(SamiSubscriptionResource*, SamiError*));
  SamiPage«BillingReport»* 
  listBillingReportsUsingGETWithCompletion(Integer* size, Integer* page, void (* handler)(SamiPage«BillingReport»*, SamiError*));
  SamiPage«SubscriptionResource»* 
  listSubscriptionsUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPage«SubscriptionResource»*, SamiError*));
  void 
  processUsingPOSTWithCompletion( void(* handler)(SamiError*));
  void 
  updateSubscriptionTemplateUsingPUTWithCompletion(String* _id, SamiSubscriptionTemplateResource* subscriptionTemplateResource, void(* handler)(SamiError*));
  void 
  updateSubscriptionUsingPUTWithCompletion(Integer* _id, SamiSubscriptionResource* subscriptionResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiStoreSubscriptionsApi_H_ */
