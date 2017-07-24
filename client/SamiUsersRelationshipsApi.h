#ifndef SamiUsersRelationshipsApi_H_
#define SamiUsersRelationshipsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
using Tizen::Base::Long;
#include "SamiPageResource«UserRelationshipResource».h"
#include "SamiResult.h"
#include "SamiUserRelationshipResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUsersRelationshipsApi {
public:
  SamiUsersRelationshipsApi();
  virtual ~SamiUsersRelationshipsApi();

  SamiUserRelationshipResource* 
  createUserRelationshipWithCompletion(SamiUserRelationshipResource* relationship, void (* handler)(SamiUserRelationshipResource*, SamiError*));
  void 
  deleteUserRelationshipWithCompletion(Long* _id, void(* handler)(SamiError*));
  SamiUserRelationshipResource* 
  getUserRelationshipWithCompletion(Long* _id, void (* handler)(SamiUserRelationshipResource*, SamiError*));
  SamiPageResource«UserRelationshipResource»* 
  getUserRelationshipsWithCompletion(Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«UserRelationshipResource»*, SamiError*));
  SamiUserRelationshipResource* 
  updateUserRelationshipWithCompletion(Long* _id, SamiUserRelationshipResource* relationship, void (* handler)(SamiUserRelationshipResource*, SamiError*));
  static String getBasePath() {
    return L"https://sandbox.knetikcloud.com";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUsersRelationshipsApi_H_ */
