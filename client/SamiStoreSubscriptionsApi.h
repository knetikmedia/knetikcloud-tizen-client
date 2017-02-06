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

  SamiSubscriptionResource* 
  createSubscriptionWithCompletion(SamiSubscriptionResource* subscriptionResource, void (* handler)(SamiSubscriptionResource*, SamiError*));
  SamiSubscriptionTemplateResource* 
  createSubscriptionTemplateWithCompletion(SamiSubscriptionTemplateResource* subscriptionTemplateResource, void (* handler)(SamiSubscriptionTemplateResource*, SamiError*));
  void 
  deleteSubscriptionWithCompletion(Integer* _id, String* planId, void(* handler)(SamiError*));
  void 
  deleteSubscriptionTemplateWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  SamiSubscriptionResource* 
  getSubscriptionWithCompletion(Integer* _id, void (* handler)(SamiSubscriptionResource*, SamiError*));
  SamiSubscriptionTemplateResource* 
  getSubscriptionTemplateWithCompletion(String* _id, void (* handler)(SamiSubscriptionTemplateResource*, SamiError*));
  SamiPageResource«SubscriptionTemplateResource»* 
  getSubscriptionTemplatesWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«SubscriptionTemplateResource»*, SamiError*));
  SamiPageResource«SubscriptionResource»* 
  getSubscriptionsWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«SubscriptionResource»*, SamiError*));
  void 
  processSubscriptionsWithCompletion( void(* handler)(SamiError*));
  void 
  updateSubscriptionWithCompletion(Integer* _id, SamiSubscriptionResource* subscriptionResource, void(* handler)(SamiError*));
  void 
  updateSubscriptionTemplateWithCompletion(String* _id, SamiSubscriptionTemplateResource* subscriptionTemplateResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiStoreSubscriptionsApi_H_ */
