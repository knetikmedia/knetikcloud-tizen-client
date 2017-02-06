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
  getCitiesWithCompletion(String* countryCodeIso3, String* stateCode, void (* handler)(IList*, SamiError*));
  IList* 
  getCountries1WithCompletion( void (* handler)(IList*, SamiError*));
  IList* 
  getCountries2WithCompletion(String* countryCodeIso3, void (* handler)(IList*, SamiError*));
  String* 
  getCountryByGeoLocationWithCompletion( void (* handler)(String*, SamiError*));
  SamiCurrencyResource* 
  getCurrencyByGeoLocationWithCompletion( void (* handler)(SamiCurrencyResource*, SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiLocationsApi_H_ */
