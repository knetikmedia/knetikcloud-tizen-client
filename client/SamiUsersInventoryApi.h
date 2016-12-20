#ifndef SamiUsersInventoryApi_H_
#define SamiUsersInventoryApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Boolean;
using Tizen::Base::Integer;
using Tizen::Base::Long;
#include "SamiEntitlementItem.h"
#include "SamiInvoiceResource.h"
#include "SamiItemTemplateResource.h"
#include "SamiPageResource«EntitlementItem».h"
#include "SamiPageResource«ItemTemplateResource».h"
#include "SamiPageResource«UserInventoryResource».h"
#include "SamiPageResource«UserItemLogResource».h"
#include "SamiUserInventoryAddRequest.h"
#include "SamiUserInventoryResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUsersInventoryApi {
public:
  SamiUsersInventoryApi();
  virtual ~SamiUsersInventoryApi();

  SamiInvoiceResource* 
  addItemUsingPOST1WithCompletion(Integer* _id, SamiUserInventoryAddRequest* userInventoryAddRequest, void (* handler)(SamiInvoiceResource*, SamiError*));
  SamiEntitlementItem* 
  createItemUsingPOSTWithCompletion(SamiEntitlementItem* entitlementItem, void (* handler)(SamiEntitlementItem*, SamiError*));
  SamiItemTemplateResource* 
  createTemplateUsingPOST3WithCompletion(SamiItemTemplateResource* template, void (* handler)(SamiItemTemplateResource*, SamiError*));
  void 
  deleteEntitlementTemplateUsingDELETEWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  void 
  deleteItemUsingDELETEWithCompletion(Integer* entitlementId, void(* handler)(SamiError*));
  void 
  entitlementCheckUsingGETWithCompletion(String* userId, Integer* itemId, String* sku, void(* handler)(SamiError*));
  void 
  entitlementUseUsingPOSTWithCompletion(String* userId, Integer* itemId, String* sku, String* info, void(* handler)(SamiError*));
  SamiPageResource«EntitlementItem»* 
  getCurrenciesUsingGET1WithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«EntitlementItem»*, SamiError*));
  SamiItemTemplateResource* 
  getEntitlementTemplateUsingGETWithCompletion(String* _id, void (* handler)(SamiItemTemplateResource*, SamiError*));
  SamiPageResource«ItemTemplateResource»* 
  getEntitlementTemplatesUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«ItemTemplateResource»*, SamiError*));
  SamiPageResource«UserInventoryResource»* 
  getInventoryListUsingGETWithCompletion(Boolean* inactive, Integer* size, Integer* page, String* filterItemName, String* filterUsername, String* filterGroup, String* filterDate, void (* handler)(SamiPageResource«UserInventoryResource»*, SamiError*));
  SamiUserInventoryResource* 
  getInventoryUsingGETWithCompletion(Integer* userId, Integer* _id, void (* handler)(SamiUserInventoryResource*, SamiError*));
  SamiEntitlementItem* 
  getItemUsingGETWithCompletion(Integer* entitlementId, void (* handler)(SamiEntitlementItem*, SamiError*));
  SamiPageResource«UserInventoryResource»* 
  getUserInventoryListUsingGETWithCompletion(Integer* _id, Boolean* inactive, Integer* size, Integer* page, String* filterItemName, Long* filterMinDate, Long* filterMaxDate, void (* handler)(SamiPageResource«UserInventoryResource»*, SamiError*));
  SamiPageResource«UserItemLogResource»* 
  getUserInventoryLogUsingGETWithCompletion(String* userId, Integer* _id, Integer* size, Integer* page, void (* handler)(SamiPageResource«UserItemLogResource»*, SamiError*));
  void 
  updateItemUsingPUT1WithCompletion(Integer* entitlementId, SamiEntitlementItem* entitlementItem, void(* handler)(SamiError*));
  void 
  updateTemplateUsingPUT3WithCompletion(String* _id, SamiItemTemplateResource* template, void(* handler)(SamiError*));
  void 
  updateUserInventoryBehaviorDataUsingPUTWithCompletion(Integer* userId, Integer* _id, SamiObject* data, void(* handler)(SamiError*));
  void 
  updateUserInventoryExpiresUsingPUTWithCompletion(Integer* userId, Integer* _id, Long* timestamp, void(* handler)(SamiError*));
  void 
  updateUserInventoryStatusUsingPUTWithCompletion(Integer* userId, Integer* _id, String* inventoryStatus, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUsersInventoryApi_H_ */
