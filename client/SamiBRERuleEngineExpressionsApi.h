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
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiBRERuleEngineExpressionsApi_H_ */
