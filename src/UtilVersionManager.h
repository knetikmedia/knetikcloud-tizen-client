#ifndef _UtilVersionManager_H_
#define _UtilVersionManager_H_

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
/** \addtogroup UtilVersion UtilVersion
 * \ingroup Operations
 *  @{
 */
class UtilVersionManager {
public:
	UtilVersionManager();
	virtual ~UtilVersionManager();

/*! \brief Get current version info. *Synchronous*
 *
 * 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVersionSync(char * accessToken,
	
	void(* handler)(Version, Error, void* )
	, void* userData);

/*! \brief Get current version info. *Asynchronous*
 *
 * 
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getVersionAsync(char * accessToken,
	
	void(* handler)(Version, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://devsandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* UtilVersionManager_H_ */
