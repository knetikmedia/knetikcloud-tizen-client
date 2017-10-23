#ifndef _BRERuleEngineTriggersManager_H_
#define _BRERuleEngineTriggersManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "BreTriggerResource.h"
#include "PageResource«BreTriggerResource».h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup BRERuleEngineTriggers BRERuleEngineTriggers
 * \ingroup Operations
 *  @{
 */
class BRERuleEngineTriggersManager {
public:
	BRERuleEngineTriggersManager();
	virtual ~BRERuleEngineTriggersManager();

/*! \brief Create a trigger. *Synchronous*
 *
 * Customer added triggers will not be fired automatically or have rules associated with them by default. Custom rules must be added to get use from the trigger and it must then be fired from the outside. See the Bre Event services
 * \param breTriggerResource The BRE trigger resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createBRETriggerSync(char * accessToken,
	BreTriggerResource breTriggerResource, 
	void(* handler)(BreTriggerResource, Error, void* )
	, void* userData);

/*! \brief Create a trigger. *Asynchronous*
 *
 * Customer added triggers will not be fired automatically or have rules associated with them by default. Custom rules must be added to get use from the trigger and it must then be fired from the outside. See the Bre Event services
 * \param breTriggerResource The BRE trigger resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createBRETriggerAsync(char * accessToken,
	BreTriggerResource breTriggerResource, 
	void(* handler)(BreTriggerResource, Error, void* )
	, void* userData);


/*! \brief Delete a trigger. *Synchronous*
 *
 * May fail if there are existing rules against it. Cannot delete core triggers
 * \param eventName The trigger event name *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteBRETriggerSync(char * accessToken,
	std::string eventName, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a trigger. *Asynchronous*
 *
 * May fail if there are existing rules against it. Cannot delete core triggers
 * \param eventName The trigger event name *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteBRETriggerAsync(char * accessToken,
	std::string eventName, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get a single trigger. *Synchronous*
 *
 * 
 * \param eventName The trigger event name *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBRETriggerSync(char * accessToken,
	std::string eventName, 
	void(* handler)(BreTriggerResource, Error, void* )
	, void* userData);

/*! \brief Get a single trigger. *Asynchronous*
 *
 * 
 * \param eventName The trigger event name *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBRETriggerAsync(char * accessToken,
	std::string eventName, 
	void(* handler)(BreTriggerResource, Error, void* )
	, void* userData);


/*! \brief List triggers. *Synchronous*
 *
 * 
 * \param filterSystem Filter for triggers that are system triggers when true, or not when false. Leave off for both mixed
 * \param filterCategory Filter for triggers that are within a specific category
 * \param filterTags Filter for triggers that have all of the given tags (comma separated list)
 * \param filterName Filter for triggers that have names containing the given string
 * \param filterSearch Filter for triggers containing the given words somewhere within name, description and tags
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBRETriggersSync(char * accessToken,
	bool filterSystem, std::string filterCategory, std::string filterTags, std::string filterName, std::string filterSearch, int size, int page, 
	void(* handler)(PageResource«BreTriggerResource», Error, void* )
	, void* userData);

/*! \brief List triggers. *Asynchronous*
 *
 * 
 * \param filterSystem Filter for triggers that are system triggers when true, or not when false. Leave off for both mixed
 * \param filterCategory Filter for triggers that are within a specific category
 * \param filterTags Filter for triggers that have all of the given tags (comma separated list)
 * \param filterName Filter for triggers that have names containing the given string
 * \param filterSearch Filter for triggers containing the given words somewhere within name, description and tags
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getBRETriggersAsync(char * accessToken,
	bool filterSystem, std::string filterCategory, std::string filterTags, std::string filterName, std::string filterSearch, int size, int page, 
	void(* handler)(PageResource«BreTriggerResource», Error, void* )
	, void* userData);


/*! \brief Update a trigger. *Synchronous*
 *
 * May fail if new parameters mismatch requirements of existing rules. Cannot update core triggers
 * \param eventName The trigger event name *Required*
 * \param breTriggerResource The BRE trigger resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateBRETriggerSync(char * accessToken,
	std::string eventName, BreTriggerResource breTriggerResource, 
	void(* handler)(BreTriggerResource, Error, void* )
	, void* userData);

/*! \brief Update a trigger. *Asynchronous*
 *
 * May fail if new parameters mismatch requirements of existing rules. Cannot update core triggers
 * \param eventName The trigger event name *Required*
 * \param breTriggerResource The BRE trigger resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateBRETriggerAsync(char * accessToken,
	std::string eventName, BreTriggerResource breTriggerResource, 
	void(* handler)(BreTriggerResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* BRERuleEngineTriggersManager_H_ */
