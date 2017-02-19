#ifndef SamiUsersGroupsApi_H_
#define SamiUsersGroupsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiGroupMemberResource.h"
#include "SamiGroupResource.h"
#include "SamiPageResource«GroupMemberResource».h"
#include "SamiPageResource«GroupResource».h"
#include "SamiPageResource«TemplateResource».h"
#include "SamiResult.h"
#include "SamiTemplateResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUsersGroupsApi {
public:
  SamiUsersGroupsApi();
  virtual ~SamiUsersGroupsApi();

  SamiGroupMemberResource* 
  addMemberToGroupWithCompletion(String* uniqueName, SamiGroupMemberResource* username, void (* handler)(SamiGroupMemberResource*, SamiError*));
  SamiGroupResource* 
  createGroupWithCompletion(SamiGroupResource* groupResource, void (* handler)(SamiGroupResource*, SamiError*));
  SamiTemplateResource* 
  createGroupTemplateWithCompletion(SamiTemplateResource* groupTemplateResource, void (* handler)(SamiTemplateResource*, SamiError*));
  void 
  deleteGroupWithCompletion(String* uniqueName, void(* handler)(SamiError*));
  void 
  deleteGroupTemplateWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  SamiGroupResource* 
  getGroupWithCompletion(String* uniqueName, void (* handler)(SamiGroupResource*, SamiError*));
  SamiGroupMemberResource* 
  getGroupMemberWithCompletion(String* uniqueName, Integer* userId, void (* handler)(SamiGroupMemberResource*, SamiError*));
  SamiPageResource«GroupMemberResource»* 
  getGroupMembersWithCompletion(String* uniqueName, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«GroupMemberResource»*, SamiError*));
  SamiTemplateResource* 
  getGroupTemplateWithCompletion(String* _id, void (* handler)(SamiTemplateResource*, SamiError*));
  SamiPageResource«TemplateResource»* 
  getGroupTemplatesWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«TemplateResource»*, SamiError*));
  IList* 
  getGroupsForUserWithCompletion(Integer* userId, void (* handler)(IList*, SamiError*));
  void 
  removeGroupMemberWithCompletion(String* uniqueName, Integer* userId, void(* handler)(SamiError*));
  void 
  updateGroupWithCompletion(String* uniqueName, SamiGroupResource* groupResource, void(* handler)(SamiError*));
  void 
  updateGroupMemberStatusWithCompletion(String* uniqueName, Integer* userId, String* status, void(* handler)(SamiError*));
  SamiTemplateResource* 
  updateGroupTemplateWithCompletion(String* _id, SamiTemplateResource* groupTemplateResource, void (* handler)(SamiTemplateResource*, SamiError*));
  SamiPageResource«GroupResource»* 
  updateGroupsWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«GroupResource»*, SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUsersGroupsApi_H_ */
