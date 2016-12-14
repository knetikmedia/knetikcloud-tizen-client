#ifndef SamiUtilHealthApi_H_
#define SamiUtilHealthApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiObject.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUtilHealthApi {
public:
  SamiUtilHealthApi();
  virtual ~SamiUtilHealthApi();

  SamiObject* 
  getHealthInfoUsingGETWithCompletion( void (* handler)(SamiObject*, SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUtilHealthApi_H_ */
