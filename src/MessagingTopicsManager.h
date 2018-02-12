#ifndef _MessagingTopicsManager_H_
#define _MessagingTopicsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "PageResource«TopicResource».h"
#include "PageResource«TopicSubscriberResource».h"
#include "Result.h"
#include "TopicSubscriberResource.h"
#include "ValueWrapper«boolean».h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup MessagingTopics MessagingTopics
 * \ingroup Operations
 *  @{
 */
class MessagingTopicsManager {
public:
	MessagingTopicsManager();
	virtual ~MessagingTopicsManager();

/*! \brief Enable or disable messages for a user. *Synchronous*
 *
 * Useful for opt-out options on a single topic. Consider multiple topics for multiple opt-out options.
 * \param id The id of the topic *Required*
 * \param userId The id of the subscriber or 'me' *Required*
 * \param disabled disabled *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool disableTopicSubscriberSync(char * accessToken,
	std::string id, std::string userId, ValueWrapper«boolean» disabled, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Enable or disable messages for a user. *Asynchronous*
 *
 * Useful for opt-out options on a single topic. Consider multiple topics for multiple opt-out options.
 * \param id The id of the topic *Required*
 * \param userId The id of the subscriber or 'me' *Required*
 * \param disabled disabled *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool disableTopicSubscriberAsync(char * accessToken,
	std::string id, std::string userId, ValueWrapper«boolean» disabled, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get a subscriber to a topic. *Synchronous*
 *
 * <b>Permissions Needed:</b> TOPICS_ADMIN
 * \param id The id of the topic *Required*
 * \param userId The id of the subscriber or 'me' *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTopicSubscriberSync(char * accessToken,
	std::string id, std::string userId, 
	void(* handler)(TopicSubscriberResource, Error, void* )
	, void* userData);

/*! \brief Get a subscriber to a topic. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TOPICS_ADMIN
 * \param id The id of the topic *Required*
 * \param userId The id of the subscriber or 'me' *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTopicSubscriberAsync(char * accessToken,
	std::string id, std::string userId, 
	void(* handler)(TopicSubscriberResource, Error, void* )
	, void* userData);


/*! \brief Get all subscribers to a topic. *Synchronous*
 *
 * <b>Permissions Needed:</b> TOPICS_ADMIN
 * \param id The id of the topic *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTopicSubscribersSync(char * accessToken,
	std::string id, 
	void(* handler)(PageResource«TopicSubscriberResource», Error, void* )
	, void* userData);

/*! \brief Get all subscribers to a topic. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TOPICS_ADMIN
 * \param id The id of the topic *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTopicSubscribersAsync(char * accessToken,
	std::string id, 
	void(* handler)(PageResource«TopicSubscriberResource», Error, void* )
	, void* userData);


/*! \brief Get all messaging topics for a given user. *Synchronous*
 *
 * <b>Permissions Needed:</b> TOPICS_ADMIN
 * \param id The id of the user or 'me' *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserTopicsSync(char * accessToken,
	std::string id, 
	void(* handler)(PageResource«TopicResource», Error, void* )
	, void* userData);

/*! \brief Get all messaging topics for a given user. *Asynchronous*
 *
 * <b>Permissions Needed:</b> TOPICS_ADMIN
 * \param id The id of the user or 'me' *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getUserTopicsAsync(char * accessToken,
	std::string id, 
	void(* handler)(PageResource«TopicResource», Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* MessagingTopicsManager_H_ */
