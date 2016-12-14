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
#include "SamiPage«EntitlementItem».h"
#include "SamiPage«UserInventoryResource».h"
#include "SamiPage«UserItemLogResource».h"
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
  void 
  deleteItemUsingDELETEWithCompletion(Integer* entitlementId, void(* handler)(SamiError*));
  void 
  entitlementCheckUsingGETWithCompletion(String* userId, Integer* itemId, String* sku, void(* handler)(SamiError*));
  void 
  entitlementUseUsingPOSTWithCompletion(String* userId, Integer* itemId, String* sku, String* info, void(* handler)(SamiError*));
  SamiPage«EntitlementItem»* 
  getCurrenciesUsingGET1WithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPage«EntitlementItem»*, SamiError*));
  SamiPage«UserInventoryResource»* 
  getInventoryListUsingGETWithCompletion(Boolean* inactive, Integer* size, Integer* page, String* filterItemName, Long* filterMinDate, Long* filterMaxDate, void (* handler)(SamiPage«UserInventoryResource»*, SamiError*));
  SamiUserInventoryResource* 
  getInventoryUsingGETWithCompletion(Integer* userId, Integer* _id, void (* handler)(SamiUserInventoryResource*, SamiError*));
  SamiEntitlementItem* 
  getItemUsingGETWithCompletion(Integer* entitlementId, void (* handler)(SamiEntitlementItem*, SamiError*));
  SamiPage«UserInventoryResource»* 
  getUserInventoryListUsingGETWithCompletion(Integer* _id, Boolean* inactive, Integer* size, Integer* page, String* filterItemName, Long* filterMinDate, Long* filterMaxDate, void (* handler)(SamiPage«UserInventoryResource»*, SamiError*));
  SamiPage«UserItemLogResource»* 
  getUserInventoryLogUsingGETWithCompletion(String* userId, Integer* _id, Integer* size, Integer* page, void (* handler)(SamiPage«UserItemLogResource»*, SamiError*));
  void 
  updateItemUsingPUT1WithCompletion(Integer* entitlementId, SamiEntitlementItem* entitlementItem, void(* handler)(SamiError*));
  void 
  updateUserInventoryBehaviorDataUsingPUTWithCompletion(Integer* userId, Integer* _id, SamiObject* data, void(* handler)(SamiError*));
  void 
  updateUserInventoryExpiresUsingPUTWithCompletion(Integer* userId, Integer* _id, Long* timestamp, void(* handler)(SamiError*));
  void 
  updateUserInventoryStatusUsingPUTWithCompletion(Integer* userId, Integer* _id, String* inventoryStatus, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUsersInventoryApi_H_ */
