#ifndef _ReportingRevenueManager_H_
#define _ReportingRevenueManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "PageResource«RevenueCountryReportResource».h"
#include "PageResource«RevenueProductReportResource».h"
#include "Result.h"
#include "RevenueReportResource.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup ReportingRevenue ReportingRevenue
 * \ingroup Operations
 *  @{
 */
class ReportingRevenueManager {
public:
	ReportingRevenueManager();
	virtual ~ReportingRevenueManager();

/*! \brief Get item revenue info. *Synchronous*
 *
 * Get basic info about revenue from sales of items and bundles (not subscriptions, shipping, etc), summed up within a time range. <br><br><b>Permissions Needed:</b> REPORTING_REVENUE_ADMIN
 * \param currencyCode The code for a currency to get sales data for *Required*
 * \param startDate The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time
 * \param endDate The end of the time range to aggregate, unix timestamp in seconds. Default is end of time
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getItemRevenueSync(char * accessToken,
	std::string currencyCode, long long startDate, long long endDate, 
	void(* handler)(RevenueReportResource, Error, void* )
	, void* userData);

/*! \brief Get item revenue info. *Asynchronous*
 *
 * Get basic info about revenue from sales of items and bundles (not subscriptions, shipping, etc), summed up within a time range. <br><br><b>Permissions Needed:</b> REPORTING_REVENUE_ADMIN
 * \param currencyCode The code for a currency to get sales data for *Required*
 * \param startDate The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time
 * \param endDate The end of the time range to aggregate, unix timestamp in seconds. Default is end of time
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getItemRevenueAsync(char * accessToken,
	std::string currencyCode, long long startDate, long long endDate, 
	void(* handler)(RevenueReportResource, Error, void* )
	, void* userData);


/*! \brief Get refund revenue info. *Synchronous*
 *
 * Get basic info about revenue loss from refunds (for all item types), summed up within a time range. <br><br><b>Permissions Needed:</b> REPORTING_REVENUE_ADMIN
 * \param currencyCode The code for a currency to get refund data for *Required*
 * \param startDate The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time
 * \param endDate The end of the time range to aggregate, unix timestamp in seconds. Default is end of time
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getRefundRevenueSync(char * accessToken,
	std::string currencyCode, long long startDate, long long endDate, 
	void(* handler)(RevenueReportResource, Error, void* )
	, void* userData);

/*! \brief Get refund revenue info. *Asynchronous*
 *
 * Get basic info about revenue loss from refunds (for all item types), summed up within a time range. <br><br><b>Permissions Needed:</b> REPORTING_REVENUE_ADMIN
 * \param currencyCode The code for a currency to get refund data for *Required*
 * \param startDate The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time
 * \param endDate The end of the time range to aggregate, unix timestamp in seconds. Default is end of time
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getRefundRevenueAsync(char * accessToken,
	std::string currencyCode, long long startDate, long long endDate, 
	void(* handler)(RevenueReportResource, Error, void* )
	, void* userData);


/*! \brief Get revenue info by country. *Synchronous*
 *
 * Get basic info about revenue from sales of all types, summed up within a time range and split out by country. Sorted for largest revenue at the top. <br><br><b>Permissions Needed:</b> REPORTING_REVENUE_ADMIN
 * \param currencyCode The code for a currency to get sales data for *Required*
 * \param startDate The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time
 * \param endDate The end of the time range to aggregate, unix timestamp in seconds. Default is end of time
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getRevenueByCountrySync(char * accessToken,
	std::string currencyCode, long long startDate, long long endDate, int size, int page, 
	void(* handler)(PageResource«RevenueCountryReportResource», Error, void* )
	, void* userData);

/*! \brief Get revenue info by country. *Asynchronous*
 *
 * Get basic info about revenue from sales of all types, summed up within a time range and split out by country. Sorted for largest revenue at the top. <br><br><b>Permissions Needed:</b> REPORTING_REVENUE_ADMIN
 * \param currencyCode The code for a currency to get sales data for *Required*
 * \param startDate The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time
 * \param endDate The end of the time range to aggregate, unix timestamp in seconds. Default is end of time
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getRevenueByCountryAsync(char * accessToken,
	std::string currencyCode, long long startDate, long long endDate, int size, int page, 
	void(* handler)(PageResource«RevenueCountryReportResource», Error, void* )
	, void* userData);


/*! \brief Get revenue info by item. *Synchronous*
 *
 * Get basic info about revenue from sales of all types, summed up within a time range and split out by specific item. Sorted for largest revenue at the top. <br><br><b>Permissions Needed:</b> REPORTING_REVENUE_ADMIN
 * \param currencyCode The code for a currency to get sales data for *Required*
 * \param startDate The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time
 * \param endDate The end of the time range to aggregate, unix timestamp in seconds. Default is end of time
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getRevenueByItemSync(char * accessToken,
	std::string currencyCode, long long startDate, long long endDate, int size, int page, 
	void(* handler)(PageResource«RevenueProductReportResource», Error, void* )
	, void* userData);

/*! \brief Get revenue info by item. *Asynchronous*
 *
 * Get basic info about revenue from sales of all types, summed up within a time range and split out by specific item. Sorted for largest revenue at the top. <br><br><b>Permissions Needed:</b> REPORTING_REVENUE_ADMIN
 * \param currencyCode The code for a currency to get sales data for *Required*
 * \param startDate The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time
 * \param endDate The end of the time range to aggregate, unix timestamp in seconds. Default is end of time
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getRevenueByItemAsync(char * accessToken,
	std::string currencyCode, long long startDate, long long endDate, int size, int page, 
	void(* handler)(PageResource«RevenueProductReportResource», Error, void* )
	, void* userData);


/*! \brief Get subscription revenue info. *Synchronous*
 *
 * Get basic info about revenue from sales of new subscriptions as well as recurring payemnts, summed up within a time range. <br><br><b>Permissions Needed:</b> REPORTING_REVENUE_ADMIN
 * \param currencyCode The code for a currency to get sales data for *Required*
 * \param startDate The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time
 * \param endDate The end of the time range to aggregate, unix timestamp in seconds. Default is end of time
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getSubscriptionRevenueSync(char * accessToken,
	std::string currencyCode, long long startDate, long long endDate, 
	void(* handler)(RevenueReportResource, Error, void* )
	, void* userData);

/*! \brief Get subscription revenue info. *Asynchronous*
 *
 * Get basic info about revenue from sales of new subscriptions as well as recurring payemnts, summed up within a time range. <br><br><b>Permissions Needed:</b> REPORTING_REVENUE_ADMIN
 * \param currencyCode The code for a currency to get sales data for *Required*
 * \param startDate The start of the time range to aggregate, unix timestamp in seconds. Default is beginning of time
 * \param endDate The end of the time range to aggregate, unix timestamp in seconds. Default is end of time
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getSubscriptionRevenueAsync(char * accessToken,
	std::string currencyCode, long long startDate, long long endDate, 
	void(* handler)(RevenueReportResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* ReportingRevenueManager_H_ */
