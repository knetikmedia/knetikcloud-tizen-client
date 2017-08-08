#ifndef _MediaModerationManager_H_
#define _MediaModerationManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "FlagReportResource.h"
#include "PageResource«FlagReportResource».h"
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
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getModerationReportsSync(char * accessToken,
	bool excludeResolved, std::string filterContext, int size, int page, 
	void(* handler)(PageResource«FlagReportResource», Error, void* )
	, void* userData);

/*! \brief Returns a page of flag reports. *Asynchronous*
 *
 * Context can be either a free-form string or a pre-defined context name
 * \param excludeResolved Ignore resolved context
 * \param filterContext Filter by moderation context
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getModerationReportsAsync(char * accessToken,
	bool excludeResolved, std::string filterContext, int size, int page, 
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
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* MediaModerationManager_H_ */
