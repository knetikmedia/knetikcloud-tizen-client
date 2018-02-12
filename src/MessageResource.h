/*
 * MessageResource.h
 *
 * 
 */

#ifndef _MessageResource_H_
#define _MessageResource_H_


#include <string>
#include "MessageContentResource.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class MessageResource : public Object {
public:
	/*! \brief Constructor.
	 */
	MessageResource();
	MessageResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MessageResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The content of the message in various formats
	 */
	MessageContentResource getContent();

	/*! \brief Set The content of the message in various formats
	 */
	void setContent(MessageContentResource  content);
	/*! \brief Get The id of the recipient, dependent on the recipient_type. The user's id or the topic's id. Required if sending directly to messaging service
	 */
	std::string getRecipient();

	/*! \brief Set The id of the recipient, dependent on the recipient_type. The user's id or the topic's id. Required if sending directly to messaging service
	 */
	void setRecipient(std::string  recipient);
	/*! \brief Get The type of recipient for the message. Either a user, or all users in a topic. Required if sending directly to messaging service
	 */
	std::string getRecipientType();

	/*! \brief Set The type of recipient for the message. Either a user, or all users in a topic. Required if sending directly to messaging service
	 */
	void setRecipientType(std::string  recipient_type);
	/*! \brief Get The subject of the message. Required for email messages
	 */
	std::string getSubject();

	/*! \brief Set The subject of the message. Required for email messages
	 */
	void setSubject(std::string  subject);
	/*! \brief Get The type of message for websocket type hinting. will be added to the payload with the key _type
	 */
	std::string getType();

	/*! \brief Set The type of message for websocket type hinting. will be added to the payload with the key _type
	 */
	void setType(std::string  type);

private:
	MessageContentResource content;
	std::string recipient;
	std::string recipient_type;
	std::string subject;
	std::string type;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MessageResource_H_ */
