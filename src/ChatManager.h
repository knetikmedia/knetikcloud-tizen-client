#ifndef _ChatManager_H_
#define _ChatManager_H_

#include <string>
#include <cstring>
#include <list>
#include <glib.h>
#include "ChatBlacklistResource.h"
#include "ChatMessageResource.h"
#include "PageResource«ChatMessageResource».h"
#include "PageResource«ChatUserThreadResource».h"
#include "Result.h"
#include "Error.h"

/** \defgroup Operations API Endpoints
 *  Classes containing all the functions for calling API endpoints
 *
 */

namespace Tizen{
namespace ArtikCloud {
/** \addtogroup Chat Chat
 * \ingroup Operations
 *  @{
 */
class ChatManager {
public:
	ChatManager();
	virtual ~ChatManager();

/*! \brief Acknowledge number of messages in a thread. *Synchronous*
 *
 * <b>Permissions Needed:</b> owner
 * \param id The thread id *Required*
 * \param readCount The amount of messages read
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool acknowledgeChatMessageSync(char * accessToken,
	std::string id, int readCount, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Acknowledge number of messages in a thread. *Asynchronous*
 *
 * <b>Permissions Needed:</b> owner
 * \param id The thread id *Required*
 * \param readCount The amount of messages read
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool acknowledgeChatMessageAsync(char * accessToken,
	std::string id, int readCount, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Add a user to a chat message blacklist. *Synchronous*
 *
 * <b>Permissions Needed:</b> CHAT_ADMIN or owner
 * \param blacklistedUserId The user id to blacklist *Required*
 * \param id The user id or 'me' *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addChatMessageBlacklistSync(char * accessToken,
	int blacklistedUserId, std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Add a user to a chat message blacklist. *Asynchronous*
 *
 * <b>Permissions Needed:</b> CHAT_ADMIN or owner
 * \param blacklistedUserId The user id to blacklist *Required*
 * \param id The user id or 'me' *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool addChatMessageBlacklistAsync(char * accessToken,
	int blacklistedUserId, std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Delete a message. *Synchronous*
 *
 * <b>Permissions Needed:</b> CHAT_ADMIN or owner
 * \param id The message id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteChatMessageSync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Delete a message. *Asynchronous*
 *
 * <b>Permissions Needed:</b> CHAT_ADMIN or owner
 * \param id The message id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool deleteChatMessageAsync(char * accessToken,
	std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Edit your message. *Synchronous*
 *
 * <b>Permissions Needed:</b> owner
 * \param id The message id *Required*
 * \param chatMessageResource The chat message resource
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool editChatMessageSync(char * accessToken,
	std::string id, ChatMessageResource chatMessageResource, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Edit your message. *Asynchronous*
 *
 * <b>Permissions Needed:</b> owner
 * \param id The message id *Required*
 * \param chatMessageResource The chat message resource
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool editChatMessageAsync(char * accessToken,
	std::string id, ChatMessageResource chatMessageResource, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Get a message. *Synchronous*
 *
 * <b>Permissions Needed:</b> CHAT_ADMIN or owner
 * \param id The message id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChatMessageSync(char * accessToken,
	std::string id, 
	void(* handler)(ChatMessageResource, Error, void* )
	, void* userData);

/*! \brief Get a message. *Asynchronous*
 *
 * <b>Permissions Needed:</b> CHAT_ADMIN or owner
 * \param id The message id *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChatMessageAsync(char * accessToken,
	std::string id, 
	void(* handler)(ChatMessageResource, Error, void* )
	, void* userData);


/*! \brief Get a list of blocked users for chat messaging. *Synchronous*
 *
 * <b>Permissions Needed:</b> CHAT_ADMIN or owner
 * \param id The user id or 'me' *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChatMessageBlacklistSync(char * accessToken,
	std::string id, 
	void(* handler)(std::list<ChatBlacklistResource>, Error, void* )
	, void* userData);

/*! \brief Get a list of blocked users for chat messaging. *Asynchronous*
 *
 * <b>Permissions Needed:</b> CHAT_ADMIN or owner
 * \param id The user id or 'me' *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChatMessageBlacklistAsync(char * accessToken,
	std::string id, 
	void(* handler)(std::list<ChatBlacklistResource>, Error, void* )
	, void* userData);


/*! \brief List your threads. *Synchronous*
 *
 * <b>Permissions Needed:</b> owner
 * \param size The number of objects returned per page
 * \param page The number of the page returned
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChatThreadsSync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«ChatUserThreadResource», Error, void* )
	, void* userData);

/*! \brief List your threads. *Asynchronous*
 *
 * <b>Permissions Needed:</b> owner
 * \param size The number of objects returned per page
 * \param page The number of the page returned
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getChatThreadsAsync(char * accessToken,
	int size, int page, std::string order, 
	void(* handler)(PageResource«ChatUserThreadResource», Error, void* )
	, void* userData);


/*! \brief List messages with a user. *Synchronous*
 *
 * <b>Permissions Needed:</b> owner
 * \param id The user id *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDirectMessagesSync(char * accessToken,
	int id, int size, int page, std::string order, 
	void(* handler)(PageResource«ChatMessageResource», Error, void* )
	, void* userData);

/*! \brief List messages with a user. *Asynchronous*
 *
 * <b>Permissions Needed:</b> owner
 * \param id The user id *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getDirectMessagesAsync(char * accessToken,
	int id, int size, int page, std::string order, 
	void(* handler)(PageResource«ChatMessageResource», Error, void* )
	, void* userData);


/*! \brief List messages in a thread. *Synchronous*
 *
 * <b>Permissions Needed:</b> CHAT_ADMIN or owner
 * \param id The thread id *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getThreadMessagesSync(char * accessToken,
	std::string id, int size, int page, std::string order, 
	void(* handler)(PageResource«ChatMessageResource», Error, void* )
	, void* userData);

/*! \brief List messages in a thread. *Asynchronous*
 *
 * <b>Permissions Needed:</b> CHAT_ADMIN or owner
 * \param id The thread id *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getThreadMessagesAsync(char * accessToken,
	std::string id, int size, int page, std::string order, 
	void(* handler)(PageResource«ChatMessageResource», Error, void* )
	, void* userData);


/*! \brief List messages in a topic. *Synchronous*
 *
 * <b>Permissions Needed:</b> CHAT_ADMIN or owner
 * \param id The topic id *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTopicMessagesSync(char * accessToken,
	std::string id, int size, int page, std::string order, 
	void(* handler)(PageResource«ChatMessageResource», Error, void* )
	, void* userData);

/*! \brief List messages in a topic. *Asynchronous*
 *
 * <b>Permissions Needed:</b> CHAT_ADMIN or owner
 * \param id The topic id *Required*
 * \param size The number of objects returned per page
 * \param page The number of the page returned
 * \param order A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC]
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool getTopicMessagesAsync(char * accessToken,
	std::string id, int size, int page, std::string order, 
	void(* handler)(PageResource«ChatMessageResource», Error, void* )
	, void* userData);


/*! \brief Remove a user from a blacklist. *Synchronous*
 *
 * <b>Permissions Needed:</b> CHAT_ADMIN or owner
 * \param blacklistedUserId The user id to blacklist *Required*
 * \param id The user id or 'me' *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool removeChatBlacklistSync(char * accessToken,
	int blacklistedUserId, std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);

/*! \brief Remove a user from a blacklist. *Asynchronous*
 *
 * <b>Permissions Needed:</b> CHAT_ADMIN or owner
 * \param blacklistedUserId The user id to blacklist *Required*
 * \param id The user id or 'me' *Required*
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool removeChatBlacklistAsync(char * accessToken,
	int blacklistedUserId, std::string id, 
	
	void(* handler)(Error, void* ) , void* userData);


/*! \brief Send a message. *Synchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param chatMessageResource The chat message resource
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendMessageSync(char * accessToken,
	ChatMessageResource chatMessageResource, 
	void(* handler)(ChatMessageResource, Error, void* )
	, void* userData);

/*! \brief Send a message. *Asynchronous*
 *
 * <b>Permissions Needed:</b> ANY
 * \param chatMessageResource The chat message resource
 * \param handler The callback function to be invoked on completion. *Required*
 * \param accessToken The Authorization token. *Required*
 * \param userData The user data to be passed to the callback function.
 */
bool sendMessageAsync(char * accessToken,
	ChatMessageResource chatMessageResource, 
	void(* handler)(ChatMessageResource, Error, void* )
	, void* userData);



	static std::string getBasePath()
	{
		return "https://sandbox.knetikcloud.com";
	}
};
/** @}*/

}
}
#endif /* ChatManager_H_ */
