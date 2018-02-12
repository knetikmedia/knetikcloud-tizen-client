/*
 * MessageContentResource.h
 *
 * 
 */

#ifndef _MessageContentResource_H_
#define _MessageContentResource_H_


#include <string>
#include "TemplatedEmail.h"
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

class MessageContentResource : public Object {
public:
	/*! \brief Constructor.
	 */
	MessageContentResource();
	MessageContentResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MessageContentResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The content of the email
	 */
	std::string getEmail();

	/*! \brief Set The content of the email
	 */
	void setEmail(std::string  email);
	/*! \brief Get The content of the mobile app push notification
	 */
	std::string getPush();

	/*! \brief Set The content of the mobile app push notification
	 */
	void setPush(std::string  push);
	/*! \brief Get The content of the sms
	 */
	std::string getSms();

	/*! \brief Set The content of the sms
	 */
	void setSms(std::string  sms);
	/*! \brief Get The content of the templated email
	 */
	TemplatedEmail getTemplatedEmail();

	/*! \brief Set The content of the templated email
	 */
	void setTemplatedEmail(TemplatedEmail  templated_email);
	/*! \brief Get The content of the websocket message
	 */
	std::string getWebsocket();

	/*! \brief Set The content of the websocket message
	 */
	void setWebsocket(std::string  websocket);

private:
	std::string email;
	std::string push;
	std::string sms;
	TemplatedEmail templated_email;
	std::string websocket;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MessageContentResource_H_ */
