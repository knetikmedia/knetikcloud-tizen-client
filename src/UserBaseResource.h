/*
 * UserBaseResource.h
 *
 * 
 */

#ifndef _UserBaseResource_H_
#define _UserBaseResource_H_


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

class UserBaseResource : public Object {
public:
	/*! \brief Constructor.
	 */
	UserBaseResource();
	UserBaseResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~UserBaseResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The url of the user's avatar image
	 */
	std::string getAvatarUrl();

	/*! \brief Set The url of the user's avatar image
	 */
	void setAvatarUrl(std::string  avatar_url);
	/*! \brief Get The chosen display name of the user, defaults to username if not present
	 */
	std::string getDisplayName();

	/*! \brief Set The chosen display name of the user, defaults to username if not present
	 */
	void setDisplayName(std::string  display_name);
	/*! \brief Get The user's email address (private). May be required and/or unique depending on system configuration (both on by default). Must match standard email requirements if provided (RFC 2822)
	 */
	std::string getEmail();

	/*! \brief Set The user's email address (private). May be required and/or unique depending on system configuration (both on by default). Must match standard email requirements if provided (RFC 2822)
	 */
	void setEmail(std::string  email);
	/*! \brief Get The user's full name (private)
	 */
	std::string getFullname();

	/*! \brief Set The user's full name (private)
	 */
	void setFullname(std::string  fullname);
	/*! \brief Get The id of the user
	 */
	int getId();

	/*! \brief Set The id of the user
	 */
	void setId(int  id);
	/*! \brief Get The date the user last interacted with the API (private)
	 */
	long long getLastActivity();

	/*! \brief Set The date the user last interacted with the API (private)
	 */
	void setLastActivity(long long  last_activity);
	/*! \brief Get The date the user's info was last updated as a unix timestamp
	 */
	long long getLastUpdated();

	/*! \brief Set The date the user's info was last updated as a unix timestamp
	 */
	void setLastUpdated(long long  last_updated);
	/*! \brief Get The user's date of registration as a unix timestamp
	 */
	long long getMemberSince();

	/*! \brief Set The user's date of registration as a unix timestamp
	 */
	void setMemberSince(long long  member_since);
	/*! \brief Get The login username for the user (private). May be set to match email if system does not require usernames separately.
	 */
	std::string getUsername();

	/*! \brief Set The login username for the user (private). May be set to match email if system does not require usernames separately.
	 */
	void setUsername(std::string  username);

private:
	std::string avatar_url;
	std::string display_name;
	std::string email;
	std::string fullname;
	int id;
	long long last_activity;
	long long last_updated;
	long long member_since;
	std::string username;
	void __init();
	void __cleanup();

};
}
}

#endif /* _UserBaseResource_H_ */
