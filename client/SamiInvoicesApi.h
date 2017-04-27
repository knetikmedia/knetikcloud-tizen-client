#ifndef SamiInvoicesApi_H_
#define SamiInvoicesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiAddressResource.h"
#include "SamiInvoiceCreateRequest.h"
#include "SamiInvoicePaymentStatusRequest.h"
#include "SamiInvoiceResource.h"
#include "SamiPageResource«InvoiceLogEntry».h"
#include "SamiPageResource«InvoiceResource».h"
#include "SamiPayBySavedMethodRequest.h"
#include "SamiResult.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiInvoicesApi {
public:
  SamiInvoicesApi();
  virtual ~SamiInvoicesApi();

  IList* 
  createInvoiceWithCompletion(SamiInvoiceCreateRequest* req, void (* handler)(IList*, SamiError*));
  IList* 
  getFulFillmentStatusesWithCompletion( void (* handler)(IList*, SamiError*));
  SamiInvoiceResource* 
  getInvoiceWithCompletion(Integer* _id, void (* handler)(SamiInvoiceResource*, SamiError*));
  SamiPageResource«InvoiceLogEntry»* 
  getInvoiceLogsWithCompletion(Integer* _id, Integer* size, Integer* page, void (* handler)(SamiPageResource«InvoiceLogEntry»*, SamiError*));
  SamiPageResource«InvoiceResource»* 
  getInvoicesWithCompletion(Integer* filterUser, String* filterEmail, String* filterFulfillmentStatus, String* filterPaymentStatus, String* filterItemName, String* filterExternalRef, String* filterCreatedDate, String* filterVendorIds, String* filterCurrency, String* filterShippingStateName, String* filterShippingCountryName, String* filterShipping, String* filterVendorName, String* filterSku, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«InvoiceResource»*, SamiError*));
  IList* 
  getPaymentStatusesWithCompletion( void (* handler)(IList*, SamiError*));
  void 
  payInvoiceWithCompletion(Integer* _id, SamiPayBySavedMethodRequest* request, void(* handler)(SamiError*));
  void 
  setExternalRefWithCompletion(Integer* _id, String* externalRef, void(* handler)(SamiError*));
  void 
  setInvoiceItemFulfillmentStatusWithCompletion(Integer* _id, String* sku, String* status, void(* handler)(SamiError*));
  void 
  setOrderNotesWithCompletion(Integer* _id, String* orderNotes, void(* handler)(SamiError*));
  void 
  setPaymentStatusWithCompletion(Integer* _id, SamiInvoicePaymentStatusRequest* request, void(* handler)(SamiError*));
  void 
  updateBillingInfoWithCompletion(Integer* _id, SamiAddressResource* billingInfoRequest, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiInvoicesApi_H_ */
