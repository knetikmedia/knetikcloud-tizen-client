#ifndef _BRERuleEngineExpressionsManager_H_
#define _BRERuleEngineExpressionsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "LookupTypeResource.h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup BRERuleEngineExpressions BRERuleEngineExpressions
 * \ingroup Operations
 *  @{
 */
class BRERuleEngineExpressionsManager {
public:
	BRERuleEngineExpressionsManager();
	virtual ~BRERuleEngineExpressionsManager();

/*! \brief Get a list of 'lookup' type expressions. *Synchronous*
 *
 * These are expression types that take a second expression as input and produce a value. These can be used in addition to the standard types, like parameter, global and constant (see BRE documentation for details).
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBREExpressionsSync(char * accessToken,
	
	void(* handler)(std::list<LookupTypeResource>, Error, void* )
	, void* userData);

/*! \brief Get a list of 'lookup' type expressions. *Asynchronous*
 *
 * These are expression types that take a second expression as input and produce a value. These can be used in addition to the standard types, like parameter, global and constant (see BRE documentation for details).
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBREExpressionsAsync(char * accessToken,
	
	void(* handler)(std::list<LookupTypeResource>, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* BRERuleEngineExpressionsManager_H_ */
