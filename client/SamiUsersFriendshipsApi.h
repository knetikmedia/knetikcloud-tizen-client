#ifndef SamiUsersFriendshipsApi_H_
#define SamiUsersFriendshipsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiPageResource«SimpleUserResource».h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiUsersFriendshipsApi {
public:
  SamiUsersFriendshipsApi();
  virtual ~SamiUsersFriendshipsApi();

  void 
  addFriendWithCompletion(String* userId, Integer* _id, void(* handler)(SamiError*));
  SamiPageResource«SimpleUserResource»* 
  getFriendsWithCompletion(String* userId, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«SimpleUserResource»*, SamiError*));
  String* 
  getInviteTokenWithCompletion(String* userId, void (* handler)(String*, SamiError*));
  SamiPageResource«SimpleUserResource»* 
  getInvitesWithCompletion(String* userId, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«SimpleUserResource»*, SamiError*));
  void 
  redeemFriendshipTokenWithCompletion(String* userId, String* token, void(* handler)(SamiError*));
  void 
  removeOrDeclineFriendWithCompletion(String* userId, Integer* _id, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUsersFriendshipsApi_H_ */
