#ifndef _MessagingManager_H_
#define _MessagingManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "MessageResource.h"
#include "MessageTemplateBulkRequest.h"
#include "MessageTemplateResource.h"
#include "PageResource«MessageTemplateResource».h"
#include "RawEmailResource.h"
#include "RawPushResource.h"
#include "RawSMSResource.h"
#include "Result.h"
#include "TemplateEmailResource.h"
#include "TemplatePushResource.h"
#include "TemplateSMSResource.h"
#include "WebsocketMessageResource.h"
#include <map>
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Messaging Messaging
 * \ingroup Operations
 *  @{
 */
class MessagingManager {
public:
	MessagingManager();
	virtual ~MessagingManager();

/*! \brief Compile a message template. *Synchronous*
 *
 * Processes a set of input data against the template and returnes the compiled result. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN
 * \param request request
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool compileMessageTemplateSync(char * accessToken,
	MessageTemplateBulkRequest request, 
	void(* handler)(std::map<std::string,std::string>, Error, void* )
	, void* userData);

/*! \brief Compile a message template. *Asynchronous*
 *
 * Processes a set of input data against the template and returnes the compiled result. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN
 * \param request request
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool compileMessageTemplateAsync(char * accessToken,
	MessageTemplateBulkRequest request, 
	void(* handler)(std::map<std::string,std::string>, Error, void* )
	, void* userData);


/*! \brief Create a message template. *Synchronous*
 *
 * <b>Permissions Needed:</b> MESSAGING_ADMIN
 * \param messageTemplate The new template email to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createMessageTemplateSync(char * accessToken,
	MessageTemplateResource messageTemplate, 
	void(* handler)(MessageTemplateResource, Error, void* )
	, void* userData);

/*! \brief Create a message template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> MESSAGING_ADMIN
 * \param messageTemplate The new template email to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool createMessageTemplateAsync(char * accessToken,
	MessageTemplateResource messageTemplate, 
	void(* handler)(MessageTemplateResource, Error, void* )
	, void* userData);


/*! \brief Delete an existing message template. *Synchronous*
 *
 * <b>Permissions Needed:</b> MESSAGING_ADMIN
 * \param id The message_template id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteMessageTemplateSync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete an existing message template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> MESSAGING_ADMIN
 * \param id The message_template id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteMessageTemplateAsync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get a single message template. *Synchronous*
 *
 * <b>Permissions Needed:</b> MESSAGING_ADMIN
 * \param id The message_template id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMessageTemplateSync(char * accessToken,
	std::string id, 
	void(* handler)(MessageTemplateResource, Error, void* )
	, void* userData);

/*! \brief Get a single message template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> MESSAGING_ADMIN
 * \param id The message_template id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMessageTemplateAsync(char * accessToken,
	std::string id, 
	void(* handler)(MessageTemplateResource, Error, void* )
	, void* userData);


/*! \brief List and search message templates. *Synchronous*
 *
 * Get a list of message templates with optional filtering. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN
 * \param filterTagset Filter for message templates with at least one of a specified set of tags (separated by comma)
 * \param filterTagIntersection Filter for message templates with all of a specified set of tags (separated by comma)
 * \param filterTagExclusion Filter for message templates with none of a specified set of tags (separated by comma)
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMessageTemplatesSync(char * accessToken,
	std::string filterTagset, std::string filterTagIntersection, std::string filterTagExclusion, int size, int page, std::string order, 
	void(* handler)(PageResource«MessageTemplateResource», Error, void* )
	, void* userData);

/*! \brief List and search message templates. *Asynchronous*
 *
 * Get a list of message templates with optional filtering. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN
 * \param filterTagset Filter for message templates with at least one of a specified set of tags (separated by comma)
 * \param filterTagIntersection Filter for message templates with all of a specified set of tags (separated by comma)
 * \param filterTagExclusion Filter for message templates with none of a specified set of tags (separated by comma)
 * \param size The number of objects returned per page
 * \param page The number of the page returned, starting with 1
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getMessageTemplatesAsync(char * accessToken,
	std::string filterTagset, std::string filterTagIntersection, std::string filterTagExclusion, int size, int page, std::string order, 
	void(* handler)(PageResource«MessageTemplateResource», Error, void* )
	, void* userData);


/*! \brief Send a message. *Synchronous*
 *
 * Sends a message with one or more formats to one or more users. Fill in any message formats desired (email, sms, websockets) and each user will recieve all valid formats. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN
 * \param messageResource The message to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendMessageSync(char * accessToken,
	MessageResource messageResource, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Send a message. *Asynchronous*
 *
 * Sends a message with one or more formats to one or more users. Fill in any message formats desired (email, sms, websockets) and each user will recieve all valid formats. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN
 * \param messageResource The message to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendMessageAsync(char * accessToken,
	MessageResource messageResource, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Send a raw email to one or more users. *Synchronous*
 *
 * <b>Permissions Needed:</b> MESSAGING_ADMIN
 * \param rawEmailResource The new raw email to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendRawEmailSync(char * accessToken,
	RawEmailResource rawEmailResource, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Send a raw email to one or more users. *Asynchronous*
 *
 * <b>Permissions Needed:</b> MESSAGING_ADMIN
 * \param rawEmailResource The new raw email to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendRawEmailAsync(char * accessToken,
	RawEmailResource rawEmailResource, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Send a raw push notification. *Synchronous*
 *
 * Sends a raw push notification message to one or more users. User's without registered mobile device for the application will be skipped. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN
 * \param rawPushResource The new raw push notification to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendRawPushSync(char * accessToken,
	RawPushResource rawPushResource, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Send a raw push notification. *Asynchronous*
 *
 * Sends a raw push notification message to one or more users. User's without registered mobile device for the application will be skipped. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN
 * \param rawPushResource The new raw push notification to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendRawPushAsync(char * accessToken,
	RawPushResource rawPushResource, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Send a raw SMS. *Synchronous*
 *
 * Sends a raw SMS text message to one or more users. User's without registered mobile numbers will be skipped. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN
 * \param rawSMSResource The new raw SMS to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendRawSMSSync(char * accessToken,
	RawSMSResource rawSMSResource, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Send a raw SMS. *Asynchronous*
 *
 * Sends a raw SMS text message to one or more users. User's without registered mobile numbers will be skipped. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN
 * \param rawSMSResource The new raw SMS to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendRawSMSAsync(char * accessToken,
	RawSMSResource rawSMSResource, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Send a templated email to one or more users. *Synchronous*
 *
 * <b>Permissions Needed:</b> MESSAGING_ADMIN
 * \param messageResource The new template email to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendTemplatedEmailSync(char * accessToken,
	TemplateEmailResource messageResource, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Send a templated email to one or more users. *Asynchronous*
 *
 * <b>Permissions Needed:</b> MESSAGING_ADMIN
 * \param messageResource The new template email to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendTemplatedEmailAsync(char * accessToken,
	TemplateEmailResource messageResource, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Send a templated push notification. *Synchronous*
 *
 * Sends a templated push notification message to one or more users. User's without registered mobile device for the application will be skipped. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN
 * \param templatePushResource The new templated push notification to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendTemplatedPushSync(char * accessToken,
	TemplatePushResource templatePushResource, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Send a templated push notification. *Asynchronous*
 *
 * Sends a templated push notification message to one or more users. User's without registered mobile device for the application will be skipped. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN
 * \param templatePushResource The new templated push notification to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendTemplatedPushAsync(char * accessToken,
	TemplatePushResource templatePushResource, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Send a new templated SMS. *Synchronous*
 *
 * Sends a templated SMS text message to one or more users. User's without registered mobile numbers will be skipped. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN
 * \param templateSMSResource The new template SMS to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendTemplatedSMSSync(char * accessToken,
	TemplateSMSResource templateSMSResource, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Send a new templated SMS. *Asynchronous*
 *
 * Sends a templated SMS text message to one or more users. User's without registered mobile numbers will be skipped. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN
 * \param templateSMSResource The new template SMS to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendTemplatedSMSAsync(char * accessToken,
	TemplateSMSResource templateSMSResource, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Send a websocket message. *Synchronous*
 *
 * Sends a websocket message to one or more users. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN
 * \param websocketResource The new websocket message to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendWebsocketSync(char * accessToken,
	WebsocketMessageResource websocketResource, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Send a websocket message. *Asynchronous*
 *
 * Sends a websocket message to one or more users. <br><br><b>Permissions Needed:</b> MESSAGING_ADMIN
 * \param websocketResource The new websocket message to be sent
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendWebsocketAsync(char * accessToken,
	WebsocketMessageResource websocketResource, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Update an existing message template. *Synchronous*
 *
 * <b>Permissions Needed:</b> MESSAGING_ADMIN
 * \param id The message_template id *Required*
 * \param messageTemplateResource The message template
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateMessageTemplateSync(char * accessToken,
	std::string id, MessageTemplateResource messageTemplateResource, 
	void(* handler)(MessageTemplateResource, Error, void* )
	, void* userData);

/*! \brief Update an existing message template. *Asynchronous*
 *
 * <b>Permissions Needed:</b> MESSAGING_ADMIN
 * \param id The message_template id *Required*
 * \param messageTemplateResource The message template
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool updateMessageTemplateAsync(char * accessToken,
	std::string id, MessageTemplateResource messageTemplateResource, 
	void(* handler)(MessageTemplateResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://jsapi-integration.us-east-1.elasticbeanstalk.com";
	}
};
/** @}*/

}
}
#endif /* MessagingManager_H_ */
