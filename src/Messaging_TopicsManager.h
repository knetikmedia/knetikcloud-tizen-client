#ifndef _Messaging_TopicsManager_H_
#define _Messaging_TopicsManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "PageResource«TopicResource».h"
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
/** \addtogroup Messaging_Topics Messaging_Topics
 * \ingroup Operations
 *  @{
 */
class Messaging_TopicsManager {
public:
	Messaging_TopicsManager();
	virtual ~Messaging_TopicsManager();

/*! \brief Enable or disable messages for a user. *Synchronous*
 *
 * Useful for opt-out options on a single topic. Consider multiple topics for multiple opt-out options. <br><br><b>Permissions Needed:</b> TOPICS_ADMIN or self
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
 * Useful for opt-out options on a single topic. Consider multiple topics for multiple opt-out options. <br><br><b>Permissions Needed:</b> TOPICS_ADMIN or self
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
 * <b>Permissions Needed:</b> TOPICS_ADMIN or self
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
 * <b>Permissions Needed:</b> TOPICS_ADMIN or self
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


/*! \brief Get all messaging topics for a given user. *Synchronous*
 *
 * <b>Permissions Needed:</b> TOPICS_ADMIN or self
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
 * <b>Permissions Needed:</b> TOPICS_ADMIN or self
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
		return "https://jsapi-integration.us-east-1.elasticbeanstalk.com";
	}
};
/** @}*/

}
}
#endif /* Messaging_TopicsManager_H_ */
