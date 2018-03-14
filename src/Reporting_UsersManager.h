#ifndef _Reporting_UsersManager_H_
#define _Reporting_UsersManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "PageResource«AggregateCountResource».h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Reporting_Users Reporting_Users
 * \ingroup Operations
 *  @{
 */
class Reporting_UsersManager {
public:
	Reporting_UsersManager();
	virtual ~Reporting_UsersManager();

/*! \brief Get user registration info. *Synchronous*
 *
 * Get user registration counts grouped by time range. <br><br><b>Permissions Needed:</b> REPORTING_USER_ADMIN
 * \param granularity The time duration to aggregate by
 * \param startDate The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time
 * \param endDate The end of the time range to aggregate, unix timestamp in seconds. Default is end of time
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserRegistrationsSync(char * accessToken,
	std::string granularity, long long startDate, long long endDate, int size, int page, 
	void(* handler)(PageResource«AggregateCountResource», Error, void* )
	, void* userData);

/*! \brief Get user registration info. *Asynchronous*
 *
 * Get user registration counts grouped by time range. <br><br><b>Permissions Needed:</b> REPORTING_USER_ADMIN
 * \param granularity The time duration to aggregate by
 * \param startDate The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time
 * \param endDate The end of the time range to aggregate, unix timestamp in seconds. Default is end of time
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserRegistrationsAsync(char * accessToken,
	std::string granularity, long long startDate, long long endDate, int size, int page, 
	void(* handler)(PageResource«AggregateCountResource», Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://jsapi-integration.us-east-1.elasticbeanstalk.com";
	}
};
/** @}*/

}
}
#endif /* Reporting_UsersManager_H_ */
