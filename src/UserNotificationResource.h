/*
 * UserNotificationResource.h
 *
 * 
 */

#ifndef _UserNotificationResource_H_
#define _UserNotificationResource_H_


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

class UserNotificationResource : public Object {
public:
	/*! \brief Constructor.
	 */
	UserNotificationResource();
	UserNotificationResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~UserNotificationResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The data to send and fill templates
	 */
	std::string getData();

	/*! \brief Set The data to send and fill templates
	 */
	void setData(std::string  data);
	/*! \brief Get The id of the notification
	 */
	std::string getNotificationId();

	/*! \brief Set The id of the notification
	 */
	void setNotificationId(std::string  notification_id);
	/*! \brief Get The id of the notification type
	 */
	std::string getNotificationTypeId();

	/*! \brief Set The id of the notification type
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
	/*! \brief Get The date this notification was first retrieved
	 */
	long long getRetrieveDate();

	/*! \brief Set The date this notification was first retrieved
	 */
	void setRetrieveDate(long long  retrieve_date);
	/*! \brief Get The date this notification was sent
	 */
	long long getSendDate();

	/*! \brief Set The date this notification was sent
	 */
	void setSendDate(long long  send_date);
	/*! \brief Get The user's status for this notification
	 */
	std::string getStatus();

	/*! \brief Set The user's status for this notification
	 */
	void setStatus(std::string  status);
	/*! \brief Get The id of the user
	 */
	int getUserId();

	/*! \brief Set The id of the user
	 */
	void setUserId(int  user_id);

private:
	std::string data;
	std::string notification_id;
	std::string notification_type_id;
	std::string recipient;
	std::string recipient_type;
	long long retrieve_date;
	long long send_date;
	std::string status;
	int user_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _UserNotificationResource_H_ */
