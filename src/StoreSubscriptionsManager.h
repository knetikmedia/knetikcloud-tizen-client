#ifndef _StoreSubscriptionsManager_H_
#define _StoreSubscriptionsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "PageResource«SubscriptionResource».h"
#include "PageResource«SubscriptionTemplateResource».h"
#include "Result.h"
#include "SubscriptionResource.h"
#include "SubscriptionTemplateResource.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup StoreSubscriptions StoreSubscriptions
 * \ingroup Operations
 *  @{
 */
class StoreSubscriptionsManager {
public:
	StoreSubscriptionsManager();
	virtual ~StoreSubscriptionsManager();

/*! \brief Creates a subscription item and associated plans. *Synchronous*
 *
 * <b>Permissions Needed:</b> SUBSCRIPTIONS_ADMIN
 * \param subscriptionResource The subscription to be created
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createSubscriptionSync(char * accessToken,
	SubscriptionResource subscriptionResource, 
	void(* handler)(SubscriptionResource, Error, void* )
	, void* userData);

/*! \brief Creates a subscription item and associated plans. *Asynchronous*
 *
 * <b>Permissions Needed:</b> SUBSCRIPTIONS_ADMIN
 * \param subscriptionResource The subscription to be created
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createSubscriptionAsync(char * accessToken,
	SubscriptionResource subscriptionResource, 
	void(* handler)(SubscriptionResource, Error, void* )
	, void* userData);


/*! \brief Create a subscription template. *Synchronous*
 *
 * Subscription Templates define a type of subscription and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param subscriptionTemplateResource The new subscription template
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createSubscriptionTemplateSync(char * accessToken,
	SubscriptionTemplateResource subscriptionTemplateResource, 
	void(* handler)(SubscriptionTemplateResource, Error, void* )
	, void* userData);

/*! \brief Create a subscription template. *Asynchronous*
 *
 * Subscription Templates define a type of subscription and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param subscriptionTemplateResource The new subscription template
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createSubscriptionTemplateAsync(char * accessToken,
	SubscriptionTemplateResource subscriptionTemplateResource, 
	void(* handler)(SubscriptionTemplateResource, Error, void* )
	, void* userData);


/*! \brief Delete a subscription plan. *Synchronous*
 *
 * Must not be locked or a migration target. <br><br><b>Permissions Needed:</b> SUBSCRIPTIONS_ADMIN
 * \param id The id of the subscription *Required*
 * \param planId The id of the plan *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteSubscriptionSync(char * accessToken,
	int id, std::string planId, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a subscription plan. *Asynchronous*
 *
 * Must not be locked or a migration target. <br><br><b>Permissions Needed:</b> SUBSCRIPTIONS_ADMIN
 * \param id The id of the subscription *Required*
 * \param planId The id of the plan *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteSubscriptionAsync(char * accessToken,
	int id, std::string planId, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete a subscription template. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param cascade force deleting the template if it's attached to other objects, cascade = detach
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteSubscriptionTemplateSync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a subscription template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param cascade force deleting the template if it's attached to other objects, cascade = detach
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteSubscriptionTemplateAsync(char * accessToken,
	std::string id, std::string cascade, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Retrieve a single subscription item and associated plans. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param id The id of the subscription *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getSubscriptionSync(char * accessToken,
	int id, 
	void(* handler)(SubscriptionResource, Error, void* )
	, void* userData);

/*! \brief Retrieve a single subscription item and associated plans. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param id The id of the subscription *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getSubscriptionAsync(char * accessToken,
	int id, 
	void(* handler)(SubscriptionResource, Error, void* )
	, void* userData);


/*! \brief Get a single subscription template. *Synchronous*
 *
 * Subscription Templates define a type of subscription and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getSubscriptionTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(SubscriptionTemplateResource, Error, void* )
	, void* userData);

/*! \brief Get a single subscription template. *Asynchronous*
 *
 * Subscription Templates define a type of subscription and the properties they have. <br><br><b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getSubscriptionTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(SubscriptionTemplateResource, Error, void* )
	, void* userData);


/*! \brief List and search subscription templates. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or SUBSCRIPTIONS_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getSubscriptionTemplatesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«SubscriptionTemplateResource», Error, void* )
	, void* userData);

/*! \brief List and search subscription templates. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN or SUBSCRIPTIONS_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getSubscriptionTemplatesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«SubscriptionTemplateResource», Error, void* )
	, void* userData);


/*! \brief List available subscription items and associated plans. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getSubscriptionsSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«SubscriptionResource», Error, void* )
	, void* userData);

/*! \brief List available subscription items and associated plans. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getSubscriptionsAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«SubscriptionResource», Error, void* )
	, void* userData);


/*! \brief Processes subscriptions and charge dues. *Synchronous*
 *
 * <b>Permissions Needed:</b> SUBSCRIPTIONS_ADMIN
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool processSubscriptionsSync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Processes subscriptions and charge dues. *Asynchronous*
 *
 * <b>Permissions Needed:</b> SUBSCRIPTIONS_ADMIN
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool processSubscriptionsAsync(char * accessToken,
	
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Updates a subscription item and associated plans. *Synchronous*
 *
 * Will not remove plans left out. <br><br><b>Permissions Needed:</b> SUBSCRIPTIONS_ADMIN
 * \param id The id of the subscription *Required*
 * \param subscriptionResource The subscription resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateSubscriptionSync(char * accessToken,
	int id, SubscriptionResource subscriptionResource, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Updates a subscription item and associated plans. *Asynchronous*
 *
 * Will not remove plans left out. <br><br><b>Permissions Needed:</b> SUBSCRIPTIONS_ADMIN
 * \param id The id of the subscription *Required*
 * \param subscriptionResource The subscription resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateSubscriptionAsync(char * accessToken,
	int id, SubscriptionResource subscriptionResource, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Update a subscription template. *Synchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param subscriptionTemplateResource The subscription template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateSubscriptionTemplateSync(char * accessToken,
	std::string id, SubscriptionTemplateResource subscriptionTemplateResource, 
	void(* handler)(SubscriptionTemplateResource, Error, void* )
	, void* userData);

/*! \brief Update a subscription template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TEMPLATE_ADMIN
 * \param id The id of the template *Required*
 * \param subscriptionTemplateResource The subscription template resource object
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateSubscriptionTemplateAsync(char * accessToken,
	std::string id, SubscriptionTemplateResource subscriptionTemplateResource, 
	void(* handler)(SubscriptionTemplateResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* StoreSubscriptionsManager_H_ */
