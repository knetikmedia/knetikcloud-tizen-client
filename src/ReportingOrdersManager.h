#ifndef _ReportingOrdersManager_H_
#define _ReportingOrdersManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "PageResource«AggregateInvoiceReportResource».h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup ReportingOrders ReportingOrders
 * \ingroup Operations
 *  @{
 */
class ReportingOrdersManager {
public:
	ReportingOrdersManager();
	virtual ~ReportingOrdersManager();

/*! \brief Retrieve invoice counts aggregated by time ranges. *Synchronous*
 *
 * 
 * \param currencyCode The code for a currency to get sales data for *Required*
 * \param granularity The time duration to aggregate by
 * \param filterPaymentStatus A payment status to filter results by, can be a comma separated list
 * \param filterFulfillmentStatus An invoice fulfillment status to filter results by, can be a comma separated list
 * \param startDate The start of the time range to return, unix timestamp in seconds. Default is beginning of time
 * \param endDate The end of the time range to return, unix timestamp in seconds. Default is end of time
 * \param size The number of objects returned per page
 * \param page The number of the page returned
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getInvoiceReportsSync(char * accessToken,
	std::string currencyCode, std::string granularity, std::string filterPaymentStatus, std::string filterFulfillmentStatus, long long startDate, long long endDate, int size, int page, 
	void(* handler)(PageResource«AggregateInvoiceReportResource», Error, void* )
	, void* userData);

/*! \brief Retrieve invoice counts aggregated by time ranges. *Asynchronous*
 *
 * 
 * \param currencyCode The code for a currency to get sales data for *Required*
 * \param granularity The time duration to aggregate by
 * \param filterPaymentStatus A payment status to filter results by, can be a comma separated list
 * \param filterFulfillmentStatus An invoice fulfillment status to filter results by, can be a comma separated list
 * \param startDate The start of the time range to return, unix timestamp in seconds. Default is beginning of time
 * \param endDate The end of the time range to return, unix timestamp in seconds. Default is end of time
 * \param size The number of objects returned per page
 * \param page The number of the page returned
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getInvoiceReportsAsync(char * accessToken,
	std::string currencyCode, std::string granularity, std::string filterPaymentStatus, std::string filterFulfillmentStatus, long long startDate, long long endDate, int size, int page, 
	void(* handler)(PageResource«AggregateInvoiceReportResource», Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* ReportingOrdersManager_H_ */
