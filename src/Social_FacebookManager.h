#ifndef _Social_FacebookManager_H_
#define _Social_FacebookManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "FacebookToken.h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Social_Facebook Social_Facebook
 * \ingroup Operations
 *  @{
 */
class Social_FacebookManager {
public:
	Social_FacebookManager();
	virtual ~Social_FacebookManager();

/*! \brief Link facebook account. *Synchronous*
 *
 * Links the current user account to a facebook account, using the acccess token from facebook. Can also be used to update the access token after it has expired. <br><br><b>Permissions Needed:</b> Non-facebook user token
 * \param facebookToken The token from facebook
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool linkAccountsSync(char * accessToken,
	FacebookToken facebookToken, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Link facebook account. *Asynchronous*
 *
 * Links the current user account to a facebook account, using the acccess token from facebook. Can also be used to update the access token after it has expired. <br><br><b>Permissions Needed:</b> Non-facebook user token
 * \param facebookToken The token from facebook
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool linkAccountsAsync(char * accessToken,
	FacebookToken facebookToken, 
	
	void(* handler)(Error, void* ) , void* userData);



	static std::string getBasePath()
	{
		return "https://jsapi-integration.us-east-1.elasticbeanstalk.com";
	}
};
/** @}*/

}
}
#endif /* Social_FacebookManager_H_ */
