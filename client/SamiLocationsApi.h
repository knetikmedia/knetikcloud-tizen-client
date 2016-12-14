#ifndef SamiLocationsApi_H_
#define SamiLocationsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiCityResource.h"
#include "SamiCountryResource.h"
#include "SamiCurrencyResource.h"
#include "SamiStateResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiLocationsApi {
public:
  SamiLocationsApi();
  virtual ~SamiLocationsApi();

  IList* 
  citiesUsingGETWithCompletion(String* countryCodeIso3, String* stateCode, void (* handler)(IList*, SamiError*));
  IList* 
  countriesUsingGETWithCompletion( void (* handler)(IList*, SamiError*));
  SamiCurrencyResource* 
  getCurrencyByGeoLocationUsingGETWithCompletion( void (* handler)(SamiCurrencyResource*, SamiError*));
  String* 
  getGeoLocationCountryUsingGETWithCompletion( void (* handler)(String*, SamiError*));
  IList* 
  statesUsingGETWithCompletion(String* countryCodeIso3, void (* handler)(IList*, SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiLocationsApi_H_ */
