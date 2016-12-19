#ifndef SamiAuthClientsApi_H_
#define SamiAuthClientsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
#include "SamiClientResource.h"
#include "SamiGrantTypeResource.h"
#include "SamiPage«ClientResource».h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiAuthClientsApi {
public:
  SamiAuthClientsApi();
  virtual ~SamiAuthClientsApi();

  void 
  assignClientGrantTypesUsingPUTWithCompletion(String* clientKey, IList* grantList, void(* handler)(SamiError*));
  void 
  assignClientRedirectUrisUsingPUTWithCompletion(String* clientKey, IList* redirectList, void(* handler)(SamiError*));
  SamiClientResource* 
  createClientUsingPOSTWithCompletion(SamiClientResource* clientResource, void (* handler)(SamiClientResource*, SamiError*));
  void 
  deleteClientUsingDELETEWithCompletion(String* clientKey, void(* handler)(SamiError*));
  SamiClientResource* 
  getClientUsingGETWithCompletion(String* clientKey, void (* handler)(SamiClientResource*, SamiError*));
  SamiPage«ClientResource»* 
  getClientsUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPage«ClientResource»*, SamiError*));
  IList* 
  listAvailableGrantTypesUsingGETWithCompletion( void (* handler)(IList*, SamiError*));
  void 
  updateClientUsingPUTWithCompletion(String* clientKey, SamiClientResource* clientResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiAuthClientsApi_H_ */
