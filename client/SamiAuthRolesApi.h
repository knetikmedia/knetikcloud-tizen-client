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
  void 
  setClientRolesWithCompletion(String* clientKey, IList* rolesList, void(* handler)(SamiError*));
  void 
  setPermissionsForRoleWithCompletion(String* role, IList* permissionsList, void(* handler)(SamiError*));
  void 
  setUserRolesWithCompletion(Integer* userId, IList* rolesList, void(* handler)(SamiError*));
  void 
  updateRoleWithCompletion(String* role, SamiRoleResource* roleResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiAuthRolesApi_H_ */
