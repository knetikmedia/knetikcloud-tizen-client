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
  addFriendUsingPOSTWithCompletion(String* userId, Integer* _id, void(* handler)(SamiError*));
  void 
  connectUsingTokenUsingPOSTWithCompletion(String* userId, String* token, void(* handler)(SamiError*));
  SamiPageResource«SimpleUserResource»* 
  getFriendsUsingGETWithCompletion(String* userId, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«SimpleUserResource»*, SamiError*));
  String* 
  getInviteTokenUsingGETWithCompletion(String* userId, void (* handler)(String*, SamiError*));
  SamiPageResource«SimpleUserResource»* 
  getInvitesUsingGETWithCompletion(String* userId, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«SimpleUserResource»*, SamiError*));
  void 
  removeFriendUsingDELETEWithCompletion(String* userId, Integer* _id, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://integration.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUsersFriendshipsApi_H_ */
