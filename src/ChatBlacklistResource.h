/*
 * ChatBlacklistResource.h
 *
 * 
 */

#ifndef _ChatBlacklistResource_H_
#define _ChatBlacklistResource_H_


#include <string>
#include "SimpleUserResource.h"
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

class ChatBlacklistResource : public Object {
public:
	/*! \brief Constructor.
	 */
	ChatBlacklistResource();
	ChatBlacklistResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ChatBlacklistResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The user that is blacklisted
	 */
	SimpleUserResource getBlacklistedUser();

	/*! \brief Set The user that is blacklisted
	 */
	void setBlacklistedUser(SimpleUserResource  blacklisted_user);
	/*! \brief Get The date the user was blacklisted
	 */
	long long getCreatedDate();

	/*! \brief Set The date the user was blacklisted
	 */
	void setCreatedDate(long long  created_date);
	/*! \brief Get The unique ID for this chat message blacklist
	 */
	std::string getId();

	/*! \brief Set The unique ID for this chat message blacklist
	 */
	void setId(std::string  id);
	/*! \brief Get The user that has blacklisted someone
	 */
	int getUserId();

	/*! \brief Set The user that has blacklisted someone
	 */
	void setUserId(int  user_id);

private:
	SimpleUserResource blacklisted_user;
	long long created_date;
	std::string id;
	int user_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ChatBlacklistResource_H_ */
