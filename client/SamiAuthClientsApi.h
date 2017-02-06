#ifndef SamiAuthClientsApi_H_
#define SamiAuthClientsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
#include "SamiClientResource.h"
#include "SamiGrantTypeResource.h"
#include "SamiPageResource«ClientResource».h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiAuthClientsApi {
public:
  SamiAuthClientsApi();
  virtual ~SamiAuthClientsApi();

  SamiClientResource* 
  createClientWithCompletion(SamiClientResource* clientResource, void (* handler)(SamiClientResource*, SamiError*));
  void 
  deleteClientWithCompletion(String* clientKey, void(* handler)(SamiError*));
  SamiClientResource* 
  getClientWithCompletion(String* clientKey, void (* handler)(SamiClientResource*, SamiError*));
  IList* 
  getClientGrantTypesWithCompletion( void (* handler)(IList*, SamiError*));
  SamiPageResource«ClientResource»* 
  getClientsWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«ClientResource»*, SamiError*));
  void 
  setClientGrantTypesWithCompletion(String* clientKey, IList* grantList, void(* handler)(SamiError*));
  void 
  setClientRedirectUrisWithCompletion(String* clientKey, IList* redirectList, void(* handler)(SamiError*));
  void 
  updateClientWithCompletion(String* clientKey, SamiClientResource* clientResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiAuthClientsApi_H_ */
