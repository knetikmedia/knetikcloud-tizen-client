/*
 * UserResource.h
 *
 * 
 */

#ifndef _UserResource_H_
#define _UserResource_H_


#include <string>
#include "Property.h"
#include "UserRelationshipReferenceResource.h"
#include <list>
#include <map>
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

class UserResource : public Object {
public:
	/*! \brief Constructor.
	 */
	UserResource();
	UserResource(char* str);

	/*! \brief Destructor.
	 */
	virtual ~UserResource();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get A map of additional properties, keyed on the property name (private). Must match the names and types defined in the template for this user type, or be an extra not from the template
	 */
	std::map<std::string, std::string> getAdditionalProperties();

	/*! \brief Set A map of additional properties, keyed on the property name (private). Must match the names and types defined in the template for this user type, or be an extra not from the template
	 */
	void setAdditionalProperties(std::map <std::string, std::string> additional_properties);
	/*! \brief Get The first line of the user's address (private)
	 */
	std::string getAddress();

	/*! \brief Set The first line of the user's address (private)
	 */
	void setAddress(std::string  address);
	/*! \brief Get The second line of user's address (private)
	 */
	std::string getAddress2();

	/*! \brief Set The second line of user's address (private)
	 */
	void setAddress2(std::string  address2);
	/*! \brief Get The url of the user's avatar image
	 */
	std::string getAvatarUrl();

	/*! \brief Set The url of the user's avatar image
	 */
	void setAvatarUrl(std::string  avatar_url);
	/*! \brief Get Relationships where this user is the parent. Read-Only, manage through separate endpoints
	 */
	std::list<UserRelationshipReferenceResource> getChildren();

	/*! \brief Set Relationships where this user is the parent. Read-Only, manage through separate endpoints
	 */
	void setChildren(std::list <UserRelationshipReferenceResource> children);
	/*! \brief Get The user's city (private)
	 */
	std::string getCity();

	/*! \brief Set The user's city (private)
	 */
	void setCity(std::string  city);
	/*! \brief Get The ISO3 code for the country from the user's address (private). Will be filled in based on GeoIP country at registration if not provided.
	 */
	std::string getCountryCode();

	/*! \brief Set The ISO3 code for the country from the user's address (private). Will be filled in based on GeoIP country at registration if not provided.
	 */
	void setCountryCode(std::string  country_code);
	/*! \brief Get The code for the user's real money currency (private)
	 */
	std::string getCurrencyCode();

	/*! \brief Set The code for the user's real money currency (private)
	 */
	void setCurrencyCode(std::string  currency_code);
	/*! \brief Get The user's date of birth (private) as a unix timestamp
	 */
	long long getDateOfBirth();

	/*! \brief Set The user's date of birth (private) as a unix timestamp
	 */
	void setDateOfBirth(long long  date_of_birth);
	/*! \brief Get The user's self description (private)
	 */
	std::string getDescription();

	/*! \brief Set The user's self description (private)
	 */
	void setDescription(std::string  description);
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
	/*! \brief Get The user's first name (private)
	 */
	std::string getFirstName();

	/*! \brief Set The user's first name (private)
	 */
	void setFirstName(std::string  first_name);
	/*! \brief Get The user's full name (private)
	 */
	std::string getFullname();

	/*! \brief Set The user's full name (private)
	 */
	void setFullname(std::string  fullname);
	/*! \brief Get The user's gender (private)
	 */
	std::string getGender();

	/*! \brief Set The user's gender (private)
	 */
	void setGender(std::string  gender);
	/*! \brief Get The id of the user
	 */
	int getId();

	/*! \brief Set The id of the user
	 */
	void setId(int  id);
	/*! \brief Get The ISO3 code for the user's currency (private)
	 */
	std::string getLanguageCode();

	/*! \brief Set The ISO3 code for the user's currency (private)
	 */
	void setLanguageCode(std::string  language_code);
	/*! \brief Get The date the user last interacted with the API (private)
	 */
	long long getLastActivity();

	/*! \brief Set The date the user last interacted with the API (private)
	 */
	void setLastActivity(long long  last_activity);
	/*! \brief Get The user's last name (private)
	 */
	std::string getLastName();

	/*! \brief Set The user's last name (private)
	 */
	void setLastName(std::string  last_name);
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
	/*! \brief Get The user's mobile phone number (private)
	 */
	std::string getMobileNumber();

	/*! \brief Set The user's mobile phone number (private)
	 */
	void setMobileNumber(std::string  mobile_number);
	/*! \brief Get Relationships where this user is the child. Read-Only, manage through separate endpoints
	 */
	std::list<UserRelationshipReferenceResource> getParents();

	/*! \brief Set Relationships where this user is the child. Read-Only, manage through separate endpoints
	 */
	void setParents(std::list <UserRelationshipReferenceResource> parents);
	/*! \brief Get The plain text password for the new user account. Required for registration; ignored on profile update.  Use password specific endpoints for editing
	 */
	std::string getPassword();

	/*! \brief Set The plain text password for the new user account. Required for registration; ignored on profile update.  Use password specific endpoints for editing
	 */
	void setPassword(std::string  password);
	/*! \brief Get The user's postal code (private)
	 */
	std::string getPostalCode();

	/*! \brief Set The user's postal code (private)
	 */
	void setPostalCode(std::string  postal_code);
	/*! \brief Get The user's state (private)
	 */
	std::string getState();

	/*! \brief Set The user's state (private)
	 */
	void setState(std::string  state);
	/*! \brief Get Tags on the user. Can only be set by admin. Max length per tag is 64 characters
	 */
	std::list<std::string> getTags();

	/*! \brief Set Tags on the user. Can only be set by admin. Max length per tag is 64 characters
	 */
	void setTags(std::list <std::string> tags);
	/*! \brief Get A user template this user is validated against (private). May be null and no validation of properties will be done
	 */
	std::string getTemplate();

	/*! \brief Set A user template this user is validated against (private). May be null and no validation of properties will be done
	 */
	void setTemplate(std::string  _template);
	/*! \brief Get The code for the user's timezone (private)
	 */
	std::string getTimezoneCode();

	/*! \brief Set The code for the user's timezone (private)
	 */
	void setTimezoneCode(std::string  timezone_code);
	/*! \brief Get The login username for the user (private). May be set to match email if system does not require usernames separately.
	 */
	std::string getUsername();

	/*! \brief Set The login username for the user (private). May be set to match email if system does not require usernames separately.
	 */
	void setUsername(std::string  username);

private:
	std::map <std::string, std::string>additional_properties;
	std::string address;
	std::string address2;
	std::string avatar_url;
	std::list <UserRelationshipReferenceResource>children;
	std::string city;
	std::string country_code;
	std::string currency_code;
	long long date_of_birth;
	std::string description;
	std::string display_name;
	std::string email;
	std::string first_name;
	std::string fullname;
	std::string gender;
	int id;
	std::string language_code;
	long long last_activity;
	std::string last_name;
	long long last_updated;
	long long member_since;
	std::string mobile_number;
	std::list <UserRelationshipReferenceResource>parents;
	std::string password;
	std::string postal_code;
	std::string state;
	std::list <std::string>tags;
	std::string _template;
	std::string timezone_code;
	std::string username;
	void __init();
	void __cleanup();

};
}
}

#endif /* _UserResource_H_ */
