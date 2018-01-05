#ifndef _MediaModerationManager_H_
#define _MediaModerationManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "FlagReportResource.h"
#include "FlagResource.h"
#include "PageResource«FlagReportResource».h"
#include "PageResource«FlagResource».h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup MediaModeration MediaModeration
 * \ingroup Operations
 *  @{
 */
class MediaModerationManager {
public:
	MediaModerationManager();
	virtual ~MediaModerationManager();

/*! \brief Add a flag. *Synchronous*
 *
 * 
 * \param flagResource The flag resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addFlagSync(char * accessToken,
	FlagResource flagResource, 
	void(* handler)(FlagResource, Error, void* )
	, void* userData);

/*! \brief Add a flag. *Asynchronous*
 *
 * 
 * \param flagResource The flag resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addFlagAsync(char * accessToken,
	FlagResource flagResource, 
	void(* handler)(FlagResource, Error, void* )
	, void* userData);


/*! \brief Delete a flag. *Synchronous*
 *
 * 
 * \param contextName The name of the context
 * \param contextId The id of the context
 * \param userId The id of the user
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteFlagSync(char * accessToken,
	std::string contextName, std::string contextId, int userId, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a flag. *Asynchronous*
 *
 * 
 * \param contextName The name of the context
 * \param contextId The id of the context
 * \param userId The id of the user
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteFlagAsync(char * accessToken,
	std::string contextName, std::string contextId, int userId, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Returns a page of flags. *Synchronous*
 *
 * 
 * \param filterContext Filter by flag context
 * \param filterContextId Filter by flag context ID
 * \param filterUserId Filter by user ID
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getFlagsSync(char * accessToken,
	std::string filterContext, std::string filterContextId, int filterUserId, int size, int page, 
	void(* handler)(PageResource«FlagResource», Error, void* )
	, void* userData);

/*! \brief Returns a page of flags. *Asynchronous*
 *
 * 
 * \param filterContext Filter by flag context
 * \param filterContextId Filter by flag context ID
 * \param filterUserId Filter by user ID
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getFlagsAsync(char * accessToken,
	std::string filterContext, std::string filterContextId, int filterUserId, int size, int page, 
	void(* handler)(PageResource«FlagResource», Error, void* )
	, void* userData);


/*! \brief Get a flag report. *Synchronous*
 *
 * 
 * \param id The flag report id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getModerationReportSync(char * accessToken,
	long long id, 
	void(* handler)(FlagReportResource, Error, void* )
	, void* userData);

/*! \brief Get a flag report. *Asynchronous*
 *
 * 
 * \param id The flag report id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getModerationReportAsync(char * accessToken,
	long long id, 
	void(* handler)(FlagReportResource, Error, void* )
	, void* userData);


/*! \brief Returns a page of flag reports. *Synchronous*
 *
 * Context can be either a free-form string or a pre-defined context name
 * \param excludeResolved Ignore resolved context
 * \param filterContext Filter by moderation context
 * \param filterContextId Filter by moderation context ID
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getModerationReportsSync(char * accessToken,
	bool excludeResolved, std::string filterContext, std::string filterContextId, int size, int page, 
	void(* handler)(PageResource«FlagReportResource», Error, void* )
	, void* userData);

/*! \brief Returns a page of flag reports. *Asynchronous*
 *
 * Context can be either a free-form string or a pre-defined context name
 * \param excludeResolved Ignore resolved context
 * \param filterContext Filter by moderation context
 * \param filterContextId Filter by moderation context ID
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getModerationReportsAsync(char * accessToken,
	bool excludeResolved, std::string filterContext, std::string filterContextId, int size, int page, 
	void(* handler)(PageResource«FlagReportResource», Error, void* )
	, void* userData);


/*! \brief Update a flag report. *Synchronous*
 *
 * Lets you set the resolution of a report. Resolution types is {banned,ignore} in case of 'banned' you will need to pass the reason.
 * \param id The flag report id *Required*
 * \param flagReportResource The new flag report
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateModerationReportSync(char * accessToken,
	long long id, FlagReportResource flagReportResource, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Update a flag report. *Asynchronous*
 *
 * Lets you set the resolution of a report. Resolution types is {banned,ignore} in case of 'banned' you will need to pass the reason.
 * \param id The flag report id *Required*
 * \param flagReportResource The new flag report
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateModerationReportAsync(char * accessToken,
	long long id, FlagReportResource flagReportResource, 
	
	void(* handler)(Error, void* ) , void* userData);



	static std::string getBasePath()
	{
		return "https://devsandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* MediaModerationManager_H_ */
