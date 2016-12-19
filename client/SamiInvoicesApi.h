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
#include "SamiPage«InvoiceLogEntry».h"
#include "SamiPage«InvoiceResource».h"
#include "SamiPayBySavedMethodRequest.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiInvoicesApi {
public:
  SamiInvoicesApi();
  virtual ~SamiInvoicesApi();

  IList* 
  createInvoiceUsingPOSTWithCompletion(SamiInvoiceCreateRequest* req, void (* handler)(IList*, SamiError*));
  SamiPage«InvoiceResource»* 
  getInvoiceHistoryUsingGETWithCompletion(Integer* filterUser, String* filterEmail, String* filterFulfillmentStatus, String* filterPaymentStatus, String* filterItemName, String* filterCreatedDate, Integer* size, Integer* page, String* order, void (* handler)(SamiPage«InvoiceResource»*, SamiError*));
  SamiInvoiceResource* 
  getInvoiceUsingGETWithCompletion(Integer* _id, String* postalCode, void (* handler)(SamiInvoiceResource*, SamiError*));
  SamiPage«InvoiceLogEntry»* 
  getLogsUsingGETWithCompletion(Integer* _id, Integer* size, Integer* page, void (* handler)(SamiPage«InvoiceLogEntry»*, SamiError*));
  IList* 
  listFulFillmentStatusesUsingGETWithCompletion( void (* handler)(IList*, SamiError*));
  IList* 
  listPaymentStatusesUsingGETWithCompletion( void (* handler)(IList*, SamiError*));
  void 
  payInvoiceUsingPOSTWithCompletion(Integer* _id, SamiPayBySavedMethodRequest* request, void(* handler)(SamiError*));
  void 
  setItemFulfillmentStatusUsingPUTWithCompletion(Integer* _id, String* sku, String* status, void(* handler)(SamiError*));
  void 
  setOrderNotesUsingPUTWithCompletion(Integer* _id, String* orderNotes, void(* handler)(SamiError*));
  void 
  setPaymentStatusUsingPUTWithCompletion(Integer* _id, SamiInvoicePaymentStatusRequest* request, void(* handler)(SamiError*));
  void 
  updateBillingInfoUsingPUTWithCompletion(Integer* _id, SamiAddressResource* billingInfoRequest, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiInvoicesApi_H_ */
