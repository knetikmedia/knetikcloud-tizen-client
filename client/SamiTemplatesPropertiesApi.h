#ifndef SamiTemplatesPropertiesApi_H_
#define SamiTemplatesPropertiesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiPropertyFieldListResource.h"
#include "SamiResult.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiTemplatesPropertiesApi {
public:
  SamiTemplatesPropertiesApi();
  virtual ~SamiTemplatesPropertiesApi();

  SamiPropertyFieldListResource* 
  getTemplatePropertyTypeWithCompletion(String* type, void (* handler)(SamiPropertyFieldListResource*, SamiError*));
  IList* 
  getTemplatePropertyTypesWithCompletion( void (* handler)(IList*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiTemplatesPropertiesApi_H_ */
