#ifndef _BRERuleEngineEventsManager_H_
#define _BRERuleEngineEventsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "BreEvent.h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup BRERuleEngineEvents BRERuleEngineEvents
 * \ingroup Operations
 *  @{
 */
class BRERuleEngineEventsManager {
public:
	BRERuleEngineEventsManager();
	virtual ~BRERuleEngineEventsManager();

/*! \brief Fire a new event, based on an existing trigger. *Synchronous*
 *
 * Parameters within the event must match names and types from the trigger. Actual rule execution is asynchornous.  Returns request id, which will be used as the event id
 * \param breEvent The BRE event object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendBREEventSync(char * accessToken,
	BreEvent breEvent, 
	void(* handler)(std::string, Error, void* )
	, void* userData);

/*! \brief Fire a new event, based on an existing trigger. *Asynchronous*
 *
 * Parameters within the event must match names and types from the trigger. Actual rule execution is asynchornous.  Returns request id, which will be used as the event id
 * \param breEvent The BRE event object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendBREEventAsync(char * accessToken,
	BreEvent breEvent, 
	void(* handler)(std::string, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://devsandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* BRERuleEngineEventsManager_H_ */
