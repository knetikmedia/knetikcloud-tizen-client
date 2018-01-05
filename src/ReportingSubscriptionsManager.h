#ifndef _ReportingSubscriptionsManager_H_
#define _ReportingSubscriptionsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "PageResource«BillingReport».h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup ReportingSubscriptions ReportingSubscriptions
 * \ingroup Operations
 *  @{
 */
class ReportingSubscriptionsManager {
public:
	ReportingSubscriptionsManager();
	virtual ~ReportingSubscriptionsManager();

/*! \brief Get a list of available subscription reports in most recent first order. *Synchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getSubscriptionReportsSync(char * accessToken,
	int size, int page, 
	void(* handler)(PageResource«BillingReport», Error, void* )
	, void* userData);

/*! \brief Get a list of available subscription reports in most recent first order. *Asynchronous*
 *
 * 
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getSubscriptionReportsAsync(char * accessToken,
	int size, int page, 
	void(* handler)(PageResource«BillingReport», Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://devsandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* ReportingSubscriptionsManager_H_ */
