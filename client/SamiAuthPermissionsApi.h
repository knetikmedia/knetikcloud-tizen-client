#ifndef SamiAuthPermissionsApi_H_
#define SamiAuthPermissionsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Boolean;
using Tizen::Base::Integer;
#include "SamiPage«PermissionResource».h"
#include "SamiPermissionResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiAuthPermissionsApi {
public:
  SamiAuthPermissionsApi();
  virtual ~SamiAuthPermissionsApi();

  SamiPermissionResource* 
  createPermissionUsingPOSTWithCompletion(SamiPermissionResource* permissionResource, void (* handler)(SamiPermissionResource*, SamiError*));
  void 
  deletePermissionUsingDELETEWithCompletion(String* permission, Boolean* force, void(* handler)(SamiError*));
  SamiPermissionResource* 
  getPermissionUsingGETWithCompletion(String* permission, void (* handler)(SamiPermissionResource*, SamiError*));
  SamiPage«PermissionResource»* 
  getPermissionUsingGET1WithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPage«PermissionResource»*, SamiError*));
  void 
  updatePermissionUsingPUTWithCompletion(String* permission, SamiPermissionResource* permissionResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiAuthPermissionsApi_H_ */
