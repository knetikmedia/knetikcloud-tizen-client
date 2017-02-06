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
#include "SamiPageResource«CommentResource».h"
#include "SamiPageResource«DispositionResource».h"
#include "SamiPageResource«VideoRelationshipResource».h"
#include "SamiPageResource«VideoResource».h"
#include "SamiVideoRelationshipResource.h"
#include "SamiVideoResource.h"
using Tizen::Base::String;

using namespace Tizen::Net::Http;

namespace Swagger {

class SamiMediaVideosApi {
public:
  SamiMediaVideosApi();
  virtual ~SamiMediaVideosApi();

  void 
  addUserToVideoWhitelistWithCompletion(Long* _id, Integer* userId, void(* handler)(SamiError*));
  SamiVideoResource* 
  addVideoWithCompletion(SamiVideoResource* videoResource, void (* handler)(SamiVideoResource*, SamiError*));
  SamiCommentResource* 
  addVideoCommentWithCompletion(Integer* videoId, SamiCommentResource* commentResource, void (* handler)(SamiCommentResource*, SamiError*));
  void 
  addVideoContributorWithCompletion(Long* videoId, SamiContributionResource* contributionResource, void(* handler)(SamiError*));
  void 
  addVideoFlagWithCompletion(Long* videoId, String* reason, void(* handler)(SamiError*));
  SamiVideoRelationshipResource* 
  addVideoRelationshipsWithCompletion(Long* videoId, SamiVideoRelationshipResource* videoRelationshipResource, void (* handler)(SamiVideoRelationshipResource*, SamiError*));
  SamiDispositionResource* 
  createVideoDispositionWithCompletion(Integer* videoId, SamiDispositionResource* dispositionResource, void (* handler)(SamiDispositionResource*, SamiError*));
  void 
  deleteVideoWithCompletion(Long* _id, void(* handler)(SamiError*));
  void 
  deleteVideoCommentWithCompletion(Long* videoId, Long* _id, void(* handler)(SamiError*));
  void 
  deleteVideoDispositionWithCompletion(Long* dispositionId, void(* handler)(SamiError*));
  void 
  deleteVideoFlagWithCompletion(Long* videoId, void(* handler)(SamiError*));
  void 
  deleteVideoRelationshipWithCompletion(Long* videoId, Long* _id, void(* handler)(SamiError*));
  SamiPageResource«VideoResource»* 
  getUserVideosWithCompletion(Integer* userId, Boolean* excludeFlagged, Integer* size, Integer* page, void (* handler)(SamiPageResource«VideoResource»*, SamiError*));
  SamiVideoResource* 
  getVideoWithCompletion(Long* _id, void (* handler)(SamiVideoResource*, SamiError*));
  SamiPageResource«CommentResource»* 
  getVideoCommentsWithCompletion(Integer* videoId, Integer* size, Integer* page, void (* handler)(SamiPageResource«CommentResource»*, SamiError*));
  SamiPageResource«DispositionResource»* 
  getVideoDispositionsWithCompletion(Integer* videoId, Integer* size, Integer* page, void (* handler)(SamiPageResource«DispositionResource»*, SamiError*));
  SamiPageResource«VideoRelationshipResource»* 
  getVideoRelationshipsWithCompletion(Long* videoId, Integer* size, Integer* page, void (* handler)(SamiPageResource«VideoRelationshipResource»*, SamiError*));
  SamiPageResource«VideoResource»* 
  getVideosWithCompletion(Boolean* excludeFlagged, String* filterVideosByUploader, String* filterCategory, String* filterTagset, String* filterVideosByName, String* filterVideosByContributor, String* filterVideosByAuthor, Boolean* filterHasAuthor, Boolean* filterHasUploader, String* filterRelatedTo, Boolean* filterFriends, String* filterDisposition, Integer* size, Integer* page, String* order, void (* handler)(SamiPageResource«VideoResource»*, SamiError*));
  void 
  removeUserFromVideoWhitelistWithCompletion(Long* videoId, Integer* _id, void(* handler)(SamiError*));
  void 
  removeVideoContributorWithCompletion(Long* videoId, Integer* _id, void(* handler)(SamiError*));
  void 
  updateVideoWithCompletion(Long* _id, SamiVideoResource* videoResource, void(* handler)(SamiError*));
  void 
  updateVideoCommentWithCompletion(Long* videoId, Long* _id, String* content, void(* handler)(SamiError*));
  void 
  updateVideoRelationshipWithCompletion(Long* videoId, Long* relationshipId, String* details, void(* handler)(SamiError*));
  void 
  viewVideoWithCompletion(Long* _id, void(* handler)(SamiError*));
  static String getBasePath() {
    return L"https://localhost:8080/";
  }

private:
  SamiApiClient* client;
};


} /* namespace Swagger */

#endif /* SamiMediaVideosApi_H_ */
