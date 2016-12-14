#ifndef SamiUsersAddressesApi_H_
#define SamiUsersAddressesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiPage«SavedAddressResource».h"
#include "SamiSavedAddressResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUsersAddressesApi {
public:
  SamiUsersAddressesApi();
  virtual ~SamiUsersAddressesApi();

  SamiSavedAddressResource* 
  createAddressUsingPOSTWithCompletion(String* userId, SamiSavedAddressResource* savedAddressResource, void (* handler)(SamiSavedAddressResource*, SamiError*));
  void 
  deleteAddressUsingDELETEWithCompletion(String* userId, Integer* _id, void(* handler)(SamiError*));
  SamiSavedAddressResource* 
  getAddressUsingGETWithCompletion(String* userId, Integer* _id, void (* handler)(SamiSavedAddressResource*, SamiError*));
  SamiPage«SavedAddressResource»* 
  getAddressesUsingGETWithCompletion(String* userId, Integer* size, Integer* page, String* order, void (* handler)(SamiPage«SavedAddressResource»*, SamiError*));
  void 
  updateAddressUsingPUTWithCompletion(String* userId, Integer* _id, SamiSavedAddressResource* savedAddressResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUsersAddressesApi_H_ */
