#ifndef SamiCurrenciesApi_H_
#define SamiCurrenciesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Boolean;
using Tizen::Base::Integer;
#include "SamiCurrencyResource.h"
#include "SamiPageResource«CurrencyResource».h"
#include "SamiResult.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiCurrenciesApi {
public:
  SamiCurrenciesApi();
  virtual ~SamiCurrenciesApi();

  SamiCurrencyResource* 
  createCurrencyWithCompletion(SamiCurrencyResource* currency, void (* handler)(SamiCurrencyResource*, SamiError*));
  void 
  deleteCurrencyWithCompletion(String* code, void(* handler)(SamiError*));
  SamiPageResource«CurrencyResource»* 
  getCurrenciesWithCompletion(Boolean* filterEnabledCurrencies, String* filterType, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«CurrencyResource»*, SamiError*));
  SamiCurrencyResource* 
  getCurrencyWithCompletion(String* code, void (* handler)(SamiCurrencyResource*, SamiError*));
  void 
  updateCurrencyWithCompletion(String* code, SamiCurrencyResource* currency, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiCurrenciesApi_H_ */
