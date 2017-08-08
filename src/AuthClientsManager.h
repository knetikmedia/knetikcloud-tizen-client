#ifndef _AuthClientsManager_H_
#define _AuthClientsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "ClientResource.h"
#include "GrantTypeResource.h"
#include "PageResource«ClientResource».h"
#include "Result.h"
#include <list>
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup AuthClients AuthClients
 * \ingroup Operations
 *  @{
 */
class AuthClientsManager {
public:
	AuthClientsManager();
	virtual ~AuthClientsManager();

/*! \brief Create a new client. *Synchronous*
 *
 * 
 * \param clientResource The client resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createClientSync(char * accessToken,
	ClientResource clientResource, 
	void(* handler)(ClientResource, Error, void* )
	, void* userData);

/*! \brief Create a new client. *Asynchronous*
 *
 * 
 * \param clientResource The client resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createClientAsync(char * accessToken,
	ClientResource clientResource, 
	void(* handler)(ClientResource, Error, void* )
	, void* userData);


/*! \brief Delete a client. *Synchronous*
 *
 * 
 * \param clientKey The key of the client *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteClientSync(char * accessToken,
	std::string clientKey, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a client. *Asynchronous*
 *
 * 
 * \param clientKey The key of the client *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteClientAsync(char * accessToken,
	std::string clientKey, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get a single client. *Synchronous*
 *
 * 
 * \param clientKey The key of the client *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getClientSync(char * accessToken,
	std::string clientKey, 
	void(* handler)(ClientResource, Error, void* )
	, void* userData);

/*! \brief Get a single client. *Asynchronous*
 *
 * 
 * \param clientKey The key of the client *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getClientAsync(char * accessToken,
	std::string clientKey, 
	void(* handler)(ClientResource, Error, void* )
	, void* userData);


/*! \brief List available client grant types. *Synchronous*
 *
 * 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getClientGrantTypesSync(char * accessToken,
	
	void(* handler)(std::list<GrantTypeResource>, Error, void* )
	, void* userData);

/*! \brief List available client grant types. *Asynchronous*
 *
 * 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getClientGrantTypesAsync(char * accessToken,
	
	void(* handler)(std::list<GrantTypeResource>, Error, void* )
	, void* userData);


/*! \brief List and search clients. *Synchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getClientsSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«ClientResource», Error, void* )
	, void* userData);

/*! \brief List and search clients. *Asynchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getClientsAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«ClientResource», Error, void* )
	, void* userData);


/*! \brief Set grant types for a client. *Synchronous*
 *
 * 
 * \param clientKey The key of the client *Required*
 * \param grantList A list of unique grant types
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setClientGrantTypesSync(char * accessToken,
	std::string clientKey, std::list<> grantList, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Set grant types for a client. *Asynchronous*
 *
 * 
 * \param clientKey The key of the client *Required*
 * \param grantList A list of unique grant types
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setClientGrantTypesAsync(char * accessToken,
	std::string clientKey, std::list<> grantList, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Set redirect uris for a client. *Synchronous*
 *
 * 
 * \param clientKey The key of the client *Required*
 * \param redirectList A list of unique redirect uris
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setClientRedirectUrisSync(char * accessToken,
	std::string clientKey, std::list<> redirectList, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Set redirect uris for a client. *Asynchronous*
 *
 * 
 * \param clientKey The key of the client *Required*
 * \param redirectList A list of unique redirect uris
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setClientRedirectUrisAsync(char * accessToken,
	std::string clientKey, std::list<> redirectList, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Update a client. *Synchronous*
 *
 * 
 * \param clientKey The key of the client *Required*
 * \param clientResource The client resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateClientSync(char * accessToken,
	std::string clientKey, ClientResource clientResource, 
	void(* handler)(ClientResource, Error, void* )
	, void* userData);

/*! \brief Update a client. *Asynchronous*
 *
 * 
 * \param clientKey The key of the client *Required*
 * \param clientResource The client resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateClientAsync(char * accessToken,
	std::string clientKey, ClientResource clientResource, 
	void(* handler)(ClientResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* AuthClientsManager_H_ */
