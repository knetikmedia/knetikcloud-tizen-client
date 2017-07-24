#ifndef SamiUsersApi_H_
#define SamiUsersApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiNewPasswordRequest.h"
#include "SamiPageResource«TemplateResource».h"
#include "SamiPageResource«UserBaseResource».h"
#include "SamiPasswordResetRequest.h"
#include "SamiResult.h"
#include "SamiTemplateResource.h"
#include "SamiUserResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUsersApi {
public:
  SamiUsersApi();
  virtual ~SamiUsersApi();

  void 
  addUserTagWithCompletion(Integer* userId, String* tag, void(* handler)(SamiError*));
  SamiTemplateResource* 
  createUserTemplateWithCompletion(SamiTemplateResource* userTemplateResource, void (* handler)(SamiTemplateResource*, SamiError*));
  void 
  deleteUserTemplateWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  SamiUserResource* 
  getUserWithCompletion(String* _id, void (* handler)(SamiUserResource*, SamiError*));
  IList* 
  getUserTagsWithCompletion(Integer* userId, void (* handler)(IList*, SamiError*));
  SamiTemplateResource* 
  getUserTemplateWithCompletion(String* _id, void (* handler)(SamiTemplateResource*, SamiError*));
  SamiPageResource«TemplateResource»* 
  getUserTemplatesWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«TemplateResource»*, SamiError*));
  SamiPageResource«UserBaseResource»* 
  getUsersWithCompletion(String* filterDisplayname, String* filterEmail, String* filterFirstname, String* filterFullname, String* filterLastname, String* filterUsername, String* filterTag, String* filterGroup, String* filterRole, String* filterSearch, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«UserBaseResource»*, SamiError*));
  void 
  passwordResetWithCompletion(Integer* _id, SamiNewPasswordRequest* newPasswordRequest, void(* handler)(SamiError*));
  SamiUserResource* 
  registerUserWithCompletion(SamiUserResource* userResource, void (* handler)(SamiUserResource*, SamiError*));
  void 
  removeUserTagWithCompletion(Integer* userId, String* tag, void(* handler)(SamiError*));
  void 
  setPasswordWithCompletion(Integer* _id, String* password, void(* handler)(SamiError*));
  void 
  startPasswordResetWithCompletion(Integer* _id, void(* handler)(SamiError*));
  void 
  submitPasswordResetWithCompletion(SamiPasswordResetRequest* passwordReset, void(* handler)(SamiError*));
  void 
  updateUserWithCompletion(String* _id, SamiUserResource* userResource, void(* handler)(SamiError*));
  SamiTemplateResource* 
  updateUserTemplateWithCompletion(String* _id, SamiTemplateResource* userTemplateResource, void (* handler)(SamiTemplateResource*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUsersApi_H_ */
