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
  deleteGroupMemberUsingDELETEWithCompletion(String* uniqueName, Integer* userId, void(* handler)(SamiError*));
  void 
  deleteGroupTemplateUsingDELETEWithCompletion(String* _id, String* cascade, void(* handler)(SamiError*));
  void 
  deleteGroupUsingDELETEWithCompletion(String* uniqueName, void(* handler)(SamiError*));
  IList* 
  getGroupListUsingGETWithCompletion(Integer* userId, void (* handler)(IList*, SamiError*));
  SamiGroupMemberResource* 
  getGroupMemberUsingGETWithCompletion(String* uniqueName, Integer* userId, void (* handler)(SamiGroupMemberResource*, SamiError*));
  SamiTemplateResource* 
  getGroupTemplateUsingGETWithCompletion(String* _id, void (* handler)(SamiTemplateResource*, SamiError*));
  SamiPageResource«TemplateResource»* 
  getGroupTemplatesUsingGETWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«TemplateResource»*, SamiError*));
  SamiGroupResource* 
  getGroupUsingGETWithCompletion(String* uniqueName, void (* handler)(SamiGroupResource*, SamiError*));
  SamiPageResource«GroupMemberResource»* 
  searchGroupsUsingGETWithCompletion(String* uniqueName, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«GroupMemberResource»*, SamiError*));
  SamiPageResource«GroupResource»* 
  searchGroupsUsingGET1WithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«GroupResource»*, SamiError*));
  void 
  updateGroupTemplateUsingPUTWithCompletion(String* _id, SamiTemplateResource* groupTemplateResource, void(* handler)(SamiError*));
  void 
  updateGroupUsingPUTWithCompletion(String* uniqueName, SamiGroupResource* groupResource, void(* handler)(SamiError*));
  void 
  updateMemberStatusUsingPUTWithCompletion(String* uniqueName, Integer* userId, String* status, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://integration.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUsersGroupsApi_H_ */
