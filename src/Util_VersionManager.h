#ifndef _Util_VersionManager_H_
#define _Util_VersionManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "Result.h"
#include "Version.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Util_Version Util_Version
 * \ingroup Operations
 *  @{
 */
class Util_VersionManager {
public:
	Util_VersionManager();
	virtual ~Util_VersionManager();

/*! \brief Get current version info. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVersionSync(char * accessToken,
	
	void(* handler)(Version, Error, void* )
	, void* userData);

/*! \brief Get current version info. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVersionAsync(char * accessToken,
	
	void(* handler)(Version, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://jsapi-integration.us-east-1.elasticbeanstalk.com";
	}
};
/** @}*/

}
}
#endif /* Util_VersionManager_H_ */
