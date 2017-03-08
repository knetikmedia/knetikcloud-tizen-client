#ifndef SamiConfigsApi_H_
#define SamiConfigsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiConfig.h"
#include "SamiPageResource«Config».h"
#include "SamiResult.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiConfigsApi {
public:
  SamiConfigsApi();
  virtual ~SamiConfigsApi();

  SamiConfig* 
  createConfigWithCompletion(SamiConfig* config, void (* handler)(SamiConfig*, SamiError*));
  void 
  deleteConfigWithCompletion(String* name, void(* handler)(SamiError*));
  SamiConfig* 
  getConfigWithCompletion(String* name, void (* handler)(SamiConfig*, SamiError*));
  SamiPageResource«Config»* 
  getConfigsWithCompletion(String* filterSearch, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«Config»*, SamiError*));
  void 
  updateConfigWithCompletion(String* name, SamiConfig* config, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiConfigsApi_H_ */
