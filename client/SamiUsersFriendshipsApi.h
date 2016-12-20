#ifndef SamiUsersFriendshipsApi_H_
#define SamiUsersFriendshipsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
#include "SamiPage«SimpleUserResource».h"
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
  SamiPage«SimpleUserResource»* 
  getFriendsUsingGETWithCompletion(String* userId, Integer* size, Integer* page, String* order, void (* handler)(SamiPage«SimpleUserResource»*, SamiError*));
  String* 
  getInviteTokenUsingGETWithCompletion(String* userId, void (* handler)(String*, SamiError*));
  SamiPage«SimpleUserResource»* 
  getInvitesUsingGETWithCompletion(String* userId, Integer* size, Integer* page, String* order, void (* handler)(SamiPage«SimpleUserResource»*, SamiError*));
  void 
  removeFriendUsingDELETEWithCompletion(String* userId, Integer* _id, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiUsersFriendshipsApi_H_ */
