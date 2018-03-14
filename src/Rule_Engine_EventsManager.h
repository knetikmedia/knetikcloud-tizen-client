#ifndef _Rule_Engine_EventsManager_H_
#define _Rule_Engine_EventsManager_H_

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
/** \addtogroup Rule_Engine_Events Rule_Engine_Events
 * \ingroup Operations
 *  @{
 */
class Rule_Engine_EventsManager {
public:
	Rule_Engine_EventsManager();
	virtual ~Rule_Engine_EventsManager();

/*! \brief Fire a new event, based on an existing trigger. *Synchronous*
 *
 * Parameters within the event must match names and types from the trigger. Actual rule execution is asynchornous.  Returns request id, which will be used as the event id. <br><br><b>Permissions Needed:</b> BRE_RULE_ENGINE_EVENTS_USER
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
 * Parameters within the event must match names and types from the trigger. Actual rule execution is asynchornous.  Returns request id, which will be used as the event id. <br><br><b>Permissions Needed:</b> BRE_RULE_ENGINE_EVENTS_USER
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
		return "https://jsapi-integration.us-east-1.elasticbeanstalk.com";
	}
};
/** @}*/

}
}
#endif /* Rule_Engine_EventsManager_H_ */
