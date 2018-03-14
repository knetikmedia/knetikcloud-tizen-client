#ifndef _NotificationsManager_H_
#define _NotificationsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "NotificationResource.h"
#include "NotificationTypeResource.h"
#include "NotificationUserTypeResource.h"
#include "PageResource«NotificationTypeResource».h"
#include "PageResource«NotificationUserTypeResource».h"
#include "PageResource«UserNotificationResource».h"
#include "Result.h"
#include "UserNotificationStatusWrapper.h"
#include "ValueWrapper«boolean».h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Notifications Notifications
 * \ingroup Operations
 *  @{
 */
class NotificationsManager {
public:
	NotificationsManager();
	virtual ~NotificationsManager();

/*! \brief Create a notification type. *Synchronous*
 *
 * <b>Permissions Needed:</b> NOTIFICATIONS_ADMIN
 * \param notificationType notificationType
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createNotificationTypeSync(char * accessToken,
	NotificationTypeResource notificationType, 
	void(* handler)(NotificationTypeResource, Error, void* )
	, void* userData);

/*! \brief Create a notification type. *Asynchronous*
 *
 * <b>Permissions Needed:</b> NOTIFICATIONS_ADMIN
 * \param notificationType notificationType
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createNotificationTypeAsync(char * accessToken,
	NotificationTypeResource notificationType, 
	void(* handler)(NotificationTypeResource, Error, void* )
	, void* userData);


/*! \brief Delete a notification type. *Synchronous*
 *
 * <b>Permissions Needed:</b> NOTIFICATIONS_ADMIN
 * \param id id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteNotificationTypeSync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a notification type. *Asynchronous*
 *
 * <b>Permissions Needed:</b> NOTIFICATIONS_ADMIN
 * \param id id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteNotificationTypeAsync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get a single notification type. *Synchronous*
 *
 * <b>Permissions Needed:</b> NOTIFICATIONS_ADMIN
 * \param id id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNotificationTypeSync(char * accessToken,
	std::string id, 
	void(* handler)(NotificationTypeResource, Error, void* )
	, void* userData);

/*! \brief Get a single notification type. *Asynchronous*
 *
 * <b>Permissions Needed:</b> NOTIFICATIONS_ADMIN
 * \param id id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNotificationTypeAsync(char * accessToken,
	std::string id, 
	void(* handler)(NotificationTypeResource, Error, void* )
	, void* userData);


/*! \brief List and search notification types. *Synchronous*
 *
 * Get a list of notification type with optional filtering. <br><br><b>Permissions Needed:</b> NOTIFICATIONS_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNotificationTypesSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«NotificationTypeResource», Error, void* )
	, void* userData);

/*! \brief List and search notification types. *Asynchronous*
 *
 * Get a list of notification type with optional filtering. <br><br><b>Permissions Needed:</b> NOTIFICATIONS_ADMIN
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getNotificationTypesAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«NotificationTypeResource», Error, void* )
	, void* userData);


/*! \brief View a user's notification settings for a type. *Synchronous*
 *
 * <b>Permissions Needed:</b> NOTIFICATIONS_ADMIN or self
 * \param typeId The id of the topic *Required*
 * \param userId The id of the subscriber or 'me' *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserNotificationInfoSync(char * accessToken,
	std::string typeId, std::string userId, 
	void(* handler)(NotificationUserTypeResource, Error, void* )
	, void* userData);

/*! \brief View a user's notification settings for a type. *Asynchronous*
 *
 * <b>Permissions Needed:</b> NOTIFICATIONS_ADMIN or self
 * \param typeId The id of the topic *Required*
 * \param userId The id of the subscriber or 'me' *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserNotificationInfoAsync(char * accessToken,
	std::string typeId, std::string userId, 
	void(* handler)(NotificationUserTypeResource, Error, void* )
	, void* userData);


/*! \brief View a user's notification settings. *Synchronous*
 *
 * <b>Permissions Needed:</b> NOTIFICATIONS_ADMIN or self
 * \param userId The id of the subscriber or 'me' *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserNotificationInfoListSync(char * accessToken,
	std::string userId, int size, int page, std::string order, 
	void(* handler)(PageResource«NotificationUserTypeResource», Error, void* )
	, void* userData);

/*! \brief View a user's notification settings. *Asynchronous*
 *
 * <b>Permissions Needed:</b> NOTIFICATIONS_ADMIN or self
 * \param userId The id of the subscriber or 'me' *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserNotificationInfoListAsync(char * accessToken,
	std::string userId, int size, int page, std::string order, 
	void(* handler)(PageResource«NotificationUserTypeResource», Error, void* )
	, void* userData);


/*! \brief Get notifications. *Synchronous*
 *
 * <b>Permissions Needed:</b> NOTIFICATIONS_ADMIN or self
 * \param id The id of the user or 'me' *Required*
 * \param filterStatus filter for notifications with a given status
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserNotificationsSync(char * accessToken,
	std::string id, std::string filterStatus, int size, int page, std::string order, 
	void(* handler)(PageResource«UserNotificationResource», Error, void* )
	, void* userData);

/*! \brief Get notifications. *Asynchronous*
 *
 * <b>Permissions Needed:</b> NOTIFICATIONS_ADMIN or self
 * \param id The id of the user or 'me' *Required*
 * \param filterStatus filter for notifications with a given status
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserNotificationsAsync(char * accessToken,
	std::string id, std::string filterStatus, int size, int page, std::string order, 
	void(* handler)(PageResource«UserNotificationResource», Error, void* )
	, void* userData);


/*! \brief Send a notification. *Synchronous*
 *
 * <b>Permissions Needed:</b> NOTIFICATIONS_ADMIN
 * \param notification notification
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendNotificationSync(char * accessToken,
	NotificationResource notification, 
	void(* handler)(NotificationResource, Error, void* )
	, void* userData);

/*! \brief Send a notification. *Asynchronous*
 *
 * <b>Permissions Needed:</b> NOTIFICATIONS_ADMIN
 * \param notification notification
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendNotificationAsync(char * accessToken,
	NotificationResource notification, 
	void(* handler)(NotificationResource, Error, void* )
	, void* userData);


/*! \brief Set notification status. *Synchronous*
 *
 * <b>Permissions Needed:</b> NOTIFICATIONS_ADMIN or self
 * \param userId The id of the user or 'me' *Required*
 * \param notificationId The id of the notification *Required*
 * \param notification status
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setUserNotificationStatusSync(char * accessToken,
	std::string userId, std::string notificationId, UserNotificationStatusWrapper notification, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Set notification status. *Asynchronous*
 *
 * <b>Permissions Needed:</b> NOTIFICATIONS_ADMIN or self
 * \param userId The id of the user or 'me' *Required*
 * \param notificationId The id of the notification *Required*
 * \param notification status
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool setUserNotificationStatusAsync(char * accessToken,
	std::string userId, std::string notificationId, UserNotificationStatusWrapper notification, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Enable or disable direct notifications for a user. *Synchronous*
 *
 * Allows enabling or disabling messages for a given notification type when sent direct to the user. Notifications can still be retrieved by endpoint. For notifications broadcased to a topic, see the topic service to disable messages for the user there. <br><br><b>Permissions Needed:</b> NOTIFICATIONS_ADMIN or self
 * \param typeId The id of the topic *Required*
 * \param userId The id of the subscriber or 'me' *Required*
 * \param silenced silenced *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool silenceDirectNotificationsSync(char * accessToken,
	std::string typeId, std::string userId, ValueWrapper«boolean» silenced, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Enable or disable direct notifications for a user. *Asynchronous*
 *
 * Allows enabling or disabling messages for a given notification type when sent direct to the user. Notifications can still be retrieved by endpoint. For notifications broadcased to a topic, see the topic service to disable messages for the user there. <br><br><b>Permissions Needed:</b> NOTIFICATIONS_ADMIN or self
 * \param typeId The id of the topic *Required*
 * \param userId The id of the subscriber or 'me' *Required*
 * \param silenced silenced *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool silenceDirectNotificationsAsync(char * accessToken,
	std::string typeId, std::string userId, ValueWrapper«boolean» silenced, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Update a notificationType. *Synchronous*
 *
 * <b>Permissions Needed:</b> NOTIFICATIONS_ADMIN
 * \param id id *Required*
 * \param notificationType notificationType
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateNotificationTypeSync(char * accessToken,
	std::string id, NotificationTypeResource notificationType, 
	void(* handler)(NotificationTypeResource, Error, void* )
	, void* userData);

/*! \brief Update a notificationType. *Asynchronous*
 *
 * <b>Permissions Needed:</b> NOTIFICATIONS_ADMIN
 * \param id id *Required*
 * \param notificationType notificationType
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateNotificationTypeAsync(char * accessToken,
	std::string id, NotificationTypeResource notificationType, 
	void(* handler)(NotificationTypeResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://jsapi-integration.us-east-1.elasticbeanstalk.com";
	}
};
/** @}*/

}
}
#endif /* NotificationsManager_H_ */
