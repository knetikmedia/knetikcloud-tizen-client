#ifndef SamiBRERuleEngineExpressionsApi_H_
#define SamiBRERuleEngineExpressionsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiLookupTypeResource.h"
#include "SamiResult.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiBRERuleEngineExpressionsApi {
public:
  SamiBRERuleEngineExpressionsApi();
  virtual ~SamiBRERuleEngineExpressionsApi();

  IList* 
  getBREExpressionsWithCompletion( void (* handler)(IList*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiBRERuleEngineExpressionsApi_H_ */
