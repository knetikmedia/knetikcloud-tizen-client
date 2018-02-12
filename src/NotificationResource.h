/*
 * NotificationResource.h
 *
 * 
 */

#ifndef _NotificationResource_H_
#define _NotificationResource_H_


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

class NotificationResource : public Object {
public:
	/*! \brief Constructor.
	 */
	NotificationResource();
	NotificationResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~NotificationResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The data to send to websockets. Also used to fill in the templates
	 */
	std::string getData();

	/*! \brief Set The data to send to websockets. Also used to fill in the templates
	 */
	void setData(std::string  data);
	/*! \brief Get The id of this individual notification. Default: random
	 */
	std::string getNotificationId();

	/*! \brief Set The id of this individual notification. Default: random
	 */
	void setNotificationId(std::string  notification_id);
	/*! \brief Get The id of the notification type which will define message templates
	 */
	std::string getNotificationTypeId();

	/*! \brief Set The id of the notification type which will define message templates
	 */
	void setNotificationTypeId(std::string  notification_type_id);
	/*! \brief Get The id of the recipient, dependent on the recipient_type. The user's id or the topic's id
	 */
	std::string getRecipient();

	/*! \brief Set The id of the recipient, dependent on the recipient_type. The user's id or the topic's id
	 */
	void setRecipient(std::string  recipient);
	/*! \brief Get The type of recipient for the notification. Either a user, or all users in a topic
	 */
	std::string getRecipientType();

	/*! \brief Set The type of recipient for the notification. Either a user, or all users in a topic
	 */
	void setRecipientType(std::string  recipient_type);
	/*! \brief Get The date this notification was sent
	 */
	long long getSendDate();

	/*! \brief Set The date this notification was sent
	 */
	void setSendDate(long long  send_date);

private:
	std::string data;
	std::string notification_id;
	std::string notification_type_id;
	std::string recipient;
	std::string recipient_type;
	long long send_date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _NotificationResource_H_ */
