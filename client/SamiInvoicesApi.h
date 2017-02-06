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
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiInvoicesApi {
public:
  SamiInvoicesApi();
  virtual ~SamiInvoicesApi();

  IList* 
  createInvoiceWithCompletion(SamiInvoiceCreateRequest* req, void (* handler)(IList*, SamiError*));
  SamiInvoiceResource* 
  getInvoiceWithCompletion(Integer* _id, void (* handler)(SamiInvoiceResource*, SamiError*));
  SamiPageResource«InvoiceLogEntry»* 
  getInvoiceLogsWithCompletion(Integer* _id, Integer* size, Integer* page, void (* handler)(SamiPageResource«InvoiceLogEntry»*, SamiError*));
  SamiPageResource«InvoiceResource»* 
  getInvoicesWithCompletion(Integer* filterUser, String* filterEmail, String* filterFulfillmentStatus, String* filterPaymentStatus, String* filterItemName, String* filterCreatedDate, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«InvoiceResource»*, SamiError*));
  IList* 
  listFulFillmentStatusesWithCompletion( void (* handler)(IList*, SamiError*));
  IList* 
  listPaymentStatusesWithCompletion( void (* handler)(IList*, SamiError*));
  void 
  payInvoiceWithCompletion(Integer* _id, SamiPayBySavedMethodRequest* request, void(* handler)(SamiError*));
  void 
  setInvoiceItemFulfillmentStatusWithCompletion(Integer* _id, String* sku, String* status, void(* handler)(SamiError*));
  void 
  setOrderNotesWithCompletion(Integer* _id, String* orderNotes, void(* handler)(SamiError*));
  void 
  setPaymentStatusUsingPUTWithCompletion(Integer* _id, SamiInvoicePaymentStatusRequest* request, void(* handler)(SamiError*));
  void 
  updateBillingInfoWithCompletion(Integer* _id, SamiAddressResource* billingInfoRequest, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiInvoicesApi_H_ */
