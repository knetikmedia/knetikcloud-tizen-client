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
  createTaxUsingPOSTWithCompletion(String* countryCodeIso3, SamiStateTaxResource* taxResource, void(* handler)(SamiError*));
  void 
  deleteTaxUsingDELETEWithCompletion(String* countryCodeIso3, void(* handler)(SamiError*));
  void 
  deleteTaxUsingDELETE1WithCompletion(String* countryCodeIso3, String* stateCode, void(* handler)(SamiError*));
  SamiPageResource«StateTaxResource»* 
  getAllTaxesUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«StateTaxResource»*, SamiError*));
  SamiCountryTaxResource* 
  getTaxUsingGETWithCompletion(String* countryCodeIso3, void (* handler)(SamiCountryTaxResource*, SamiError*));
  SamiStateTaxResource* 
  getTaxUsingGET1WithCompletion(String* countryCodeIso3, String* stateCode, void (* handler)(SamiStateTaxResource*, SamiError*));
  SamiPageResource«CountryTaxResource»* 
  getTaxesUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«CountryTaxResource»*, SamiError*));
  SamiPageResource«StateTaxResource»* 
  getTaxesUsingGET1WithCompletion(String* countryCodeIso3, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«StateTaxResource»*, SamiError*));
  void 
  updateTaxUsingPOSTWithCompletion(SamiCountryTaxResource* taxResource, void(* handler)(SamiError*));
  void 
  updateTaxUsingPUTWithCompletion(String* countryCodeIso3, SamiCountryTaxResource* taxResource, void(* handler)(SamiError*));
  void 
  updateTaxUsingPUT1WithCompletion(String* countryCodeIso3, String* stateCode, SamiStateTaxResource* taxResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://integration.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiTaxesApi_H_ */
