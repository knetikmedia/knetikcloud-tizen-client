#ifndef _UsersFriendshipsManager_H_
#define _UsersFriendshipsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "PageResource«SimpleUserResource».h"
#include "Result.h"
#include "StringWrapper.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup UsersFriendships UsersFriendships
 * \ingroup Operations
 *  @{
 */
class UsersFriendshipsManager {
public:
	UsersFriendshipsManager();
	virtual ~UsersFriendshipsManager();

/*! \brief Add a friend. *Synchronous*
 *
 * As a user, either creates or confirm a pending request. As an admin, call this endpoint twice while inverting the IDs to create a confirmed friendship.
 * \param userId The id of the user or 'me' if logged in *Required*
 * \param id The id of the user to befriend *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addFriendSync(char * accessToken,
	std::string userId, int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Add a friend. *Asynchronous*
 *
 * As a user, either creates or confirm a pending request. As an admin, call this endpoint twice while inverting the IDs to create a confirmed friendship.
 * \param userId The id of the user or 'me' if logged in *Required*
 * \param id The id of the user to befriend *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addFriendAsync(char * accessToken,
	std::string userId, int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get friends list. *Synchronous*
 *
 * 
 * \param userId The id of the user or 'me' *Required*
 * \param filterUsername Filter for friends with the given username
 * \param filterUserId Filter for friends by user id
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getFriendsSync(char * accessToken,
	std::string userId, std::string filterUsername, int filterUserId, int size, int page, 
	void(* handler)(PageResource«SimpleUserResource», Error, void* )
	, void* userData);

/*! \brief Get friends list. *Asynchronous*
 *
 * 
 * \param userId The id of the user or 'me' *Required*
 * \param filterUsername Filter for friends with the given username
 * \param filterUserId Filter for friends by user id
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getFriendsAsync(char * accessToken,
	std::string userId, std::string filterUsername, int filterUserId, int size, int page, 
	void(* handler)(PageResource«SimpleUserResource», Error, void* )
	, void* userData);


/*! \brief Returns the invite token. *Synchronous*
 *
 * This is a unique invite token that allows direct connection to the request user.  Exposing that token presents privacy issues if the token is leaked. Use friend request flow instead if confirmation is required
 * \param userId The id of the user or 'me' if logged in *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getInviteTokenSync(char * accessToken,
	std::string userId, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Returns the invite token. *Asynchronous*
 *
 * This is a unique invite token that allows direct connection to the request user.  Exposing that token presents privacy issues if the token is leaked. Use friend request flow instead if confirmation is required
 * \param userId The id of the user or 'me' if logged in *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getInviteTokenAsync(char * accessToken,
	std::string userId, 
	void(* handler)(std::string, Error, void* )
	, void* userData);


/*! \brief Get pending invites. *Synchronous*
 *
 * Invites that the specified user received
 * \param userId The id of the user or 'me' *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getInvitesSync(char * accessToken,
	std::string userId, int size, int page, 
	void(* handler)(PageResource«SimpleUserResource», Error, void* )
	, void* userData);

/*! \brief Get pending invites. *Asynchronous*
 *
 * Invites that the specified user received
 * \param userId The id of the user or 'me' *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getInvitesAsync(char * accessToken,
	std::string userId, int size, int page, 
	void(* handler)(PageResource«SimpleUserResource», Error, void* )
	, void* userData);


/*! \brief Redeem friendship token. *Synchronous*
 *
 * Immediately connects the requested user with the user mapped by the provided invite token
 * \param userId The id of the user or 'me' if logged in *Required*
 * \param token The invite token
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool redeemFriendshipTokenSync(char * accessToken,
	std::string userId, StringWrapper token, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Redeem friendship token. *Asynchronous*
 *
 * Immediately connects the requested user with the user mapped by the provided invite token
 * \param userId The id of the user or 'me' if logged in *Required*
 * \param token The invite token
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool redeemFriendshipTokenAsync(char * accessToken,
	std::string userId, StringWrapper token, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Remove or decline a friend. *Synchronous*
 *
 * 
 * \param userId The id of the user or 'me' if logged in *Required*
 * \param id The id of the user to befriend *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool removeOrDeclineFriendSync(char * accessToken,
	std::string userId, int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Remove or decline a friend. *Asynchronous*
 *
 * 
 * \param userId The id of the user or 'me' if logged in *Required*
 * \param id The id of the user to befriend *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool removeOrDeclineFriendAsync(char * accessToken,
	std::string userId, int id, 
	
	void(* handler)(Error, void* ) , void* userData);



	static std::string getBasePath()
	{
		return "https://devsandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* UsersFriendshipsManager_H_ */
