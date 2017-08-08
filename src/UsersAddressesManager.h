#ifndef _UsersAddressesManager_H_
#define _UsersAddressesManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "PageResource«SavedAddressResource».h"
#include "Result.h"
#include "SavedAddressResource.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup UsersAddresses UsersAddresses
 * \ingroup Operations
 *  @{
 */
class UsersAddressesManager {
public:
	UsersAddressesManager();
	virtual ~UsersAddressesManager();

/*! \brief Create a new address. *Synchronous*
 *
 * 
 * \param userId The id of the user *Required*
 * \param savedAddressResource The new address
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createAddressSync(char * accessToken,
	std::string userId, SavedAddressResource savedAddressResource, 
	void(* handler)(SavedAddressResource, Error, void* )
	, void* userData);

/*! \brief Create a new address. *Asynchronous*
 *
 * 
 * \param userId The id of the user *Required*
 * \param savedAddressResource The new address
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createAddressAsync(char * accessToken,
	std::string userId, SavedAddressResource savedAddressResource, 
	void(* handler)(SavedAddressResource, Error, void* )
	, void* userData);


/*! \brief Delete an address. *Synchronous*
 *
 * 
 * \param userId The id of the user *Required*
 * \param id The id of the address *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteAddressSync(char * accessToken,
	std::string userId, int id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete an address. *Asynchronous*
 *
 * 
 * \param userId The id of the user *Required*
 * \param id The id of the address *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteAddressAsync(char * accessToken,
	std::string userId, int id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get a single address. *Synchronous*
 *
 * 
 * \param userId The id of the user *Required*
 * \param id The id of the address *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAddressSync(char * accessToken,
	std::string userId, int id, 
	void(* handler)(SavedAddressResource, Error, void* )
	, void* userData);

/*! \brief Get a single address. *Asynchronous*
 *
 * 
 * \param userId The id of the user *Required*
 * \param id The id of the address *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAddressAsync(char * accessToken,
	std::string userId, int id, 
	void(* handler)(SavedAddressResource, Error, void* )
	, void* userData);


/*! \brief List and search addresses. *Synchronous*
 *
 * 
 * \param userId The id of the user *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAddressesSync(char * accessToken,
	std::string userId, int size, int page, std::string order, 
	void(* handler)(PageResource«SavedAddressResource», Error, void* )
	, void* userData);

/*! \brief List and search addresses. *Asynchronous*
 *
 * 
 * \param userId The id of the user *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getAddressesAsync(char * accessToken,
	std::string userId, int size, int page, std::string order, 
	void(* handler)(PageResource«SavedAddressResource», Error, void* )
	, void* userData);


/*! \brief Update an address. *Synchronous*
 *
 * 
 * \param userId The id of the user *Required*
 * \param id The id of the address *Required*
 * \param savedAddressResource The saved address resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateAddressSync(char * accessToken,
	std::string userId, int id, SavedAddressResource savedAddressResource, 
	void(* handler)(SavedAddressResource, Error, void* )
	, void* userData);

/*! \brief Update an address. *Asynchronous*
 *
 * 
 * \param userId The id of the user *Required*
 * \param id The id of the address *Required*
 * \param savedAddressResource The saved address resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateAddressAsync(char * accessToken,
	std::string userId, int id, SavedAddressResource savedAddressResource, 
	void(* handler)(SavedAddressResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* UsersAddressesManager_H_ */
