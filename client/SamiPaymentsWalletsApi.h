#ifndef SamiPaymentsWalletsApi_H_
#define SamiPaymentsWalletsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
using Tizen::Base::Long;
#include "SamiPageResource«SimpleWallet».h"
#include "SamiPageResource«WalletTotalResponse».h"
#include "SamiPageResource«WalletTransactionResource».h"
#include "SamiSimpleWallet.h"
#include "SamiWalletAlterRequest.h"
#include "SamiWalletTransactionResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiPaymentsWalletsApi {
public:
  SamiPaymentsWalletsApi();
  virtual ~SamiPaymentsWalletsApi();

  SamiPageResource«WalletTotalResponse»* 
  getWalletTotalsUsingGETWithCompletion( void (* handler)(SamiPageResource«WalletTotalResponse»*, SamiError*));
  SamiSimpleWallet* 
  getWalletUsingGETWithCompletion(Integer* userId, String* currencyCode, void (* handler)(SamiSimpleWallet*, SamiError*));
  IList* 
  getWalletsUsingGETWithCompletion(Integer* userId, void (* handler)(IList*, SamiError*));
  SamiPageResource«SimpleWallet»* 
  getWalletsUsingGET1WithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«SimpleWallet»*, SamiError*));
  SamiPageResource«WalletTransactionResource»* 
  transactionHistoryUsingGETWithCompletion(Integer* filterInvoice, String* filterType, Long* filterMaxDate, Long* filterMinDate, String* filterSign, Integer* filterUserId, String* filterUsername, String* filterDetails, String* filterCurrencyCode, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«WalletTransactionResource»*, SamiError*));
  SamiWalletTransactionResource* 
  updateBalanceUsingPUTWithCompletion(Integer* userId, String* currencyCode, SamiWalletAlterRequest* request, void (* handler)(SamiWalletTransactionResource*, SamiError*));
  SamiPageResource«WalletTransactionResource»* 
  userTransactionHistoryUsingGETWithCompletion(Integer* userId, String* currencyCode, String* filterType, Long* filterMaxDate, Long* filterMinDate, String* filterSign, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«WalletTransactionResource»*, SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiPaymentsWalletsApi_H_ */
