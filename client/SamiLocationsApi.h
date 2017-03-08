#ifndef SamiLocationsApi_H_
#define SamiLocationsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiCountryResource.h"
#include "SamiCurrencyResource.h"
#include "SamiResult.h"
#include "SamiStateResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiLocationsApi {
public:
  SamiLocationsApi();
  virtual ~SamiLocationsApi();

  IList* 
  getCountriesWithCompletion( void (* handler)(IList*, SamiError*));
  String* 
  getCountryByGeoLocationWithCompletion( void (* handler)(String*, SamiError*));
  IList* 
  getCountryStatesWithCompletion(String* countryCodeIso3, void (* handler)(IList*, SamiError*));
  SamiCurrencyResource* 
  getCurrencyByGeoLocationWithCompletion( void (* handler)(SamiCurrencyResource*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiLocationsApi_H_ */
