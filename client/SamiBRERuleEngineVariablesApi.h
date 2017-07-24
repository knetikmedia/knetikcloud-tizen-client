#ifndef SamiBRERuleEngineVariablesApi_H_
#define SamiBRERuleEngineVariablesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiPageResource«SimpleReferenceResource«object»».h"
#include "SamiResult.h"
#include "SamiVariableTypeResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiBRERuleEngineVariablesApi {
public:
  SamiBRERuleEngineVariablesApi();
  virtual ~SamiBRERuleEngineVariablesApi();

  IList* 
  getBREVariableTypesWithCompletion( void (* handler)(IList*, SamiError*));
  SamiPageResource«SimpleReferenceResource«object»»* 
  getBREVariableValuesWithCompletion(String* name, String* filterName, Integer* size, Integer* page, void (* handler)(SamiPageResource«SimpleReferenceResource«object»»*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiBRERuleEngineVariablesApi_H_ */
