#ifndef SamiStoreShippingApi_H_
#define SamiStoreShippingApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiItemTemplateResource.h"
#include "SamiPageResource«ItemTemplateResource».h"
#include "SamiShippingItem.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiStoreShippingApi {
public:
  SamiStoreShippingApi();
  virtual ~SamiStoreShippingApi();

  SamiShippingItem* 
  createShippingItemWithCompletion(SamiShippingItem* shippingItem, void (* handler)(SamiShippingItem*, SamiError*));
  SamiItemTemplateResource* 
  createShippingTemplateWithCompletion(SamiItemTemplateResource* shippingTemplateResource, void (* handler)(SamiItemTemplateResource*, SamiError*));
  void 
  deleteShippingItemWithCompletion(Integer* _id, void(* handler)(SamiError*));
  void 
  deleteShippingTemplateWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  SamiShippingItem* 
  getShippingItemWithCompletion(Integer* _id, void (* handler)(SamiShippingItem*, SamiError*));
  SamiItemTemplateResource* 
  getShippingTemplateWithCompletion(String* _id, void (* handler)(SamiItemTemplateResource*, SamiError*));
  SamiPageResource«ItemTemplateResource»* 
  getShippingTemplatesWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«ItemTemplateResource»*, SamiError*));
  void 
  updateShippingItemWithCompletion(Integer* _id, SamiShippingItem* shippingItem, void(* handler)(SamiError*));
  void 
  updateShippingTemplateWithCompletion(String* _id, SamiItemTemplateResource* shippingTemplateResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://integration.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiStoreShippingApi_H_ */
