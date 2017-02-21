#ifndef SamiContentCommentsApi_H_
#define SamiContentCommentsApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Integer;
using Tizen::Base::Long;
#include "SamiCommentResource.h"
#include "SamiCommentSearch.h"
#include "SamiPageResource«CommentResource».h"
#include "SamiResult.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiContentCommentsApi {
public:
  SamiContentCommentsApi();
  virtual ~SamiContentCommentsApi();

  SamiCommentResource* 
  addCommentWithCompletion(SamiCommentResource* commentResource, void (* handler)(SamiCommentResource*, SamiError*));
  void 
  deleteCommentWithCompletion(Long* _id, void(* handler)(SamiError*));
  SamiCommentResource* 
  getCommentWithCompletion(Long* _id, void (* handler)(SamiCommentResource*, SamiError*));
  SamiPageResource«CommentResource»* 
  getCommentsWithCompletion(String* context, Integer* contextId, Integer* size, Integer* page, void (* handler)(SamiPageResource«CommentResource»*, SamiError*));
  SamiCommentSearch* 
  searchCommentsWithCompletion(SamiObject* query, Integer* size, Integer* page, void (* handler)(SamiCommentSearch*, SamiError*));
  void 
  updateCommentWithCompletion(Long* _id, String* content, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiContentCommentsApi_H_ */
