#ifndef SamiMediaVideosApi_H_
#define SamiMediaVideosApi_H_

#include <FNet.h>
#include "SamiApiClient.h"
#include "SamiError.h"

using Tizen::Base::Boolean;
using Tizen::Base::Integer;
using Tizen::Base::Long;
#include "SamiCommentResource.h"
#include "SamiContributionResource.h"
#include "SamiDispositionResource.h"
#include "SamiFlagResource.h"
#include "SamiPage«CommentResource».h"
#include "SamiPage«DispositionResource».h"
#include "SamiPage«VideoRelationshipResource».h"
#include "SamiPage«VideoResource».h"
#include "SamiVideoRelationshipResource.h"
#include "SamiVideoResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiMediaVideosApi {
public:
  SamiMediaVideosApi();
  virtual ~SamiMediaVideosApi();

  SamiCommentResource* 
  addCommentUsingPOST1WithCompletion(Integer* videoId, SamiCommentResource* commentResource, void (* handler)(SamiCommentResource*, SamiError*));
  void 
  addContributorUsingPOSTWithCompletion(Long* videoId, SamiContributionResource* contributionResource, void(* handler)(SamiError*));
  SamiDispositionResource* 
  addDispositionUsingPOST1WithCompletion(Integer* videoId, SamiDispositionResource* dispositionResource, void (* handler)(SamiDispositionResource*, SamiError*));
  void 
  addFlagUsingPOSTWithCompletion(Long* videoId, String* reason, void(* handler)(SamiError*));
  SamiVideoRelationshipResource* 
  addRelatedUsingPOSTWithCompletion(Long* videoId, SamiVideoRelationshipResource* videoRelationshipResource, void (* handler)(SamiVideoRelationshipResource*, SamiError*));
  SamiVideoResource* 
  addVideoUsingPOSTWithCompletion(SamiVideoResource* videoResource, void (* handler)(SamiVideoResource*, SamiError*));
  void 
  addWhitelistUsingPOSTWithCompletion(Long* _id, Integer* userId, void(* handler)(SamiError*));
  void 
  deleteCommentUsingDELETE1WithCompletion(Long* videoId, Long* _id, void(* handler)(SamiError*));
  void 
  deleteDispositionUsingDELETE1WithCompletion(Long* dispositionId, void(* handler)(SamiError*));
  void 
  deleteFlagUsingDELETEWithCompletion(Long* videoId, void(* handler)(SamiError*));
  void 
  deleteRelationshipUsingDELETEWithCompletion(Long* videoId, Long* _id, void(* handler)(SamiError*));
  void 
  deleteVideoUsingDELETEWithCompletion(Long* _id, void(* handler)(SamiError*));
  SamiPage«CommentResource»* 
  getCommentsUsingGET1WithCompletion(Integer* videoId, Integer* size, Integer* page, void (* handler)(SamiPage«CommentResource»*, SamiError*));
  SamiPage«DispositionResource»* 
  getDispositionsUsingGET1WithCompletion(Integer* videoId, Integer* size, Integer* page, void (* handler)(SamiPage«DispositionResource»*, SamiError*));
  SamiPage«VideoRelationshipResource»* 
  getRelatedUsingGETWithCompletion(Long* videoId, Integer* size, Integer* page, void (* handler)(SamiPage«VideoRelationshipResource»*, SamiError*));
  SamiPage«VideoResource»* 
  getUserVideosUsingGETWithCompletion(Integer* userId, Boolean* excludeFlagged, Integer* size, Integer* page, void (* handler)(SamiPage«VideoResource»*, SamiError*));
  SamiVideoResource* 
  getVideoUsingGETWithCompletion(Long* _id, void (* handler)(SamiVideoResource*, SamiError*));
  void 
  removeContributorUsingDELETEWithCompletion(Long* videoId, Integer* _id, void(* handler)(SamiError*));
  void 
  removeWhitelistUsingDELETEWithCompletion(Long* videoId, Integer* _id, void(* handler)(SamiError*));
  SamiPage«VideoResource»* 
  searchVideosUsingGETWithCompletion(Boolean* excludeFlagged, String* filterVideosByUploader, String* filterCategory, String* filterTagset, String* filterVideosByName, String* filterVideosByContributor, String* filterVideosByAuthor, Boolean* filterHasAuthor, Boolean* filterHasUploader, String* filterRelatedTo, Boolean* filterFriends, String* filterDisposition, Integer* size, Integer* page, String* order, void (* handler)(SamiPage«VideoResource»*, SamiError*));
  void 
  updateCommentUsingPUT1WithCompletion(Long* videoId, Long* _id, String* content, void(* handler)(SamiError*));
  void 
  updateRelationshipUsingPUTWithCompletion(Long* videoId, Long* relationshipId, String* details, void(* handler)(SamiError*));
  void 
  updateVideoUsingPUTWithCompletion(Long* _id, SamiVideoResource* videoResource, void(* handler)(SamiError*));
  void 
  viewVideoUsingPOSTWithCompletion(Long* _id, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://devsandbox.knetikcloud.com/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiMediaVideosApi_H_ */
