#ifndef _UtilSecurityManager_H_
#define _UtilSecurityManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "PageResource«LocationLogResource».h"
#include "Result.h"
#include "TokenDetailsResource.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup UtilSecurity UtilSecurity
 * \ingroup Operations
 *  @{
 */
class UtilSecurityManager {
public:
	UtilSecurityManager();
	virtual ~UtilSecurityManager();

/*! \brief Returns the authentication log for a user. *Synchronous*
 *
 * A log entry is recorded everytime a user requests a new token. Standard pagination available
 * \param userId The user id
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserLocationLogSync(char * accessToken,
	int userId, int size, int page, std::string order, 
	void(* handler)(PageResource«LocationLogResource», Error, void* )
	, void* userData);

/*! \brief Returns the authentication log for a user. *Asynchronous*
 *
 * A log entry is recorded everytime a user requests a new token. Standard pagination available
 * \param userId The user id
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserLocationLogAsync(char * accessToken,
	int userId, int size, int page, std::string order, 
	void(* handler)(PageResource«LocationLogResource», Error, void* )
	, void* userData);


/*! \brief Returns the authentication token details. Use /users endpoint for detailed user's info. *Synchronous*
 *
 * 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserTokenDetailsSync(char * accessToken,
	
	void(* handler)(TokenDetailsResource, Error, void* )
	, void* userData);

/*! \brief Returns the authentication token details. Use /users endpoint for detailed user's info. *Asynchronous*
 *
 * 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserTokenDetailsAsync(char * accessToken,
	
	void(* handler)(TokenDetailsResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://devsandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* UtilSecurityManager_H_ */
