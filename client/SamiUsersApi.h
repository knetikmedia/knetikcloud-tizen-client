#ifndef SamiUsersApi_H_
#define SamiUsersApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiNewPasswordRequest.h"
#include "SamiPage«TemplateResource».h"
#include "SamiPage«UserBaseResource».h"
#include "SamiTemplateResource.h"
#include "SamiUserResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUsersApi {
public:
  SamiUsersApi();
  virtual ~SamiUsersApi();

  SamiTemplateResource* 
  createUserTemplateUsingPOSTWithCompletion(SamiTemplateResource* userTemplateResource, void (* handler)(SamiTemplateResource*, SamiError*));
  void 
  deleteUserTemplateUsingDELETEWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  void 
  doPasswordResetUsingPUTWithCompletion(Integer* _id, SamiNewPasswordRequest* newPasswordRequest, void(* handler)(SamiError*));
  SamiTemplateResource* 
  getUserTemplateUsingGETWithCompletion(String* _id, void (* handler)(SamiTemplateResource*, SamiError*));
  SamiPage«TemplateResource»* 
  getUserTemplatesUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPage«TemplateResource»*, SamiError*));
  SamiUserResource* 
  getUserUsingGETWithCompletion(String* _id, void (* handler)(SamiUserResource*, SamiError*));
  SamiPage«UserBaseResource»* 
  getUsersUsingGETWithCompletion(String* filterRole, String* filterDisplayname, String* filterEmail, String* filterFirstname, String* filterFullname, String* filterLastname, String* filterUsername, Integer* size, Integer* page, String* order, void (* handler)(SamiPage«UserBaseResource»*, SamiError*));
  void 
  initiatePasswordResetUsingPOSTWithCompletion(Integer* _id, void(* handler)(SamiError*));
  SamiUserResource* 
  registerUserUsingPOSTWithCompletion(SamiUserResource* userResource, void (* handler)(SamiUserResource*, SamiError*));
  void 
  setPasswordUsingPUTWithCompletion(Integer* _id, String* password, void(* handler)(SamiError*));
  void 
  updateUserTemplateUsingPUTWithCompletion(String* _id, SamiTemplateResource* userTemplateResource, void(* handler)(SamiError*));
  void 
  updateUserUsingPUTWithCompletion(String* _id, SamiUserResource* userResource, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUsersApi_H_ */
