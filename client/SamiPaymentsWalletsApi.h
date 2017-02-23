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
#include "SamiResult.h"
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

  SamiSimpleWallet* 
  getUserWalletWithCompletion(Integer* userId, String* currencyCode, void (* handler)(SamiSimpleWallet*, SamiError*));
  SamiPageResource«WalletTransactionResource»* 
  getUserWalletTransactionsWithCompletion(Integer* userId, String* currencyCode, String* filterType, Long* filterMaxDate, Long* filterMinDate, String* filterSign, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«WalletTransactionResource»*, SamiError*));
  IList* 
  getUserWalletsWithCompletion(Integer* userId, void (* handler)(IList*, SamiError*));
  SamiPageResource«WalletTotalResponse»* 
  getWalletBalancesWithCompletion( void (* handler)(SamiPageResource«WalletTotalResponse»*, SamiError*));
  SamiPageResource«WalletTransactionResource»* 
  getWalletTransactionsWithCompletion(Integer* filterInvoice, String* filterType, String* filterDate, String* filterSign, Integer* filterUserId, String* filterUsername, String* filterDetails, String* filterCurrencyCode, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«WalletTransactionResource»*, SamiError*));
  SamiPageResource«SimpleWallet»* 
  getWalletsWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«SimpleWallet»*, SamiError*));
  SamiWalletTransactionResource* 
  updateWalletBalanceWithCompletion(Integer* userId, String* currencyCode, SamiWalletAlterRequest* request, void (* handler)(SamiWalletTransactionResource*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiPaymentsWalletsApi_H_ */
