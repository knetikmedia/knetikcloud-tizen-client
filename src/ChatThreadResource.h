/*
 * ChatThreadResource.h
 *
 * 
 */

#ifndef _ChatThreadResource_H_
#define _ChatThreadResource_H_


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

class ChatThreadResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ChatThreadResource();
	ChatThreadResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ChatThreadResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The number of active users in the thread
	 */
	int getActiveUsers();

	/*! \brief Set The number of active users in the thread
	 */
	void setActiveUsers(int  active_users);
	/*! \brief Get The number of messages in the thread
	 */
	int getCount();

	/*! \brief Set The number of messages in the thread
	 */
	void setCount(int  count);
	/*! \brief Get The date the thread was created
	 */
	long long getCreatedDate();

	/*! \brief Set The date the thread was created
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The id for this thread
	 */
	std::string getId();

	/*! \brief Set The id for this thread
	 */
	void setId(std::string  id);
	/*! \brief Get The id of the recipient
	 */
	std::string getRecipientId();

	/*! \brief Set The id of the recipient
	 */
	void setRecipientId(std::string  recipient_id);
	/*! \brief Get The recipient type of the thread
	 */
	std::string getRecipientType();

	/*! \brief Set The recipient type of the thread
	 */
	void setRecipientType(std::string  recipient_type);
	/*! \brief Get The subject of the thread
	 */
	std::string getSubject();

	/*! \brief Set The subject of the thread
	 */
	void setSubject(std::string  subject);
	/*! \brief Get The date the thread was updated
	 */
	long long getUpdatedDate();

	/*! \brief Set The date the thread was updated
	 */
	void setUpdatedDate(long long  updated_date);

private:
	int active_users;
	int count;
	long long created_date;
	std::string id;
	std::string recipient_id;
	std::string recipient_type;
	std::string subject;
	long long updated_date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ChatThreadResource_H_ */
