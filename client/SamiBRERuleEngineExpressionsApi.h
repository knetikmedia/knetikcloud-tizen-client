#ifndef SamiBRERuleEngineExpressionsApi_H_
#define SamiBRERuleEngineExpressionsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiLookupTypeResource.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiBRERuleEngineExpressionsApi {
public:
  SamiBRERuleEngineExpressionsApi();
  virtual ~SamiBRERuleEngineExpressionsApi();

  IList* 
  getLookupTypesUsingGETWithCompletion( void (* handler)(IList*, SamiError*));
  static String getBasePath() {
    return L"https://integration.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiBRERuleEngineExpressionsApi_H_ */
