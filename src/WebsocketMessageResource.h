/*
 * WebsocketMessageResource.h
 *
 * 
 */

#ifndef _WebsocketMessageResource_H_
#define _WebsocketMessageResource_H_


#include <string>
#include <list>
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

class WebsocketMessageResource : public Object {
public:
	/*! \brief Constructor.
	 */
	WebsocketMessageResource();
	WebsocketMessageResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~WebsocketMessageResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The body of the outgoing message.
	 */
	std::string getContent();

	/*! \brief Set The body of the outgoing message.
	 */
	void setContent(std::string  content);
	/*! \brief Get A message type to inform websocket recipient how to parse content
	 */
	std::string getMessageType();

	/*! \brief Set A message type to inform websocket recipient how to parse content
	 */
	void setMessageType(std::string  message_type);
	/*! \brief Get A list of user ids to send the message to.
	 */
	std::list<int> getRecipients();

	/*! \brief Set A list of user ids to send the message to.
	 */
	void setRecipients(std::list <int> recipients);

private:
	std::string content;
	std::string message_type;
	std::list <int>recipients;
	void __init();
	void __cleanup();

};
}
}

#endif /* _WebsocketMessageResource_H_ */
