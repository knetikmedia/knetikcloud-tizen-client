#ifndef _ContentCommentsManager_H_
#define _ContentCommentsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "CommentResource.h"
#include "PageResource«CommentResource».h"
#include "Result.h"
#include "StringWrapper.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup ContentComments ContentComments
 * \ingroup Operations
 *  @{
 */
class ContentCommentsManager {
public:
	ContentCommentsManager();
	virtual ~ContentCommentsManager();

/*! \brief Add a new comment. *Synchronous*
 *
 * 
 * \param commentResource The comment to be added
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addCommentSync(char * accessToken,
	CommentResource commentResource, 
	void(* handler)(CommentResource, Error, void* )
	, void* userData);

/*! \brief Add a new comment. *Asynchronous*
 *
 * 
 * \param commentResource The comment to be added
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addCommentAsync(char * accessToken,
	CommentResource commentResource, 
	void(* handler)(CommentResource, Error, void* )
	, void* userData);


/*! \brief Delete a comment. *Synchronous*
 *
 * 
 * \param id The comment id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteCommentSync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a comment. *Asynchronous*
 *
 * 
 * \param id The comment id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteCommentAsync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Return a comment. *Synchronous*
 *
 * 
 * \param id The comment id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCommentSync(char * accessToken,
	long long id, 
	void(* handler)(CommentResource, Error, void* )
	, void* userData);

/*! \brief Return a comment. *Asynchronous*
 *
 * 
 * \param id The comment id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCommentAsync(char * accessToken,
	long long id, 
	void(* handler)(CommentResource, Error, void* )
	, void* userData);


/*! \brief Returns a page of comments. *Synchronous*
 *
 * 
 * \param context Get comments by context type *Required*
 * \param contextId Get comments by context id *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCommentsSync(char * accessToken,
	std::string context, int contextId, int size, int page, 
	void(* handler)(PageResource«CommentResource», Error, void* )
	, void* userData);

/*! \brief Returns a page of comments. *Asynchronous*
 *
 * 
 * \param context Get comments by context type *Required*
 * \param contextId Get comments by context id *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getCommentsAsync(char * accessToken,
	std::string context, int contextId, int size, int page, 
	void(* handler)(PageResource«CommentResource», Error, void* )
	, void* userData);


/*! \brief Update a comment. *Synchronous*
 *
 * 
 * \param id The comment id *Required*
 * \param content The comment content
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateCommentSync(char * accessToken,
	long long id, StringWrapper content, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Update a comment. *Asynchronous*
 *
 * 
 * \param id The comment id *Required*
 * \param content The comment content
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateCommentAsync(char * accessToken,
	long long id, StringWrapper content, 
	
	void(* handler)(Error, void* ) , void* userData);



	static std::string getBasePath()
	{
		return "https://devsandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* ContentCommentsManager_H_ */
