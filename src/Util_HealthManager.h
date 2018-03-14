#ifndef _Util_HealthManager_H_
#define _Util_HealthManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Util_Health Util_Health
 * \ingroup Operations
 *  @{
 */
class Util_HealthManager {
public:
	Util_HealthManager();
	virtual ~Util_HealthManager();

/*! \brief Get health info. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getHealthSync(char * accessToken,
	
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Get health info. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getHealthAsync(char * accessToken,
	
	void(* handler)(std::string, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://jsapi-integration.us-east-1.elasticbeanstalk.com";
	}
};
/** @}*/

}
}
#endif /* Util_HealthManager_H_ */
