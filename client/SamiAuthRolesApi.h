#ifndef SamiAuthRolesApi_H_
#define SamiAuthRolesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Boolean;
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
#include "SamiClientResource.h"
#include "SamiPageResource«RoleResource».h"
#include "SamiResult.h"
#include "SamiRoleResource.h"
#include "SamiUserResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiAuthRolesApi {
public:
  SamiAuthRolesApi();
  virtual ~SamiAuthRolesApi();

  SamiRoleResource* 
  createRoleWithCompletion(SamiRoleResource* roleResource, void (* handler)(SamiRoleResource*, SamiError*));
  void 
  deleteRoleWithCompletion(String* role, Boolean* force, void(* handler)(SamiError*));
  IList* 
  getClientRolesWithCompletion(String* clientKey, void (* handler)(IList*, SamiError*));
  SamiRoleResource* 
  getRoleWithCompletion(String* role, void (* handler)(SamiRoleResource*, SamiError*));
  SamiPageResource«RoleResource»* 
  getRolesWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«RoleResource»*, SamiError*));
  IList* 
  getUserRolesWithCompletion(Integer* userId, void (* handler)(IList*, SamiError*));
  SamiClientResource* 
  setClientRolesWithCompletion(String* clientKey, IList* rolesList, void (* handler)(SamiClientResource*, SamiError*));
  SamiRoleResource* 
  setPermissionsForRoleWithCompletion(String* role, IList* permissionsList, void (* handler)(SamiRoleResource*, SamiError*));
  SamiUserResource* 
  setUserRolesWithCompletion(Integer* userId, IList* rolesList, void (* handler)(SamiUserResource*, SamiError*));
  SamiRoleResource* 
  updateRoleWithCompletion(String* role, SamiRoleResource* roleResource, void (* handler)(SamiRoleResource*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiAuthRolesApi_H_ */
