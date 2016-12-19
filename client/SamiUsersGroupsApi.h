#ifndef SamiUsersGroupsApi_H_
#define SamiUsersGroupsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiGroupMemberResource.h"
#include "SamiGroupResource.h"
#include "SamiPage«GroupMemberResource».h"
#include "SamiPage«GroupResource».h"
#include "SamiPage«TemplateResource».h"
#include "SamiTemplateResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUsersGroupsApi {
public:
  SamiUsersGroupsApi();
  virtual ~SamiUsersGroupsApi();

  SamiGroupResource* 
  addGroupUsingPOSTWithCompletion(SamiGroupResource* groupResource, void (* handler)(SamiGroupResource*, SamiError*));
  SamiGroupMemberResource* 
  addMemberUsingPOSTWithCompletion(String* uniqueName, SamiGroupMemberResource* username, void (* handler)(SamiGroupMemberResource*, SamiError*));
  SamiTemplateResource* 
  createGroupTemplateUsingPOSTWithCompletion(SamiTemplateResource* groupTemplateResource, void (* handler)(SamiTemplateResource*, SamiError*));
  void 
  deleteGroupTemplateUsingDELETEWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  void 
  deleteGroupUsingDELETEWithCompletion(String* uniqueName, Integer* userId, void(* handler)(SamiError*));
  void 
  deleteGroupUsingDELETE1WithCompletion(String* uniqueName, void(* handler)(SamiError*));
  SamiTemplateResource* 
  getGroupTemplateUsingGETWithCompletion(String* _id, void (* handler)(SamiTemplateResource*, SamiError*));
  SamiPage«TemplateResource»* 
  getGroupTemplatesUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPage«TemplateResource»*, SamiError*));
  SamiGroupResource* 
  getGroupUsingGETWithCompletion(String* uniqueName, void (* handler)(SamiGroupResource*, SamiError*));
  SamiPage«GroupMemberResource»* 
  searchGroupsUsingGETWithCompletion(String* uniqueName, Integer* size, Integer* page, String* order, void (* handler)(SamiPage«GroupMemberResource»*, SamiError*));
  SamiPage«GroupResource»* 
  searchGroupsUsingGET1WithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPage«GroupResource»*, SamiError*));
  void 
  updateGroupTemplateUsingPUTWithCompletion(String* _id, SamiTemplateResource* groupTemplateResource, void(* handler)(SamiError*));
  void 
  updateGroupUsingPUTWithCompletion(String* uniqueName, SamiGroupResource* groupResource, void(* handler)(SamiError*));
  void 
  updateMemberStatusUsingPUTWithCompletion(String* uniqueName, Integer* userId, String* status, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUsersGroupsApi_H_ */
