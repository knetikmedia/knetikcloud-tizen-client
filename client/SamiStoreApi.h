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
  createItemTemplateWithCompletion(SamiStoreItemTemplateResource* itemTemplateResource, void (* handler)(SamiStoreItemTemplateResource*, SamiError*));
  SamiStoreItem* 
  createStoreItemWithCompletion(SamiStoreItem* storeItem, void (* handler)(SamiStoreItem*, SamiError*));
  void 
  deleteItemTemplateWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  void 
  deleteStoreItemWithCompletion(Integer* _id, void(* handler)(SamiError*));
  SamiStoreItemTemplateResource* 
  getItemTemplateWithCompletion(String* _id, void (* handler)(SamiStoreItemTemplateResource*, SamiError*));
  SamiPageResource«StoreItemTemplateResource»* 
  getItemTemplatesWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«StoreItemTemplateResource»*, SamiError*));
  SamiPageResource«StoreItem»* 
  getStoreWithCompletion(Integer* limit, Integer* page, Boolean* useCatalog, Boolean* ignoreLocation, Boolean* inStockOnly, void (* handler)(SamiPageResource«StoreItem»*, SamiError*));
  SamiStoreItem* 
  getStoreItemWithCompletion(Integer* _id, void (* handler)(SamiStoreItem*, SamiError*));
  SamiPageResource«StoreItem»* 
  getStoreItemsWithCompletion(String* filterNameSearch, String* filterUniqueKey, Boolean* filterPublished, Boolean* filterDisplayable, String* filterStart, String* filterEnd, String* filterStartDate, String* filterStopDate, String* filterSku, String* filterPrice, String* filterTag, String* filterItemsByType, String* filterBundledSkus, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«StoreItem»*, SamiError*));
  void 
  updateItemTemplateWithCompletion(String* _id, SamiStoreItemTemplateResource* itemTemplateResource, void(* handler)(SamiError*));
  void 
  updateStoreItemWithCompletion(Integer* _id, SamiStoreItem* storeItem, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiStoreApi_H_ */
