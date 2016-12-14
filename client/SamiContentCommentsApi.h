#ifndef SamiContentCommentsApi_H_
#define SamiContentCommentsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
using Tizen::Base::Long;
#include "SamiCommentResource.h"
#include "SamiCommentSearch.h"
#include "SamiPage«CommentResource».h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiContentCommentsApi {
public:
  SamiContentCommentsApi();
  virtual ~SamiContentCommentsApi();

  SamiCommentResource* 
  addCommentUsingPOSTWithCompletion(SamiCommentResource* commentResource, void (* handler)(SamiCommentResource*, SamiError*));
  void 
  deleteCommentUsingDELETEWithCompletion(Long* _id, void(* handler)(SamiError*));
  SamiCommentResource* 
  getCommentUsingGETWithCompletion(Long* _id, void (* handler)(SamiCommentResource*, SamiError*));
  SamiPage«CommentResource»* 
  getCommentsUsingGETWithCompletion(String* context, Integer* contextId, Integer* size, Integer* page, void (* handler)(SamiPage«CommentResource»*, SamiError*));
  SamiCommentSearch* 
  searchCommentsUsingPOSTWithCompletion(SamiObject* query, Integer* size, Integer* page, void (* handler)(SamiCommentSearch*, SamiError*));
  void 
  updateCommentUsingPUTWithCompletion(Long* _id, String* content, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiContentCommentsApi_H_ */
