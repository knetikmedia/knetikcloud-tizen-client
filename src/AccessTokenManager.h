#ifndef _AccessTokenManager_H_
#define _AccessTokenManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "OAuth2Resource.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup AccessToken AccessToken
 * \ingroup Operations
 *  @{
 */
class AccessTokenManager {
public:
	AccessTokenManager();
	virtual ~AccessTokenManager();

/*! \brief Get access token. *Synchronous*
 *
 * 
 * \param grantType Grant type *Required*
 * \param clientId The id of the client *Required*
 * \param clientSecret The secret key of the client.  Used only with a grant_type of client_credentials
 * \param username The username of the client. Used only with a grant_type of password
 * \param password The password of the client. Used only with a grant_type of password
 * \param token The 3rd party authentication token. Used only with a grant_type of facebook, google, etc (social plugins)
 * \param refreshToken The refresh token obtained during prior authentication. Used only with a grant_type of refresh_token
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getOAuthTokenSync(char * accessToken,
	std::string grantType, std::string clientId, std::string clientSecret, std::string username, std::string password, std::string token, std::string refreshToken, 
	void(* handler)(OAuth2Resource, Error, void* )
	, void* userData);

/*! \brief Get access token. *Asynchronous*
 *
 * 
 * \param grantType Grant type *Required*
 * \param clientId The id of the client *Required*
 * \param clientSecret The secret key of the client.  Used only with a grant_type of client_credentials
 * \param username The username of the client. Used only with a grant_type of password
 * \param password The password of the client. Used only with a grant_type of password
 * \param token The 3rd party authentication token. Used only with a grant_type of facebook, google, etc (social plugins)
 * \param refreshToken The refresh token obtained during prior authentication. Used only with a grant_type of refresh_token
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getOAuthTokenAsync(char * accessToken,
	std::string grantType, std::string clientId, std::string clientSecret, std::string username, std::string password, std::string token, std::string refreshToken, 
	void(* handler)(OAuth2Resource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* AccessTokenManager_H_ */
