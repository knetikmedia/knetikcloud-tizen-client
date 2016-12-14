#ifndef SamiStoreApi_H_
#define SamiStoreApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Boolean;
using Tizen::Base::Integer;
#include "SamiItemTemplateResource.h"
#include "SamiPage«ItemTemplateResource».h"
#include "SamiPage«StoreItem».h"
#include "SamiStoreItem.h"
#include "SamiStoreListRequest.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiStoreApi {
public:
  SamiStoreApi();
  virtual ~SamiStoreApi();

  SamiItemTemplateResource* 
  createItemTemplateUsingPOSTWithCompletion(SamiItemTemplateResource* itemTemplateResource, void (* handler)(SamiItemTemplateResource*, SamiError*));
  SamiStoreItem* 
  createStoreItemExternalUsingPOSTWithCompletion(SamiStoreItem* storeItem, void (* handler)(SamiStoreItem*, SamiError*));
  void 
  deleteItemTemplateUsingDELETEWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  void 
  deleteStoreItemUsingDELETE1WithCompletion(Integer* _id, void(* handler)(SamiError*));
  SamiItemTemplateResource* 
  getItemTemplateUsingGETWithCompletion(String* _id, void (* handler)(SamiItemTemplateResource*, SamiError*));
  SamiPage«ItemTemplateResource»* 
  getItemTemplatesUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPage«ItemTemplateResource»*, SamiError*));
  SamiStoreItem* 
  getStoreItemUsingGET1WithCompletion(Integer* _id, void (* handler)(SamiStoreItem*, SamiError*));
  SamiPage«StoreItem»* 
  getStoreItemsUsingGETWithCompletion(String* filterNameSearch, String* filterUniqueKey, Boolean* filterPublished, Boolean* filterDisplayable, String* filterStart, String* filterEnd, String* filterStartDate, String* filterStopDate, String* filterSku, String* filterPrice, String* filterTag, String* filterItemsByType, String* filterBundledSkus, Integer* size, Integer* page, String* order, void (* handler)(SamiPage«StoreItem»*, SamiError*));
  SamiPage«StoreItem»* 
  getUsingGET2WithCompletion(SamiStoreListRequest* storeListRequest, void (* handler)(SamiPage«StoreItem»*, SamiError*));
  void 
  updateItemTemplateUsingPUTWithCompletion(String* _id, SamiItemTemplateResource* itemTemplateResource, void(* handler)(SamiError*));
  void 
  updateStoreItemExternalUsingPUTWithCompletion(Integer* _id, SamiStoreItem* storeItem, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiStoreApi_H_ */
