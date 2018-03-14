#ifndef _Reporting_SubscriptionsManager_H_
#define _Reporting_SubscriptionsManager_H_

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
/** \addtogroup Reporting_Subscriptions Reporting_Subscriptions
 * \ingroup Operations
 *  @{
 */
class Reporting_SubscriptionsManager {
public:
	Reporting_SubscriptionsManager();
	virtual ~Reporting_SubscriptionsManager();

/*! \brief Get a list of available subscription reports in most recent first order. *Synchronous*
 *
 * <b>Permissions Needed:</b> SUBSCRIPTIONS_ADMIN
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
 * <b>Permissions Needed:</b> SUBSCRIPTIONS_ADMIN
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
		return "https://jsapi-integration.us-east-1.elasticbeanstalk.com";
	}
};
/** @}*/

}
}
#endif /* Reporting_SubscriptionsManager_H_ */
