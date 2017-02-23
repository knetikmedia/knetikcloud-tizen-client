#ifndef SamiTaxesApi_H_
#define SamiTaxesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiCountryTaxResource.h"
#include "SamiPageResource«CountryTaxResource».h"
#include "SamiPageResource«StateTaxResource».h"
#include "SamiResult.h"
#include "SamiStateTaxResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiTaxesApi {
public:
  SamiTaxesApi();
  virtual ~SamiTaxesApi();

  SamiCountryTaxResource* 
  createCountryTaxWithCompletion(SamiCountryTaxResource* taxResource, void (* handler)(SamiCountryTaxResource*, SamiError*));
  SamiStateTaxResource* 
  createStateTaxWithCompletion(String* countryCodeIso3, SamiStateTaxResource* taxResource, void (* handler)(SamiStateTaxResource*, SamiError*));
  void 
  deleteCountryTaxWithCompletion(String* countryCodeIso3, void(* handler)(SamiError*));
  void 
  deleteStateTaxWithCompletion(String* countryCodeIso3, String* stateCode, void(* handler)(SamiError*));
  SamiCountryTaxResource* 
  getCountryTaxWithCompletion(String* countryCodeIso3, void (* handler)(SamiCountryTaxResource*, SamiError*));
  SamiPageResource«CountryTaxResource»* 
  getCountryTaxesWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«CountryTaxResource»*, SamiError*));
  SamiStateTaxResource* 
  getStateTaxWithCompletion(String* countryCodeIso3, String* stateCode, void (* handler)(SamiStateTaxResource*, SamiError*));
  SamiPageResource«StateTaxResource»* 
  getStateTaxesForCountriesWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«StateTaxResource»*, SamiError*));
  SamiPageResource«StateTaxResource»* 
  getStateTaxesForCountryWithCompletion(String* countryCodeIso3, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«StateTaxResource»*, SamiError*));
  SamiCountryTaxResource* 
  updateCountryTaxWithCompletion(String* countryCodeIso3, SamiCountryTaxResource* taxResource, void (* handler)(SamiCountryTaxResource*, SamiError*));
  SamiStateTaxResource* 
  updateStateTaxWithCompletion(String* countryCodeIso3, String* stateCode, SamiStateTaxResource* taxResource, void (* handler)(SamiStateTaxResource*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiTaxesApi_H_ */
