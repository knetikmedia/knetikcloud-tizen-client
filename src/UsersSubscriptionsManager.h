#ifndef _UsersSubscriptionsManager_H_
#define _UsersSubscriptionsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "IntWrapper.h"
#include "InventorySubscriptionResource.h"
#include "InvoiceResource.h"
#include "ReactivateSubscriptionRequest.h"
#include "Result.h"
#include "StringWrapper.h"
#include "SubscriptionPriceOverrideRequest.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup UsersSubscriptions UsersSubscriptions
 * \ingroup Operations
 *  @{
 */
class UsersSubscriptionsManager {
public:
	UsersSubscriptionsManager();
	virtual ~UsersSubscriptionsManager();

/*! \brief Get details about a user's subscription. *Synchronous*
 *
 * 
 * \param userId The id of the user *Required*
 * \param inventoryId The id of the user's inventory *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserSubscriptionDetailsSync(char * accessToken,
	int userId, int inventoryId, 
	void(* handler)(InventorySubscriptionResource, Error, void* )
	, void* userData);

/*! \brief Get details about a user's subscription. *Asynchronous*
 *
 * 
 * \param userId The id of the user *Required*
 * \param inventoryId The id of the user's inventory *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserSubscriptionDetailsAsync(char * accessToken,
	int userId, int inventoryId, 
	void(* handler)(InventorySubscriptionResource, Error, void* )
	, void* userData);


/*! \brief Get details about a user's subscriptions. *Synchronous*
 *
 * 
 * \param userId The id of the user *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUsersSubscriptionDetailsSync(char * accessToken,
	int userId, 
	void(* handler)(std::list<InventorySubscriptionResource>, Error, void* )
	, void* userData);

/*! \brief Get details about a user's subscriptions. *Asynchronous*
 *
 * 
 * \param userId The id of the user *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUsersSubscriptionDetailsAsync(char * accessToken,
	int userId, 
	void(* handler)(std::list<InventorySubscriptionResource>, Error, void* )
	, void* userData);


/*! \brief Reactivate a subscription and charge fee. *Synchronous*
 *
 * 
 * \param userId The id of the user *Required*
 * \param inventoryId The id of the user's inventory *Required*
 * \param reactivateSubscriptionRequest The reactivate subscription request object inventory
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool reactivateUserSubscriptionSync(char * accessToken,
	int userId, int inventoryId, ReactivateSubscriptionRequest reactivateSubscriptionRequest, 
	void(* handler)(InvoiceResource, Error, void* )
	, void* userData);

/*! \brief Reactivate a subscription and charge fee. *Asynchronous*
 *
 * 
 * \param userId The id of the user *Required*
 * \param inventoryId The id of the user's inventory *Required*
 * \param reactivateSubscriptionRequest The reactivate subscription request object inventory
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool reactivateUserSubscriptionAsync(char * accessToken,
	int userId, int inventoryId, ReactivateSubscriptionRequest reactivateSubscriptionRequest, 
	void(* handler)(InvoiceResource, Error, void* )
	, void* userData);


/*! \brief Set a new date to bill a subscription on. *Synchronous*
 *
 * 
 * \param userId The id of the user *Required*
 * \param inventoryId The id of the user's inventory *Required*
 * \param billDate The new bill date. Unix timestamp in seconds *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setSubscriptionBillDateSync(char * accessToken,
	int userId, int inventoryId, long long billDate, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Set a new date to bill a subscription on. *Asynchronous*
 *
 * 
 * \param userId The id of the user *Required*
 * \param inventoryId The id of the user's inventory *Required*
 * \param billDate The new bill date. Unix timestamp in seconds *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setSubscriptionBillDateAsync(char * accessToken,
	int userId, int inventoryId, long long billDate, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Set the payment method to use for a subscription. *Synchronous*
 *
 * May send null to use floating default
 * \param userId The id of the user *Required*
 * \param inventoryId The id of the user's inventory *Required*
 * \param paymentMethodId The id of the payment method
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setSubscriptionPaymentMethodSync(char * accessToken,
	int userId, int inventoryId, IntWrapper paymentMethodId, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Set the payment method to use for a subscription. *Asynchronous*
 *
 * May send null to use floating default
 * \param userId The id of the user *Required*
 * \param inventoryId The id of the user's inventory *Required*
 * \param paymentMethodId The id of the payment method
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setSubscriptionPaymentMethodAsync(char * accessToken,
	int userId, int inventoryId, IntWrapper paymentMethodId, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Set the status of a subscription. *Synchronous*
 *
 * Note that the new status may be blocked if the system is not configured to allow the current status to be changed to the new, to enforce proper flow. The default options for statuses are shown below but may be altered for special use cases
 * \param userId The id of the user *Required*
 * \param inventoryId The id of the user's inventory *Required*
 * \param status The new status for the subscription. Actual options may differ from the indicated set if the invoice status type data has been altered.  Allowable values: ('current', 'canceled', 'stopped', 'payment_failed', 'suspended') *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setSubscriptionStatusSync(char * accessToken,
	int userId, int inventoryId, StringWrapper status, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Set the status of a subscription. *Asynchronous*
 *
 * Note that the new status may be blocked if the system is not configured to allow the current status to be changed to the new, to enforce proper flow. The default options for statuses are shown below but may be altered for special use cases
 * \param userId The id of the user *Required*
 * \param inventoryId The id of the user's inventory *Required*
 * \param status The new status for the subscription. Actual options may differ from the indicated set if the invoice status type data has been altered.  Allowable values: ('current', 'canceled', 'stopped', 'payment_failed', 'suspended') *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setSubscriptionStatusAsync(char * accessToken,
	int userId, int inventoryId, StringWrapper status, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Set a new subscription plan for a user. *Synchronous*
 *
 * 
 * \param userId The id of the user *Required*
 * \param inventoryId The id of the user's inventory *Required*
 * \param planId The id of the new plan. Must be from the same subscription
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setUserSubscriptionPlanSync(char * accessToken,
	int userId, int inventoryId, StringWrapper planId, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Set a new subscription plan for a user. *Asynchronous*
 *
 * 
 * \param userId The id of the user *Required*
 * \param inventoryId The id of the user's inventory *Required*
 * \param planId The id of the new plan. Must be from the same subscription
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setUserSubscriptionPlanAsync(char * accessToken,
	int userId, int inventoryId, StringWrapper planId, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Set a new subscription price for a user. *Synchronous*
 *
 * This new price will be what the user is charged at the begining of each new period. This override is specific to the current subscription and will not carry over if they end and later re-subscribe. It will persist if the plan is changed using the setUserSubscriptionPlan endpoint.
 * \param userId The id of the user *Required*
 * \param inventoryId The id of the user's inventory *Required*
 * \param the override details override
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setUserSubscriptionPriceSync(char * accessToken,
	int userId, int inventoryId, SubscriptionPriceOverrideRequest the override details, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Set a new subscription price for a user. *Asynchronous*
 *
 * This new price will be what the user is charged at the begining of each new period. This override is specific to the current subscription and will not carry over if they end and later re-subscribe. It will persist if the plan is changed using the setUserSubscriptionPlan endpoint.
 * \param userId The id of the user *Required*
 * \param inventoryId The id of the user's inventory *Required*
 * \param the override details override
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setUserSubscriptionPriceAsync(char * accessToken,
	int userId, int inventoryId, SubscriptionPriceOverrideRequest the override details, 
	
	void(* handler)(Error, void* ) , void* userData);



	static std::string getBasePath()
	{
		return "https://devsandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* UsersSubscriptionsManager_H_ */
