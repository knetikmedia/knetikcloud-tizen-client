#ifndef SamiPaymentsTransactionsApi_H_
#define SamiPaymentsTransactionsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiPageResource«TransactionResource».h"
#include "SamiRefundRequest.h"
#include "SamiRefundResource.h"
#include "SamiTransactionResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiPaymentsTransactionsApi {
public:
  SamiPaymentsTransactionsApi();
  virtual ~SamiPaymentsTransactionsApi();

  SamiTransactionResource* 
  getTransactionUsingGETWithCompletion(Integer* _id, void (* handler)(SamiTransactionResource*, SamiError*));
  SamiPageResource«TransactionResource»* 
  getTransactionsUsingGETWithCompletion(Integer* filterInvoice, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«TransactionResource»*, SamiError*));
  SamiRefundResource* 
  refundTransactionUsingPOSTWithCompletion(Integer* _id, SamiRefundRequest* request, void (* handler)(SamiRefundResource*, SamiError*));
  static String getBasePath() {
    return L"https://integration.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiPaymentsTransactionsApi_H_ */
