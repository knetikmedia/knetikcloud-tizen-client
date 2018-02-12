#ifndef _ReportingUsageManager_H_
#define _ReportingUsageManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "PageResource«UsageInfo».h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup ReportingUsage ReportingUsage
 * \ingroup Operations
 *  @{
 */
class ReportingUsageManager {
public:
	ReportingUsageManager();
	virtual ~ReportingUsageManager();

/*! \brief Returns aggregated endpoint usage information by day. *Synchronous*
 *
 * <b>Permissions Needed:</b> USAGE_ADMIN
 * \param startDate The beginning of the range being requested, unix timestamp in seconds *Required*
 * \param endDate The ending of the range being requested, unix timestamp in seconds *Required*
 * \param combineEndpoints Whether to combine counts from different endpoint. Removes the url and method from the result object
 * \param method Filter for a certain endpoint method.  Must include url as well to work
 * \param url Filter for a certain endpoint.  Must include method as well to work
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUsageByDaySync(char * accessToken,
	long long startDate, long long endDate, bool combineEndpoints, std::string method, std::string url, int size, int page, 
	void(* handler)(PageResource«UsageInfo», Error, void* )
	, void* userData);

/*! \brief Returns aggregated endpoint usage information by day. *Asynchronous*
 *
 * <b>Permissions Needed:</b> USAGE_ADMIN
 * \param startDate The beginning of the range being requested, unix timestamp in seconds *Required*
 * \param endDate The ending of the range being requested, unix timestamp in seconds *Required*
 * \param combineEndpoints Whether to combine counts from different endpoint. Removes the url and method from the result object
 * \param method Filter for a certain endpoint method.  Must include url as well to work
 * \param url Filter for a certain endpoint.  Must include method as well to work
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUsageByDayAsync(char * accessToken,
	long long startDate, long long endDate, bool combineEndpoints, std::string method, std::string url, int size, int page, 
	void(* handler)(PageResource«UsageInfo», Error, void* )
	, void* userData);


/*! \brief Returns aggregated endpoint usage information by hour. *Synchronous*
 *
 * <b>Permissions Needed:</b> USAGE_ADMIN
 * \param startDate The beginning of the range being requested, unix timestamp in seconds *Required*
 * \param endDate The ending of the range being requested, unix timestamp in seconds *Required*
 * \param combineEndpoints Whether to combine counts from different endpoint. Removes the url and method from the result object
 * \param method Filter for a certain endpoint method.  Must include url as well to work
 * \param url Filter for a certain endpoint.  Must include method as well to work
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUsageByHourSync(char * accessToken,
	long long startDate, long long endDate, bool combineEndpoints, std::string method, std::string url, int size, int page, 
	void(* handler)(PageResource«UsageInfo», Error, void* )
	, void* userData);

/*! \brief Returns aggregated endpoint usage information by hour. *Asynchronous*
 *
 * <b>Permissions Needed:</b> USAGE_ADMIN
 * \param startDate The beginning of the range being requested, unix timestamp in seconds *Required*
 * \param endDate The ending of the range being requested, unix timestamp in seconds *Required*
 * \param combineEndpoints Whether to combine counts from different endpoint. Removes the url and method from the result object
 * \param method Filter for a certain endpoint method.  Must include url as well to work
 * \param url Filter for a certain endpoint.  Must include method as well to work
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUsageByHourAsync(char * accessToken,
	long long startDate, long long endDate, bool combineEndpoints, std::string method, std::string url, int size, int page, 
	void(* handler)(PageResource«UsageInfo», Error, void* )
	, void* userData);


/*! \brief Returns aggregated endpoint usage information by minute. *Synchronous*
 *
 * <b>Permissions Needed:</b> USAGE_ADMIN
 * \param startDate The beginning of the range being requested, unix timestamp in seconds *Required*
 * \param endDate The ending of the range being requested, unix timestamp in seconds *Required*
 * \param combineEndpoints Whether to combine counts from different endpoint. Removes the url and method from the result object
 * \param method Filter for a certain endpoint method.  Must include url as well to work
 * \param url Filter for a certain endpoint.  Must include method as well to work
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUsageByMinuteSync(char * accessToken,
	long long startDate, long long endDate, bool combineEndpoints, std::string method, std::string url, int size, int page, 
	void(* handler)(PageResource«UsageInfo», Error, void* )
	, void* userData);

/*! \brief Returns aggregated endpoint usage information by minute. *Asynchronous*
 *
 * <b>Permissions Needed:</b> USAGE_ADMIN
 * \param startDate The beginning of the range being requested, unix timestamp in seconds *Required*
 * \param endDate The ending of the range being requested, unix timestamp in seconds *Required*
 * \param combineEndpoints Whether to combine counts from different endpoint. Removes the url and method from the result object
 * \param method Filter for a certain endpoint method.  Must include url as well to work
 * \param url Filter for a certain endpoint.  Must include method as well to work
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUsageByMinuteAsync(char * accessToken,
	long long startDate, long long endDate, bool combineEndpoints, std::string method, std::string url, int size, int page, 
	void(* handler)(PageResource«UsageInfo», Error, void* )
	, void* userData);


/*! \brief Returns aggregated endpoint usage information by month. *Synchronous*
 *
 * <b>Permissions Needed:</b> USAGE_ADMIN
 * \param startDate The beginning of the range being requested, unix timestamp in seconds *Required*
 * \param endDate The ending of the range being requested, unix timestamp in seconds *Required*
 * \param combineEndpoints Whether to combine counts from different endpoint. Removes the url and method from the result object
 * \param method Filter for a certain endpoint method.  Must include url as well to work
 * \param url Filter for a certain endpoint.  Must include method as well to work
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUsageByMonthSync(char * accessToken,
	long long startDate, long long endDate, bool combineEndpoints, std::string method, std::string url, int size, int page, 
	void(* handler)(PageResource«UsageInfo», Error, void* )
	, void* userData);

/*! \brief Returns aggregated endpoint usage information by month. *Asynchronous*
 *
 * <b>Permissions Needed:</b> USAGE_ADMIN
 * \param startDate The beginning of the range being requested, unix timestamp in seconds *Required*
 * \param endDate The ending of the range being requested, unix timestamp in seconds *Required*
 * \param combineEndpoints Whether to combine counts from different endpoint. Removes the url and method from the result object
 * \param method Filter for a certain endpoint method.  Must include url as well to work
 * \param url Filter for a certain endpoint.  Must include method as well to work
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUsageByMonthAsync(char * accessToken,
	long long startDate, long long endDate, bool combineEndpoints, std::string method, std::string url, int size, int page, 
	void(* handler)(PageResource«UsageInfo», Error, void* )
	, void* userData);


/*! \brief Returns aggregated endpoint usage information by year. *Synchronous*
 *
 * <b>Permissions Needed:</b> USAGE_ADMIN
 * \param startDate The beginning of the range being requested, unix timestamp in seconds *Required*
 * \param endDate The ending of the range being requested, unix timestamp in seconds *Required*
 * \param combineEndpoints Whether to combine counts from different endpoints. Removes the url and method from the result object
 * \param method Filter for a certain endpoint method.  Must include url as well to work
 * \param url Filter for a certain endpoint.  Must include method as well to work
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUsageByYearSync(char * accessToken,
	long long startDate, long long endDate, bool combineEndpoints, std::string method, std::string url, int size, int page, 
	void(* handler)(PageResource«UsageInfo», Error, void* )
	, void* userData);

/*! \brief Returns aggregated endpoint usage information by year. *Asynchronous*
 *
 * <b>Permissions Needed:</b> USAGE_ADMIN
 * \param startDate The beginning of the range being requested, unix timestamp in seconds *Required*
 * \param endDate The ending of the range being requested, unix timestamp in seconds *Required*
 * \param combineEndpoints Whether to combine counts from different endpoints. Removes the url and method from the result object
 * \param method Filter for a certain endpoint method.  Must include url as well to work
 * \param url Filter for a certain endpoint.  Must include method as well to work
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUsageByYearAsync(char * accessToken,
	long long startDate, long long endDate, bool combineEndpoints, std::string method, std::string url, int size, int page, 
	void(* handler)(PageResource«UsageInfo», Error, void* )
	, void* userData);


/*! \brief Returns list of endpoints called (method and url). *Synchronous*
 *
 * <b>Permissions Needed:</b> USAGE_ADMIN
 * \param startDate The beginning of the range being requested, unix timestamp in seconds *Required*
 * \param endDate The ending of the range being requested, unix timestamp in seconds *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUsageEndpointsSync(char * accessToken,
	long long startDate, long long endDate, 
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData);

/*! \brief Returns list of endpoints called (method and url). *Asynchronous*
 *
 * <b>Permissions Needed:</b> USAGE_ADMIN
 * \param startDate The beginning of the range being requested, unix timestamp in seconds *Required*
 * \param endDate The ending of the range being requested, unix timestamp in seconds *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUsageEndpointsAsync(char * accessToken,
	long long startDate, long long endDate, 
	void(* handler)(std::list<std::string>, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* ReportingUsageManager_H_ */
