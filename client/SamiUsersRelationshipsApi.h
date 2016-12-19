#ifndef SamiUsersRelationshipsApi_H_
#define SamiUsersRelationshipsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Long;
#include "SamiPage«UserRelationshipResource».h"
#include "SamiUserRelationshipResource.h"

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUsersRelationshipsApi {
public:
  SamiUsersRelationshipsApi();
  virtual ~SamiUsersRelationshipsApi();

  SamiUserRelationshipResource* 
  addRelationshipUsingPOSTWithCompletion(SamiUserRelationshipResource* relationship, void (* handler)(SamiUserRelationshipResource*, SamiError*));
  void 
  deleteRelationshipUsingDELETEWithCompletion(Long* _id, void(* handler)(SamiError*));
  SamiUserRelationshipResource* 
  getRelationshipUsingGETWithCompletion(Long* _id, void (* handler)(SamiUserRelationshipResource*, SamiError*));
  SamiPage«UserRelationshipResource»* 
  getRelationshipsUsingGETWithCompletion( void (* handler)(SamiPage«UserRelationshipResource»*, SamiError*));
  SamiUserRelationshipResource* 
  updateRelationshipUsingPUTWithCompletion(Long* _id, SamiUserRelationshipResource* relationship, void (* handler)(SamiUserRelationshipResource*, SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUsersRelationshipsApi_H_ */
