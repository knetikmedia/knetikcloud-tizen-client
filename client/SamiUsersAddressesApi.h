#ifndef SamiUsersAddressesApi_H_
#define SamiUsersAddressesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiPageResource«SavedAddressResource».h"
#include "SamiSavedAddressResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUsersAddressesApi {
public:
  SamiUsersAddressesApi();
  virtual ~SamiUsersAddressesApi();

  SamiSavedAddressResource* 
  createAddressWithCompletion(String* userId, SamiSavedAddressResource* savedAddressResource, void (* handler)(SamiSavedAddressResource*, SamiError*));
  void 
  deleteAddressWithCompletion(String* userId, Integer* _id, void(* handler)(SamiError*));
  SamiSavedAddressResource* 
  getAddressWithCompletion(String* userId, Integer* _id, void (* handler)(SamiSavedAddressResource*, SamiError*));
  SamiPageResource«SavedAddressResource»* 
  getAddressesWithCompletion(String* userId, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«SavedAddressResource»*, SamiError*));
  void 
  updateAddressWithCompletion(String* userId, Integer* _id, SamiSavedAddressResource* savedAddressResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUsersAddressesApi_H_ */
