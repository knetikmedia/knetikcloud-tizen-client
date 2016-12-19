#ifndef SamiConfigsApi_H_
#define SamiConfigsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiConfig.h"
#include "SamiPage«Config».h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiConfigsApi {
public:
  SamiConfigsApi();
  virtual ~SamiConfigsApi();

  SamiConfig* 
  createConfigUsingPOSTWithCompletion(SamiConfig* config, void (* handler)(SamiConfig*, SamiError*));
  void 
  deleteConfigUsingDELETEWithCompletion(String* name, void(* handler)(SamiError*));
  SamiConfig* 
  getConfigUsingGETWithCompletion(String* name, void (* handler)(SamiConfig*, SamiError*));
  SamiPage«Config»* 
  getConfigsUsingGETWithCompletion(String* filterSearch, Integer* size, Integer* page, String* order, void (* handler)(SamiPage«Config»*, SamiError*));
  void 
  updateConfigUsingPUTWithCompletion(String* name, SamiConfig* config, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiConfigsApi_H_ */
