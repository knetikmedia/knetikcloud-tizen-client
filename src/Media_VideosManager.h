#ifndef _Media_VideosManager_H_
#define _Media_VideosManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "CommentResource.h"
#include "ContributionResource.h"
#include "DispositionResource.h"
#include "FlagResource.h"
#include "IntWrapper.h"
#include "PageResource«CommentResource».h"
#include "PageResource«DispositionResource».h"
#include "PageResource«TemplateResource».h"
#include "PageResource«VideoRelationshipResource».h"
#include "PageResource«VideoResource».h"
#include "Result.h"
#include "StringWrapper.h"
#include "TemplateResource.h"
#include "VideoRelationshipResource.h"
#include "VideoResource.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Media_Videos Media_Videos
 * \ingroup Operations
 *  @{
 */
class Media_VideosManager {
public:
	Media_VideosManager();
	virtual ~Media_VideosManager();

/*! \brief Adds a user to a video's whitelist. *Synchronous*
 *
 * Whitelisted users can view video regardless of privacy setting. <br><br><b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param id The video id *Required*
 * \param userId The user id
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addUserToVideoWhitelistSync(char * accessToken,
	long long id, IntWrapper userId, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Adds a user to a video's whitelist. *Asynchronous*
 *
 * Whitelisted users can view video regardless of privacy setting. <br><br><b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param id The video id *Required*
 * \param userId The user id
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addUserToVideoWhitelistAsync(char * accessToken,
	long long id, IntWrapper userId, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Adds a new video in the system. *Synchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param videoResource The video object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addVideoSync(char * accessToken,
	VideoResource videoResource, 
	void(* handler)(VideoResource, Error, void* )
	, void* userData);

/*! \brief Adds a new video in the system. *Asynchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param videoResource The video object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addVideoAsync(char * accessToken,
	VideoResource videoResource, 
	void(* handler)(VideoResource, Error, void* )
	, void* userData);


/*! \brief Add a new video comment. *Synchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param videoId The video id  *Required*
 * \param commentResource The comment object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addVideoCommentSync(char * accessToken,
	int videoId, CommentResource commentResource, 
	void(* handler)(CommentResource, Error, void* )
	, void* userData);

/*! \brief Add a new video comment. *Asynchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param videoId The video id  *Required*
 * \param commentResource The comment object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addVideoCommentAsync(char * accessToken,
	int videoId, CommentResource commentResource, 
	void(* handler)(CommentResource, Error, void* )
	, void* userData);


/*! \brief Adds a contributor to a video. *Synchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param videoId The video id *Required*
 * \param contributionResource The contribution object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addVideoContributorSync(char * accessToken,
	long long videoId, ContributionResource contributionResource, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Adds a contributor to a video. *Asynchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param videoId The video id *Required*
 * \param contributionResource The contribution object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addVideoContributorAsync(char * accessToken,
	long long videoId, ContributionResource contributionResource, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Add a new flag. *Synchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param videoId The video id *Required*
 * \param reason The flag reason
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addVideoFlagSync(char * accessToken,
	long long videoId, StringWrapper reason, 
	void(* handler)(FlagResource, Error, void* )
	, void* userData);

/*! \brief Add a new flag. *Asynchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param videoId The video id *Required*
 * \param reason The flag reason
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addVideoFlagAsync(char * accessToken,
	long long videoId, StringWrapper reason, 
	void(* handler)(FlagResource, Error, void* )
	, void* userData);


/*! \brief Adds one or more existing videos as related to this one. *Synchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param videoId The video id *Required*
 * \param videoRelationshipResource The video relationship object 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addVideoRelationshipsSync(char * accessToken,
	long long videoId, VideoRelationshipResource videoRelationshipResource, 
	void(* handler)(VideoRelationshipResource, Error, void* )
	, void* userData);

/*! \brief Adds one or more existing videos as related to this one. *Asynchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param videoId The video id *Required*
 * \param videoRelationshipResource The video relationship object 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addVideoRelationshipsAsync(char * accessToken,
	long long videoId, VideoRelationshipResource videoRelationshipResource, 
	void(* handler)(VideoRelationshipResource, Error, void* )
	, void* userData);


/*! \brief Create a video disposition. *Synchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param videoId The video id *Required*
 * \param dispositionResource The disposition object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createVideoDispositionSync(char * accessToken,
	int videoId, DispositionResource dispositionResource, 
	void(* handler)(DispositionResource, Error, void* )
	, void* userData);

/*! \brief Create a video disposition. *Asynchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param videoId The video id *Required*
 * \param dispositionResource The disposition object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createVideoDispositionAsync(char * accessToken,
	int videoId, DispositionResource dispositionResource, 
	void(* handler)(DispositionResource, Error, void* )
	, void* userData);


/*! \brief Create a video template. *Synchronous*
 *
 * Video Templates define a type of video and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param videoTemplateResource The video template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createVideoTemplateSync(char * accessToken,
	TemplateResource videoTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Create a video template. *Asynchronous*
 *
 * Video Templates define a type of video and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param videoTemplateResource The video template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createVideoTemplateAsync(char * accessToken,
	TemplateResource videoTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief Deletes a video from the system if no resources are attached to it. *Synchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param id The video id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteVideoSync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Deletes a video from the system if no resources are attached to it. *Asynchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param id The video id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteVideoAsync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete a video comment. *Synchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param videoId The video id *Required*
 * \param id The comment id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteVideoCommentSync(char * accessToken,
	long long videoId, long long id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a video comment. *Asynchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param videoId The video id *Required*
 * \param id The comment id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteVideoCommentAsync(char * accessToken,
	long long videoId, long long id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete a video disposition. *Synchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param dispositionId The disposition id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteVideoDispositionSync(char * accessToken,
	long long dispositionId, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a video disposition. *Asynchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param dispositionId The disposition id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteVideoDispositionAsync(char * accessToken,
	long long dispositionId, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete a flag. *Synchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param videoId The video id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteVideoFlagSync(char * accessToken,
	long long videoId, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a flag. *Asynchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param videoId The video id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteVideoFlagAsync(char * accessToken,
	long long videoId, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete a video's relationship. *Synchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param videoId The video id *Required*
 * \param id The relationship id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteVideoRelationshipSync(char * accessToken,
	long long videoId, long long id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a video's relationship. *Asynchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param videoId The video id *Required*
 * \param id The relationship id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteVideoRelationshipAsync(char * accessToken,
	long long videoId, long long id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete a video template. *Synchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteVideoTemplateSync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a video template. *Asynchronous*
 *
 * If cascade = 'detach', it will force delete the template even if it's attached to other objects. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param cascade The value needed to delete used templates
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteVideoTemplateAsync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get user videos. *Synchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param userId The user id *Required*
 * \param excludeFlagged Skip videos that have been flagged by the current user
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserVideosSync(char * accessToken,
	int userId, bool excludeFlagged, int size, int page, 
	void(* handler)(PageResource«VideoResource», Error, void* )
	, void* userData);

/*! \brief Get user videos. *Asynchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param userId The user id *Required*
 * \param excludeFlagged Skip videos that have been flagged by the current user
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserVideosAsync(char * accessToken,
	int userId, bool excludeFlagged, int size, int page, 
	void(* handler)(PageResource«VideoResource», Error, void* )
	, void* userData);


/*! \brief Loads a specific video details. *Synchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param id The video id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVideoSync(char * accessToken,
	long long id, 
	void(* handler)(VideoResource, Error, void* )
	, void* userData);

/*! \brief Loads a specific video details. *Asynchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param id The video id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVideoAsync(char * accessToken,
	long long id, 
	void(* handler)(VideoResource, Error, void* )
	, void* userData);


/*! \brief Returns a page of comments for a video. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param videoId The video id *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVideoCommentsSync(char * accessToken,
	int videoId, int size, int page, 
	void(* handler)(PageResource«CommentResource», Error, void* )
	, void* userData);

/*! \brief Returns a page of comments for a video. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param videoId The video id *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVideoCommentsAsync(char * accessToken,
	int videoId, int size, int page, 
	void(* handler)(PageResource«CommentResource», Error, void* )
	, void* userData);


/*! \brief Returns a page of dispositions for a video. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param videoId The video id *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVideoDispositionsSync(char * accessToken,
	int videoId, int size, int page, 
	void(* handler)(PageResource«DispositionResource», Error, void* )
	, void* userData);

/*! \brief Returns a page of dispositions for a video. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param videoId The video id *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVideoDispositionsAsync(char * accessToken,
	int videoId, int size, int page, 
	void(* handler)(PageResource«DispositionResource», Error, void* )
	, void* userData);


/*! \brief Returns a page of video relationships. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param videoId The video id *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVideoRelationshipsSync(char * accessToken,
	long long videoId, int size, int page, 
	void(* handler)(PageResource«VideoRelationshipResource», Error, void* )
	, void* userData);

/*! \brief Returns a page of video relationships. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param videoId The video id *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVideoRelationshipsAsync(char * accessToken,
	long long videoId, int size, int page, 
	void(* handler)(PageResource«VideoRelationshipResource», Error, void* )
	, void* userData);


/*! \brief Get a single video template. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or VIDEOS_ADMIN
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVideoTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Get a single video template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or VIDEOS_ADMIN
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVideoTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief List and search video templates. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or VIDEOS_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVideoTemplatesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);

/*! \brief List and search video templates. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or VIDEOS_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVideoTemplatesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«TemplateResource», Error, void* )
	, void* userData);


/*! \brief Search videos using the documented filters. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param excludeFlagged Skip videos that have been flagged by the current user
 * \param filterVideosByUploader Filter for videos by uploader id
 * \param filterCategory Filter for videos from a specific category by id
 * \param filterTagset Filter for videos with specified tags (separated by comma)
 * \param filterVideosByName Filter for videos which name *STARTS* with the given string
 * \param filterVideosByContributor Filter for videos with contribution from the artist specified by ID
 * \param filterVideosByAuthor Filter for videos with an artist as author specified by ID
 * \param filterHasAuthor Filter for videos that have an author set if true, or that have no author if false
 * \param filterHasUploader Filter for videos that have an uploader set if true, or that have no uploader if false
 * \param filterRelatedTo Filter for videos that have designated a particular video as the TO of a relationship. Pattern should match VIDEO_ID or VIDEO_ID:DETAILS to match with a specific details string as well
 * \param filterFriends Filter for videos uploaded by friends. 'true' for friends of the caller (requires user token) or a user id for a specific user's friends (requires VIDEOS_ADMIN permission)
 * \param filterDisposition Filter for videos a given user has a given disposition towards. USER_ID:DISPOSITION where USER_ID is the id of the user who has this disposition or 'me' for the caller (requires user token for 'me') and DISPOSITION is the name of the disposition. E.G. filter_disposition=123:like or filter_disposition=me:favorite
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVideosSync(char * accessToken,
	bool excludeFlagged, int filterVideosByUploader, std::string filterCategory, std::string filterTagset, std::string filterVideosByName, int filterVideosByContributor, int filterVideosByAuthor, bool filterHasAuthor, bool filterHasUploader, std::string filterRelatedTo, bool filterFriends, std::string filterDisposition, int size, int page, std::string order, 
	void(* handler)(PageResource«VideoResource», Error, void* )
	, void* userData);

/*! \brief Search videos using the documented filters. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param excludeFlagged Skip videos that have been flagged by the current user
 * \param filterVideosByUploader Filter for videos by uploader id
 * \param filterCategory Filter for videos from a specific category by id
 * \param filterTagset Filter for videos with specified tags (separated by comma)
 * \param filterVideosByName Filter for videos which name *STARTS* with the given string
 * \param filterVideosByContributor Filter for videos with contribution from the artist specified by ID
 * \param filterVideosByAuthor Filter for videos with an artist as author specified by ID
 * \param filterHasAuthor Filter for videos that have an author set if true, or that have no author if false
 * \param filterHasUploader Filter for videos that have an uploader set if true, or that have no uploader if false
 * \param filterRelatedTo Filter for videos that have designated a particular video as the TO of a relationship. Pattern should match VIDEO_ID or VIDEO_ID:DETAILS to match with a specific details string as well
 * \param filterFriends Filter for videos uploaded by friends. 'true' for friends of the caller (requires user token) or a user id for a specific user's friends (requires VIDEOS_ADMIN permission)
 * \param filterDisposition Filter for videos a given user has a given disposition towards. USER_ID:DISPOSITION where USER_ID is the id of the user who has this disposition or 'me' for the caller (requires user token for 'me') and DISPOSITION is the name of the disposition. E.G. filter_disposition=123:like or filter_disposition=me:favorite
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVideosAsync(char * accessToken,
	bool excludeFlagged, int filterVideosByUploader, std::string filterCategory, std::string filterTagset, std::string filterVideosByName, int filterVideosByContributor, int filterVideosByAuthor, bool filterHasAuthor, bool filterHasUploader, std::string filterRelatedTo, bool filterFriends, std::string filterDisposition, int size, int page, std::string order, 
	void(* handler)(PageResource«VideoResource», Error, void* )
	, void* userData);


/*! \brief Removes a user from a video's whitelist. *Synchronous*
 *
 * Remove the user with the id given in the path from the whitelist of users that can view this video regardless of privacy setting. <br><br><b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param videoId The video id *Required*
 * \param id The user id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool removeUserFromVideoWhitelistSync(char * accessToken,
	long long videoId, int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Removes a user from a video's whitelist. *Asynchronous*
 *
 * Remove the user with the id given in the path from the whitelist of users that can view this video regardless of privacy setting. <br><br><b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param videoId The video id *Required*
 * \param id The user id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool removeUserFromVideoWhitelistAsync(char * accessToken,
	long long videoId, int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Removes a contributor from a video. *Synchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param videoId The video id *Required*
 * \param id The contributor id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool removeVideoContributorSync(char * accessToken,
	long long videoId, int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Removes a contributor from a video. *Asynchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param videoId The video id *Required*
 * \param id The contributor id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool removeVideoContributorAsync(char * accessToken,
	long long videoId, int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Modifies a video's details. *Synchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param id The video id *Required*
 * \param videoResource The video object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateVideoSync(char * accessToken,
	long long id, VideoResource videoResource, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Modifies a video's details. *Asynchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param id The video id *Required*
 * \param videoResource The video object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateVideoAsync(char * accessToken,
	long long id, VideoResource videoResource, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Update a video comment. *Synchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param videoId The video id *Required*
 * \param id The comment id *Required*
 * \param content The comment content
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateVideoCommentSync(char * accessToken,
	long long videoId, long long id, StringWrapper content, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Update a video comment. *Asynchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param videoId The video id *Required*
 * \param id The comment id *Required*
 * \param content The comment content
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateVideoCommentAsync(char * accessToken,
	long long videoId, long long id, StringWrapper content, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Update a video's relationship details. *Synchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param videoId The video id *Required*
 * \param relationshipId The relationship id *Required*
 * \param details The video relationship details
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateVideoRelationshipSync(char * accessToken,
	long long videoId, long long relationshipId, StringWrapper details, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Update a video's relationship details. *Asynchronous*
 *
 * <b>Permissions Needed:</b> VIDEOS_USER or VIDEOS_ADMIN
 * \param videoId The video id *Required*
 * \param relationshipId The relationship id *Required*
 * \param details The video relationship details
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateVideoRelationshipAsync(char * accessToken,
	long long videoId, long long relationshipId, StringWrapper details, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Update a video template. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param videoTemplateResource The video template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateVideoTemplateSync(char * accessToken,
	std::string id, TemplateResource videoTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);

/*! \brief Update a video template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param videoTemplateResource The video template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateVideoTemplateAsync(char * accessToken,
	std::string id, TemplateResource videoTemplateResource, 
	void(* handler)(TemplateResource, Error, void* )
	, void* userData);


/*! \brief Increment a video's view count. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param id The video id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool viewVideoSync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Increment a video's view count. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param id The video id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool viewVideoAsync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData);



	static std::string getBasePath()
	{
		return "https://jsapi-integration.us-east-1.elasticbeanstalk.com";
	}
};
/** @}*/

}
}
#endif /* Media_VideosManager_H_ */
