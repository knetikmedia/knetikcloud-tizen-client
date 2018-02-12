/*
 * ChatMessageResource.h
 *
 * 
 */

#ifndef _ChatMessageResource_H_
#define _ChatMessageResource_H_


#include <string>
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

class ChatMessageResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ChatMessageResource();
	ChatMessageResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ChatMessageResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The content of the message
	 */
	std::string getContent();

	/*! \brief Set The content of the message
	 */
	void setContent(std::string  content);
	/*! \brief Get The date the chat message was created
	 */
	long long getCreatedDate();

	/*! \brief Set The date the chat message was created
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get Whether the message has been edited
	 */
	bool getEdited();

	/*! \brief Set Whether the message has been edited
	 */
	void setEdited(bool  edited);
	/*! \brief Get The id for this message
	 */
	std::string getId();

	/*! \brief Set The id for this message
	 */
	void setId(std::string  id);
	/*! \brief Get The type of the message set by the client
	 */
	std::string getMessageType();

	/*! \brief Set The type of the message set by the client
	 */
	void setMessageType(std::string  message_type);
	/*! \brief Get The id of the recipient: user id or topic id
	 */
	std::string getRecipientId();

	/*! \brief Set The id of the recipient: user id or topic id
	 */
	void setRecipientId(std::string  recipient_id);
	/*! \brief Get The recipient type of the message
	 */
	std::string getRecipientType();

	/*! \brief Set The recipient type of the message
	 */
	void setRecipientType(std::string  recipient_type);
	/*! \brief Get The id of the sender
	 */
	int getSenderId();

	/*! \brief Set The id of the sender
	 */
	void setSenderId(int  sender_id);
	/*! \brief Get The id of the thread
	 */
	std::string getThreadId();

	/*! \brief Set The id of the thread
	 */
	void setThreadId(std::string  thread_id);
	/*! \brief Get The date the chat message was updated
	 */
	long long getUpdatedDate();

	/*! \brief Set The date the chat message was updated
	 */
	void setUpdatedDate(long long  updated_date);

private:
	std::string content;
	long long created_date;
	bool edited;
	std::string id;
	std::string message_type;
	std::string recipient_id;
	std::string recipient_type;
	int sender_id;
	std::string thread_id;
	long long updated_date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ChatMessageResource_H_ */
