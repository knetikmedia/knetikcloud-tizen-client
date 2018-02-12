/*
 * ChatMessageRequest.h
 *
 * 
 */

#ifndef _ChatMessageRequest_H_
#define _ChatMessageRequest_H_


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

class ChatMessageRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	ChatMessageRequest();
	ChatMessageRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ChatMessageRequest();

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
	/*! \brief Get The type of the message set by the client
	 */
	std::string getMessageType();

	/*! \brief Set The type of the message set by the client
	 */
	void setMessageType(std::string  message_type);

private:
	std::string content;
	std::string message_type;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ChatMessageRequest_H_ */
