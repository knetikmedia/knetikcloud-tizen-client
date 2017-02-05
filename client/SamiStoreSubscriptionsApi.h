#ifndef SamiStoreSubscriptionsApi_H_
#define SamiStoreSubscriptionsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiPageResource«SubscriptionResource».h"
#include "SamiPageResource«SubscriptionTemplateResource».h"
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
  SamiPageResource«SubscriptionTemplateResource»* 
  getSubscriptionTemplatesUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«SubscriptionTemplateResource»*, SamiError*));
  SamiSubscriptionResource* 
  getSubscriptionUsingGETWithCompletion(Integer* _id, void (* handler)(SamiSubscriptionResource*, SamiError*));
  SamiPageResource«SubscriptionResource»* 
  listSubscriptionsUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«SubscriptionResource»*, SamiError*));
  void 
  processUsingPOSTWithCompletion( void(* handler)(SamiError*));
  void 
  updateSubscriptionTemplateUsingPUTWithCompletion(String* _id, SamiSubscriptionTemplateResource* subscriptionTemplateResource, void(* handler)(SamiError*));
  void 
  updateSubscriptionUsingPUTWithCompletion(Integer* _id, SamiSubscriptionResource* subscriptionResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://integration.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiStoreSubscriptionsApi_H_ */
