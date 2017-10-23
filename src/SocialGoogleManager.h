#ifndef _SocialGoogleManager_H_
#define _SocialGoogleManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "GoogleToken.h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup SocialGoogle SocialGoogle
 * \ingroup Operations
 *  @{
 */
class SocialGoogleManager {
public:
	SocialGoogleManager();
	virtual ~SocialGoogleManager();

/*! \brief Link google account. *Synchronous*
 *
 * Links the current user account to a google account, using the acccess token from google. Can also be used to update the access token after it has expired.
 * \param googleToken The token from google
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool linkAccounts1Sync(char * accessToken,
	GoogleToken googleToken, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Link google account. *Asynchronous*
 *
 * Links the current user account to a google account, using the acccess token from google. Can also be used to update the access token after it has expired.
 * \param googleToken The token from google
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool linkAccounts1Async(char * accessToken,
	GoogleToken googleToken, 
	
	void(* handler)(Error, void* ) , void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* SocialGoogleManager_H_ */
