#ifndef SamiStoreApi_H_
#define SamiStoreApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Boolean;
using Tizen::Base::Integer;
#include "SamiPageResource«StoreItemTemplateResource».h"
#include "SamiPageResource«StoreItem».h"
#include "SamiStoreItem.h"
#include "SamiStoreItemTemplateResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiStoreApi {
public:
  SamiStoreApi();
  virtual ~SamiStoreApi();

  SamiStoreItemTemplateResource* 
  createItemTemplateUsingPOSTWithCompletion(SamiStoreItemTemplateResource* itemTemplateResource, void (* handler)(SamiStoreItemTemplateResource*, SamiError*));
  SamiStoreItem* 
  createStoreItemExternalUsingPOSTWithCompletion(SamiStoreItem* storeItem, void (* handler)(SamiStoreItem*, SamiError*));
  void 
  deleteItemTemplateUsingDELETEWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  void 
  deleteStoreItemUsingDELETE1WithCompletion(Integer* _id, void(* handler)(SamiError*));
  SamiStoreItemTemplateResource* 
  getItemTemplateUsingGETWithCompletion(String* _id, void (* handler)(SamiStoreItemTemplateResource*, SamiError*));
  SamiPageResource«StoreItemTemplateResource»* 
  getItemTemplatesUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«StoreItemTemplateResource»*, SamiError*));
  SamiStoreItem* 
  getStoreItemUsingGET1WithCompletion(Integer* _id, void (* handler)(SamiStoreItem*, SamiError*));
  SamiPageResource«StoreItem»* 
  getStoreItemsUsingGETWithCompletion(String* filterNameSearch, String* filterUniqueKey, Boolean* filterPublished, Boolean* filterDisplayable, String* filterStart, String* filterEnd, String* filterStartDate, String* filterStopDate, String* filterSku, String* filterPrice, String* filterTag, String* filterItemsByType, String* filterBundledSkus, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«StoreItem»*, SamiError*));
  SamiPageResource«StoreItem»* 
  getUsingGET2WithCompletion(Integer* limit, Integer* page, Boolean* useCatalog, Boolean* ignoreLocation, Boolean* inStockOnly, void (* handler)(SamiPageResource«StoreItem»*, SamiError*));
  void 
  updateItemTemplateUsingPUTWithCompletion(String* _id, SamiStoreItemTemplateResource* itemTemplateResource, void(* handler)(SamiError*));
  void 
  updateStoreItemExternalUsingPUTWithCompletion(Integer* _id, SamiStoreItem* storeItem, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://integration.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiStoreApi_H_ */
