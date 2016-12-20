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
  createShippingItemUsingPOSTWithCompletion(SamiShippingItem* shippingItem, void (* handler)(SamiShippingItem*, SamiError*));
  SamiItemTemplateResource* 
  createShippingTemplateUsingPOSTWithCompletion(SamiItemTemplateResource* shippingTemplateResource, void (* handler)(SamiItemTemplateResource*, SamiError*));
  void 
  deleteShippingItemUsingDELETEWithCompletion(Integer* _id, void(* handler)(SamiError*));
  void 
  deleteShippingTemplateUsingDELETEWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  SamiShippingItem* 
  getShippingItemUsingGETWithCompletion(Integer* _id, void (* handler)(SamiShippingItem*, SamiError*));
  SamiItemTemplateResource* 
  getShippingTemplateUsingGETWithCompletion(String* _id, void (* handler)(SamiItemTemplateResource*, SamiError*));
  SamiPageResource«ItemTemplateResource»* 
  getShippingTemplatesUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«ItemTemplateResource»*, SamiError*));
  void 
  updateShippingItemUsingPUTWithCompletion(Integer* _id, SamiShippingItem* shippingItem, void(* handler)(SamiError*));
  void 
  updateShippingTemplateUsingPUTWithCompletion(String* _id, SamiItemTemplateResource* shippingTemplateResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiStoreShippingApi_H_ */
