/*
 * NotificationTypeResource.h
 *
 * 
 */

#ifndef _NotificationTypeResource_H_
#define _NotificationTypeResource_H_


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

class NotificationTypeResource : public Object {
public:
	/*! \brief Constructor.
	 */
	NotificationTypeResource();
	NotificationTypeResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~NotificationTypeResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The date the type was created, as a unix timestamp in seconds
	 */
	long long getCreatedDate();

	/*! \brief Set The date the type was created, as a unix timestamp in seconds
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get Whether the email body should be resolved. If true, the external email delivery system will be expected to handle the templating (Mandrill/Mailchimp). default: false
	 */
	bool getEmailBodyTemplateExternal();

	/*! \brief Set Whether the email body should be resolved. If true, the external email delivery system will be expected to handle the templating (Mandrill/Mailchimp). default: false
	 */
	void setEmailBodyTemplateExternal(bool  email_body_template_external);
	/*! \brief Get The id of a message template to resolve the email body. If null, no websocket message wil be sent
	 */
	std::string getEmailBodyTemplateId();

	/*! \brief Set The id of a message template to resolve the email body. If null, no websocket message wil be sent
	 */
	void setEmailBodyTemplateId(std::string  email_body_template_id);
	/*! \brief Get The id of a message template to resolve the email subject. If null, no websocket message wil be sent
	 */
	std::string getEmailSubjectTemplateId();

	/*! \brief Set The id of a message template to resolve the email subject. If null, no websocket message wil be sent
	 */
	void setEmailSubjectTemplateId(std::string  email_subject_template_id);
	/*! \brief Get The id of the notification type. Default: random
	 */
	std::string getId();

	/*! \brief Set The id of the notification type. Default: random
	 */
	void setId(std::string  id);
	/*! \brief Get The name of the notification type
	 */
	std::string getName();

	/*! \brief Set The name of the notification type
	 */
	void setName(std::string  name);
	/*! \brief Get The id of a message template to resolve the SMS message. If null, no sms message wil be sent
	 */
	std::string getSmsTemplateId();

	/*! \brief Set The id of a message template to resolve the SMS message. If null, no sms message wil be sent
	 */
	void setSmsTemplateId(std::string  sms_template_id);
	/*! \brief Get The date the type was last updated, as a unix timestamp in seconds
	 */
	long long getUpdatedDate();

	/*! \brief Set The date the type was last updated, as a unix timestamp in seconds
	 */
	void setUpdatedDate(long long  updated_date);

private:
	long long created_date;
	bool email_body_template_external;
	std::string email_body_template_id;
	std::string email_subject_template_id;
	std::string id;
	std::string name;
	std::string sms_template_id;
	long long updated_date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _NotificationTypeResource_H_ */
