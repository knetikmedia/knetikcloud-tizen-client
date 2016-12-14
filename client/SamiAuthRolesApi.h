#ifndef SamiAuthRolesApi_H_
#define SamiAuthRolesApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Boolean;
using Tizen::Base::Collection::IList;
using Tizen::Base::Integer;
#include "SamiClientResource.h"
#include "SamiPage«RoleResource».h"
#include "SamiRoleResource.h"
#include "SamiUserResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiAuthRolesApi {
public:
  SamiAuthRolesApi();
  virtual ~SamiAuthRolesApi();

  void 
  assignClientRolesUsingPUTWithCompletion(String* clientKey, IList* rolesList, void(* handler)(SamiError*));
  void 
  assignPermissionsUsingPUTWithCompletion(String* role, IList* permissionsList, void(* handler)(SamiError*));
  void 
  assignUserRolesExternalUsingPUTWithCompletion(Integer* userId, IList* rolesList, void(* handler)(SamiError*));
  SamiRoleResource* 
  createRoleUsingPOSTWithCompletion(SamiRoleResource* roleResource, void (* handler)(SamiRoleResource*, SamiError*));
  void 
  deleteRoleUsingDELETEWithCompletion(String* role, Boolean* force, void(* handler)(SamiError*));
  IList* 
  getClientRolesUsingGETWithCompletion(String* clientKey, void (* handler)(IList*, SamiError*));
  SamiRoleResource* 
  getRoleUsingGETWithCompletion(String* role, void (* handler)(SamiRoleResource*, SamiError*));
  SamiPage«RoleResource»* 
  getRolesUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPage«RoleResource»*, SamiError*));
  IList* 
  getUserRolesUsingGETWithCompletion(Integer* userId, void (* handler)(IList*, SamiError*));
  void 
  updateRoleUsingPUTWithCompletion(String* role, SamiRoleResource* roleResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiAuthRolesApi_H_ */
