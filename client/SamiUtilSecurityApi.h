#ifndef SamiUtilSecurityApi_H_
#define SamiUtilSecurityApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiPageResource«LocationLogResource».h"
#include "SamiTokenDetailsResource.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUtilSecurityApi {
public:
  SamiUtilSecurityApi();
  virtual ~SamiUtilSecurityApi();

  SamiPageResource«LocationLogResource»* 
  getUserLocationLogWithCompletion(Integer* userId, void (* handler)(SamiPageResource«LocationLogResource»*, SamiError*));
  SamiTokenDetailsResource* 
  getUserTokenDetailsWithCompletion( void (* handler)(SamiTokenDetailsResource*, SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUtilSecurityApi_H_ */
