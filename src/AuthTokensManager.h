#ifndef _AuthTokensManager_H_
#define _AuthTokensManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "OauthAccessTokenResource.h"
#include "PageResource«OauthAccessTokenResource».h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup AuthTokens AuthTokens
 * \ingroup Operations
 *  @{
 */
class AuthTokensManager {
public:
	AuthTokensManager();
	virtual ~AuthTokensManager();

/*! \brief Delete tokens by username, client id, or both. *Synchronous*
 *
 * <b>Permissions Needed:</b> TOKENS_ADMIN
 * \param username The username of the user
 * \param clientId The id of the client
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteTokensSync(char * accessToken,
	std::string username, std::string clientId, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete tokens by username, client id, or both. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TOKENS_ADMIN
 * \param username The username of the user
 * \param clientId The id of the client
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteTokensAsync(char * accessToken,
	std::string username, std::string clientId, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get a single token by username and client id. *Synchronous*
 *
 * <b>Permissions Needed:</b> TOKENS_ADMIN
 * \param username The username of the user *Required*
 * \param clientId The id of the client *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTokenSync(char * accessToken,
	std::string username, std::string clientId, 
	void(* handler)(OauthAccessTokenResource, Error, void* )
	, void* userData);

/*! \brief Get a single token by username and client id. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TOKENS_ADMIN
 * \param username The username of the user *Required*
 * \param clientId The id of the client *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTokenAsync(char * accessToken,
	std::string username, std::string clientId, 
	void(* handler)(OauthAccessTokenResource, Error, void* )
	, void* userData);


/*! \brief List usernames and client ids. *Synchronous*
 *
 * Token value not shown. <br><br><b>Permissions Needed:</b> TOKENS_ADMIN
 * \param filterClientId Filters for token whose client id matches provided string
 * \param filterUsername Filters for token whose username matches provided string
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTokensSync(char * accessToken,
	std::string filterClientId, std::string filterUsername, int size, int page, std::string order, 
	void(* handler)(PageResource«OauthAccessTokenResource», Error, void* )
	, void* userData);

/*! \brief List usernames and client ids. *Asynchronous*
 *
 * Token value not shown. <br><br><b>Permissions Needed:</b> TOKENS_ADMIN
 * \param filterClientId Filters for token whose client id matches provided string
 * \param filterUsername Filters for token whose username matches provided string
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTokensAsync(char * accessToken,
	std::string filterClientId, std::string filterUsername, int size, int page, std::string order, 
	void(* handler)(PageResource«OauthAccessTokenResource», Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* AuthTokensManager_H_ */
