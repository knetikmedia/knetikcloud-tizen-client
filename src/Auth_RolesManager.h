#ifndef _Auth_RolesManager_H_
#define _Auth_RolesManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "ClientResource.h"
#include "PageResource«RoleResource».h"
#include "Result.h"
#include "RoleResource.h"
#include "UserResource.h"
#include <list>
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Auth_Roles Auth_Roles
 * \ingroup Operations
 *  @{
 */
class Auth_RolesManager {
public:
	Auth_RolesManager();
	virtual ~Auth_RolesManager();

/*! \brief Create a new role. *Synchronous*
 *
 * <b>Permissions Needed:</b> ROLES_ADMIN
 * \param roleResource The role resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createRoleSync(char * accessToken,
	RoleResource roleResource, 
	void(* handler)(RoleResource, Error, void* )
	, void* userData);

/*! \brief Create a new role. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ROLES_ADMIN
 * \param roleResource The role resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createRoleAsync(char * accessToken,
	RoleResource roleResource, 
	void(* handler)(RoleResource, Error, void* )
	, void* userData);


/*! \brief Delete a role. *Synchronous*
 *
 * <b>Permissions Needed:</b> ROLES_ADMIN
 * \param role The role value *Required*
 * \param force If true, removes role from users/clients
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteRoleSync(char * accessToken,
	std::string role, bool force, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a role. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ROLES_ADMIN
 * \param role The role value *Required*
 * \param force If true, removes role from users/clients
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteRoleAsync(char * accessToken,
	std::string role, bool force, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get roles for a client. *Synchronous*
 *
 * <b>Permissions Needed:</b> ROLES_ADMIN
 * \param clientKey The client key *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getClientRolesSync(char * accessToken,
	std::string clientKey, 
	void(* handler)(std::list<RoleResource>, Error, void* )
	, void* userData);

/*! \brief Get roles for a client. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ROLES_ADMIN
 * \param clientKey The client key *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getClientRolesAsync(char * accessToken,
	std::string clientKey, 
	void(* handler)(std::list<RoleResource>, Error, void* )
	, void* userData);


/*! \brief Get a single role. *Synchronous*
 *
 * <b>Permissions Needed:</b> ROLES_ADMIN
 * \param role The role value *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getRoleSync(char * accessToken,
	std::string role, 
	void(* handler)(RoleResource, Error, void* )
	, void* userData);

/*! \brief Get a single role. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ROLES_ADMIN
 * \param role The role value *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getRoleAsync(char * accessToken,
	std::string role, 
	void(* handler)(RoleResource, Error, void* )
	, void* userData);


/*! \brief List and search roles. *Synchronous*
 *
 * <b>Permissions Needed:</b> ROLES_ADMIN
 * \param filterName Filter for roles that have a name starting with specified string
 * \param filterRole Filter for roles that have a role starting with specified string
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getRolesSync(char * accessToken,
	std::string filterName, std::string filterRole, int size, int page, std::string order, 
	void(* handler)(PageResource«RoleResource», Error, void* )
	, void* userData);

/*! \brief List and search roles. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ROLES_ADMIN
 * \param filterName Filter for roles that have a name starting with specified string
 * \param filterRole Filter for roles that have a role starting with specified string
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getRolesAsync(char * accessToken,
	std::string filterName, std::string filterRole, int size, int page, std::string order, 
	void(* handler)(PageResource«RoleResource», Error, void* )
	, void* userData);


/*! \brief Get roles for a user. *Synchronous*
 *
 * <b>Permissions Needed:</b> ROLES_ADMIN
 * \param userId The user's id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserRolesSync(char * accessToken,
	int userId, 
	void(* handler)(std::list<RoleResource>, Error, void* )
	, void* userData);

/*! \brief Get roles for a user. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ROLES_ADMIN
 * \param userId The user's id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserRolesAsync(char * accessToken,
	int userId, 
	void(* handler)(std::list<RoleResource>, Error, void* )
	, void* userData);


/*! \brief Set roles for a client. *Synchronous*
 *
 * <b>Permissions Needed:</b> ROLES_ADMIN
 * \param clientKey The client key *Required*
 * \param rolesList The list of unique roles
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setClientRolesSync(char * accessToken,
	std::string clientKey, std::list<> rolesList, 
	void(* handler)(ClientResource, Error, void* )
	, void* userData);

/*! \brief Set roles for a client. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ROLES_ADMIN
 * \param clientKey The client key *Required*
 * \param rolesList The list of unique roles
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setClientRolesAsync(char * accessToken,
	std::string clientKey, std::list<> rolesList, 
	void(* handler)(ClientResource, Error, void* )
	, void* userData);


/*! \brief Set permissions for a role. *Synchronous*
 *
 * <b>Permissions Needed:</b> ROLES_ADMIN
 * \param role The role value *Required*
 * \param permissionsList The list of unique permissions
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setPermissionsForRoleSync(char * accessToken,
	std::string role, std::list<> permissionsList, 
	void(* handler)(RoleResource, Error, void* )
	, void* userData);

/*! \brief Set permissions for a role. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ROLES_ADMIN
 * \param role The role value *Required*
 * \param permissionsList The list of unique permissions
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setPermissionsForRoleAsync(char * accessToken,
	std::string role, std::list<> permissionsList, 
	void(* handler)(RoleResource, Error, void* )
	, void* userData);


/*! \brief Set roles for a user. *Synchronous*
 *
 * <b>Permissions Needed:</b> ROLES_ADMIN
 * \param userId The user's id *Required*
 * \param rolesList The list of unique roles
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setUserRolesSync(char * accessToken,
	int userId, std::list<> rolesList, 
	void(* handler)(UserResource, Error, void* )
	, void* userData);

/*! \brief Set roles for a user. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ROLES_ADMIN
 * \param userId The user's id *Required*
 * \param rolesList The list of unique roles
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setUserRolesAsync(char * accessToken,
	int userId, std::list<> rolesList, 
	void(* handler)(UserResource, Error, void* )
	, void* userData);


/*! \brief Update a role. *Synchronous*
 *
 * <b>Permissions Needed:</b> ROLES_ADMIN
 * \param role The role value *Required*
 * \param roleResource The role resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateRoleSync(char * accessToken,
	std::string role, RoleResource roleResource, 
	void(* handler)(RoleResource, Error, void* )
	, void* userData);

/*! \brief Update a role. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ROLES_ADMIN
 * \param role The role value *Required*
 * \param roleResource The role resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateRoleAsync(char * accessToken,
	std::string role, RoleResource roleResource, 
	void(* handler)(RoleResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://jsapi-integration.us-east-1.elasticbeanstalk.com";
	}
};
/** @}*/

}
}
#endif /* Auth_RolesManager_H_ */
