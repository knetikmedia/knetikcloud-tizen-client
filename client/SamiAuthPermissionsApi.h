#ifndef SamiAuthPermissionsApi_H_
#define SamiAuthPermissionsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Boolean;
using Tizen::Base::Integer;
#include "SamiPageResource«PermissionResource».h"
#include "SamiPermissionResource.h"
#include "SamiResult.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiAuthPermissionsApi {
public:
  SamiAuthPermissionsApi();
  virtual ~SamiAuthPermissionsApi();

  SamiPermissionResource* 
  createPermissionWithCompletion(SamiPermissionResource* permissionResource, void (* handler)(SamiPermissionResource*, SamiError*));
  void 
  deletePermissionWithCompletion(String* permission, Boolean* force, void(* handler)(SamiError*));
  SamiPermissionResource* 
  getPermissionWithCompletion(String* permission, void (* handler)(SamiPermissionResource*, SamiError*));
  SamiPageResource«PermissionResource»* 
  getPermissionsWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«PermissionResource»*, SamiError*));
  SamiPermissionResource* 
  updatePermissionWithCompletion(String* permission, SamiPermissionResource* permissionResource, void (* handler)(SamiPermissionResource*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiAuthPermissionsApi_H_ */
