#ifndef _UsersRelationshipsManager_H_
#define _UsersRelationshipsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "PageResource«UserRelationshipResource».h"
#include "Result.h"
#include "UserRelationshipResource.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup UsersRelationships UsersRelationships
 * \ingroup Operations
 *  @{
 */
class UsersRelationshipsManager {
public:
	UsersRelationshipsManager();
	virtual ~UsersRelationshipsManager();

/*! \brief Create a user relationship. *Synchronous*
 *
 * 
 * \param relationship The new relationship
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createUserRelationshipSync(char * accessToken,
	UserRelationshipResource relationship, 
	void(* handler)(UserRelationshipResource, Error, void* )
	, void* userData);

/*! \brief Create a user relationship. *Asynchronous*
 *
 * 
 * \param relationship The new relationship
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createUserRelationshipAsync(char * accessToken,
	UserRelationshipResource relationship, 
	void(* handler)(UserRelationshipResource, Error, void* )
	, void* userData);


/*! \brief Delete a user relationship. *Synchronous*
 *
 * 
 * \param id The id of the relationship *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteUserRelationshipSync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a user relationship. *Asynchronous*
 *
 * 
 * \param id The id of the relationship *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteUserRelationshipAsync(char * accessToken,
	long long id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get a user relationship. *Synchronous*
 *
 * 
 * \param id The id of the relationship *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserRelationshipSync(char * accessToken,
	long long id, 
	void(* handler)(UserRelationshipResource, Error, void* )
	, void* userData);

/*! \brief Get a user relationship. *Asynchronous*
 *
 * 
 * \param id The id of the relationship *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserRelationshipAsync(char * accessToken,
	long long id, 
	void(* handler)(UserRelationshipResource, Error, void* )
	, void* userData);


/*! \brief Get a list of user relationships. *Synchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserRelationshipsSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«UserRelationshipResource», Error, void* )
	, void* userData);

/*! \brief Get a list of user relationships. *Asynchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserRelationshipsAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«UserRelationshipResource», Error, void* )
	, void* userData);


/*! \brief Update a user relationship. *Synchronous*
 *
 * 
 * \param id The id of the relationship *Required*
 * \param relationship The new relationship
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateUserRelationshipSync(char * accessToken,
	long long id, UserRelationshipResource relationship, 
	void(* handler)(UserRelationshipResource, Error, void* )
	, void* userData);

/*! \brief Update a user relationship. *Asynchronous*
 *
 * 
 * \param id The id of the relationship *Required*
 * \param relationship The new relationship
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateUserRelationshipAsync(char * accessToken,
	long long id, UserRelationshipResource relationship, 
	void(* handler)(UserRelationshipResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://devsandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* UsersRelationshipsManager_H_ */
