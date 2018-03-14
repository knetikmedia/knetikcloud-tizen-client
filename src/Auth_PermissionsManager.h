#ifndef _Auth_PermissionsManager_H_
#define _Auth_PermissionsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "PageResource«PermissionResource».h"
#include "PermissionResource.h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Auth_Permissions Auth_Permissions
 * \ingroup Operations
 *  @{
 */
class Auth_PermissionsManager {
public:
	Auth_PermissionsManager();
	virtual ~Auth_PermissionsManager();

/*! \brief Create a new permission. *Synchronous*
 *
 * <b>Permissions Needed:</b> PERMISSIONS_ADMIN
 * \param permissionResource The permission resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createPermissionSync(char * accessToken,
	PermissionResource permissionResource, 
	void(* handler)(PermissionResource, Error, void* )
	, void* userData);

/*! \brief Create a new permission. *Asynchronous*
 *
 * <b>Permissions Needed:</b> PERMISSIONS_ADMIN
 * \param permissionResource The permission resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createPermissionAsync(char * accessToken,
	PermissionResource permissionResource, 
	void(* handler)(PermissionResource, Error, void* )
	, void* userData);


/*! \brief Delete a permission. *Synchronous*
 *
 * <b>Permissions Needed:</b> PERMISSIONS_ADMIN
 * \param permission The permission value *Required*
 * \param force If true, removes permission assigned to roles
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deletePermissionSync(char * accessToken,
	std::string permission, bool force, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a permission. *Asynchronous*
 *
 * <b>Permissions Needed:</b> PERMISSIONS_ADMIN
 * \param permission The permission value *Required*
 * \param force If true, removes permission assigned to roles
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deletePermissionAsync(char * accessToken,
	std::string permission, bool force, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get a single permission. *Synchronous*
 *
 * <b>Permissions Needed:</b> PERMISSIONS_ADMIN
 * \param permission The permission value *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getPermissionSync(char * accessToken,
	std::string permission, 
	void(* handler)(PermissionResource, Error, void* )
	, void* userData);

/*! \brief Get a single permission. *Asynchronous*
 *
 * <b>Permissions Needed:</b> PERMISSIONS_ADMIN
 * \param permission The permission value *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getPermissionAsync(char * accessToken,
	std::string permission, 
	void(* handler)(PermissionResource, Error, void* )
	, void* userData);


/*! \brief List and search permissions. *Synchronous*
 *
 * <b>Permissions Needed:</b> PERMISSIONS_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getPermissionsSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«PermissionResource», Error, void* )
	, void* userData);

/*! \brief List and search permissions. *Asynchronous*
 *
 * <b>Permissions Needed:</b> PERMISSIONS_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getPermissionsAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«PermissionResource», Error, void* )
	, void* userData);


/*! \brief Update a permission. *Synchronous*
 *
 * <b>Permissions Needed:</b> PERMISSIONS_ADMIN
 * \param permission The permission value *Required*
 * \param permissionResource The permission resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updatePermissionSync(char * accessToken,
	std::string permission, PermissionResource permissionResource, 
	void(* handler)(PermissionResource, Error, void* )
	, void* userData);

/*! \brief Update a permission. *Asynchronous*
 *
 * <b>Permissions Needed:</b> PERMISSIONS_ADMIN
 * \param permission The permission value *Required*
 * \param permissionResource The permission resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updatePermissionAsync(char * accessToken,
	std::string permission, PermissionResource permissionResource, 
	void(* handler)(PermissionResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://jsapi-integration.us-east-1.elasticbeanstalk.com";
	}
};
/** @}*/

}
}
#endif /* Auth_PermissionsManager_H_ */
