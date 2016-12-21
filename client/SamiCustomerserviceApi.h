#ifndef SamiCustomerserviceApi_H_
#define SamiCustomerserviceApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiCustomerConfig.h"
#include "SamiCustomerResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiCustomerserviceApi {
public:
  SamiCustomerserviceApi();
  virtual ~SamiCustomerserviceApi();

  void 
  createCustomerUsingPOSTWithCompletion(SamiCustomerConfig* customer, void(* handler)(SamiError*));
  IList* 
  getCustomersUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(IList*, SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiCustomerserviceApi_H_ */
