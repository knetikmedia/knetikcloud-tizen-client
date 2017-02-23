#ifndef SamiBRERuleEngineVariablesApi_H_
#define SamiBRERuleEngineVariablesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiResult.h"
#include "SamiVariableTypeResource.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiBRERuleEngineVariablesApi {
public:
  SamiBRERuleEngineVariablesApi();
  virtual ~SamiBRERuleEngineVariablesApi();

  IList* 
  getBREVariableTypesWithCompletion( void (* handler)(IList*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiBRERuleEngineVariablesApi_H_ */
