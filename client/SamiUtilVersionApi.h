#ifndef SamiUtilVersionApi_H_
#define SamiUtilVersionApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

#include "SamiVersion.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUtilVersionApi {
public:
  SamiUtilVersionApi();
  virtual ~SamiUtilVersionApi();

  SamiVersion* 
  getUsingGET3WithCompletion( void (* handler)(SamiVersion*, SamiError*));
  static String getBasePath() {
    return L"https://integration.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUtilVersionApi_H_ */
