#ifndef SamiTaxesApi_H_
#define SamiTaxesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiCountryTaxResource.h"
#include "SamiPageResource«CountryTaxResource».h"
#include "SamiPageResource«StateTaxResource».h"
#include "SamiStateTaxResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiTaxesApi {
public:
  SamiTaxesApi();
  virtual ~SamiTaxesApi();

  void 
  createCountryTaxWithCompletion(SamiCountryTaxResource* taxResource, void(* handler)(SamiError*));
  void 
  createStateTaxWithCompletion(String* countryCodeIso3, SamiStateTaxResource* taxResource, void(* handler)(SamiError*));
  void 
  deleteCountryTaxWithCompletion(String* countryCodeIso3, void(* handler)(SamiError*));
  void 
  deleteStateTaxWithCompletion(String* countryCodeIso3, String* stateCode, void(* handler)(SamiError*));
  SamiPageResource«CountryTaxResource»* 
  getCountryTaxesWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«CountryTaxResource»*, SamiError*));
  SamiStateTaxResource* 
  getStateTaxWithCompletion(String* countryCodeIso3, String* stateCode, void (* handler)(SamiStateTaxResource*, SamiError*));
  SamiPageResource«StateTaxResource»* 
  getStateTaxesForCountriesWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«StateTaxResource»*, SamiError*));
  SamiPageResource«StateTaxResource»* 
  getStateTaxesForCountryWithCompletion(String* countryCodeIso3, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«StateTaxResource»*, SamiError*));
  SamiCountryTaxResource* 
  getTaxUsingGETWithCompletion(String* countryCodeIso3, void (* handler)(SamiCountryTaxResource*, SamiError*));
  void 
  updateCountryTaxWithCompletion(String* countryCodeIso3, SamiCountryTaxResource* taxResource, void(* handler)(SamiError*));
  void 
  updateStateTaxWithCompletion(String* countryCodeIso3, String* stateCode, SamiStateTaxResource* taxResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiTaxesApi_H_ */
