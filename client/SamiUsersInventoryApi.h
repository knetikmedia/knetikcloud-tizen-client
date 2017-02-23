#ifndef SamiUsersInventoryApi_H_
#define SamiUsersInventoryApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Boolean;
using Tizen::Base::Integer;
#include "SamiEntitlementGrantRequest.h"
#include "SamiEntitlementItem.h"
#include "SamiInvoiceResource.h"
#include "SamiItemTemplateResource.h"
#include "SamiPageResource«EntitlementItem».h"
#include "SamiPageResource«ItemTemplateResource».h"
#include "SamiPageResource«UserInventoryResource».h"
#include "SamiPageResource«UserItemLogResource».h"
#include "SamiResult.h"
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
  addItemToUserInventoryWithCompletion(Integer* _id, SamiUserInventoryAddRequest* userInventoryAddRequest, void (* handler)(SamiInvoiceResource*, SamiError*));
  void 
  checkUserEntitlementItemWithCompletion(String* userId, Integer* itemId, String* sku, void(* handler)(SamiError*));
  SamiEntitlementItem* 
  createEntitlementItemWithCompletion(Boolean* cascade, SamiEntitlementItem* entitlementItem, void (* handler)(SamiEntitlementItem*, SamiError*));
  SamiItemTemplateResource* 
  createEntitlementTemplateWithCompletion(SamiItemTemplateResource* template, void (* handler)(SamiItemTemplateResource*, SamiError*));
  void 
  deleteEntitlementItemWithCompletion(Integer* entitlementId, void(* handler)(SamiError*));
  void 
  deleteEntitlementTemplateWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  SamiEntitlementItem* 
  getEntitlementItemWithCompletion(Integer* entitlementId, void (* handler)(SamiEntitlementItem*, SamiError*));
  SamiPageResource«EntitlementItem»* 
  getEntitlementItemsWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«EntitlementItem»*, SamiError*));
  SamiItemTemplateResource* 
  getEntitlementTemplateWithCompletion(String* _id, void (* handler)(SamiItemTemplateResource*, SamiError*));
  SamiPageResource«ItemTemplateResource»* 
  getEntitlementTemplatesWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«ItemTemplateResource»*, SamiError*));
  SamiPageResource«UserInventoryResource»* 
  getUserInventoriesWithCompletion(Integer* _id, Boolean* inactive, Integer* size, Integer* page, String* filterItemName, Integer* filterItemId, String* filterUsername, String* filterGroup, String* filterDate, void (* handler)(SamiPageResource«UserInventoryResource»*, SamiError*));
  SamiUserInventoryResource* 
  getUserInventoryWithCompletion(Integer* userId, Integer* _id, void (* handler)(SamiUserInventoryResource*, SamiError*));
  SamiPageResource«UserItemLogResource»* 
  getUserInventoryLogWithCompletion(String* userId, Integer* _id, Integer* size, Integer* page, void (* handler)(SamiPageResource«UserItemLogResource»*, SamiError*));
  SamiPageResource«UserInventoryResource»* 
  getUsersInventoryWithCompletion(Boolean* inactive, Integer* size, Integer* page, String* filterItemName, Integer* filterItemId, String* filterUsername, String* filterGroup, String* filterDate, void (* handler)(SamiPageResource«UserInventoryResource»*, SamiError*));
  void 
  grantUserEntitlementWithCompletion(Integer* userId, SamiEntitlementGrantRequest* grantRequest, void(* handler)(SamiError*));
  void 
  updateEntitlementItemWithCompletion(Integer* entitlementId, Boolean* cascade, SamiEntitlementItem* entitlementItem, void(* handler)(SamiError*));
  SamiItemTemplateResource* 
  updateEntitlementTemplateWithCompletion(String* _id, SamiItemTemplateResource* template, void (* handler)(SamiItemTemplateResource*, SamiError*));
  void 
  updateUserInventoryBehaviorDataWithCompletion(Integer* userId, Integer* _id, SamiObject* data, void(* handler)(SamiError*));
  void 
  updateUserInventoryExpiresWithCompletion(Integer* userId, Integer* _id, Long* timestamp, void(* handler)(SamiError*));
  void 
  updateUserInventoryStatusWithCompletion(Integer* userId, Integer* _id, String* inventoryStatus, void(* handler)(SamiError*));
  void 
  useUserEntitlementItemWithCompletion(String* userId, Integer* itemId, String* sku, String* info, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUsersInventoryApi_H_ */
